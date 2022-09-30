#include "header.h"
float predict_margin_unit1(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
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
  return sum;
}
