#include "header.h"
float predict_margin_unit0(union Entry* data) {
  float sum = (float)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.018714286387;
    } else {
      sum += (float)-0.0045161289163;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0024999999441;
    } else {
      sum += (float)-0.018888887018;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.018531421199;
    } else {
      sum += (float)-0.0044768149965;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0024812524207;
    } else {
      sum += (float)-0.018706876785;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.018353465945;
    } else {
      sum += (float)-0.0044378801249;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0024626518134;
    } else {
      sum += (float)-0.018529780209;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.017703937367;
    } else {
      sum += (float)-0.0098929125816;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0024441960268;
    } else {
      sum += (float)-0.01835741289;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.018015883863;
    } else {
      sum += (float)-0.0044112340547;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.002425884828;
    } else {
      sum += (float)-0.018189586699;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.01738191396;
    } else {
      sum += (float)-0.0097796376795;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0024077144917;
    } else {
      sum += (float)-0.018026124686;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.017695281655;
    } else {
      sum += (float)-0.0043846261688;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0023896866478;
    } else {
      sum += (float)-0.01786685735;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.017075521871;
    } else {
      sum += (float)-0.0096682496369;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0023717971053;
    } else {
      sum += (float)-0.017711624503;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.017390396446;
    } else {
      sum += (float)-0.0043580862693;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0023540477268;
    } else {
      sum += (float)-0.017560280859;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.016783608124;
    } else {
      sum += (float)-0.0095586879179;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0023364366498;
    } else {
      sum += (float)-0.017412675545;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.01710008271;
    } else {
      sum += (float)-0.0043316376396;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.002318959916;
    } else {
      sum += (float)-0.017268678173;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.016505146399;
    } else {
      sum += (float)-0.0094509040937;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0023016207851;
    } else {
      sum += (float)-0.017128152773;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.01682330668;
    } else {
      sum += (float)-0.0043053049594;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0022844122723;
    } else {
      sum += (float)-0.016990976408;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.01668789424;
    } else {
      sum += (float)-0.0042680297047;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.002267339034;
    } else {
      sum += (float)-0.016857033595;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.016112692654;
    } else {
      sum += (float)-0.0093120811507;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0022503978107;
    } else {
      sum += (float)-0.016726206988;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.016429735348;
    } else {
      sum += (float)-0.00424188748;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0022335862741;
    } else {
      sum += (float)-0.016598390415;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.01586391218;
    } else {
      sum += (float)-0.0092084426433;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0022169027943;
    } else {
      sum += (float)-0.016473479569;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.016182905063;
    } else {
      sum += (float)-0.0042159087025;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.002200350631;
    } else {
      sum += (float)-0.016351377591;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.015625625849;
    } else {
      sum += (float)-0.0091064181179;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0021839223336;
    } else {
      sum += (float)-0.016231987625;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.015946656466;
    } else {
      sum += (float)-0.0041901073419;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0021676232573;
    } else {
      sum += (float)-0.016115222126;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.01512853615;
    } else {
      sum += (float)-0.0097205676138;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0015222234651;
    } else {
      sum += (float)-0.016290200874;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.015722218901;
    } else {
      sum += (float)-0.004159945529;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 0) ) ) {
      sum += (float)0.0058600823395;
    } else {
      sum += (float)-0.015545847826;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.014912069775;
    } else {
      sum += (float)-0.0096075190231;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0015724000987;
    } else {
      sum += (float)-0.016071528196;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.015506904572;
    } else {
      sum += (float)-0.0041301208548;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0012287345016;
    } else {
      sum += (float)-0.015794681385;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.015528442338;
    } else {
      sum += (float)-0.0031474295538;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.002177068498;
    } else {
      sum += (float)-0.015583895147;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.014608147554;
    } else {
      sum += (float)-0.0094955004752;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0016025929945;
    } else {
      sum += (float)-0.015762042254;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.015325806104;
    } else {
      sum += (float)-0.0031693535857;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0012800900731;
    } else {
      sum += (float)-0.015494321473;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.014412599616;
    } else {
      sum += (float)-0.0094240941107;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0016452372074;
    } else {
      sum += (float)-0.015566191636;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.01501529105;
    } else {
      sum += (float)-0.0041967160068;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.002137510106;
    } else {
      sum += (float)-0.015195783228;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.015040869825;
    } else {
      sum += (float)-0.0032441832591;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0013293831144;
    } else {
      sum += (float)-0.015211796388;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.014135570265;
    } else {
      sum += (float)-0.0093147493899;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0016729361378;
    } else {
      sum += (float)-0.015287023038;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.0147401141;
    } else {
      sum += (float)-0.004209919367;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0013273141813;
    } else {
      sum += (float)-0.015030473471;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
      sum += (float)0.014588662423;
    } else {
      sum += (float)-0.0033399816602;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0017134331865;
    } else {
      sum += (float)-0.015109958127;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.014566103928;
    } else {
      sum += (float)-0.0042153340764;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0021386323497;
    } else {
      sum += (float)-0.01475355681;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
      sum += (float)0.014416050166;
    } else {
      sum += (float)-0.0033526143525;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.00168896385;
    } else {
      sum += (float)-0.014936904423;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.014398333617;
    } else {
      sum += (float)-0.0042201108299;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0013783517061;
    } else {
      sum += (float)-0.014694274403;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.014433606528;
    } else {
      sum += (float)-0.0033585240599;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0013675838709;
    } else {
      sum += (float)-0.014608845115;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.01354749687;
    } else {
      sum += (float)-0.0091438246891;
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].qvalue < 0) ) ) {
      sum += (float)0.0017776308814;
    } else {
      sum += (float)-0.014696044847;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.01427144371;
    } else {
      sum += (float)-0.0033745770343;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0021381897386;
    } else {
      sum += (float)-0.014351211488;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 6) ) ) {
      sum += (float)0.013388714753;
    } else {
      sum += (float)-0.009076426737;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.014393318444;
    } else {
      sum += (float)0.0036654782016;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 2) ) ) {
      sum += (float)0.014004384167;
    } else {
      sum += (float)-0.0042755431496;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0014360187342;
    } else {
      sum += (float)-0.01430332195;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.014010406099;
    } else {
      sum += (float)-0.0080143315718;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.007726601325;
    } else {
      sum += (float)-0.013504069299;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.013974322937;
    } else {
      sum += (float)-0.0034329481423;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0014232742833;
    } else {
      sum += (float)-0.014162040316;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.013862981461;
    } else {
      sum += (float)-0.0079120351002;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0076612946577;
    } else {
      sum += (float)-0.013365424238;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.013830261305;
    } else {
      sum += (float)-0.0033957278356;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.002176866401;
    } else {
      sum += (float)-0.013934182003;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.012691046111;
    } else {
      sum += (float)-0.010902018286;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0035741941538;
    } else {
      sum += (float)-0.014391078614;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.013650971465;
    } else {
      sum += (float)-0.0077808257192;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0075967470184;
    } else {
      sum += (float)-0.013179906644;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.013626832515;
    } else {
      sum += (float)-0.0034038750455;
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].qvalue < 2) ) ) {
      sum += (float)0.0014507883461;
    } else {
      sum += (float)-0.013837303035;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.012487565167;
    } else {
      sum += (float)-0.010728671215;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0036057091784;
    } else {
      sum += (float)-0.014198883437;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.013449465856;
    } else {
      sum += (float)-0.0076231602579;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0075206928886;
    } else {
      sum += (float)-0.013003862463;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.013432873413;
    } else {
      sum += (float)-0.0034118171316;
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].qvalue < 0) ) ) {
      sum += (float)0.0021315044723;
    } else {
      sum += (float)-0.013560836203;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.012292359956;
    } else {
      sum += (float)-0.010569518432;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0036366265267;
    } else {
      sum += (float)-0.014015171677;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.013256138191;
    } else {
      sum += (float)-0.0074988291599;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0074608027935;
    } else {
      sum += (float)-0.012834932655;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.013247682713;
    } else {
      sum += (float)-0.0034195899498;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
      sum += (float)-0.012908332981;
    } else {
      sum += (float)0.0073581445031;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.013132747263;
    } else {
      sum += (float)-0.0074045006186;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0074130436406;
    } else {
      sum += (float)-0.012717320584;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.012048395351;
    } else {
      sum += (float)-0.010340762325;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0037171277218;
    } else {
      sum += (float)-0.013788998127;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.013008582406;
    } else {
      sum += (float)-0.0073074712418;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0073409560136;
    } else {
      sum += (float)-0.012601370923;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      sum += (float)0.013234757818;
    } else {
      sum += (float)-0.0015334286727;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0067612491548;
    } else {
      sum += (float)-0.01264767535;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.011870424263;
    } else {
      sum += (float)-0.01017224323;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0037672244944;
    } else {
      sum += (float)-0.013624866493;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      sum += (float)0.013118614443;
    } else {
      sum += (float)-0.0015363524435;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0066862218082;
    } else {
      sum += (float)-0.012536466122;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.012776925229;
    } else {
      sum += (float)-0.0071218428202;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0071907951497;
    } else {
      sum += (float)-0.012390431017;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 4) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.012806379236;
    } else {
      sum += (float)-0.0034640105441;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
      sum += (float)-0.012505810708;
    } else {
      sum += (float)0.0073633375578;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.011648780666;
    } else {
      sum += (float)-0.0099568897858;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0038175922818;
    } else {
      sum += (float)-0.013424058445;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      sum += (float)0.012902509421;
    } else {
      sum += (float)-0.0015365306754;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0065586236306;
    } else {
      sum += (float)-0.012340010144;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.012920162641;
    } else {
      sum += (float)-0.0018607889069;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0070981853642;
    } else {
      sum += (float)-0.012201664038;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      sum += (float)0.012794955634;
    } else {
      sum += (float)-0.0014785433887;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0064445030876;
    } else {
      sum += (float)-0.012225365266;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.011439641006;
    } else {
      sum += (float)-0.0097636142746;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0038864617236;
    } else {
      sum += (float)-0.013233858161;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.012766746804;
    } else {
      sum += (float)-0.0018362783594;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0069942311384;
    } else {
      sum += (float)-0.012055628933;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      sum += (float)0.012642596848;
    } else {
      sum += (float)-0.0014368984848;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0063126282766;
    } else {
      sum += (float)-0.012080051936;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.011286200956;
    } else {
      sum += (float)-0.0096274614334;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.003932622727;
    } else {
      sum += (float)-0.013094831258;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      sum += (float)0.012542462908;
    } else {
      sum += (float)-0.0014405816328;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0062449094839;
    } else {
      sum += (float)-0.011983390898;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.012572259642;
    } else {
      sum += (float)-0.0017828618875;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0068566682748;
    } else {
      sum += (float)-0.011873202398;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 8) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 4) ) ) {
      sum += (float)0.012102395296;
    } else {
      sum += (float)-0.0036166056525;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 0) ) ) {
      sum += (float)-0.012599677779;
    } else {
      sum += (float)0.0044902847148;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.01109136641;
    } else {
      sum += (float)-0.0094429720193;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0039806920104;
    } else {
      sum += (float)-0.012924060225;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].qvalue < 4) ) ) {
      sum += (float)0.012356031686;
    } else {
      sum += (float)-0.0014399340143;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0061313700862;
    } else {
      sum += (float)-0.011812441982;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.012389744632;
    } else {
      sum += (float)-0.0017607506597;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0067690853029;
    } else {
      sum += (float)-0.011709160171;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.010949020274;
    } else {
      sum += (float)-0.0093148648739;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0040247915313;
    } else {
      sum += (float)-0.012798034586;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
      sum += (float)0.012005854398;
    } else {
      sum += (float)-0.0040695006028;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0060076415539;
    } else {
      sum += (float)-0.011681978591;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.012258909643;
    } else {
      sum += (float)-0.0017385595711;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.006656493526;
    } else {
      sum += (float)-0.011585450731;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.010811043903;
    } else {
      sum += (float)-0.0091897584498;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0040617347695;
    } else {
      sum += (float)-0.012680666521;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
      sum += (float)0.011876588687;
    } else {
      sum += (float)-0.0040808874182;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0058868229389;
    } else {
      sum += (float)-0.011555863544;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[24].missing != -1) || (data[24].qvalue < 0) ) ) {
      sum += (float)0.011766030453;
    } else {
      sum += (float)-0.0067107873037;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0065467921086;
    } else {
      sum += (float)-0.011466006748;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.011661489494;
    } else {
      sum += (float)-0.0040243514813;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
      sum += (float)-0.01227491349;
    } else {
      sum += (float)0.0075086960569;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.010634217411;
    } else {
      sum += (float)-0.0090366769582;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0041034338064;
    } else {
      sum += (float)-0.012534479611;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
      sum += (float)0.011708494276;
    } else {
      sum += (float)-0.0040606879629;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0057781240903;
    } else {
      sum += (float)-0.011408394203;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.012138070539;
    } else {
      sum += (float)-0.0066657969728;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0055151791312;
    } else {
      sum += (float)-0.011379903182;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 0) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 2) ) ) {
      sum += (float)0.011934542097;
    } else {
      sum += (float)-0.0017706283834;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 0) ) ) {
      sum += (float)0.0064131179824;
    } else {
      sum += (float)-0.011275025085;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
      sum += (float)0.011591858231;
    } else {
      sum += (float)-0.0040267505683;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0056292945519;
    } else {
      sum += (float)-0.011283995584;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.012022894807;
    } else {
      sum += (float)-0.0065721492283;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0054147006012;
    } else {
      sum += (float)-0.01125246007;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.011382077821;
    } else {
      sum += (float)-0.0039299302734;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
      sum += (float)-0.012039171532;
    } else {
      sum += (float)0.0074897371233;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.011943652295;
    } else {
      sum += (float)-0.0064932792448;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0053811185062;
    } else {
      sum += (float)-0.011172926985;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
      sum += (float)0.011439793743;
    } else {
      sum += (float)-0.0039631808177;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0055004982278;
    } else {
      sum += (float)-0.011139811017;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 12) ) ) {
      sum += (float)0.010277814232;
    } else {
      sum += (float)-0.0086890412495;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0043113073334;
    } else {
      sum += (float)-0.012249850668;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.011834282428;
    } else {
      sum += (float)-0.0063778613694;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0044857375324;
    } else {
      sum += (float)-0.011309994385;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
      sum += (float)0.011329540052;
    } else {
      sum += (float)-0.0039720288478;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0053945104592;
    } else {
      sum += (float)-0.011037516408;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.011763096787;
    } else {
      sum += (float)-0.0063089141622;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].qvalue < 0) ) ) {
      sum += (float)0.0052538667805;
    } else {
      sum += (float)-0.01100215409;
    }
  }
  if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 6) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 6) ) ) {
      sum += (float)0.011121600866;
    } else {
      sum += (float)-0.0038368431851;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].qvalue < 2) ) ) {
      sum += (float)-0.011823553592;
    } else {
      sum += (float)0.0074220979586;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || (data[23].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 10) ) ) {
      sum += (float)0.011689324863;
    } else {
      sum += (float)-0.0062337946147;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 4) ) ) {
      sum += (float)0.0044151041657;
    } else {
      sum += (float)-0.011163605377;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].qvalue < 0) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].qvalue < 8) ) ) {
      sum += (float)0.01118823234;
    } else {
      sum += (float)-0.0039085075259;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].qvalue < 2) ) ) {
      sum += (float)0.0052684573457;
    } else {
      sum += (float)-0.01090547815;
    }
  }
  if ( LIKELY( !(data[22].missing != -1) || (data[22].qvalue < 2) ) ) {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].qvalue < 0) ) ) {
      sum += (float)0.011497780681;
    } else {
      sum += (float)0.0006065206835;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].qvalue < 0) ) ) {
      sum += (float)0.0044595608488;
    } else {
      sum += (float)-0.012047138996;
    }
  }
  return sum;
}
