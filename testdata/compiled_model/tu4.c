#include "header.h"
float predict_margin_unit4(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
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
          sum += (float)-0.013802038506;
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
  return sum;
}
