#include "header.h"
float predict_margin_unit2(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
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
  return sum;
}
