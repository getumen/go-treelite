#include "header.h"
float predict_margin_unit3(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
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
  return sum;
}
