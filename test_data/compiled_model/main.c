static const int th_len[] = {
  0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 2, 0, 0, 0, 4, 3, 2, 2, 1, 0, 
  1, 7, 0, 0, 
};
static const int th_begin[] = {
  0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 7, 7, 7, 9, 9, 9, 9, 13, 16, 18, 
  20, 21, 21, 22, 29, 29, 
};
static const float threshold[] = {
  17, 0.049230002, 18.095001, 21.924999, 34.404999, 35.435001, 41.535, 
  0.104315, 0.11285, 15.41, 16.805, 16.83, 17.754999, 20.875, 20.924999, 
  23.025, 105.95, 115.35, 710.20001, 750.04999, 0.17825, 0.2006, 0.111, 
  0.13505, 0.1417, 0.14559999, 0.14655, 0.15889999, 0.16029999, 
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
  if (offset == 29 || val < array[0]) {
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
