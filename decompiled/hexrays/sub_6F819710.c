bool __usercall sub_6F819710@<al>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  __int16 v3; // cx@1
  __int16 v4; // si@1
  __int16 v5; // di@1
  __int16 v6; // bp@1
  __int16 v7; // dx@1
  __int16 v8; // cx@1
  int v9; // edi@1
  signed int v10; // esi@1
  int v11; // edx@1
  int v12; // ebp@1
  int v13; // edi@1
  int v14; // esi@1
  int v15; // edi@1
  int v16; // edx@1
  int v17; // esi@1
  int v18; // edi@1
  int v19; // esi@2
  int v20; // ebp@2
  int v21; // edx@2
  int v22; // ecx@2
  char v23; // dl@2
  int v24; // edx@3
  int v25; // esi@3
  int v26; // edi@3
  int v27; // ebp@3
  int v28; // edi@4
  int v29; // ecx@4
  int v30; // edx@4
  int v31; // esi@4
  int v32; // ecx@6
  int v33; // edi@6
  int v34; // ebp@6
  int v35; // edx@6
  int v36; // ecx@6
  char v37; // dl@6
  int v38; // ebp@7
  int v39; // edx@7
  int v40; // edi@7
  int v41; // esi@7
  int v42; // ebp@7
  int v43; // edi@8
  int v44; // esi@8
  int v45; // edx@8
  int v46; // ecx@8
  int v47; // edi@8
  int v48; // ecx@10
  int v49; // ebp@10
  int v50; // edi@10
  int v51; // edx@10
  int v52; // ecx@10
  int v53; // edi@11
  int v54; // edx@11
  int v55; // ebp@11
  int v56; // esi@11
  int v57; // edi@11
  int v58; // ebp@12
  int v59; // esi@12
  int v60; // edx@12
  int v61; // ecx@12
  int v62; // ebp@12
  bool result; // al@13

  v2 = a2;
  *(_DWORD *)(a2 + 1024) = 0;
  *(_WORD *)(a2 + 1030) = 0;
  *(_WORD *)(a2 + 1040) = 0;
  v3 = *(_WORD *)(a2 + 1064);
  v4 = *(_WORD *)(a2 + 1066);
  *(_WORD *)(a2 + 1028) = 0;
  *(_WORD *)(a2 + 1042) = 0;
  *(_WORD *)(a2 + 1052) = 0;
  *(_WORD *)(a2 + 1054) = 0;
  *(_BYTE *)(a2 + 1032) = 0;
  *(_BYTE *)(a2 + 1033) = 0;
  *(_BYTE *)(a2 + 1034) = 0;
  *(_WORD *)(a2 + 1064) = v3 & 0xC000;
  *(_BYTE *)(a2 + 1035) = -1;
  *(_WORD *)(a2 + 1066) = v4 & 0xC000;
  *(_DWORD *)(a2 + 1036) = 0;
  *(_BYTE *)(a2 + 1044) = 0;
  *(_BYTE *)(a2 + 1045) = 0;
  *(_BYTE *)(a2 + 1046) = 0;
  *(_BYTE *)(a2 + 1047) = -1;
  *(_DWORD *)(a2 + 1048) = 0;
  *(_BYTE *)(a2 + 1056) = 0;
  *(_BYTE *)(a2 + 1057) = 0;
  *(_BYTE *)(a2 + 1058) = 0;
  *(_BYTE *)(a2 + 1059) = -1;
  *(_DWORD *)(a2 + 1060) = 0;
  *(_BYTE *)(a2 + 1065) = -64;
  *(_BYTE *)(a2 + 1067) = -64;
  *(_DWORD *)(a2 + 1068) = 0;
  v5 = *(_WORD *)(a2 + 1072);
  v6 = *(_WORD *)(a2 + 1074);
  v7 = *(_WORD *)(a2 + 1080);
  v8 = *(_WORD *)(v2 + 1082);
  *(_DWORD *)(v2 + 1076) = 0;
  *(_WORD *)(v2 + 1072) = v5 & 0xC000;
  *(_WORD *)(v2 + 1074) = v6 & 0xC000;
  *(_BYTE *)(v2 + 1073) = -64;
  *(_WORD *)(v2 + 1082) = v8 & 0xC000;
  *(_BYTE *)(v2 + 1075) = -64;
  *(_BYTE *)(v2 + 1083) = -64;
  *(_WORD *)(v2 + 1080) = v7 & 0xC000;
  *(_BYTE *)(v2 + 1081) = -64;
  v9 = *(_DWORD *)(a1 + 51756);
  v10 = *(_DWORD *)(a1 + 51752) * 16 * *(_DWORD *)(a1 + 124);
  LOBYTE(v6) = *(_DWORD *)(a1 + 48);
  v11 = *(_DWORD *)(a1 + 48) >> 1;
  *(_DWORD *)(v2 + 1228) = v9;
  LOBYTE(v8) = (v6 & 1 ^ 1) + ((v11 ^ 1) & 1);
  v12 = *(_DWORD *)(a1 + 120);
  v13 = v9 + 4 * v10;
  *(_DWORD *)(v2 + 1232) = v13;
  v14 = v13 + 4 * (v10 >> v8);
  v15 = *(_DWORD *)(a1 + 252);
  *(_DWORD *)(v2 + 1236) = v14;
  v16 = v15 + 4 * v12;
  *(_DWORD *)(v2 + 1240) = v15;
  *(_DWORD *)(v2 + 1252) = v16;
  *(_DWORD *)(v2 + 1244) = v16;
  v17 = v16 + 4 * *(_DWORD *)(a1 + 152);
  *(_DWORD *)(v2 + 1256) = v17;
  *(_DWORD *)(v2 + 1248) = v17;
  v18 = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(v2 + 1264) = 0;
  *(_DWORD *)(v2 + 1268) = 0;
  *(_DWORD *)(v2 + 1272) = 0;
  *(_DWORD *)(v2 + 1260) = v17 + 4 * v18;
  *(_DWORD *)(v2 + 1276) = 0;
  *(_DWORD *)(v2 + 1280) = 0;
  *(_DWORD *)(v2 + 1284) = 0;
  if ( *(_BYTE *)(a1 + 794) )
  {
    v19 = a1 + 24 * *(_BYTE *)(a1 + 795);
    v20 = *(_DWORD *)(v19 + 74040);
    v21 = *(_DWORD *)(v19 + 804);
    v22 = *(_DWORD *)(v19 + 74044);
    *(_DWORD *)(v2 + 1084) = *(_DWORD *)(v19 + 800);
    *(_DWORD *)(v2 + 1156) = v20;
    *(_DWORD *)(v2 + 1088) = v21;
    *(_DWORD *)(v2 + 1160) = v22;
    v23 = *(_BYTE *)(a1 + 794);
    if ( (signed int)*(_BYTE *)(a1 + 794) > 1 )
    {
      v24 = a1 + 24 * *(_BYTE *)(a1 + 796);
      v25 = *(_DWORD *)(v24 + 74040);
      v26 = *(_DWORD *)(v24 + 804);
      v27 = *(_DWORD *)(v24 + 74044);
      *(_DWORD *)(v2 + 1092) = *(_DWORD *)(v24 + 800);
      *(_DWORD *)(v2 + 1164) = v25;
      *(_DWORD *)(v2 + 1096) = v26;
      *(_DWORD *)(v2 + 1168) = v27;
      v23 = *(_BYTE *)(a1 + 794);
      if ( (signed int)*(_BYTE *)(a1 + 794) > 2 )
      {
        v28 = a1 + 24 * *(_BYTE *)(a1 + 797);
        v29 = *(_DWORD *)(v28 + 74040);
        v30 = *(_DWORD *)(v28 + 804);
        v31 = *(_DWORD *)(v28 + 74044);
        *(_DWORD *)(v2 + 1100) = *(_DWORD *)(v28 + 800);
        *(_DWORD *)(v2 + 1172) = v29;
        *(_DWORD *)(v2 + 1104) = v30;
        *(_DWORD *)(v2 + 1176) = v31;
        v23 = *(_BYTE *)(a1 + 794);
      }
    }
    if ( v23 )
    {
      v32 = a1 + 24 * *(_BYTE *)(a1 + 795) + 8;
      v33 = a1 + 24 * *(_BYTE *)(a1 + 795);
      v34 = *(_DWORD *)(v33 + 812);
      *(_DWORD *)(v2 + 1108) = *(_DWORD *)(a1 + 24 * *(_BYTE *)(a1 + 795) + 808);
      v35 = *(_DWORD *)(v32 + 74040);
      v36 = *(_DWORD *)(v33 + 74052);
      *(_DWORD *)(v2 + 1112) = v34;
      *(_DWORD *)(v2 + 1180) = v35;
      *(_DWORD *)(v2 + 1184) = v36;
      v37 = *(_BYTE *)(a1 + 794);
      if ( (signed int)*(_BYTE *)(a1 + 794) > 1 )
      {
        v38 = a1 + 24 * *(_BYTE *)(a1 + 796) + 8;
        v39 = a1 + 24 * *(_BYTE *)(a1 + 796);
        v40 = *(_DWORD *)(v39 + 812);
        *(_DWORD *)(v2 + 1116) = *(_DWORD *)(a1 + 24 * *(_BYTE *)(a1 + 796) + 808);
        v41 = *(_DWORD *)(v38 + 74040);
        v42 = *(_DWORD *)(v39 + 74052);
        *(_DWORD *)(v2 + 1120) = v40;
        *(_DWORD *)(v2 + 1188) = v41;
        *(_DWORD *)(v2 + 1192) = v42;
        v37 = *(_BYTE *)(a1 + 794);
        if ( (signed int)*(_BYTE *)(a1 + 794) > 2 )
        {
          v43 = a1 + 24 * *(_BYTE *)(a1 + 797) + 8;
          v44 = a1 + 24 * *(_BYTE *)(a1 + 797);
          v45 = *(_DWORD *)(v44 + 812);
          *(_DWORD *)(v2 + 1124) = *(_DWORD *)(a1 + 24 * *(_BYTE *)(a1 + 797) + 808);
          v46 = *(_DWORD *)(v43 + 74040);
          v47 = *(_DWORD *)(v44 + 74052);
          *(_DWORD *)(v2 + 1128) = v45;
          *(_DWORD *)(v2 + 1196) = v46;
          *(_DWORD *)(v2 + 1200) = v47;
          v37 = *(_BYTE *)(a1 + 794);
        }
      }
      if ( v37 )
      {
        v48 = a1 + 24 * *(_BYTE *)(a1 + 795) + 16;
        v49 = a1 + 24 * *(_BYTE *)(a1 + 795);
        v50 = *(_DWORD *)(v49 + 820);
        *(_DWORD *)(v2 + 1132) = *(_DWORD *)(a1 + 24 * *(_BYTE *)(a1 + 795) + 816);
        v51 = *(_DWORD *)(v48 + 74040);
        v52 = *(_DWORD *)(v49 + 74060);
        *(_DWORD *)(v2 + 1136) = v50;
        *(_DWORD *)(v2 + 1204) = v51;
        *(_DWORD *)(v2 + 1208) = v52;
        if ( (signed int)*(_BYTE *)(a1 + 794) > 1 )
        {
          v53 = a1 + 24 * *(_BYTE *)(a1 + 796) + 16;
          v54 = a1 + 24 * *(_BYTE *)(a1 + 796);
          v55 = *(_DWORD *)(v54 + 820);
          *(_DWORD *)(v2 + 1140) = *(_DWORD *)(a1 + 24 * *(_BYTE *)(a1 + 796) + 816);
          v56 = *(_DWORD *)(v53 + 74040);
          v57 = *(_DWORD *)(v54 + 74060);
          *(_DWORD *)(v2 + 1144) = v55;
          *(_DWORD *)(v2 + 1212) = v56;
          *(_DWORD *)(v2 + 1216) = v57;
          if ( (signed int)*(_BYTE *)(a1 + 794) > 2 )
          {
            v58 = a1 + 24 * *(_BYTE *)(a1 + 797) + 16;
            v59 = a1 + 24 * *(_BYTE *)(a1 + 797);
            v60 = *(_DWORD *)(v59 + 820);
            *(_DWORD *)(v2 + 1148) = *(_DWORD *)(a1 + 24 * *(_BYTE *)(a1 + 797) + 816);
            v61 = *(_DWORD *)(v58 + 74040);
            v62 = *(_DWORD *)(v59 + 74060);
            *(_DWORD *)(v2 + 1152) = v60;
            *(_DWORD *)(v2 + 1220) = v61;
            *(_DWORD *)(v2 + 1224) = v62;
          }
        }
      }
    }
  }
  *(_DWORD *)(v2 + 1348) = 0;
  *(_DWORD *)(v2 + 1360) = 0;
  *(_DWORD *)(v2 + 1352) = 0;
  *(_DWORD *)(v2 + 1364) = 0;
  *(_DWORD *)(v2 + 1356) = 0;
  *(_DWORD *)(v2 + 1368) = 0;
  result = sub_6F818650(a1, v2) == 0;
  *(_DWORD *)(v2 + 1372) = result;
  return result;
}
