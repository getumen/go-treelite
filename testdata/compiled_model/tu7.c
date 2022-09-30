#include "header.h"
float predict_margin_unit7(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 10) ) ) {
          sum += (float)0.012379689142;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
            sum += (float)0.010612281039;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 0) ) ) {
              sum += (float)-0.0065569472499;
            } else {
              sum += (float)0.0037874057889;
            }
          }
        }
      } else {
        sum += (float)0.00059687299654;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0087586501613;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.010807859711;
        } else {
          sum += (float)6.67963468e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0089502427727;
      } else {
        sum += (float)-0.0076789986342;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 0) ) ) {
          sum += (float)-0.0067831664346;
        } else {
          sum += (float)-0.0010244045407;
        }
      } else {
        sum += (float)-0.012203997001;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.003770041978;
          } else {
            sum += (float)0.012334023602;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0084864469245;
          } else {
            sum += (float)-0.0021111625247;
          }
        }
      } else {
        sum += (float)-0.00010541987285;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.0003553291026;
        } else {
          sum += (float)0.0086823934689;
        }
      } else {
        sum += (float)-0.0089297657833;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 4) ) ) {
          sum += (float)0.010589159094;
        } else {
          sum += (float)0.0014779431513;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.0029578465037;
        } else {
          sum += (float)-0.010597554035;
        }
      }
    } else {
      sum += (float)-0.012128472328;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 10) ) ) {
          sum += (float)0.012313362211;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
            sum += (float)0.010542418808;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].qvalue < 2) ) ) {
              sum += (float)-0.006498563569;
            } else {
              sum += (float)0.0038246982731;
            }
          }
        }
      } else {
        sum += (float)0.00057326280512;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0087029868737;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.01073228009;
        } else {
          sum += (float)7.9268953414e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.008886446245;
      } else {
        sum += (float)-0.0076216277666;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 0) ) ) {
          sum += (float)-0.0067289057188;
        } else {
          sum += (float)-0.0010067381663;
        }
      } else {
        sum += (float)-0.012136111036;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0040184017271;
          } else {
            sum += (float)0.01228963118;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0084255840629;
          } else {
            sum += (float)-0.0021037533879;
          }
        }
      } else {
        sum += (float)-0.00012862935546;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.00034732866334;
        } else {
          sum += (float)0.0086299246177;
        }
      } else {
        sum += (float)-0.0088581498712;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].qvalue < 0) ) ) {
        sum += (float)-0.0085517102852;
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].qvalue < 2) ) ) {
          sum += (float)-0.0023468264844;
        } else {
          sum += (float)0.010433087125;
        }
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.012111319229;
      } else {
        sum += (float)-0.0001142320034;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0036562378518;
          } else {
            sum += (float)0.012236497365;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0083962567151;
          } else {
            sum += (float)-0.0020924594719;
          }
        }
      } else {
        sum += (float)-0.00012794867507;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0086001157761;
        } else {
          sum += (float)-0.00035356730223;
        }
      } else {
        sum += (float)-0.0088230725378;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 4) ) ) {
          sum += (float)0.010446289554;
        } else {
          sum += (float)0.0022139193024;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.0029011261649;
        } else {
          sum += (float)-0.010489718989;
        }
      }
    } else {
      sum += (float)-0.012030588463;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
        sum += (float)0.012139407918;
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
          sum += (float)0.010501946323;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].qvalue < 0) ) ) {
            sum += (float)-0.010477242991;
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
              sum += (float)0.0070016048849;
            } else {
              sum += (float)-0.0022298530675;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0031932478305;
      } else {
        sum += (float)-0.010048862547;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0087884804234;
      } else {
        sum += (float)-0.0075288321823;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 0) ) ) {
          sum += (float)-0.0066357855685;
        } else {
          sum += (float)-0.00096303760074;
        }
      } else {
        sum += (float)-0.012038765475;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0039076837711;
          } else {
            sum += (float)0.01219458878;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0083373552188;
          } else {
            sum += (float)-0.0020841124933;
          }
        }
      } else {
        sum += (float)-0.00016490543203;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0085413195193;
        } else {
          sum += (float)-0.00035709238728;
        }
      } else {
        sum += (float)-0.0087629212067;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 4) ) ) {
          sum += (float)0.010363920592;
        } else {
          sum += (float)0.0021887551993;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.002871618839;
        } else {
          sum += (float)-0.010418722406;
        }
      }
    } else {
      sum += (float)-0.011966191232;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
        sum += (float)0.01207472384;
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
          sum += (float)0.010435406119;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].qvalue < 0) ) ) {
            sum += (float)-0.010408505797;
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
              sum += (float)0.0069461599924;
            } else {
              sum += (float)-0.0022163975518;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.003171621589;
      } else {
        sum += (float)-0.0099801216274;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0087218685076;
      } else {
        sum += (float)-0.0074735586531;
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
        sum += (float)-0.0045489068143;
      } else {
        sum += (float)-0.011930555105;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0035092169419;
          } else {
            sum += (float)0.012114279903;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0082793468609;
          } else {
            sum += (float)-0.0020845218096;
          }
        }
      } else {
        sum += (float)-0.00020143146685;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.00036865714355;
        } else {
          sum += (float)0.0084887770936;
        }
      } else {
        sum += (float)-0.008703706786;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 4) ) ) {
          sum += (float)0.010284479707;
        } else {
          sum += (float)0.0021638418548;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.0028444454074;
        } else {
          sum += (float)-0.010345197283;
        }
      }
    } else {
      sum += (float)-0.01190333534;
    }
  }
  return sum;
}
