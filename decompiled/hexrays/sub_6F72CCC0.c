void sub_6F72CCC0(char arg0, int arg4, float arg8, float argC, int arg10, ...)
{
  char *v5; // ebx@2
  char *v6; // esi@3
  char v7; // cl@4
  char *v8; // ebp@4
  int v9; // edi@7
  char v10; // al@8
  char v11; // dl@10
  char v12; // cl@11
  char v13; // cl@12
  int v14; // ST00_4@12
  int v15; // ST00_4@12
  _BYTE *v16; // eax@15
  float v17; // esi@15
  int v18; // edx@16
  int *v19; // ecx@16
  signed int v20; // edi@19
  unsigned int v21; // edx@20
  size_t v22; // esi@20
  int v23; // esi@21
  char *v24; // edx@22
  int v25; // eax@23
  unsigned int v26; // edi@23
  char *v27; // edx@23
  char *v28; // esi@23
  char *v29; // ebp@23
  int v30; // ebx@26
  int v31; // ST3C_4@27
  int v32; // ST40_4@27
  int v33; // ST44_4@27
  void **v34; // edi@28
  void *v35; // ST00_4@30
  int v36; // ecx@41
  int v37; // edx@41
  int v38; // ecx@41
  int v39; // ST00_4@41
  int v40; // edx@41
  int v41; // ecx@41
  int v42; // ST00_4@41
  int v43; // ST00_4@41
  int v44; // edx@41
  int v45; // edi@41
  int v46; // ecx@41
  int v47; // ST04_4@42
  _BYTE *v48; // esi@42
  int v49; // eax@42
  int v50; // edi@43
  int v51; // ecx@48
  int v52; // ebp@49
  int v53; // eax@51
  int *v54; // edx@51
  int v55; // ebp@57
  int v56; // eax@57
  int v57; // ebx@61
  unsigned int v58; // ebp@61
  unsigned int v59; // ecx@63
  unsigned int v60; // esi@66
  unsigned int v61; // ebp@66
  char *v62; // edx@70
  unsigned int v63; // ecx@70
  int v64; // ebp@70
  unsigned int v65; // eax@71
  int v66; // ebx@71
  int v67; // eax@74
  char v68; // di@74
  unsigned int v69; // esi@78
  char v70; // bl@78
  unsigned int v71; // esi@82
  char v72; // bl@82
  int v73; // ebx@86
  unsigned int v74; // ebp@87
  char v75; // di@87
  unsigned int v76; // eax@90
  char v77; // cl@90
  unsigned int v78; // ebp@90
  int v79; // esi@93
  char v80; // bp@93
  unsigned int v81; // edi@93
  char v82; // cl@96
  char v83; // bp@96
  int v84; // esi@96
  unsigned int v85; // edi@96
  int v86; // ST00_4@103
  int v87; // ST00_4@103
  int v88; // ST00_4@103
  int v89; // ST00_4@103
  int v90; // edx@103
  int v91; // ST00_4@103
  int v92; // edi@103
  int *v93; // ebx@104
  int *v94; // eax@105
  char v95; // si@105
  unsigned int v96; // ecx@107
  unsigned int v97; // edx@107
  bool v98; // si@111
  float *v99; // eax@112
  int v100; // ecx@112
  int v101; // esi@114
  unsigned int v102; // edx@115
  int *v103; // ebx@115
  int v104; // ST00_4@123
  int v105; // edx@123
  int v106; // ecx@123
  int v107; // ST04_4@123
  double v108; // st7@123
  double v109; // st6@123
  double v110; // st5@123
  double v111; // st4@123
  double v112; // st3@123
  int v113; // ST00_4@123
  int v114; // ST00_4@123
  int v115; // ST00_4@123
  int v116; // ST00_4@123
  int v117; // ebp@126
  int v118; // edx@126
  int v119; // edx@128
  int v120; // ecx@128
  void **v121; // edi@128
  void *v122; // eax@129
  int v123; // ecx@135
  int v124; // ebp@135
  int v125; // eax@139
  int v126; // ebp@147
  int v127; // ebx@147
  int v128; // ebp@149
  int v129; // ebx@149
  _BYTE *v130; // [sp+0h] [bp-ECh]@2
  int *v131; // [sp+0h] [bp-ECh]@59
  int v132; // [sp+8h] [bp-E4h]@2
  char *v133; // [sp+30h] [bp-BCh]@21
  unsigned int v134; // [sp+30h] [bp-BCh]@86
  float v135; // [sp+30h] [bp-BCh]@103
  int v136; // [sp+38h] [bp-B4h]@2
  int v137; // [sp+38h] [bp-B4h]@49
  signed int v138; // [sp+3Ch] [bp-B0h]@65
  float v139; // [sp+3Ch] [bp-B0h]@103
  unsigned int v140; // [sp+40h] [bp-ACh]@50
  int v141; // [sp+44h] [bp-A8h]@49
  unsigned int v142; // [sp+48h] [bp-A4h]@66
  int v143; // [sp+48h] [bp-A4h]@103
  char *v144; // [sp+50h] [bp-9Ch]@2
  int v145; // [sp+54h] [bp-98h]@69
  int v146; // [sp+58h] [bp-94h]@65
  int v147; // [sp+5Ch] [bp-90h]@57
  signed int v148; // [sp+60h] [bp-8Ch]@41
  char *v149; // [sp+64h] [bp-88h]@68
  float v150; // [sp+64h] [bp-88h]@103
  char *v151; // [sp+68h] [bp-84h]@2
  float v152; // [sp+6Ch] [bp-80h]@103
  char *v153; // [sp+70h] [bp-7Ch]@41
  signed int v154; // [sp+74h] [bp-78h]@41
  float v155; // [sp+78h] [bp-74h]@41
  int v156; // [sp+7Ch] [bp-70h]@41
  int v157; // [sp+84h] [bp-68h]@59
  int v158; // [sp+88h] [bp-64h]@103
  float v159; // [sp+8Ch] [bp-60h]@123
  float v160; // [sp+90h] [bp-5Ch]@123
  float v161; // [sp+94h] [bp-58h]@123
  float v162; // [sp+98h] [bp-54h]@123
  float v163; // [sp+9Ch] [bp-50h]@123
  float v164; // [sp+A0h] [bp-4Ch]@123
  float v165; // [sp+A4h] [bp-48h]@123
  _BYTE *v166; // [sp+A8h] [bp-44h]@2
  float v167; // [sp+ACh] [bp-40h]@6
  float v168; // [sp+B0h] [bp-3Ch]@6
  float v169; // [sp+B4h] [bp-38h]@41
  float v170; // [sp+B8h] [bp-34h]@112
  float v171; // [sp+BCh] [bp-30h]@112
  float v172; // [sp+C0h] [bp-2Ch]@112
  float v173; // [sp+C4h] [bp-28h]@112
  int v174; // [sp+C8h] [bp-24h]@112
  int v175; // [sp+CCh] [bp-20h]@112
  va_list va; // [sp+104h] [bp+18h]@1

  va_start(va, arg10);
  if ( !dword_70055EF0 )
    return;
  v5 = (char *)&unk_70051EC0;
  *(float *)&v166 = COERCE_FLOAT(va);
  j__vsnprintf((char *)&unk_70051EC0, 0x4000u, (const char *)arg10, va);
  v136 = 0;
  v144 = 0;
  v151 = 0;
  while ( 1 )
  {
    v6 = v5;
    do
    {
      v7 = *v5;
      v8 = v5++;
    }
    while ( v7 && v7 != 10 );
    LOBYTE(v168) = 0;
    *(float *)&v166 = COERCE_FLOAT(&v168);
    v167 = 0.0;
    if ( v6 < v8 )
    {
      v9 = ((_BYTE)v8 + ~(_BYTE)v6) & 3;
      if ( ((_BYTE)v8 + ~(_BYTE)v6) & 3 )
      {
        v10 = *v6++;
        sub_6F93A950((int)&v166, (int)v130, 0, 1u, v10);
        if ( v9 != 1 )
        {
          if ( v9 != 2 )
          {
            v11 = *v6++;
            sub_6F93A950((int)&v166, (int)v130, 0, 1u, v11);
          }
          v12 = *v6++;
          sub_6F93A950((int)&v166, (int)v130, 0, 1u, v12);
        }
      }
      while ( 1 )
      {
        sub_6F93A950((int)&v166, (int)v130, 0, 1u, *v6);
        if ( v6 + 1 == v8 )
          break;
        v13 = v6[1];
        v6 += 4;
        sub_6F93A950((int)&v166, (int)v130, 0, 1u, v13);
        sub_6F93A950((int)&v166, v14, 0, 1u, *(v6 - 2));
        sub_6F93A950((int)&v166, v15, 0, 1u, *(v6 - 1));
      }
    }
    if ( (char *)v136 != v144 )
    {
      v16 = v166;
      v17 = v167;
      *(_DWORD *)v144 = v144 + 8;
      LOBYTE(v132) = 0;
      sub_6F93A6C0((int)v144, v16, &v16[LODWORD(v17)], v132);
      v144 += 24;
      goto LABEL_16;
    }
    v20 = v144 - v151;
    if ( -1431655765 * ((v144 - v151) >> 3) )
    {
      v21 = 1431655766 * (v20 >> 3);
      v22 = -16;
      if ( -1431655765 * (v20 >> 3) <= (unsigned int)(1431655766 * (v20 >> 3)) && v21 <= 0xAAAAAAA )
      {
        if ( !v21 )
        {
          v23 = 24;
          v136 = 0;
          v133 = 0;
          goto LABEL_22;
        }
        v22 = 16 * ((v144 - v151) >> 3);
      }
    }
    else
    {
      v22 = 24;
    }
    v133 = (char *)sub_6F961B60(v22);
    v136 = (int)&v133[v22];
    v23 = (int)(v133 + 24);
LABEL_22:
    v24 = &v166[LODWORD(v167)];
    *(_DWORD *)&v133[v20] = &v133[v20 + 8];
    LOBYTE(v132) = 0;
    sub_6F93A6C0((int)&v133[v20], v130, v24, v132);
    if ( v144 != v151 )
    {
      v25 = (int)(v151 + 8);
      v26 = 178956971 * ((unsigned int)(v144 - 24 - v151) >> 3) & 0x1FFFFFFF;
      v27 = v133;
      v28 = v8;
      v29 = v5;
      do
      {
        *(_DWORD *)v27 = v27 + 8;
        v30 = *(_DWORD *)(v25 - 8);
        if ( v30 == v25 )
        {
          v31 = *(_DWORD *)(v25 + 4);
          v32 = *(_DWORD *)(v25 + 8);
          v33 = *(_DWORD *)(v25 + 12);
          *((_DWORD *)v27 + 2) = *(_DWORD *)v25;
          *((_DWORD *)v27 + 3) = v31;
          *((_DWORD *)v27 + 4) = v32;
          *((_DWORD *)v27 + 5) = v33;
        }
        else
        {
          *(_DWORD *)v27 = v30;
          *((_DWORD *)v27 + 2) = *(_DWORD *)v25;
        }
        v27 += 24;
        *((_DWORD *)v27 - 5) = *(_DWORD *)(v25 - 4);
        *(_DWORD *)(v25 - 8) = v25;
        v25 += 24;
        *(_DWORD *)(v25 - 28) = 0;
        *(_BYTE *)(v25 - 24) = 0;
      }
      while ( v27 != &v133[8 * (3 * v26 + 3)] );
      v5 = v29;
      v8 = v28;
      v23 = (int)&v133[24 * v26 + 48];
      v34 = (void **)v151;
      do
      {
        while ( *v34 != v34 + 2 )
        {
          v35 = *v34;
          v34 += 6;
          j_free_1(v35);
          if ( (char *)v34 == v144 )
            goto LABEL_31;
        }
        v34 += 6;
      }
      while ( (char *)v34 != v144 );
    }
LABEL_31:
    if ( v151 )
      j_free_1(v151);
    v144 = (char *)v23;
    v151 = v133;
LABEL_16:
    v18 = (int)v166;
    v19 = (int *)&v168;
    if ( !*v8 )
      break;
    if ( (float *)v166 != &v168 )
      j_free_1(v166);
  }
  if ( (float *)v166 != &v168 )
    j_free_1(v166);
  glPushAttrib((int)v19, v18, 4096);
  glGetIntegerv(v36, 2978, (int)&v166);
  glMatrixMode(5889);
  glPushMatrix(v38, v37);
  glLoadIdentity();
  glOrtho(
    v39,
    COERCE_UNSIGNED_INT64((double)(signed int)v166) >> 32,
    COERCE_UNSIGNED_INT64((double)SLODWORD(v168)),
    COERCE_UNSIGNED_INT64((double)SLODWORD(v168)) >> 32,
    COERCE_UNSIGNED_INT64((double)SLODWORD(v167)),
    COERCE_UNSIGNED_INT64((double)SLODWORD(v167)) >> 32,
    COERCE_UNSIGNED_INT64((double)SLODWORD(v169)),
    COERCE_UNSIGNED_INT64((double)SLODWORD(v169)) >> 32,
    COERCE_UNSIGNED_INT64(-1.0),
    COERCE_UNSIGNED_INT64(-1.0) >> 32,
    COERCE_UNSIGNED_INT64(1.0),
    COERCE_UNSIGNED_INT64(1.0) >> 32);
  glPopAttrib();
  glPushAttrib(v41, v40, 143361);
  glMatrixMode(5888);
  glLoadIdentity();
  glDisable(2896);
  glEnable(3042);
  glBlendFunc(v42, 771);
  glEnable(3553);
  glTexEnvi(v43, 8704, 8448);
  glColor4ubv((int)&arg0);
  v44 = (int)v151;
  v148 = 0;
  v153 = v151;
  v45 = (v144 - v151) >> 3;
  v46 = -1431655765 * v45;
  v154 = arg4 << 6;
  v156 = -1431655765 * v45;
  v155 = (double)(unsigned int)arg4 * 1.5;
  if ( !(-1431655765 * v45) )
    goto LABEL_128;
  while ( 2 )
  {
    glPushMatrix(v46, v44);
    glLoadIdentity();
    *(float *)&v47 = argC - (double)v148 * v155;
    glTranslatef(SLODWORD(arg8), v47, 0);
    v48 = *(_BYTE **)v153;
    v49 = **(_BYTE **)v153;
    if ( !(_BYTE)v49 )
      goto LABEL_127;
    v50 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          ++v50;
          if ( (char)v49 >= 0 )
          {
            dword_70041EBC[v50] = v49;
            v49 = *++v48;
LABEL_45:
            if ( !(_BYTE)v49 )
              goto LABEL_49;
            continue;
          }
          break;
        }
        if ( (unsigned __int8)(v49 + 64) > 0x1Fu )
        {
          if ( (unsigned __int8)(v49 + 32) > 0xFu )
          {
            if ( (unsigned __int8)(v49 + 16) > 7u )
            {
              if ( (unsigned __int8)(v49 + 8) > 3u )
              {
                if ( (unsigned __int8)(v49 + 4) > 1u )
                  continue;
                v128 = v48[1];
                v129 = v48[2];
                v48 += 6;
                dword_70041EBC[v50] = ((((((((((v49 - 252) << 6) + v128 - 128) << 6) + v129 - 128) << 6)
                                        + *(v48 - 3)
                                        - 128) << 6)
                                      + *(v48 - 2)
                                      - 128) << 6)
                                    + *(v48 - 1)
                                    - 128;
                v49 = *v48;
              }
              else
              {
                v126 = v48[1];
                v127 = v48[2];
                v48 += 5;
                dword_70041EBC[v50] = ((((((((v49 - 248) << 6) + v126 - 128) << 6) + v127 - 128) << 6) + *(v48 - 2) - 128) << 6)
                                    + *(v48 - 1)
                                    - 128;
                v49 = *v48;
              }
            }
            else
            {
              v123 = v48[1];
              v124 = v48[2];
              v48 += 4;
              dword_70041EBC[v50] = ((((((v49 - 240) << 6) + v123 - 128) << 6) + v124 - 128) << 6) + *(v48 - 1) - 128;
              v49 = *v48;
            }
          }
          else
          {
            v117 = v48[1];
            v118 = v48[2];
            v48 += 3;
            dword_70041EBC[v50] = ((((v49 - 224) << 6) + v117 - 128) << 6) + v118 - 128;
            v49 = *v48;
          }
          goto LABEL_45;
        }
        break;
      }
      v51 = v48[1];
      v48 += 2;
      dword_70041EBC[v50] = ((v49 - 192) << 6) + v51 - 128;
      v49 = *v48;
      if ( (_BYTE)v49 )
        continue;
      break;
    }
LABEL_49:
    v141 = v50;
    v52 = dword_6FBBFDD0;
    v137 = 0;
    while ( 2 )
    {
      v140 = dword_70041EC0[v137];
      if ( v52 )
      {
        v53 = v52;
        v54 = &dword_6FBBFDCC;
        do
        {
          while ( *(_DWORD *)(v53 + 20) >= (unsigned int)(*(_DWORD *)(v53 + 16) < v140) + arg4 )
          {
            v54 = (int *)v53;
            v53 = *(_DWORD *)(v53 + 8);
            if ( !v53 )
              goto LABEL_55;
          }
          v53 = *(_DWORD *)(v53 + 12);
        }
        while ( v53 );
LABEL_55:
        if ( v54 != &dword_6FBBFDCC && arg4 >= (unsigned int)(v140 < v54[4]) + v54[5] )
          goto LABEL_113;
      }
      v55 = dword_70055EF8;
      v147 = dword_70055EF8;
      sub_6F76CC90(dword_70055EF8, v154, v154, 96, 96);
      v56 = sub_6F76D560(v55);
      if ( sub_6F76E6F0(v55, v56, 0) )
        nullsub_10();
      if ( sub_6F768130(*(_DWORD *)(v147 + 84), &v157) )
      {
        v131 = 0;
        nullsub_10();
      }
      sub_6F7683C0(v131, 0, 0, 1);
      v57 = v157;
      v58 = *(_DWORD *)(v157 + 32);
      if ( byte_7036F85E )
      {
        v138 = *(_DWORD *)(v157 + 32);
        v146 = *(int *)(v157 + 32);
        v142 = *(_DWORD *)(v157 + 28);
        *(float *)&v145 = 0.0;
        v149 = (char *)sub_6F961B40(2 * v142 * v58);
        if ( v142 )
          goto LABEL_69;
      }
      else
      {
        if ( v58 <= 1 )
        {
          v146 = 1;
          v138 = 1;
        }
        else
        {
          v59 = 1;
          do
            v59 *= 2;
          while ( v58 > v59 );
          v138 = v59;
          v146 = v59;
        }
        v60 = *(_DWORD *)(v157 + 28);
        v142 = 1;
        v61 = 1;
        if ( v60 <= 1 )
        {
          v145 = 1;
          v149 = (char *)sub_6F961B40(2 * v138);
          goto LABEL_70;
        }
        do
          v61 *= 2;
        while ( v60 > v61 );
        v142 = v61;
        v149 = (char *)sub_6F961B40(2 * v61 * v138);
LABEL_69:
        v145 = v142;
        if ( v138 )
        {
LABEL_70:
          v62 = v149;
          v63 = 0;
          v64 = v57;
          do
          {
            v65 = 0;
            v66 = v138 & 3;
            if ( !(v138 & 3) )
              goto LABEL_159;
            if ( v66 != 1 )
            {
              if ( v66 != 2 )
              {
                *v62 = -1;
                v67 = *(_DWORD *)(v64 + 32);
                v68 = 0;
                if ( v67 && *(_DWORD *)(v64 + 28) > v63 )
                  v68 = *(_BYTE *)(*(_DWORD *)(v64 + 40) + v63 * v67);
                v65 = 1;
                v62[1] = v68;
              }
              v62[2 * v65] = -1;
              v69 = *(_DWORD *)(v64 + 32);
              v70 = 0;
              if ( v69 > v65 && *(_DWORD *)(v64 + 28) > v63 )
                v70 = *(_BYTE *)(v65 + *(_DWORD *)(v64 + 40) + v63 * v69);
              v62[2 * v65++ + 1] = v70;
            }
            v62[2 * v65] = -1;
            v71 = *(_DWORD *)(v64 + 32);
            v72 = 0;
            if ( v71 > v65 && *(_DWORD *)(v64 + 28) > v63 )
              v72 = *(_BYTE *)(v65 + *(_DWORD *)(v64 + 40) + v63 * v71);
            v62[2 * v65++ + 1] = v72;
            if ( v65 != v138 )
            {
LABEL_159:
              v134 = v63;
              v73 = v64;
              do
              {
                v62[2 * v65] = -1;
                v74 = *(_DWORD *)(v73 + 32);
                v75 = 0;
                if ( v74 > v65 && *(_DWORD *)(v73 + 28) > v134 )
                  v75 = *(_BYTE *)(v65 + *(_DWORD *)(v73 + 40) + v134 * v74);
                v62[2 * v65 + 1] = v75;
                v76 = v65 + 1;
                v77 = 0;
                v62[2 * v76] = -1;
                v78 = *(_DWORD *)(v73 + 32);
                if ( v78 > v76 && *(_DWORD *)(v73 + 28) > v134 )
                  v77 = *(_BYTE *)(v76 + *(_DWORD *)(v73 + 40) + v134 * v78);
                v79 = v76 + 1;
                v62[2 * v76 + 1] = v77;
                v80 = 0;
                v62[2 * (v76 + 1)] = -1;
                v81 = *(_DWORD *)(v73 + 32);
                if ( v81 > v76 + 1 && *(_DWORD *)(v73 + 28) > v134 )
                  v80 = *(_BYTE *)(v79 + *(_DWORD *)(v73 + 40) + v134 * v81);
                v82 = v80;
                v83 = 0;
                v62[2 * v79 + 1] = v82;
                v84 = v76 + 2;
                v62[2 * (v76 + 2)] = -1;
                v85 = *(_DWORD *)(v73 + 32);
                if ( v85 > v76 + 2 && *(_DWORD *)(v73 + 28) > v134 )
                  v83 = *(_BYTE *)(v84 + *(_DWORD *)(v73 + 40) + v134 * v85);
                v65 = v76 + 3;
                v62[2 * v84 + 1] = v83;
              }
              while ( v65 != v138 );
              v63 = v134;
              v64 = v73;
            }
            ++v63;
            v62 += 2 * v138;
          }
          while ( v63 < v142 );
          v57 = v64;
        }
      }
      glGenTextures(1, (int)&v158);
      glBindTexture(3553, v158);
      glTexParameteri(v86, 10242, 10496);
      glTexParameteri(v87, 10243, 10496);
      glTexParameteri(v88, 10240, 9728);
      glTexParameteri(v89, 10241, 9728);
      glTexImage2D(v146, v90, v91, 0, 32856, v146, v145, 0, 6410, 5121, (int)v149);
      j_j_free_1(v149);
      v150 = *(float *)(v57 + 20);
      v135 = *(float *)(v57 + 24);
      v152 = *(float *)(v57 + 32);
      v92 = v158;
      v139 = *(float *)(v57 + 28);
      v143 = *(_DWORD *)(*(_DWORD *)(v147 + 84) + 64);
      sub_6F768380(v157);
      v52 = dword_6FBBFDD0;
      if ( !dword_6FBBFDD0 )
      {
        v93 = &dword_6FBBFDCC;
        if ( (int *)dword_6FBBFDD4 == &dword_6FBBFDCC )
        {
          v98 = 1;
          goto LABEL_112;
        }
        goto LABEL_139;
      }
      v93 = (int *)dword_6FBBFDD0;
      while ( 2 )
      {
        v96 = v93[4];
        v97 = v93[5];
        if ( arg4 < (v140 < v96) + v97 )
        {
          v94 = (int *)v93[2];
          v95 = 1;
          if ( !v94 )
            break;
          goto LABEL_106;
        }
        v94 = (int *)v93[3];
        v95 = 0;
        if ( v94 )
        {
LABEL_106:
          v93 = v94;
          continue;
        }
        break;
      }
      v52 = dword_6FBBFDD0;
      if ( v95 )
      {
        if ( (int *)dword_6FBBFDD4 == v93 )
        {
LABEL_111:
          v98 = 1;
          if ( v93 != &dword_6FBBFDCC )
LABEL_142:
            v98 = arg4 < (unsigned int)(v140 < v93[4]) + v93[5];
LABEL_112:
          v99 = (float *)sub_6F961B60(0x38u);
          v175 = v92;
          v100 = arg4;
          *((_DWORD *)v99 + 13) = v92;
          *((_DWORD *)v99 + 4) = v140;
          *((_DWORD *)v99 + 5) = v100;
          v171 = *(float *)&v146;
          v169 = v135;
          v172 = *(float *)&v145;
          v99[6] = v150;
          v99[8] = v152;
          v168 = v150;
          v170 = v152;
          v173 = v139;
          v99[7] = v135;
          v99[9] = *(float *)&v146;
          v174 = v143;
          *((_DWORD *)v99 + 12) = v143;
          v99[10] = *(float *)&v145;
          v99[11] = v139;
          sub_6F95C050(v98, (int)v99, (int)v93, (int)&dword_6FBBFDCC);
          ++dword_6FBBFDDC;
          v52 = dword_6FBBFDD0;
          goto LABEL_113;
        }
LABEL_139:
        sub_6F95ABE0((int)v93);
        if ( *(_DWORD *)(v125 + 20) >= (unsigned int)(*(_DWORD *)(v125 + 16) < v140) + arg4 || !v93 )
          goto LABEL_113;
        v98 = 1;
        if ( v93 != &dword_6FBBFDCC )
          goto LABEL_142;
        goto LABEL_112;
      }
      if ( v97 < (unsigned int)(v96 < v140) + arg4 )
        goto LABEL_111;
LABEL_113:
      if ( ++v137 != v141 )
        continue;
      break;
    }
    v101 = 0;
    while ( 1 )
    {
      v102 = dword_70041EC0[v101];
      v103 = &dword_6FBBFDCC;
      if ( v52 )
      {
        do
        {
          while ( *(_DWORD *)(v52 + 20) >= (unsigned int)(*(_DWORD *)(v52 + 16) < v102) + arg4 )
          {
            v103 = (int *)v52;
            v52 = *(_DWORD *)(v52 + 8);
            if ( !v52 )
              goto LABEL_120;
          }
          v52 = *(_DWORD *)(v52 + 12);
        }
        while ( v52 );
LABEL_120:
        if ( v103 != &dword_6FBBFDCC && arg4 < (unsigned int)(v102 < v103[4]) + v103[5] )
          v103 = &dword_6FBBFDCC;
      }
      ++v101;
      glBindTexture(3553, v103[13]);
      *(float *)&v104 = (double)v103[6];
      glTranslatef(v104, COERCE_INT(0.0), COERCE_INT(0.0));
      glPushMatrix(v106, v105);
      *(float *)&v107 = (double)(v103[7] - v103[11]);
      glTranslatef(COERCE_INT(0.0), v107, COERCE_INT(0.0));
      v108 = (double)v103[8];
      v109 = v108 / (double)v103[9];
      v110 = (double)v103[11];
      v111 = (double)v103[10];
      *(float *)&v158 = 0.0;
      v159 = 0.0;
      v160 = 0.0;
      v112 = v110 / v111;
      v161 = v112;
      v162 = v109;
      v163 = 0.0;
      v164 = v109;
      v165 = v112;
      *(float *)&v166 = 0.0;
      v167 = v110;
      v168 = 0.0;
      v169 = 0.0;
      v170 = v108;
      v171 = v110;
      v172 = v108;
      v173 = 0.0;
      glVertexPointer(v113, 5126, 0, (int)&v166);
      glEnableClientState(32884);
      glTexCoordPointer(v114, 5126, 0, (int)&v158);
      glEnableClientState(32888);
      glDrawArrays(v115, 0, 4);
      glDisableClientState(32888);
      glDisableClientState(32884);
      glPopMatrix();
      *(float *)&v116 = (double)(v103[12] >> 6);
      glTranslatef(v116, COERCE_INT(0.0), COERCE_INT(0.0));
      if ( v101 == v141 )
        break;
      v52 = dword_6FBBFDD0;
    }
LABEL_127:
    glPopMatrix();
    ++v148;
    v153 += 24;
    if ( v148 != v156 )
      continue;
    break;
  }
LABEL_128:
  glPopAttrib();
  glPushAttrib(v120, v119, 4096);
  glMatrixMode(5889);
  glPopMatrix();
  glPopAttrib();
  v121 = (void **)v151;
  if ( v151 == v144 )
  {
LABEL_131:
    if ( !v151 )
      return;
    goto LABEL_132;
  }
  do
  {
    while ( 1 )
    {
      v122 = *v121;
      if ( *v121 == v121 + 2 )
        break;
      v121 += 6;
      j_free_1(v122);
      if ( (char *)v121 == v144 )
        goto LABEL_131;
    }
    v121 += 6;
  }
  while ( (char *)v121 != v144 );
  if ( v151 )
LABEL_132:
    j_free_1(v151);
}
