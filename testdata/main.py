import os

import pandas as pd
import treelite
import treelite_runtime
import xgboost as xgb
from sklearn import datasets, model_selection

seed = 42

breast_cancer = datasets.load_breast_cancer()

feature = pd.DataFrame(breast_cancer.data, columns=breast_cancer.feature_names)
target = pd.Series(breast_cancer.target)

train_x, test_x, train_y, test_y = model_selection.train_test_split(
    feature,
    target,
    test_size=0.2,
    shuffle=True,
    random_state=seed,
)

dtrain = xgb.DMatrix(train_x, label=train_y)

booster = xgb.train(
    {
        "max_depth": 6,
        "eta": 0.01,
        "objective": "binary:logistic",
        "seed": seed,
    },
    dtrain,
    100,
)

booster.save_model("xgboost.model")

test_x.to_csv("feature.csv", index=False, header=False)
test_y.to_csv("label.csv", index=False)

dvalid = treelite_runtime.DMatrix(test_x)

model = treelite.Model.from_xgboost(booster)

annotator = treelite.Annotator()
annotator.annotate_branch(model=model, dmat=dvalid, verbose=True)
annotator.save(path="annotation.json")

model.export_lib(
    toolchain="gcc",
    libpath="compiled_model.so",
    verbose=True,
    params={
        "parallel_comp": os.cpu_count(),
        "annotate_in": "annotation.json",
    },
)

predictor = treelite_runtime.Predictor(
    "compiled_model.so",
    nthread=os.cpu_count(),
    verbose=True,
)

scores = predictor.predict(dvalid, verbose=True)
with open("score.csv", "w") as f:
    for x in scores:
        print(x, file=f)
