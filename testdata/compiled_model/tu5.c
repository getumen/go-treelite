#include "header.h"
float predict_margin_unit5(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0047837686725;
          } else {
            sum += (float)0.013230115175;
          }
        } else {
          sum += (float)0.0033125646878;
        }
      } else {
        sum += (float)0.00026153688668;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.00041334691923;
        } else {
          sum += (float)0.0094087943435;
        }
      } else {
        sum += (float)-0.010027291253;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.011725175194;
        } else {
          sum += (float)0.0013502766378;
        }
      } else {
        sum += (float)-0.010734732263;
      }
    } else {
      sum += (float)-0.013218362816;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0047601270489;
          } else {
            sum += (float)0.013198912144;
          }
        } else {
          sum += (float)0.0043278625235;
        }
      } else {
        sum += (float)0.00092109775869;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.009527864866;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011873544194;
        } else {
          sum += (float)-7.4295021477e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0098783178255;
      } else {
        sum += (float)-0.0085443276912;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0035977133084;
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
          sum += (float)-0.0038928105496;
        } else {
          sum += (float)-0.013220952824;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0047366213985;
          } else {
            sum += (float)0.013149065897;
          }
        } else {
          sum += (float)0.0043024928309;
        }
      } else {
        sum += (float)0.00091610889649;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0094868987799;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011818182655;
        } else {
          sum += (float)-7.3896364484e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0098333060741;
      } else {
        sum += (float)-0.0085097383708;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
        sum += (float)-0.0035576454829;
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
          sum += (float)-0.0038590475451;
        } else {
          sum += (float)-0.013172443025;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0051067154855;
          } else {
            sum += (float)0.013298759237;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
            sum += (float)0.0094609344378;
          } else {
            sum += (float)-0.0020673540421;
          }
        }
      } else {
        sum += (float)0.00020481891988;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0093321511522;
        } else {
          sum += (float)-0.00040636720951;
        }
      } else {
        sum += (float)-0.0098982704803;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.011601281352;
        } else {
          sum += (float)0.0013247882016;
        }
      } else {
        sum += (float)-0.010606298223;
      }
    } else {
      sum += (float)-0.013075799681;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0046540540643;
          } else {
            sum += (float)0.013054781593;
          }
        } else {
          sum += (float)0.0042450469919;
        }
      } else {
        sum += (float)0.00088699965272;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.00942017138;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011721653864;
        } else {
          sum += (float)-5.8070589148e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0097544677556;
      } else {
        sum += (float)-0.0084328558296;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 2) ) ) {
        sum += (float)-0.0035096248612;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0038069051225;
        } else {
          sum += (float)-0.013079461642;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0050241709687;
          } else {
            sum += (float)0.013206546195;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
            sum += (float)0.0093728462234;
          } else {
            sum += (float)-0.002095159376;
          }
        }
      } else {
        sum += (float)0.00017652302631;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0092705022544;
        } else {
          sum += (float)-0.00039717103937;
        }
      } else {
        sum += (float)-0.009808733128;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.011618296616;
        } else {
          sum += (float)-0.0055480003357;
        }
      } else {
        sum += (float)-0.010144535452;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.013020177372;
      } else {
        sum += (float)-0.00039890944026;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.00457259221;
          } else {
            sum += (float)0.012945890427;
          }
        } else {
          sum += (float)0.0031042965129;
        }
      } else {
        sum += (float)0.00017558281252;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.00040397953126;
        } else {
          sum += (float)0.0092361243442;
        }
      } else {
        sum += (float)-0.0097651565447;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.011475751176;
        } else {
          sum += (float)0.0013039219193;
        }
      } else {
        sum += (float)-0.010474806651;
      }
    } else {
      sum += (float)-0.01293906942;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0045501557179;
          } else {
            sum += (float)0.012918604538;
          }
        } else {
          sum += (float)0.0041483859532;
        }
      } else {
        sum += (float)0.00083449174417;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0093290479854;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011592848226;
        } else {
          sum += (float)-3.3130851079e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0096463030204;
      } else {
        sum += (float)-0.0083120567724;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0034102925565;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0037365658209;
        } else {
          sum += (float)-0.012946186587;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 0) ) ) {
            sum += (float)0.0048859510571;
          } else {
            sum += (float)0.01289469935;
          }
        } else {
          sum += (float)0.0041242092848;
        }
      } else {
        sum += (float)0.00082997849677;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.009289894253;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011540915817;
        } else {
          sum += (float)-3.2952750189e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0096035655588;
      } else {
        sum += (float)-0.0082793077454;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 2) ) ) {
          sum += (float)-0.0078025693074;
        } else {
          sum += (float)-0.00012843999139;
        }
      } else {
        sum += (float)-0.012904988602;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0048622996546;
          } else {
            sum += (float)0.013031806797;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
            sum += (float)0.0091876722872;
          } else {
            sum += (float)-0.0022190359887;
          }
        }
      } else {
        sum += (float)0.00012141918705;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0091563267633;
        } else {
          sum += (float)-0.00038826160016;
        }
      } else {
        sum += (float)-0.0096349306405;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.011358314194;
        } else {
          sum += (float)0.001279609045;
        }
      } else {
        sum += (float)-0.010353719816;
      }
    } else {
      sum += (float)-0.01280933246;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0044135288335;
          } else {
            sum += (float)0.012787510641;
          }
        } else {
          sum += (float)0.0040692584589;
        }
      } else {
        sum += (float)0.00080229103332;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0092263221741;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011450646445;
        } else {
          sum += (float)-1.8082911993e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0095291472971;
      } else {
        sum += (float)-0.0082063442096;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 2) ) ) {
          sum += (float)-0.0077346116304;
        } else {
          sum += (float)-0.00012045189214;
        }
      } else {
        sum += (float)-0.012818176299;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0043919803575;
          } else {
            sum += (float)0.012743777595;
          }
        } else {
          sum += (float)0.0040455954149;
        }
      } else {
        sum += (float)0.00079795380589;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0091880783439;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011400381103;
        } else {
          sum += (float)-1.798617086e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0094875218347;
      } else {
        sum += (float)-0.0081744054332;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 2) ) ) {
          sum += (float)-0.0077068554237;
        } else {
          sum += (float)-0.00011984685989;
        }
      } else {
        sum += (float)-0.012774150819;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0047271018848;
          } else {
            sum += (float)0.012907969765;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
            sum += (float)0.0090566286817;
          } else {
            sum += (float)-0.0022828236688;
          }
        }
      } else {
        sum += (float)6.8618770456e-05;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.0003817747056;
        } else {
          sum += (float)0.00908459723;
        }
      } else {
        sum += (float)-0.0095086367801;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.011243388057;
        } else {
          sum += (float)0.0012559496099;
        }
      } else {
        sum += (float)-0.010240594856;
      }
    } else {
      sum += (float)-0.012684132904;
    }
  }
  return sum;
}
