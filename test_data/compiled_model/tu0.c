#include "header.h"
float predict_margin_unit0(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.018840579316;
    } else {
      sum += (float)-0.0062499996275;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.003333333414;
    } else {
      sum += (float)-0.018940396607;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.018656542525;
    } else {
      sum += (float)-0.0061953663826;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0033111171797;
    } else {
      sum += (float)-0.018757652491;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.018477484584;
    } else {
      sum += (float)-0.0061413124204;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0032890609;
    } else {
      sum += (float)-0.018579870462;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.018303209916;
    } else {
      sum += (float)-0.0060878312215;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0032671638764;
    } else {
      sum += (float)-0.018406851217;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.018133530393;
    } else {
      sum += (float)-0.0060349111445;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0032454240136;
    } else {
      sum += (float)-0.018238406628;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.017968257889;
    } else {
      sum += (float)-0.0059825484641;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0032238392159;
    } else {
      sum += (float)-0.018074359745;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.017807228491;
    } else {
      sum += (float)-0.0059307268821;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0032024111133;
    } else {
      sum += (float)-0.017914541066;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.017650276423;
    } else {
      sum += (float)-0.0058794426732;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0031811341178;
    } else {
      sum += (float)-0.017758786678;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.017497248948;
    } else {
      sum += (float)-0.0058286874555;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0031600107905;
    } else {
      sum += (float)-0.017606949434;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.017347997054;
    } else {
      sum += (float)-0.0057784514502;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0031390362419;
    } else {
      sum += (float)-0.01745888032;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.017202382907;
    } else {
      sum += (float)-0.0057287281379;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0031182116363;
    } else {
      sum += (float)-0.017314441502;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.017060274258;
    } else {
      sum += (float)-0.0056795063429;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.003097535111;
    } else {
      sum += (float)-0.017173502594;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.016921540722;
    } else {
      sum += (float)-0.005630783271;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0030770059675;
    } else {
      sum += (float)-0.017035936937;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.016786066815;
    } else {
      sum += (float)-0.0055825496092;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)-4.5434026106e-05;
    } else {
      sum += (float)-0.017214180902;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.016653733328;
    } else {
      sum += (float)-0.0055347955786;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0031138577033;
    } else {
      sum += (float)-0.01677621901;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.016797218472;
    } else {
      sum += (float)-0.0034454369452;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)3.5742767068e-05;
    } else {
      sum += (float)-0.016957396641;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.016669435427;
    } else {
      sum += (float)-0.0034146404359;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0031494568102;
    } else {
      sum += (float)-0.016528289765;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.016278380528;
    } else {
      sum += (float)-0.0054290066473;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.00011491171608;
    } else {
      sum += (float)-0.016712376848;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.016424512491;
    } else {
      sum += (float)-0.003375843633;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0031838493887;
    } else {
      sum += (float)-0.01629136689;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.016041198745;
    } else {
      sum += (float)-0.0053540542722;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.00019215073553;
    } else {
      sum += (float)-0.016478346661;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.015650428832;
    } else {
      sum += (float)-0.0096586924046;
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
      sum += (float)0.0072852615267;
    } else {
      sum += (float)-0.016080496833;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.016079986468;
    } else {
      sum += (float)-0.0033145914786;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.00022308682674;
    } else {
      sum += (float)-0.01625665091;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.015432248823;
    } else {
      sum += (float)-0.0095267593861;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0073164114729;
    } else {
      sum += (float)-0.015865704045;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.015862485394;
    } else {
      sum += (float)-0.0032627806067;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0032643331215;
    } else {
      sum += (float)-0.01575492695;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.015599204227;
    } else {
      sum += (float)-0.0045685176738;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.010863470845;
    } else {
      sum += (float)-0.014477348886;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.015125545673;
    } else {
      sum += (float)-0.0093009155244;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.007272885181;
    } else {
      sum += (float)-0.015565193258;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.015556387603;
    } else {
      sum += (float)-0.0031599448994;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0052370512858;
    } else {
      sum += (float)-0.015331891365;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.015300726518;
    } else {
      sum += (float)-0.0044352738187;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.010658465326;
    } else {
      sum += (float)-0.01419908274;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.015361989848;
    } else {
      sum += (float)-0.0030808302108;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0052173030563;
    } else {
      sum += (float)-0.015147786587;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.014748632908;
    } else {
      sum += (float)-0.0090447971597;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0072475946508;
    } else {
      sum += (float)-0.015193074942;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.015019520186;
    } else {
      sum += (float)-0.0043059680611;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.010462181643;
    } else {
      sum += (float)-0.013935448602;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.015085269697;
    } else {
      sum += (float)-0.0029835649766;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0034275490325;
    } else {
      sum += (float)-0.015031044371;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.014480719343;
    } else {
      sum += (float)-0.0088364677504;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0072044869885;
    } else {
      sum += (float)-0.014930312522;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.014752788469;
    } else {
      sum += (float)-0.0041289054789;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.010274943896;
    } else {
      sum += (float)-0.013688568026;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.014824168757;
    } else {
      sum += (float)-0.0028892515693;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0053335055709;
    } else {
      sum += (float)-0.014648716897;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.014583046548;
    } else {
      sum += (float)-0.0040656495839;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.010161070153;
    } else {
      sum += (float)-0.013522080146;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.014151345938;
    } else {
      sum += (float)-0.0086158029735;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.00714453822;
    } else {
      sum += (float)-0.014600821771;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.014577356167;
    } else {
      sum += (float)-0.0027976578567;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0053444150835;
    } else {
      sum += (float)-0.014416201971;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.014341010712;
    } else {
      sum += (float)-0.0039462912828;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0099843256176;
    } else {
      sum += (float)-0.013291629031;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013916816562;
    } else {
      sum += (float)-0.0084505202249;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0071030315012;
    } else {
      sum += (float)-0.014366611838;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.014343666844;
    } else {
      sum += (float)-0.002708758926;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0035835201852;
    } else {
      sum += (float)-0.01433632616;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.014110216871;
    } else {
      sum += (float)-0.0037798532285;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0098151881248;
    } else {
      sum += (float)-0.013075096533;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013692127541;
    } else {
      sum += (float)-0.0082621490583;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0070619531907;
    } else {
      sum += (float)-0.014146448113;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.01396000199;
    } else {
      sum += (float)-0.0036994775292;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
      sum += (float)0.0068693840876;
    } else {
      sum += (float)-0.0132783968;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.014052331448;
    } else {
      sum += (float)-0.002599646803;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0054841861129;
    } else {
      sum += (float)-0.0139293354;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013817516156;
    } else {
      sum += (float)-0.0036431439221;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0096556786448;
    } else {
      sum += (float)-0.012794419192;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013414172456;
    } else {
      sum += (float)-0.0080563081428;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.006982954219;
    } else {
      sum += (float)-0.013870092109;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.013845320791;
    } else {
      sum += (float)-0.0025164529216;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0054911277257;
    } else {
      sum += (float)-0.013733753935;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013613454998;
    } else {
      sum += (float)-0.0035345628858;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
      sum += (float)0.0066947112791;
    } else {
      sum += (float)-0.012940462679;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013214334846;
    } else {
      sum += (float)-0.0078994054347;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0069207716733;
    } else {
      sum += (float)-0.013672717847;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013479224406;
    } else {
      sum += (float)-0.003458507359;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0094456151128;
    } else {
      sum += (float)-0.012473169714;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.013586278073;
    } else {
      sum += (float)-0.0024144137278;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0055277422071;
    } else {
      sum += (float)-0.013491026126;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013024143875;
    } else {
      sum += (float)-0.0077549796551;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0068812435493;
    } else {
      sum += (float)-0.013482900336;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013290643692;
    } else {
      sum += (float)-0.0033546211198;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
      sum += (float)0.0065277116373;
    } else {
      sum += (float)-0.012629207224;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.012437365018;
    } else {
      sum += (float)-0.0090246768668;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.004246766679;
    } else {
      sum += (float)-0.013621954247;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.013167449273;
    } else {
      sum += (float)-0.0033134066034;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0092534804717;
    } else {
      sum += (float)-0.012177590281;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.013287027366;
    } else {
      sum += (float)-0.0023395859171;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0039332988672;
    } else {
      sum += (float)-0.013348027132;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.012725125067;
    } else {
      sum += (float)-0.0075012412854;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0068115899339;
    } else {
      sum += (float)-0.013196470216;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.01316712331;
    } else {
      sum += (float)-0.0011410764419;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0059694964439;
    } else {
      sum += (float)-0.012420724146;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.012153762393;
    } else {
      sum += (float)-0.0088004851714;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0043337438256;
    } else {
      sum += (float)-0.013354170136;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.012554220855;
    } else {
      sum += (float)-0.0073958095163;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0067444168963;
    } else {
      sum += (float)-0.013031842187;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.013004482724;
    } else {
      sum += (float)-0.0012228270061;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0058604311198;
    } else {
      sum += (float)-0.012262395583;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.012242496014;
    } else {
      sum += (float)-0.0089948074892;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0056055583991;
    } else {
      sum += (float)-0.013161339797;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.012896235101;
    } else {
      sum += (float)-0.0012493275572;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0090014925227;
    } else {
      sum += (float)-0.011758818291;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.011882549152;
    } else {
      sum += (float)-0.0085489386693;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0042997361161;
    } else {
      sum += (float)-0.013104653917;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.012078159489;
    } else {
      sum += (float)-0.0088219707832;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0055196988396;
    } else {
      sum += (float)-0.013012743555;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.012235213071;
    } else {
      sum += (float)-0.0071863341145;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0066782021895;
    } else {
      sum += (float)-0.012731973082;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.012699184939;
    } else {
      sum += (float)-0.0013640485704;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0057194265537;
    } else {
      sum += (float)-0.011977022514;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.011670001782;
    } else {
      sum += (float)-0.0083657028154;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0042756465264;
    } else {
      sum += (float)-0.012911091559;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.012600006536;
    } else {
      sum += (float)-0.0014091141056;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0087946755812;
    } else {
      sum += (float)-0.011476832442;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.011826076545;
    } else {
      sum += (float)-0.0085776597261;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0054668742232;
    } else {
      sum += (float)-0.012788297608;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.011988333426;
    } else {
      sum += (float)-0.0070325923152;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0066104154103;
    } else {
      sum += (float)-0.01249837596;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.012459539808;
    } else {
      sum += (float)-0.0014644538751;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0056211841293;
    } else {
      sum += (float)-0.011750297621;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.011679535732;
    } else {
      sum += (float)-0.0084510482848;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.005463078618;
    } else {
      sum += (float)-0.012657183222;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.012365870178;
    } else {
      sum += (float)-0.0014875606867;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0055451137014;
    } else {
      sum += (float)-0.011655871756;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.011333539151;
    } else {
      sum += (float)-0.0080585088581;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0042039463297;
    } else {
      sum += (float)-0.012609742582;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.011755187996;
    } else {
      sum += (float)-0.0068779503927;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0065264939331;
    } else {
      sum += (float)-0.012282862328;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.012234679423;
    } else {
      sum += (float)-0.0015610918636;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0085719656199;
    } else {
      sum += (float)-0.011129661463;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.011449137703;
    } else {
      sum += (float)-0.0082228174433;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0054123154841;
    } else {
      sum += (float)-0.012456873432;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.011396744289;
    } else {
      sum += (float)-0.008173475042;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.005378506612;
    } else {
      sum += (float)-0.012408768758;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.012108531781;
    } else {
      sum += (float)-0.0016168773873;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0054200417362;
    } else {
      sum += (float)-0.01141556073;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.01153410133;
    } else {
      sum += (float)-0.0067250099964;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0064663765952;
    } else {
      sum += (float)-0.012077656575;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011387431063;
    } else {
      sum += (float)-0.0041923709214;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0041819666512;
    } else {
      sum += (float)-0.012333797291;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.011987750418;
    } else {
      sum += (float)-0.0016894225264;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 2) ) ) {
      sum += (float)0.0083909574896;
    } else {
      sum += (float)-0.010890927166;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.011971250176;
    } else {
      sum += (float)-0.0021301528905;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0053297285922;
    } else {
      sum += (float)-0.01222373452;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.01089434512;
    } else {
      sum += (float)-0.00765267713;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.004120153375;
    } else {
      sum += (float)-0.012217140757;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.011871602386;
    } else {
      sum += (float)-0.001765408786;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0018692911835;
    } else {
      sum += (float)-0.011939080432;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.011854995042;
    } else {
      sum += (float)-0.0021054495592;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0052584055811;
    } else {
      sum += (float)-0.012114261277;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.011813796125;
    } else {
      sum += (float)-0.0020869651344;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0052257808857;
    } else {
      sum += (float)-0.01207051333;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.011759799905;
    } else {
      sum += (float)-0.0018239825731;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0019081929931;
    } else {
      sum += (float)-0.01182946749;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.01069741603;
    } else {
      sum += (float)-0.0074783735909;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0040240366943;
    } else {
      sum += (float)-0.012041104026;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.011130159721;
    } else {
      sum += (float)-0.006431562826;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0064474437386;
    } else {
      sum += (float)-0.011706739664;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.011649421416;
    } else {
      sum += (float)-0.0018906370969;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0019123073434;
    } else {
      sum += (float)-0.011725848541;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.011631545611;
    } else {
      sum += (float)-0.0020254375413;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0051755905151;
    } else {
      sum += (float)-0.01191065181;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.010539481416;
    } else {
      sum += (float)-0.0073306504637;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0040031084791;
    } else {
      sum += (float)-0.011905820109;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.011558203027;
    } else {
      sum += (float)-0.0020292487461;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0014799473574;
    } else {
      sum += (float)-0.012291011401;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 2) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.011511397548;
    } else {
      sum += (float)-0.0020013828762;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0019605795387;
    } else {
      sum += (float)-0.011598817073;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.011488165706;
    } else {
      sum += (float)-0.0019854474813;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0050989855081;
    } else {
      sum += (float)-0.01177637279;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 4) ) ) {
      sum += (float)0.010869618505;
    } else {
      sum += (float)-0.0062266779132;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.006408853922;
    } else {
      sum += (float)-0.011468862183;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
      sum += (float)0.010352230631;
    } else {
      sum += (float)-0.0071731172502;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0039736595936;
    } else {
      sum += (float)-0.011744833551;
    }
  }
  return sum;
}
