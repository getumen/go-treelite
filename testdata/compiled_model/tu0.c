#include "header.h"
float predict_margin_unit0(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 16) ) ) {
          sum += (float)0.019382238388;
        } else {
          sum += (float)0.0049999998882;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0099999997765;
      } else {
        sum += (float)-0.012000000104;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 10) ) ) {
          sum += (float)0.016363635659;
        } else {
          sum += (float)-0.0099999997765;
        }
      } else {
        sum += (float)-0.015294117853;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 4) ) ) {
        sum += (float)-0.019420290366;
      } else {
        sum += (float)-0;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        sum += (float)0.019052600488;
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.009933498688;
      } else {
        sum += (float)-0.011912316084;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.016058882698;
        } else {
          sum += (float)-0.0066405264661;
        }
      } else {
        sum += (float)-0.015177844092;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 4) ) ) {
        sum += (float)-0.019233481959;
      } else {
        sum += (float)-0;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        sum += (float)0.018870068714;
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.01188111119;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 4) ) ) {
          sum += (float)-0.013211673126;
        } else {
          sum += (float)-0.0021382574923;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 6) ) ) {
          sum += (float)0.015942048281;
        } else {
          sum += (float)-0.0066291289404;
        }
      } else {
        sum += (float)-0.015063787811;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 4) ) ) {
        sum += (float)-0.019051909447;
      } else {
        sum += (float)-0;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        sum += (float)0.018692553043;
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0098218256608;
      } else {
        sum += (float)-0.011759731919;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 6) ) ) {
          sum += (float)0.015817003325;
        } else {
          sum += (float)-0.0065924273804;
        }
      } else {
        sum += (float)-0.014951887541;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 4) ) ) {
        sum += (float)-0.018875364214;
      } else {
        sum += (float)-0;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        sum += (float)0.018519842997;
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011753274128;
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].qvalue < 0) ) ) {
          sum += (float)-0.013093542308;
        } else {
          sum += (float)-0.0020485189743;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.014582852833;
      } else {
        sum += (float)-0.0087808379903;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.011622220278;
        } else {
          sum += (float)-0.011550888419;
        }
      } else {
        sum += (float)-0.018494619057;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        sum += (float)0.018351746723;
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011684730649;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 2) ) ) {
          sum += (float)-0.013017562218;
        } else {
          sum += (float)-0.0020250135567;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.015612101182;
        } else {
          sum += (float)-0.0065376060084;
        }
      } else {
        sum += (float)-0.014707970433;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.018539739773;
      } else {
        sum += (float)-0.0020718087908;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          sum += (float)0.018328685313;
        } else {
          sum += (float)0.0060664177872;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0096683409065;
      } else {
        sum += (float)-0.011547089554;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.014392402023;
      } else {
        sum += (float)-0.0086643816903;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.011466239579;
        } else {
          sum += (float)-0.011379962787;
        }
      } else {
        sum += (float)-0.01817355305;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].qvalue < 0) ) ) {
          sum += (float)0.018169971183;
        } else {
          sum += (float)0.0059815561399;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011561431922;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 12) ) ) {
          sum += (float)-0.01289523486;
        } else {
          sum += (float)-0.0019493928412;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.015404413454;
        } else {
          sum += (float)-0.0064594242722;
        }
      } else {
        sum += (float)-0.01447413303;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].qvalue < 4) ) ) {
        sum += (float)-0.018226446584;
      } else {
        sum += (float)-0.0019780134317;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
          sum += (float)0.018014524132;
        } else {
          sum += (float)0.0059237917885;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0095624774694;
      } else {
        sum += (float)-0.011403524317;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.014208446257;
      } else {
        sum += (float)-0.0085510378703;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.011314798146;
        } else {
          sum += (float)-0.011214739643;
        }
      } else {
        sum += (float)-0.017868647352;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          sum += (float)0.017863245681;
        } else {
          sum += (float)0.005860991776;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011440987699;
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].qvalue < 0) ) ) {
          sum += (float)-0.012776098214;
        } else {
          sum += (float)-0.001874975278;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.014110817574;
      } else {
        sum += (float)-0.0084987953305;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.011251747608;
        } else {
          sum += (float)-0.011152905412;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].qvalue < 2) ) ) {
          sum += (float)-0.017969990149;
        } else {
          sum += (float)-0.0058932122774;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          sum += (float)0.017716219649;
        } else {
          sum += (float)0.0057852077298;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011376382783;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].qvalue < 4) ) ) {
          sum += (float)-0.001840742887;
        } else {
          sum += (float)-0.012712891214;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.015119559132;
        } else {
          sum += (float)-0.0063421013765;
        }
      } else {
        sum += (float)-0.014127380215;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.017788585275;
      } else {
        sum += (float)-0.0018543826882;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          sum += (float)0.01757302694;
        } else {
          sum += (float)0.0057050352916;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.009417260997;
      } else {
        sum += (float)-0.011203274131;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.013935972005;
      } else {
        sum += (float)-0.0083896154538;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.01110642124;
        } else {
          sum += (float)-0.010995207354;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].qvalue < 2) ) ) {
          sum += (float)-0.017685767263;
        } else {
          sum += (float)-0.0057852873579;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
          sum += (float)0.017432216555;
        } else {
          sum += (float)0.0056627923623;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011260082014;
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].qvalue < 0) ) ) {
          sum += (float)-0.012589843012;
        } else {
          sum += (float)-0.0017799151829;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.014929355122;
        } else {
          sum += (float)-0.0062677944079;
        }
      } else {
        sum += (float)-0.013914783485;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.017512673512;
      } else {
        sum += (float)-0.0017951637274;
      }
    }
  }
  return sum;
}
