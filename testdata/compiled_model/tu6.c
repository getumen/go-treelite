#include "header.h"
float predict_margin_unit6(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
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
  return sum;
}
