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
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          sum += (float)0.017295783386;
        } else {
          sum += (float)0.0055908602662;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0093167424202;
      } else {
        sum += (float)-0.011067927815;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.013766855933;
      } else {
        sum += (float)-0.0082832006738;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.010965140536;
        } else {
          sum += (float)-0.010842465796;
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
          sum += (float)-0.005661485251;
        } else {
          sum += (float)-0.017416181043;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          sum += (float)0.017162667587;
        } else {
          sum += (float)0.0055187437683;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011146393605;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 12) ) ) {
          sum += (float)-0.012486143038;
        } else {
          sum += (float)-0.0016964992974;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.014745635912;
        } else {
          sum += (float)-0.0062074563466;
        }
      } else {
        sum += (float)-0.013710281812;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].qvalue < 4) ) ) {
        sum += (float)-0.017249638215;
      } else {
        sum += (float)-0.0017287207302;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          sum += (float)0.017032505944;
        } else {
          sum += (float)0.0054541891441;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.011085382663;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].qvalue < 4) ) ) {
          sum += (float)-0.0016754416283;
        } else {
          sum += (float)-0.012418317609;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.013603191823;
      } else {
        sum += (float)-0.0081794047728;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.010827723891;
        } else {
          sum += (float)-0.010694418103;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].qvalue < 2) ) ) {
          sum += (float)-0.017159376293;
        } else {
          sum += (float)-0.0055446336046;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          sum += (float)0.016904881224;
        } else {
          sum += (float)0.0054088942707;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0091791264713;
      } else {
        sum += (float)-0.010878915899;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.014568075538;
        } else {
          sum += (float)-0.0061361035332;
        }
      } else {
        sum += (float)-0.013513381593;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.016999600455;
      } else {
        sum += (float)-0.001663915813;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 14) ) ) {
          sum += (float)0.016967017204;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            sum += (float)0.013292429037;
          } else {
            sum += (float)-0.0020244803745;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0017338531325;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0025416708086;
      } else {
        sum += (float)-0.014176447876;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0042066350579;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0024083191529;
        } else {
          sum += (float)-0.011906518601;
        }
      } else {
        sum += (float)-0.016885723919;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          sum += (float)0.016663337126;
        } else {
          sum += (float)0.0052864104509;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0090654892847;
      } else {
        sum += (float)-0.010758100078;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.01335964445;
      } else {
        sum += (float)-0.0080634504557;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.010631574318;
        } else {
          sum += (float)-0.010464366525;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 0) ) ) {
          sum += (float)-0.0053708991036;
        } else {
          sum += (float)-0.01680024527;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          sum += (float)0.016544481739;
        } else {
          sum += (float)0.0052341478877;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.010849032551;
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].qvalue < 0) ) ) {
          sum += (float)-0.012209719047;
        } else {
          sum += (float)-0.0015451702056;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.013276147656;
      } else {
        sum += (float)-0.0080158831552;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.010576558299;
        } else {
          sum += (float)-0.010411215946;
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
          sum += (float)-0.0052977586165;
        } else {
          sum += (float)-0.01668298617;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 14) ) ) {
          sum += (float)0.01661416702;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            sum += (float)0.012983403169;
          } else {
            sum += (float)-0.0020193168893;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.001677334425;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0025755029637;
      } else {
        sum += (float)-0.013924157247;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0041264933534;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0024252869189;
        } else {
          sum += (float)-0.011707639322;
        }
      } else {
        sum += (float)-0.016537217423;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          sum += (float)0.016318371519;
        } else {
          sum += (float)0.0051359157078;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0089181959629;
      } else {
        sum += (float)-0.010586419143;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.013113244437;
      } else {
        sum += (float)-0.0079547464848;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.010462331586;
        } else {
          sum += (float)-0.010275790468;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].qvalue < 2) ) ) {
          sum += (float)-0.016462434083;
        } else {
          sum += (float)-0.005167148076;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 14) ) ) {
          sum += (float)0.016390454024;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
            sum += (float)0.012795291841;
          } else {
            sum += (float)-0.002008049516;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0016494807787;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0025843256153;
      } else {
        sum += (float)-0.013756785542;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0040697143413;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0024268382695;
        } else {
          sum += (float)-0.011572299525;
        }
      } else {
        sum += (float)-0.016317920759;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          sum += (float)0.016101969406;
        } else {
          sum += (float)0.0050435476005;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0088111301884;
      } else {
        sum += (float)-0.010472496971;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.014015613124;
        } else {
          sum += (float)-0.0060589532368;
        }
      } else {
        sum += (float)-0.012946192175;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.01621565409;
      } else {
        sum += (float)-0.0013797049178;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          sum += (float)0.015995807946;
        } else {
          sum += (float)0.0049843140878;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.010551628657;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 12) ) ) {
          sum += (float)-0.011964106001;
        } else {
          sum += (float)-0.00139144063;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.012892042287;
      } else {
        sum += (float)-0.0078457789496;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.010280870833;
        } else {
          sum += (float)-0.010064867325;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].qvalue < 2) ) ) {
          sum += (float)-0.016148295254;
        } else {
          sum += (float)-0.0050123822875;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.016231449321;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.014408797026;
            } else {
              sum += (float)0.0045011662878;
            }
          } else {
            sum += (float)-0.0024097154383;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0016025044024;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026008624118;
      } else {
        sum += (float)-0.013522950932;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0039993971586;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0024312003516;
        } else {
          sum += (float)-0.011378357187;
        }
      } else {
        sum += (float)-0.016007285565;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          sum += (float)0.015793723986;
        } else {
          sum += (float)0.0048962347209;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0086719039828;
      } else {
        sum += (float)-0.01030978933;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.013787687756;
        } else {
          sum += (float)-0.0060081547126;
        }
      } else {
        sum += (float)-0.012715497054;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.015913419425;
      } else {
        sum += (float)-0.0012845600722;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          sum += (float)0.015694212168;
        } else {
          sum += (float)0.0048366710544;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.010382886045;
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].qvalue < 0) ) ) {
          sum += (float)-0.011808675714;
        } else {
          sum += (float)-0.0013211811893;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.012680199929;
      } else {
        sum += (float)-0.0077398316935;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.010105815716;
        } else {
          sum += (float)-0.0098628597334;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].qvalue < 2) ) ) {
          sum += (float)-0.01585377194;
        } else {
          sum += (float)-0.0048625110649;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.015935931355;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.014144008979;
            } else {
              sum += (float)0.0043347775936;
            }
          } else {
            sum += (float)-0.0024577458389;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0015451962827;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026286621578;
      } else {
        sum += (float)-0.013304367661;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0039236764424;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0024355202913;
        } else {
          sum += (float)-0.01119316183;
        }
      } else {
        sum += (float)-0.015715371817;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          sum += (float)0.015504520386;
        } else {
          sum += (float)0.0047468971461;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0085373912007;
      } else {
        sum += (float)-0.010152184404;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.013688489795;
        } else {
          sum += (float)0.0018753532786;
        }
      } else {
        sum += (float)-0.012758713216;
      }
    } else {
      sum += (float)-0.015634922311;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.015748379752;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.01397187449;
            } else {
              sum += (float)0.0042375130579;
            }
          } else {
            sum += (float)-0.0024657172617;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.001514452626;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026363572106;
      } else {
        sum += (float)-0.013157210313;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0038934594486;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0024084218312;
        } else {
          sum += (float)-0.011074821465;
        }
      } else {
        sum += (float)-0.015529519878;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          sum += (float)0.015322532505;
        } else {
          sum += (float)0.0046612275764;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0084388842806;
      } else {
        sum += (float)-0.010047581978;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
        sum += (float)0.012404690497;
      } else {
        sum += (float)-0.0075974795036;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 4) ) ) {
          sum += (float)0.0098842736334;
        } else {
          sum += (float)-0.0095971832052;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 0) ) ) {
          sum += (float)-0.0046782228164;
        } else {
          sum += (float)-0.015489719808;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.01556738466;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.013815083541;
            } else {
              sum += (float)0.0041419994086;
            }
          } else {
            sum += (float)-0.0024729871657;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0014893785119;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026438832283;
      } else {
        sum += (float)-0.013022295199;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0038419244811;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0024096695706;
        } else {
          sum += (float)-0.010971228592;
        }
      } else {
        sum += (float)-0.01534997113;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          sum += (float)0.015148045495;
        } else {
          sum += (float)0.0045613525435;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0083425315097;
      } else {
        sum += (float)-0.0099452240393;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 4) ) ) {
          sum += (float)0.013426011428;
        } else {
          sum += (float)0.0018206795212;
        }
      } else {
        sum += (float)-0.012490681373;
      }
    } else {
      sum += (float)-0.015281665139;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.015394794755;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.01365454495;
            } else {
              sum += (float)0.0040587889962;
            }
          } else {
            sum += (float)-0.0024804375134;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0014596430119;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026511680335;
      } else {
        sum += (float)-0.012883843854;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0038056182675;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0023831692524;
        } else {
          sum += (float)-0.010858893394;
        }
      } else {
        sum += (float)-0.015178621747;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          sum += (float)0.014979668893;
        } else {
          sum += (float)0.0044863717631;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0082482332364;
      } else {
        sum += (float)-0.009845036082;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 4) ) ) {
          sum += (float)0.013288090937;
        } else {
          sum += (float)0.0017971866764;
        }
      } else {
        sum += (float)-0.012362600304;
      }
    } else {
      sum += (float)-0.015113607049;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.0152290361;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.013499461114;
            } else {
              sum += (float)0.0039664809592;
            }
          } else {
            sum += (float)-0.0024876468815;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0014304318465;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026582577266;
      } else {
        sum += (float)-0.012749549001;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0037773402873;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.002357066609;
        } else {
          sum += (float)-0.010749502108;
        }
      } else {
        sum += (float)-0.015013930388;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0056469142437;
          } else {
            sum += (float)0.014975595288;
          }
        } else {
          sum += (float)0.0043913284317;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.0098425382748;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 12) ) ) {
          sum += (float)-0.011379306205;
        } else {
          sum += (float)-0.0010424222564;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].qvalue < 0) ) ) {
          sum += (float)0.013161050156;
        } else {
          sum += (float)0.0017523082206;
        }
      } else {
        sum += (float)-0.012238023803;
      }
    } else {
      sum += (float)-0.014952029102;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.015069199726;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.013357409276;
            } else {
              sum += (float)0.0038749654777;
            }
          } else {
            sum += (float)-0.002486690646;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0014052547049;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026535834186;
      } else {
        sum += (float)-0.012610213831;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0037420650478;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0023311781697;
        } else {
          sum += (float)-0.010642904788;
        }
      } else {
        sum += (float)-0.014855991118;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0055545885116;
          } else {
            sum += (float)0.014820279554;
          }
        } else {
          sum += (float)0.0043098749593;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.008083479479;
      } else {
        sum += (float)-0.0096643054858;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.013038781472;
        } else {
          sum += (float)0.0017047984293;
        }
      } else {
        sum += (float)-0.012116779573;
      }
    } else {
      sum += (float)-0.014796580188;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.014916527085;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.013211349025;
            } else {
              sum += (float)0.0037954375148;
            }
          } else {
            sum += (float)-0.0024868152104;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0013768646168;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.002660330385;
      } else {
        sum += (float)-0.012483639643;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0037074747961;
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 14) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
          sum += (float)0.0023056529462;
        } else {
          sum += (float)-0.010538985953;
        }
      } else {
        sum += (float)-0.014703522436;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0054638981819;
          } else {
            sum += (float)0.014670900069;
          }
        } else {
          sum += (float)0.0042325453833;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0079948836938;
      } else {
        sum += (float)-0.009570017457;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].qvalue < 0) ) ) {
          sum += (float)0.012915149331;
        } else {
          sum += (float)0.0016729988856;
        }
      } else {
        sum += (float)-0.011998711154;
      }
    } else {
      sum += (float)-0.014646926895;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0054361526854;
          } else {
            sum += (float)0.01459625829;
          }
        } else {
          sum += (float)0.0041804290377;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.0096020419151;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 12) ) ) {
          sum += (float)-0.01116361469;
        } else {
          sum += (float)-0.00093243154697;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.012821874581;
        } else {
          sum += (float)-0.0058117010631;
        }
      } else {
        sum += (float)-0.011641660705;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.014590034261;
      } else {
        sum += (float)-0.00081725139171;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.014699578285;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.013005397283;
            } else {
              sum += (float)0.0036369019654;
            }
          } else {
            sum += (float)-0.0025163826067;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0013324567117;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026732087135;
      } else {
        sum += (float)-0.012304656208;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010909653269;
      } else {
        sum += (float)-0.0095376996323;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.004353099037;
      } else {
        sum += (float)-0.01434745267;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0053476076573;
          } else {
            sum += (float)0.014454914257;
          }
        } else {
          sum += (float)0.0041087241843;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0078809279948;
      } else {
        sum += (float)-0.0094343256205;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 4) ) ) {
          sum += (float)0.012741945684;
        } else {
          sum += (float)0.0016202721745;
        }
      } else {
        sum += (float)-0.011813326739;
      }
    } else {
      sum += (float)-0.014433848672;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 12) ) ) {
          sum += (float)0.014560708776;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 2) ) ) {
              sum += (float)0.012870464474;
            } else {
              sum += (float)0.0035608101171;
            }
          } else {
            sum += (float)-0.002516082488;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
          sum += (float)-0;
        } else {
          sum += (float)0.0013052806025;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
        sum += (float)0.0026794809382;
      } else {
        sum += (float)-0.012186565436;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010807726532;
      } else {
        sum += (float)-0.0094409650192;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 2) ) ) {
        sum += (float)-0.0042955796234;
      } else {
        sum += (float)-0.01420801226;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].qvalue < 4) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0052605522797;
          } else {
            sum += (float)0.014318930916;
          }
        } else {
          sum += (float)0.0040306313895;
        }
      } else {
        sum += (float)-0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.007796460297;
      } else {
        sum += (float)-0.009344519116;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.012619250454;
        } else {
          sum += (float)0.0015880962601;
        }
      } else {
        sum += (float)-0.011695862748;
      }
    } else {
      sum += (float)-0.014296789654;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0052340738475;
          } else {
            sum += (float)0.014299314469;
          }
        } else {
          sum += (float)0.0049017295241;
        }
      } else {
        sum += (float)0.0011944764992;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.010315133259;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.012937389314;
        } else {
          sum += (float)-0.00036996247945;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010708315298;
      } else {
        sum += (float)-0.0093462606892;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0042073894292;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0043937265873;
        } else {
          sum += (float)-0.014293410815;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0052077579312;
          } else {
            sum += (float)0.014209340326;
          }
        } else {
          sum += (float)0.0038623288274;
        }
      } else {
        sum += (float)0.00057432061294;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0077244224958;
      } else {
        sum += (float)-0.0092282164842;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].qvalue < 0) ) ) {
          sum += (float)0.012512953952;
        } else {
          sum += (float)0.0015503189061;
        }
      } else {
        sum += (float)-0.011578164063;
      }
    } else {
      sum += (float)-0.014165701345;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0051816022024;
          } else {
            sum += (float)0.01416596584;
          }
        } else {
          sum += (float)0.0048426399007;
        }
      } else {
        sum += (float)0.0011602172162;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.010230786167;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.01281449385;
        } else {
          sum += (float)-0.00032767513767;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010617299005;
      } else {
        sum += (float)-0.0092535251752;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
        sum += (float)-0.0041521061212;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0043408931233;
        } else {
          sum += (float)-0.014163683169;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0051556047983;
          } else {
            sum += (float)0.01407829579;
          }
        } else {
          sum += (float)0.0038121209946;
        }
      } else {
        sum += (float)0.00053994444897;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0076535576954;
      } else {
        sum += (float)-0.0091143604368;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.012411554344;
        } else {
          sum += (float)-0.0057002911344;
        }
      } else {
        sum += (float)-0.011158817448;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].qvalue < 4) ) ) {
        sum += (float)-0.014062153175;
      } else {
        sum += (float)-0.00069011363667;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0051297671162;
          } else {
            sum += (float)0.014013858512;
          }
        } else {
          sum += (float)0.0037939213216;
        }
      } else {
        sum += (float)0.00053704611491;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
        sum += (float)0.0092143351212;
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].qvalue < 0) ) ) {
          sum += (float)-0.010797650553;
        } else {
          sum += (float)-0.00065415154677;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.012362513691;
        } else {
          sum += (float)0.0015100562014;
        }
      } else {
        sum += (float)-0.011413577944;
      }
    } else {
      sum += (float)-0.013977349736;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0051040840335;
          } else {
            sum += (float)0.013976195827;
          }
        } else {
          sum += (float)0.0047317217104;
        }
      } else {
        sum += (float)0.0010993350297;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.010096147656;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.01264939364;
        } else {
          sum += (float)-0.00025046698283;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.01049181819;
      } else {
        sum += (float)-0.009109152481;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0040334821679;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0042577753775;
        } else {
          sum += (float)-0.013980441727;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0050785546191;
          } else {
            sum += (float)0.013913694769;
          }
        } else {
          sum += (float)0.0047036129981;
        }
      } else {
        sum += (float)0.0010933640879;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.010049628094;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.012583621778;
        } else {
          sum += (float)-0.00024911941728;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010440375656;
      } else {
        sum += (float)-0.009069765918;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0040146457031;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0042378176004;
        } else {
          sum += (float)-0.013918025419;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 2) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0050531798042;
          } else {
            sum += (float)0.013830512762;
          }
        } else {
          sum += (float)0.0036832003389;
        }
      } else {
        sum += (float)0.0004731422232;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0075327656232;
      } else {
        sum += (float)-0.0089054014534;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.01221636124;
        } else {
          sum += (float)0.0014807850821;
        }
      } else {
        sum += (float)-0.011256120168;
      }
    } else {
      sum += (float)-0.013800580055;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0050279558636;
          } else {
            sum += (float)0.013794003054;
          }
        } else {
          sum += (float)0.0046406923793;
        }
      } else {
        sum += (float)0.0010608057491;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0099644185975;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.012470303103;
        } else {
          sum += (float)-0.00020888114523;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010355346836;
      } else {
        sum += (float)-0.0089825298637;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 2) ) ) {
        sum += (float)-0.0039375862107;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.004187585786;
        } else {
          sum += (float)-0.013802036643;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0050028827973;
          } else {
            sum += (float)0.013713057153;
          }
        } else {
          sum += (float)0.003617084818;
        }
      } else {
        sum += (float)0.00044063854148;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0074653187767;
      } else {
        sum += (float)-0.0087981503457;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.012114850804;
        } else {
          sum += (float)0.0014626384946;
        }
      } else {
        sum += (float)-0.011153111234;
      }
    } else {
      sum += (float)-0.013685613871;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0049779587425;
          } else {
            sum += (float)0.013678524643;
          }
        } else {
          sum += (float)0.0045787901618;
        }
      } else {
        sum += (float)0.0010288072517;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0098808296025;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.012360001914;
        } else {
          sum += (float)-0.0001693078666;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010266216472;
      } else {
        sum += (float)-0.0088969804347;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0038807084784;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0041381744668;
        } else {
          sum += (float)-0.013689178042;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0049531813711;
          } else {
            sum += (float)0.013621035963;
          }
        } else {
          sum += (float)0.0045517380349;
        }
      } else {
        sum += (float)0.001023225137;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0098364800215;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.012298274785;
        } else {
          sum += (float)-0.00016839845921;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010217216797;
      } else {
        sum += (float)-0.0088594509289;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
        sum += (float)-0.003833055729;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0041189342737;
        } else {
          sum += (float)-0.01363282185;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 6) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.004928550683;
          } else {
            sum += (float)0.013543844223;
          }
        } else {
          sum += (float)0.0035223099403;
        }
      } else {
        sum += (float)0.00037939587492;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0073738601059;
      } else {
        sum += (float)-0.0086380280554;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].qvalue < 0) ) ) {
          sum += (float)0.011977707967;
        } else {
          sum += (float)0.0014319968177;
        }
      } else {
        sum += (float)-0.011008691974;
      }
    } else {
      sum += (float)-0.013522411697;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0049040662125;
          } else {
            sum += (float)0.013510676101;
          }
        } else {
          sum += (float)0.0044978195801;
        }
      } else {
        sum += (float)0.00099198438693;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.009760575369;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.012192323804;
        } else {
          sum += (float)-0.00012967496878;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010130992159;
      } else {
        sum += (float)-0.0087762344629;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0037814488169;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0040705860592;
        } else {
          sum += (float)-0.013525264338;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0048797242343;
          } else {
            sum += (float)0.013455923647;
          }
        } else {
          sum += (float)0.0044713141397;
        }
      } else {
        sum += (float)0.00098660576623;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0097174039111;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.01213285327;
        } else {
          sum += (float)-0.00012897870329;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.010083412752;
      } else {
        sum += (float)-0.0087397322059;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 2) ) ) {
        sum += (float)-0.0037390261423;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 2) ) ) {
          sum += (float)-0.0040271678008;
        } else {
          sum += (float)-0.0134717701;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 14) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0048555256799;
          } else {
            sum += (float)0.013383392245;
          }
        } else {
          sum += (float)0.0034210332669;
        }
      } else {
        sum += (float)0.00031971398857;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 4) ) ) {
        sum += (float)0.0072847371921;
      } else {
        sum += (float)-0.0084867924452;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.011853380129;
        } else {
          sum += (float)0.0013764490141;
        }
      } else {
        sum += (float)-0.010869337246;
      }
    } else {
      sum += (float)-0.013366553932;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0048314672895;
          } else {
            sum += (float)0.013351225294;
          }
        } else {
          sum += (float)0.0044119395316;
        }
      } else {
        sum += (float)0.0009560851031;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0096382601187;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.012030964717;
        } else {
          sum += (float)-9.1065805464e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0099999224767;
      } else {
        sum += (float)-0.0086587360129;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
        sum += (float)-0.0036884201691;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0039805201814;
        } else {
          sum += (float)-0.013369869441;
        }
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0048075490631;
          } else {
            sum += (float)0.013299013488;
          }
        } else {
          sum += (float)0.0043860105798;
        }
      } else {
        sum += (float)0.00095090351533;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0095962593332;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.01197360456;
        } else {
          sum += (float)-9.0577501396e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0099536897615;
      } else {
        sum += (float)-0.0086232125759;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 0) ) ) {
        sum += (float)-0.0036433844361;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 6) ) ) {
          sum += (float)-0.0039621898904;
        } else {
          sum += (float)-0.013318698853;
        }
      }
    }
  }
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
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0043139974587;
          } else {
            sum += (float)0.012661151588;
          }
        } else {
          sum += (float)0.0039917025715;
        }
      } else {
        sum += (float)0.00077091058483;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.009125970304;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011313067749;
        } else {
          sum += (float)-3.5263790323e-06;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0094152567908;
      } else {
        sum += (float)-0.0081031620502;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 2) ) ) {
          sum += (float)-0.0076403771527;
        } else {
          sum += (float)-0.00011207197531;
        }
      } else {
        sum += (float)-0.012691013515;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0046491292305;
          } else {
            sum += (float)0.012827482074;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 0) ) ) {
            sum += (float)0.008964093402;
          } else {
            sum += (float)-0.0022732347716;
          }
        }
      } else {
        sum += (float)4.2591316742e-05;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.00037310316111;
        } else {
          sum += (float)0.0090266931802;
        }
      } else {
        sum += (float)-0.0094267707318;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.011300350539;
        } else {
          sum += (float)-0.0054780305363;
        }
      } else {
        sum += (float)-0.0097574125975;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].qvalue < 4) ) ) {
        sum += (float)-0.012643581256;
      } else {
        sum += (float)-0.0002914966899;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0042369873263;
          } else {
            sum += (float)0.012764794752;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 0) ) ) {
            sum += (float)0.0089309513569;
          } else {
            sum += (float)-0.0022609359585;
          }
        }
      } else {
        sum += (float)4.2364223191e-05;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0089941238984;
        } else {
          sum += (float)-0.00037975449231;
        }
      } else {
        sum += (float)-0.0093868002295;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.011126952246;
        } else {
          sum += (float)0.0012365708826;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.0031670327298;
        } else {
          sum += (float)-0.011026263237;
        }
      }
    } else {
      sum += (float)-0.012563605793;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 0) ) ) {
            sum += (float)0.0045713121071;
          } else {
            sum += (float)0.01256219577;
          }
        } else {
          sum += (float)0.0039018562529;
        }
      } else {
        sum += (float)0.00072175171226;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0090411668643;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011196368374;
        } else {
          sum += (float)1.9126549887e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0093040717766;
      } else {
        sum += (float)-0.0079972585663;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].qvalue < 2) ) ) {
          sum += (float)-0.00018791723414;
        } else {
          sum += (float)-0.0074831056409;
        }
      } else {
        sum += (float)-0.01257189922;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 10) ) ) {
          sum += (float)0.012701221742;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
            sum += (float)0.010940076783;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 0) ) ) {
              sum += (float)-0.0066203051247;
            } else {
              sum += (float)0.0039771837182;
            }
          }
        }
      } else {
        sum += (float)0.00071785569889;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0090045155957;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011148974299;
        } else {
          sum += (float)1.9024655558e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.009264507331;
      } else {
        sum += (float)-0.00796687603;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].qvalue < 2) ) ) {
          sum += (float)-0.00018697672931;
        } else {
          sum += (float)-0.0074569857679;
        }
      } else {
        sum += (float)-0.012531368062;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0041152890772;
          } else {
            sum += (float)0.01265116781;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
            sum += (float)0.0088046099991;
          } else {
            sum += (float)-0.0022503209766;
          }
        }
      } else {
        sum += (float)-8.471939509e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0089193070307;
        } else {
          sum += (float)-0.00036483220174;
        }
      } else {
        sum += (float)-0.0092675285414;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 6) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].qvalue < 8) ) ) {
          sum += (float)0.011147576384;
        } else {
          sum += (float)-0.0054272585548;
        }
      } else {
        sum += (float)-0.0095992451534;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
        sum += (float)-0.012490328401;
      } else {
        sum += (float)-0.00024640114862;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0044473013841;
          } else {
            sum += (float)0.012635027058;
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 0) ) ) {
            sum += (float)0.0087784184143;
          } else {
            sum += (float)-0.0022564674728;
          }
        }
      } else {
        sum += (float)-8.4261027951e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.00037139563938;
        } else {
          sum += (float)0.0088875135407;
        }
      } else {
        sum += (float)-0.0092289848253;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].qvalue < 6) ) ) {
          sum += (float)0.010977363214;
        } else {
          sum += (float)0.0012089404045;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.0030870086048;
        } else {
          sum += (float)-0.010883552022;
        }
      }
    } else {
      sum += (float)-0.012411113828;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 10) ) ) {
          sum += (float)0.012590244412;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
            sum += (float)0.010829739273;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 0) ) ) {
              sum += (float)-0.0066214147955;
            } else {
              sum += (float)0.0039031624328;
            }
          }
        }
      } else {
        sum += (float)0.00067016517278;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0089223049581;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.011037015356;
        } else {
          sum += (float)4.0743601858e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0091569731012;
      } else {
        sum += (float)-0.0078641325235;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 8) ) ) {
          sum += (float)-0.00024452671641;
        } else {
          sum += (float)-0.0073123979382;
        }
      } else {
        sum += (float)-0.012418639846;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0039951200597;
          } else {
            sum += (float)0.012540636584;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0086747379974;
          } else {
            sum += (float)-0.0021331941243;
          }
        }
      } else {
        sum += (float)-3.3313695894e-05;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].qvalue < 6) ) ) {
          sum += (float)-0.0003630182473;
        } else {
          sum += (float)0.0088322758675;
        }
      } else {
        sum += (float)-0.0091521879658;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 4) ) ) {
          sum += (float)0.010879725218;
        } else {
          sum += (float)0.0012558678864;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.0030599455349;
        } else {
          sum += (float)-0.010810355656;
        }
      }
    } else {
      sum += (float)-0.012336635031;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 10) ) ) {
          sum += (float)0.012518361211;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
            sum += (float)0.010755909607;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 0) ) ) {
              sum += (float)-0.0065990579315;
            } else {
              sum += (float)0.0038648357149;
            }
          }
        }
      } else {
        sum += (float)0.00064517295687;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.008864284493;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.010957029648;
        } else {
          sum += (float)5.3910975112e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0090840999037;
      } else {
        sum += (float)-0.0078041283414;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 8) ) ) {
          sum += (float)-0.00024714396568;
        } else {
          sum += (float)-0.0072467629798;
        }
      } else {
        sum += (float)-0.012345242314;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].qvalue < 0) ) ) {
            sum += (float)0.0039307367988;
          } else {
            sum += (float)0.012469555251;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0086109871045;
          } else {
            sum += (float)-0.0021259472705;
          }
        }
      } else {
        sum += (float)-5.7770710555e-05;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0087836273015;
        } else {
          sum += (float)-0.00036324936082;
        }
      } else {
        sum += (float)-0.0090767573565;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].qvalue < 0) ) ) {
        sum += (float)-0.0087473243475;
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].qvalue < 2) ) ) {
          sum += (float)-0.0024340432137;
        } else {
          sum += (float)0.010654604062;
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].qvalue < 4) ) ) {
        sum += (float)-0.012310950086;
      } else {
        sum += (float)-0.00019670388428;
      }
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 10) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 10) ) ) {
          sum += (float)0.012448104098;
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
            sum += (float)0.010683453642;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].qvalue < 0) ) ) {
              sum += (float)-0.0065787117928;
            } else {
              sum += (float)0.0038246877957;
            }
          }
        }
      } else {
        sum += (float)0.00062089919811;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 2) ) ) {
        sum += (float)0.0088150938973;
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].qvalue < 4) ) ) {
          sum += (float)-0.010884895921;
        } else {
          sum += (float)5.4056443332e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].qvalue < 2) ) ) {
        sum += (float)0.0090151391923;
      } else {
        sum += (float)-0.007737216074;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].qvalue < 0) ) ) {
          sum += (float)-0.0068381754681;
        } else {
          sum += (float)-0.0010423325002;
        }
      } else {
        sum += (float)-0.012273649685;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 10) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 12) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].qvalue < 2) ) ) {
            sum += (float)0.0041804783978;
          } else {
            sum += (float)0.01242224779;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
            sum += (float)0.0085482345894;
          } else {
            sum += (float)-0.0021186005324;
          }
        }
      } else {
        sum += (float)-8.1802660134e-05;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 6) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
          sum += (float)0.0087298126891;
        } else {
          sum += (float)-0.00035506734275;
        }
      } else {
        sum += (float)-0.0090026212856;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].qvalue < 4) ) ) {
          sum += (float)0.010666128248;
        } else {
          sum += (float)0.0014908920275;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 8) ) ) {
          sum += (float)-0.0029884879477;
        } else {
          sum += (float)-0.010669211857;
        }
      }
    } else {
      sum += (float)-0.012196744792;
    }
  }
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
