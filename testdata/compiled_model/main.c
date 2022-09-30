static const int th_len[] = {
  4, 8, 0, 0, 4, 3, 2, 3, 0, 2, 3, 3, 1, 6, 1, 0, 3, 2, 0, 3, 7, 9, 4, 2, 4, 1, 
  5, 8, 2, 3, 
};
static const int th_begin[] = {
  0, 4, 12, 12, 12, 16, 19, 21, 24, 24, 26, 29, 32, 33, 39, 40, 40, 43, 45, 45, 
  48, 55, 64, 68, 70, 74, 75, 80, 88, 90, 
};
static const float threshold[] = {
  14.514999, 14.74, 15.445, 15.875, 16.190001, 16.375, 18.68, 19.544998, 20.49, 
  21.055, 21.575001, 22.455, 0.083779998, 0.108, 0.11625, 0.11965, 0.066914998, 
  0.073200002, 0.13495, 0.038989998, 0.088660002, 0.025234999, 0.051279999, 
  0.091004997, 0.060304999, 0.076870002, 0.24635001, 0.24744999, 0.57210004, 
  0.60924995, 1.244, 1.3905001, 4.1184998, 19.315001, 21.849998, 24.889999, 
  30.385, 42.949997, 48.700001, 0.0033090001, 0.01929, 0.101765, 0.1103, 
  0.0093224999, 0.011815, 0.0013145, 0.001315, 0.0095415004, 14.43, 14.855, 
  15.385, 15.48, 16.805, 16.83, 18.040001, 20.285, 25.654999, 25.924999, 
  26.334999, 27.43, 30.145, 33.349998, 37.965, 38.43, 101.2, 103.25, 114.45, 
  115.25, 740, 957.45001, 0.13519999, 0.14125, 0.16605, 0.16749999, 0.43375, 
  0.2071, 0.22055, 0.23684999, 0.25749999, 0.48014998, 0.078604996, 0.1112, 
  0.1358, 0.14234999, 0.14365, 0.14655, 0.14895001, 0.15075, 0.31105, 
  0.35710001, 0.079060003, 0.11765, 0.1222, 
};

#include <stdlib.h>

/*
 * \brief function to convert a feature value into bin index.
 * \param val feature value, in floating-point
 * \param fid feature identifier
 * \return bin index corresponding to given feature value
 */
static inline int quantize(float val, unsigned fid) {
  const size_t offset = th_begin[fid];
  const float* array = &threshold[offset];
  int len = th_len[fid];
  int low = 0;
  int high = len;
  int mid;
  float mval;
  // It is possible th_begin[i] == [total_num_threshold]. This means that
  // all features i, (i+1), ... are not used for any of the splits in the model.
  // So in this case, just return something
  if (offset == 93 || val < array[0]) {
    return -10;
  }
  while (low + 1 < high) {
    mid = (low + high) / 2;
    mval = array[mid];
    if (val == mval) {
      return mid * 2;
    } else if (val < mval) {
      high = mid;
    } else {
      low = mid;
    }
  }
  if (array[low] == val) {
    return low * 2;
  } else if (high == len) {
    return len * 2;
  } else {
    return low * 2 + 1;
  }
}

#include "header.h"

const unsigned char is_categorical[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 
};


size_t get_num_class(void) {
  return 1;
}

size_t get_num_feature(void) {
  return 30;
}

const char* get_pred_transform(void) {
  return "sigmoid";
}

float get_sigmoid_alpha(void) {
  return 1.0;
}

float get_ratio_c(void) {
  return 1.0;
}

float get_global_bias(void) {
  return -0.0;
}

const char* get_threshold_type(void) {
  return "float32";
}

const char* get_leaf_output_type(void) {
  return "float32";
}


static inline float pred_transform(float margin) {
  const float alpha = (float)1.0;
  return (float)(1) / ((float)(1) + expf(-alpha * margin));
}
float predict(union Entry* data, int pred_margin) {

  for (int i = 0; i < 30; ++i) {
    if (data[i].missing != -1 && !is_categorical[i]) {
      data[i].qvalue = quantize(data[i].fvalue, i);
    }
  }
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  sum += predict_margin_unit0(data);
  sum += predict_margin_unit1(data);
  sum += predict_margin_unit2(data);
  sum += predict_margin_unit3(data);
  sum += predict_margin_unit4(data);
  sum += predict_margin_unit5(data);
  sum += predict_margin_unit6(data);
  sum += predict_margin_unit7(data);

  sum = sum + (float)(-0);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}
