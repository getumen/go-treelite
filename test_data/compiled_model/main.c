static const int th_len[] = {
  0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 5, 3, 3, 2, 0, 0, 
  0, 4, 0, 0, 
};
static const int th_begin[] = {
  0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 9, 12, 15, 17, 
  17, 17, 17, 21, 21, 
};
static const float threshold[] = {
  0.072140001, 0.051279999, 3.4375, 0.1222, 14.855, 15.385, 16.795, 16.805, 
  16.83, 19.91, 20.404999, 22.849998, 101.55, 103.25, 114.45, 868.19995, 
  957.45001, 0.14234999, 0.14559999, 0.14655, 0.15889999, 
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
  if (offset == 21 || val < array[0]) {
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

  sum = sum + (float)(-0);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}
