#include "header.h"
float predict_margin_unit0(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.018951309845;
    } else {
      sum += (float)-0.0026086955331;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.0005128204939;
    } else {
      sum += (float)-0.018873238936;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.018766300753;
    } else {
      sum += (float)-0.0025871491525;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00050821813056;
    } else {
      sum += (float)-0.01869144477;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.018586337566;
    } else {
      sum += (float)-0.0025657876395;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      sum += (float)0.0061628678814;
    } else {
      sum += (float)-0.017411874607;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.018411217257;
    } else {
      sum += (float)-0.0025446086656;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00057531159837;
    } else {
      sum += (float)-0.018360538408;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.018240747973;
    } else {
      sum += (float)-0.002523613628;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      sum += (float)0.0061487671919;
    } else {
      sum += (float)-0.01710292697;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.017541518435;
    } else {
      sum += (float)-0.011477552354;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0044723278843;
    } else {
      sum += (float)-0.017837641761;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.017921524122;
    } else {
      sum += (float)-0.0025062628556;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00060361693613;
    } else {
      sum += (float)-0.017892563716;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.017763724551;
    } else {
      sum += (float)-0.0024855951779;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      sum += (float)0.0060545252636;
    } else {
      sum += (float)-0.016670418903;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.01710116677;
    } else {
      sum += (float)-0.011298052967;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0043737646192;
    } else {
      sum += (float)-0.017397698015;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.017467807978;
    } else {
      sum += (float)-0.0024682311341;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.0011428913567;
    } else {
      sum += (float)-0.018033992499;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.016820551828;
    } else {
      sum += (float)-0.011124840938;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0043101576157;
    } else {
      sum += (float)-0.017124822363;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.016678882763;
    } else {
      sum += (float)-0.011035848409;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0042806393467;
    } else {
      sum += (float)-0.016983270645;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.017053956166;
    } else {
      sum += (float)-0.0024545060005;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00062856165459;
    } else {
      sum += (float)-0.017061987892;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.016917418689;
    } else {
      sum += (float)-0.0024342832621;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.0010550037259;
    } else {
      sum += (float)-0.01749686338;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.016295546666;
    } else {
      sum += (float)-0.010862899944;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0042196763679;
    } else {
      sum += (float)-0.016605159268;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.016660990193;
    } else {
      sum += (float)-0.0024173832498;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      sum += (float)0.0057596946135;
    } else {
      sum += (float)-0.015664247796;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.016051758081;
    } else {
      sum += (float)-0.01070795022;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0041277320124;
    } else {
      sum += (float)-0.016363559291;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.015927361324;
    } else {
      sum += (float)-0.010624695569;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0040996256284;
    } else {
      sum += (float)-0.016239516437;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.016301043332;
    } else {
      sum += (float)-0.0024041451979;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00098482146859;
    } else {
      sum += (float)-0.016885858029;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.015697712079;
    } else {
      sum += (float)-0.010469781235;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0040408200584;
    } else {
      sum += (float)-0.016016859561;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.016071738675;
    } else {
      sum += (float)-0.0023878940847;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00068234105129;
    } else {
      sum += (float)-0.016125010327;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.015476463363;
    } else {
      sum += (float)-0.010382849723;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0040147150867;
    } else {
      sum += (float)-0.015794182196;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.015852104872;
    } else {
      sum += (float)-0.0023716434371;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00090570718748;
    } else {
      sum += (float)-0.016449598595;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.015264936723;
    } else {
      sum += (float)-0.01023418922;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.003957557492;
    } else {
      sum += (float)-0.015589528717;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.015641532838;
    } else {
      sum += (float)-0.0023556682281;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.0008972917567;
    } else {
      sum += (float)-0.016236970201;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.015061642975;
    } else {
      sum += (float)-0.010089182295;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0039014264476;
    } else {
      sum += (float)-0.015393058769;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.015439467505;
    } else {
      sum += (float)-0.0023399752099;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00070220831549;
    } else {
      sum += (float)-0.01551834587;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.015338327736;
    } else {
      sum += (float)-0.0023207436316;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.0008230045205;
    } else {
      sum += (float)-0.015946591273;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.014775485732;
    } else {
      sum += (float)-0.0099415155128;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0038482488599;
    } else {
      sum += (float)-0.015111999586;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.014676917344;
    } else {
      sum += (float)-0.0098680462688;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0038222733419;
    } else {
      sum += (float)-0.015014118515;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.015058810823;
    } else {
      sum += (float)-0.0023089454044;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00081608403707;
    } else {
      sum += (float)-0.01566599682;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.014495446347;
    } else {
      sum += (float)-0.0097317369655;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0037685632706;
    } else {
      sum += (float)-0.014839432202;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.014879341237;
    } else {
      sum += (float)-0.0022938430775;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00080912164412;
    } else {
      sum += (float)-0.015485793352;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.014320421033;
    } else {
      sum += (float)-0.0095985038206;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0037157624029;
    } else {
      sum += (float)-0.014671187848;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.014706547372;
    } else {
      sum += (float)-0.0022790192161;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00074788247002;
    } else {
      sum += (float)-0.014819581993;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.014150599018;
    } else {
      sum += (float)-0.0095230285078;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.014212472364;
    } else {
      sum += (float)0.0074651455507;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.014540934004;
    } else {
      sum += (float)-0.0022643634584;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00073261663783;
    } else {
      sum += (float)-0.015162634663;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.013987345621;
    } else {
      sum += (float)-0.0093943933025;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0015041343868;
    } else {
      sum += (float)-0.014592232183;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.014380571432;
    } else {
      sum += (float)-0.0022497670725;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.0007360073505;
    } else {
      sum += (float)-0.015000885352;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.014277030714;
    } else {
      sum += (float)-0.0052449861541;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.013914947398;
    } else {
      sum += (float)0.0074510751292;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.014224093407;
    } else {
      sum += (float)-0.0021847612225;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00078444927931;
    } else {
      sum += (float)-0.014360583387;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.014145869762;
    } else {
      sum += (float)-0.0021668609697;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00065160467057;
    } else {
      sum += (float)-0.014785647392;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.013610688969;
    } else {
      sum += (float)-0.0091684479266;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.013701687567;
    } else {
      sum += (float)0.0074562327936;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.013999698684;
    } else {
      sum += (float)-0.0021532173268;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
      sum += (float)0.0050928043202;
    } else {
      sum += (float)-0.013221672736;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.013466125354;
    } else {
      sum += (float)-0.0090523716062;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.013562557288;
    } else {
      sum += (float)0.0074235801585;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.013858412392;
    } else {
      sum += (float)-0.0021398395766;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00058596418239;
    } else {
      sum += (float)-0.01450922247;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.013768133707;
    } else {
      sum += (float)-0.0050363549963;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.013429141603;
    } else {
      sum += (float)0.0073899929412;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.013719568029;
    } else {
      sum += (float)-0.0020776889287;
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
      sum += (float)0.00087718560826;
    } else {
      sum += (float)-0.013885498978;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.013191640377;
    } else {
      sum += (float)-0.0088940029964;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0017003994435;
    } else {
      sum += (float)-0.013826648705;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.013586658053;
    } else {
      sum += (float)-0.0020646618214;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0029291466344;
    } else {
      sum += (float)-0.013248692267;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.01350147184;
    } else {
      sum += (float)-0.0049394038506;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.013170276769;
    } else {
      sum += (float)0.0074121793732;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.01345651038;
    } else {
      sum += (float)-0.0020040655509;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00043230270967;
    } else {
      sum += (float)-0.014143876731;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.012935549952;
    } else {
      sum += (float)-0.0086957430467;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0017578798579;
    } else {
      sum += (float)-0.013584537432;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.013331747614;
    } else {
      sum += (float)-0.0019918046892;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0029981874395;
    } else {
      sum += (float)-0.013012536801;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.013251502998;
    } else {
      sum += (float)-0.0048081860878;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.01293418929;
    } else {
      sum += (float)0.0074033485726;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.012682562694;
    } else {
      sum += (float)-0.010725549422;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.005498692859;
    } else {
      sum += (float)-0.01380954124;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.01315073669;
    } else {
      sum += (float)-0.001871426939;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.0003799686092;
    } else {
      sum += (float)-0.013858659193;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.012635053135;
    } else {
      sum += (float)-0.0084183970466;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.012772556394;
    } else {
      sum += (float)0.0073519647121;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.013035694137;
    } else {
      sum += (float)-0.0018608745886;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0030278328341;
    } else {
      sum += (float)-0.012739274651;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.012957543135;
    } else {
      sum += (float)-0.0046132039279;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0018857872346;
    } else {
      sum += (float)-0.013203700073;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.012461564504;
    } else {
      sum += (float)-0.0082845361903;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0018714064499;
    } else {
      sum += (float)-0.013143496588;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.012868950143;
    } else {
      sum += (float)-0.001809264184;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0030433253851;
    } else {
      sum += (float)-0.012584073469;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.012296315283;
    } else {
      sum += (float)-0.010435787961;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.005585423205;
    } else {
      sum += (float)-0.013445460238;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.012734252959;
    } else {
      sum += (float)-0.0044676307589;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.012457951903;
    } else {
      sum += (float)0.0073402919807;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.012707607821;
    } else {
      sum += (float)-0.0016958817141;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00026266841451;
    } else {
      sum += (float)-0.013453505002;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.012191522866;
    } else {
      sum += (float)-0.0080251842737;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0019089299021;
    } else {
      sum += (float)-0.012897798792;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.012604224496;
    } else {
      sum += (float)-0.0016870833933;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0030763207469;
    } else {
      sum += (float)-0.012343425304;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.012526346371;
    } else {
      sum += (float)-0.0043523223139;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.012260019779;
    } else {
      sum += (float)0.007329675369;
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011987396516;
    } else {
      sum += (float)-0.010189942084;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.005731660407;
    } else {
      sum += (float)-0.013159420341;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.01245336514;
    } else {
      sum += (float)-0.001577876159;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.0002180167794;
    } else {
      sum += (float)-0.013220817782;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.011937669478;
    } else {
      sum += (float)-0.007776285056;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.012124652974;
    } else {
      sum += (float)0.0072798891924;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.01235723868;
    } else {
      sum += (float)-0.0015706490958;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0031013120897;
    } else {
      sum += (float)-0.01211565733;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.012279384769;
    } else {
      sum += (float)-0.0041782641783;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0020273751579;
    } else {
      sum += (float)-0.012582106516;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.012261157855;
    } else {
      sum += (float)-0.0015206059907;
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].qvalue < 4) ) ) {
      sum += (float)-0.00015264519607;
    } else {
      sum += (float)-0.013046812266;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.012183816172;
    } else {
      sum += (float)-0.0041058668867;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0019933267031;
    } else {
      sum += (float)-0.012491939589;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.011697390117;
    } else {
      sum += (float)-0.0075871255249;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.011894974858;
    } else {
      sum += (float)0.0072756451555;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.012125429697;
    } else {
      sum += (float)-0.0014773369767;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.003186390968;
    } else {
      sum += (float)-0.01190775726;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011507576331;
    } else {
      sum += (float)-0.010022710077;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0027212116402;
    } else {
      sum += (float)-0.013126855716;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011453603394;
    } else {
      sum += (float)-0.0099704749882;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0026988643222;
    } else {
      sum += (float)-0.013079543598;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.011953777634;
    } else {
      sum += (float)-0.0039946432225;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.002033352619;
    } else {
      sum += (float)-0.012283042073;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.011949225329;
    } else {
      sum += (float)-0.0014412197052;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0031952746212;
    } else {
      sum += (float)-0.011748612858;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011319706216;
    } else {
      sum += (float)-0.0098493965343;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0027189862449;
    } else {
      sum += (float)-0.012962248176;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.011382038705;
    } else {
      sum += (float)-0.0073331990279;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.011613872834;
    } else {
      sum += (float)0.0072240019217;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011227918789;
    } else {
      sum += (float)-0.0097516980022;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0026943827979;
    } else {
      sum += (float)-0.012885290198;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.011783103459;
    } else {
      sum += (float)-0.0014473774936;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0031887998339;
    } else {
      sum += (float)-0.011594285257;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011140642688;
    } else {
      sum += (float)-0.0096627986059;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0026827710681;
    } else {
      sum += (float)-0.012810069136;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.011656115763;
    } else {
      sum += (float)-0.0038333071861;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0020925388671;
    } else {
      sum += (float)-0.012021677569;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.011660926975;
    } else {
      sum += (float)-0.0014073036145;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0060027246363;
    } else {
      sum += (float)-0.010936330073;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.011015572585;
    } else {
      sum += (float)-0.0095474030823;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0027002501301;
    } else {
      sum += (float)-0.01270320639;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.011534768157;
    } else {
      sum += (float)-0.0037512227427;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.011355341412;
    } else {
      sum += (float)0.0071832202375;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.011543188244;
    } else {
      sum += (float)-0.0013686947059;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0032184768934;
    } else {
      sum += (float)-0.011371365748;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.010895058513;
    } else {
      sum += (float)-0.0094181094319;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0027180302422;
    } else {
      sum += (float)-0.012602729723;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.010970877483;
    } else {
      sum += (float)-0.0070047900081;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0021652728319;
    } else {
      sum += (float)-0.011813343503;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.010809736326;
    } else {
      sum += (float)-0.0093466760591;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0026937446091;
    } else {
      sum += (float)-0.012533373199;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.011393045075;
    } else {
      sum += (float)-0.0013762533199;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0032185500022;
    } else {
      sum += (float)-0.011237856932;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.011303840205;
    } else {
      sum += (float)-0.0036211891565;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.011145985685;
    } else {
      sum += (float)0.0071472469717;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
      sum += (float)0.010694342665;
    } else {
      sum += (float)-0.009222432971;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].qvalue < 0) ) ) {
      sum += (float)0.0027107701171;
    } else {
      sum += (float)-0.012439196929;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].qvalue < 0) ) ) {
      sum += (float)0.011738497764;
    } else {
      sum += (float)-0.00076657003956;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0088255153969;
    } else {
      sum += (float)-0.0099144410342;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 8) ) ) {
      sum += (float)0.011251905933;
    } else {
      sum += (float)-0.0013089195127;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.003186232876;
    } else {
      sum += (float)-0.011107397266;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
      sum += (float)0.010582139716;
    } else {
      sum += (float)-0.0071330941282;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.011566702276;
    } else {
      sum += (float)0.0071128946729;
    }
  }
  return sum;
}
