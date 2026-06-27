int __usercall sub_6F72C010@<eax>(int a1@<eax>, __int16 a2@<dx>, __int16 a3@<cx>, int a4, __int16 a5, __int16 a6)
{
  int v6; // ebp@1
  void *v7; // ebx@1
  unsigned int v8; // ecx@1
  int v9; // eax@3
  int v10; // edi@3
  unsigned int v11; // edx@3
  int v12; // eax@4
  int v13; // esi@5
  int v14; // edi@6
  int v15; // eax@6
  int v16; // eax@7
  int v17; // ebp@9
  int v18; // edx@11
  int v19; // ecx@12
  unsigned __int64 v20; // kr40_8@12
  int v21; // ecx@14
  unsigned __int64 v22; // rax@14
  int v23; // edi@14
  int v24; // ebp@15
  int v25; // ecx@16
  int v26; // esi@16
  __int64 v27; // rax@16
  unsigned int v28; // edi@16
  unsigned int v29; // kr48_4@16
  int v30; // esi@16
  unsigned __int64 v31; // rax@16
  unsigned __int64 v32; // rax@17
  int v33; // edx@19
  signed int v34; // edi@19
  int v35; // ecx@19
  signed __int16 v36; // si@22
  signed __int16 v37; // ax@26
  signed __int16 v38; // dx@27
  __int16 v39; // bp@31
  __int16 v40; // di@31
  __int16 v41; // cx@31
  signed int v42; // edx@31
  int v43; // edi@33
  int v44; // eax@34
  int v45; // esi@34
  signed __int64 v46; // kr50_8@34
  signed int v47; // edi@35
  signed __int16 v48; // si@35
  unsigned int v49; // edx@40
  int v50; // ecx@40
  unsigned __int64 v51; // kr78_8@40
  signed int v52; // eax@41
  signed __int16 v53; // si@41
  signed int v54; // ebp@46
  double v55; // st7@46
  double v56; // st6@46
  long double v57; // st2@46
  double v58; // st4@46
  float v59; // ST28_4@47
  int v60; // edx@47
  int v61; // eax@48
  int v63; // esi@52
  unsigned int v64; // edi@53
  int v65; // edx@54
  signed int v66; // esi@55
  int v67; // edx@55
  int v68; // esi@56
  int v69; // eax@58
  signed int v70; // eax@59
  int v71; // ebp@60
  int v72; // edi@62
  signed int v73; // ebp@63
  unsigned int v74; // esi@63
  int v75; // edi@63
  int v76; // eax@63
  int v77; // ebp@63
  unsigned __int64 v78; // kr68_8@63
  unsigned int v79; // ebp@65
  unsigned __int64 v80; // kr70_8@65
  int v81; // edx@65
  int v82; // eax@72
  char i; // cl@73
  char v84; // cl@76
  unsigned int v85; // eax@76
  int v86; // eax@92
  int v87; // esi@92
  int v88; // ecx@92
  int v89; // edi@93
  int v90; // [sp+10h] [bp-6Ch]@5
  int v91; // [sp+10h] [bp-6Ch]@12
  signed int v92; // [sp+10h] [bp-6Ch]@33
  signed int v93; // [sp+10h] [bp-6Ch]@45
  float v94; // [sp+10h] [bp-6Ch]@46
  int v95; // [sp+10h] [bp-6Ch]@59
  int v96; // [sp+18h] [bp-64h]@5
  signed __int64 v97; // [sp+18h] [bp-64h]@22
  signed int v98; // [sp+18h] [bp-64h]@39
  float v99; // [sp+18h] [bp-64h]@46
  int v100; // [sp+18h] [bp-64h]@55
  unsigned int v101; // [sp+20h] [bp-5Ch]@12
  signed __int64 v102; // [sp+20h] [bp-5Ch]@26
  float v103; // [sp+20h] [bp-5Ch]@46
  unsigned int v104; // [sp+28h] [bp-54h]@1
  signed __int64 v105; // [sp+28h] [bp-54h]@17
  int v106; // [sp+28h] [bp-54h]@59
  __int16 v107; // [sp+34h] [bp-48h]@1
  __int16 v108; // [sp+38h] [bp-44h]@1
  int v109; // [sp+44h] [bp-38h]@8
  signed int v110; // [sp+44h] [bp-38h]@13
  int v111; // [sp+48h] [bp-34h]@12
  signed __int64 v112; // [sp+48h] [bp-34h]@14
  signed __int64 v113; // [sp+48h] [bp-34h]@63
  signed __int64 v114; // [sp+48h] [bp-34h]@65
  int v115; // [sp+50h] [bp-2Ch]@12
  signed __int64 v116; // [sp+58h] [bp-24h]@12

  v6 = a1;
  v107 = a2;
  v108 = a3;
  v7 = sub_6F961B60(0x120u);
  *(_DWORD *)v7 = *(_DWORD *)v6;
  *((_DWORD *)v7 + 71) = *(_DWORD *)(v6 + 284);
  qmemcpy(
    (void *)(((unsigned int)v7 + 4) & 0xFFFFFFFC),
    (const void *)(v6 - ((unsigned int)v7 - (((unsigned int)v7 + 4) & 0xFFFFFFFC))),
    4 * (((unsigned int)v7 + -(((unsigned int)v7 + 4) & 0xFFFFFFFC) + 288) >> 2));
  v8 = *(_DWORD *)(v6 + 28);
  v104 = *((_DWORD *)v7 + 7);
  if ( v104 <= 2 )
  {
    if ( v8 <= 2 )
    {
      v9 = a4;
      v10 = *(_WORD *)(v6 + 8 * v8 + 32);
      v11 = *(_DWORD *)(a4 + 28);
      if ( v11 <= 2 )
        goto LABEL_4;
    }
    else
    {
      v9 = a4;
      v10 = *(_WORD *)(v6 + 68);
      v11 = *(_DWORD *)(a4 + 28);
      if ( v11 <= 2 )
      {
LABEL_4:
        v12 = *(_WORD *)(v9 + 8 * v11 + 32);
        goto LABEL_5;
      }
    }
    v12 = *(_WORD *)(v9 + 68);
LABEL_5:
    v96 = 2 * v104;
    v13 = (int)v7 + 8 * v104;
    v90 = (v10 + v12) / 2;
    *(_WORD *)(v13 + 32) = v90;
    if ( v8 > 2 )
    {
      v14 = *(_WORD *)(v6 + 72);
      v15 = a4;
      if ( v11 <= 2 )
        goto LABEL_7;
    }
    else
    {
      v14 = *(_WORD *)(v6 + 8 * v8 + 34);
      v15 = a4;
      if ( v11 <= 2 )
      {
LABEL_7:
        v16 = *(_WORD *)(v15 + 8 * v11 + 34);
LABEL_8:
        v109 = (v14 + v16) / 2;
        *(_WORD *)(v13 + 34) = v109;
        if ( v8 > 2 )
          v17 = *(_WORD *)(v6 + 76);
        else
          v17 = *(_WORD *)(v6 + 8 * v8 + 36);
        if ( v11 > 2 )
          v18 = *(_WORD *)(a4 + 76);
        else
          v18 = *(_WORD *)(a4 + 8 * v11 + 36);
        v111 = v96 + 1;
        v19 = (v18 + v17) / 2;
        *(_WORD *)(v13 + 36) = v19;
        v101 = (*((_DWORD *)v7 + 6) >> 10) & 1;
        v115 = *((_WORD *)v7 + 83);
        v20 = v19 * *((_WORD *)v7 + 82)
            + ((signed __int64)*((_DWORD *)v7 + 45) << 12)
            + v90 * *((_WORD *)v7 + 80)
            + v109 * *((_WORD *)v7 + 81);
        v116 = (signed __int64)*((_DWORD *)v7 + 46) << 12;
        v91 = (*((_DWORD *)v7 + 6) >> 19) & 1;
        if ( v91 )
        {
          v110 = v20 >> 12;
          v96 = 2 * v104;
          *((_DWORD *)v7 + 33) = v110;
          v111 = 2 * v104 + 1;
        }
        else
        {
          v110 = v20;
          *((_DWORD *)v7 + 33) = v20;
        }
        v21 = v111 + 8;
        v22 = *((_WORD *)v7 + 85) * (signed int)*((_WORD *)v7 + 2 * (v111 + 8))
            + v116
            + v115 * *((_WORD *)v7 + 2 * v96 + 16)
            + *((_WORD *)v7 + 84) * (signed int)*((_WORD *)v7 + 2 * v96 + 17);
        v23 = *((_WORD *)v7 + 86);
        v112 = (signed __int64)*((_DWORD *)v7 + 47) << 12;
        if ( v91 == 1 )
        {
          v24 = v22 >> 12;
          *((_DWORD *)v7 + 34) = v24;
          v96 = 2 * v104;
          v21 = 2 * v104 + 9;
        }
        else
        {
          *((_DWORD *)v7 + 34) = v22;
          v24 = v22;
        }
        v25 = *((_WORD *)v7 + 2 * v21);
        v26 = (int)v7 + 4 * v96;
        v27 = *((_WORD *)v7 + 87) * (signed int)*(_WORD *)(v26 + 34);
        v29 = v112 + v23 * *(_WORD *)(v26 + 32);
        v28 = (unsigned __int64)(v112 + v23 * *(_WORD *)(v26 + 32)) >> 32;
        v30 = *((_WORD *)v7 + 88);
        v31 = __PAIR__(v28, v29) + v27;
        goto LABEL_17;
      }
    }
    v16 = *(_WORD *)(v15 + 72);
    goto LABEL_8;
  }
  if ( v8 > 2 )
    v63 = *(_WORD *)(v6 + 68);
  else
    v63 = *(_WORD *)(v6 + 8 * v8 + 32);
  v64 = *(_DWORD *)(a4 + 28);
  if ( v64 > 2 )
    v65 = *(_WORD *)(a4 + 68);
  else
    v65 = *(_WORD *)(a4 + 8 * v64 + 32);
  v66 = v65 + v63;
  v67 = v66 / 2;
  v100 = v66 / 2;
  *((_WORD *)v7 + 34) = v66 / 2;
  if ( v8 > 2 )
    v68 = *(_WORD *)(v6 + 72);
  else
    v68 = *(_WORD *)(v6 + 8 * v8 + 34);
  if ( v64 > 2 )
    v69 = *(_WORD *)(a4 + 72);
  else
    v69 = *(_WORD *)(a4 + 8 * v64 + 34);
  v70 = v68 + v69;
  v95 = v70 / 2;
  v106 = v70 / 2;
  *((_WORD *)v7 + 36) = v70 / 2;
  if ( v8 > 2 )
    v71 = *(_WORD *)(v6 + 76);
  else
    v71 = *(_WORD *)(v6 + 8 * v8 + 36);
  if ( v64 > 2 )
    v72 = *(_WORD *)(a4 + 76);
  else
    v72 = *(_WORD *)(a4 + 8 * v64 + 36);
  v73 = v72 + v71;
  v74 = *((_DWORD *)v7 + 6);
  v75 = *((_DWORD *)v7 + 45);
  v76 = v67 * *((_WORD *)v7 + 80);
  v25 = v73 / 2;
  v101 = (v74 >> 10) & 1;
  *((_WORD *)v7 + 38) = v73 / 2;
  v77 = *((_WORD *)v7 + 83);
  v78 = v76 + ((signed __int64)v75 << 12) + v95 * *((_WORD *)v7 + 81) + v25 * *((_WORD *)v7 + 82);
  v113 = (signed __int64)*((_DWORD *)v7 + 46) << 12;
  v91 = (v74 >> 19) & 1;
  if ( (v74 >> 19) & 1 )
  {
    v89 = *((_WORD *)v7 + 36);
    v110 = v78 >> 12;
    v100 = *((_WORD *)v7 + 34);
    v25 = *((_WORD *)v7 + 38);
    *((_DWORD *)v7 + 33) = v110;
    v106 = v89;
  }
  else
  {
    v110 = v78;
    *((_DWORD *)v7 + 33) = v78;
  }
  v80 = v106 * *((_WORD *)v7 + 84) + v113 + v100 * v77 + v25 * *((_WORD *)v7 + 85);
  v79 = v80 >> 32;
  v81 = *((_WORD *)v7 + 86);
  v114 = (signed __int64)*((_DWORD *)v7 + 47) << 12;
  if ( v91 == 1 )
  {
    v86 = *((_WORD *)v7 + 36);
    v87 = *((_WORD *)v7 + 34);
    v88 = __PAIR__(v79, (unsigned int)v80) >> 12;
    v24 = v88;
    *((_DWORD *)v7 + 34) = v88;
    v25 = *((_WORD *)v7 + 38);
    v100 = v87;
    v106 = v86;
  }
  else
  {
    *((_DWORD *)v7 + 34) = v80;
    v24 = v80;
  }
  v30 = *((_WORD *)v7 + 88);
  v31 = v106 * *((_WORD *)v7 + 87) + v114 + v100 * v81;
LABEL_17:
  v32 = v25 * v30 + v31;
  v105 = (signed __int64)v32 >> 12;
  if ( v91 == 1 )
    LODWORD(v32) = v32 >> 12;
  HIDWORD(v32) = v110;
  v34 = v32;
  *((_DWORD *)v7 + 35) = v32;
  v35 = v101 < 1 ? 0xFFFF8000 : 0;
  if ( v110 > 0x7FFF )
  {
    v97 = 0x7FFFi64;
    v36 = 0x7FFF;
  }
  else
  {
    if ( v35 >= v110 )
      v33 = v101 < 1 ? 0xFFFF8000 : 0;
    v36 = v33;
    v97 = v33;
  }
  *((_WORD *)v7 + 34) = v36;
  if ( v24 > 0x7FFF )
  {
    v102 = 0x7FFFi64;
    v37 = 0x7FFF;
  }
  else
  {
    if ( v35 >= v24 )
      v24 = v101 < 1 ? 0xFFFF8000 : 0;
    v37 = v24;
    v102 = v24;
  }
  *((_WORD *)v7 + 36) = v37;
  v38 = 0x7FFF;
  if ( v34 <= 0x7FFF )
  {
    if ( v34 >= v35 )
      LOWORD(v35) = v34;
    v38 = v35;
  }
  v39 = *((_WORD *)v7 + 50);
  v40 = *((_WORD *)v7 + 52);
  *((_WORD *)v7 + 38) = v38;
  v41 = *((_WORD *)v7 + 54);
  *((_WORD *)v7 + 48) = v39;
  *((_WORD *)v7 + 50) = v40;
  v42 = v105;
  *((_WORD *)v7 + 52) = v41;
  if ( (signed int)v105 > 0xFFFF )
  {
    v82 = -65536;
    v42 = 0xFFFF;
    v43 = *((_WORD *)v7 + 132);
    *((_WORD *)v7 + 54) = -1;
  }
  else
  {
    if ( (signed int)v105 < 0 )
    {
      v92 = 0x1FFFF;
      *((_WORD *)v7 + 54) = 0;
      goto LABEL_34;
    }
    v43 = *((_WORD *)v7 + 132);
    *((_WORD *)v7 + 54) = v105;
    v92 = 0x1FFFF;
    if ( v43 >= 2 * (signed int)v105 )
      goto LABEL_34;
    v82 = ~(_DWORD)v105;
  }
  for ( i = 0; ; ++i )
  {
    v82 *= 2;
    if ( v82 >= 0 )
      break;
  }
  v84 = i - 15;
  v85 = (unsigned __int64)((v43 << v84)
                         * (signed __int64)((((unsigned __int8)byte_6FB53680[(((v42 << v84) & 0x7FFF) + 64) >> 7] + 257)
                                           * (((128
                                              - ((unsigned __int8)byte_6FB53680[(((v42 << v84) & 0x7FFF) + 64) >> 7]
                                               + 257)
                                              * (((v42 << v84) & 0x7FFF) + 0x8000)) >> 8) & 0x1FFFF)
                                           + 128) >> 8)
                         + 0x8000) >> 16;
  if ( v85 > 0x1FFFF )
    v85 = 0x1FFFF;
  v92 = v85;
LABEL_34:
  v44 = *((_DWORD *)v7 + 22);
  v45 = *((_DWORD *)v7 + 64);
  *((_DWORD *)v7 + 20) = *((_DWORD *)v7 + 21);
  *((_DWORD *)v7 + 21) = v44;
  v46 = ((unsigned int)v92 * v97 + v45) >> 16;
  if ( v46 > 1023 )
  {
    v48 = 1023;
    v98 = 1023;
  }
  else
  {
    v47 = -1024;
    v48 = -1024;
    if ( SHIDWORD(v46) >= ((unsigned int)v46 < 0xFFFFFC00) - 1 )
      v47 = v46;
    if ( SHIDWORD(v46) >= ((unsigned int)v46 < 0xFFFFFC00) - 1 )
      v48 = v46;
    v98 = v47;
  }
  *((_WORD *)v7 + 44) = v48;
  v51 = ((unsigned int)v92 * v102 + *((_DWORD *)v7 + 65)) >> 16;
  v50 = v51 >> 32;
  v49 = v51;
  if ( __PAIR__(v50, v49) > 1023 )
  {
    v53 = 1023;
    v93 = 1023;
  }
  else
  {
    v52 = -1024;
    v53 = -1024;
    if ( v50 >= (v49 < 0xFFFFFC00) - 1 )
      v52 = v49;
    if ( v50 >= (v49 < 0xFFFFFC00) - 1 )
      v53 = v49;
    v93 = v52;
  }
  *((_WORD *)v7 + 45) = v53;
  j_j_free_1_0(v7);
  v54 = v98;
  v55 = (double)(a5 - (signed int)v107);
  v56 = (double)(a6 - (signed int)v108);
  v57 = sqrt(v55 * v55 + v56 * v56);
  v103 = fabs(v57);
  v58 = (double)(v98 - a5);
  v99 = fabs(sqrt((double)(v98 - v107) * (double)(v98 - v107) + (double)(v93 - v108) * (double)(v93 - v108)));
  v94 = fabs(sqrt(v58 * v58 + (double)(v93 - a6) * (double)(v93 - a6)));
  if ( fabs(v57) <= 0.00000011920929 )
  {
    nullsub_10();
  }
  else
  {
    v59 = fabs((v55 * (double)v53
              + (double)(a6 * (signed int)v107 - v108 * (signed int)a5)
              + (double)((v108 - (signed int)a6) * v54)) / v57);
    nullsub_10();
    if ( v59 < 10.0 )
    {
      LOBYTE(v60) = v103 > (double)v99;
      v61 = v103 <= (double)v94;
      LOBYTE(v61) = v103 > (double)v94;
      return v60 & v61;
    }
  }
  return 0;
}
