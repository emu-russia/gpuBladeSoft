int __usercall sub_6F7B41A0@<eax>(int a1@<eax>, unsigned int a2@<edx>, unsigned int a3@<ecx>, char a4)
{
  int v4; // ebx@1
  int v5; // ebp@2
  bool v7; // zf@4
  int v8; // esi@4
  int v9; // esi@6
  int v10; // eax@6
  int v11; // ST08_4@8
  unsigned int v12; // eax@8
  int v13; // ecx@9
  int v14; // edx@10
  int v15; // esi@16
  char v16; // di@18
  __int16 v17; // ax@20
  signed int v18; // eax@21
  int v19; // edx@23
  int v20; // eax@23
  int v21; // ecx@23
  int v22; // eax@23
  int v23; // ebp@23
  int v24; // eax@23
  int v25; // eax@23
  int v26; // edx@23
  int (__cdecl *v27)(_DWORD, unsigned int, _DWORD, int *); // ecx@24
  int v28; // eax@26
  int v29; // eax@26
  signed __int64 v30; // rax@31
  signed __int64 v31; // rax@31
  signed __int64 v32; // rax@31
  signed __int64 v33; // rax@31
  signed __int64 v34; // rax@31
  signed __int64 v35; // rax@31
  int v36; // ecx@35
  int v37; // edx@35
  int v38; // ebp@35
  int v39; // edx@35
  int v40; // edx@35
  int v41; // edx@35
  int (__cdecl *v42)(_DWORD, unsigned int, _DWORD, int *); // ecx@36
  int v43; // eax@38
  int v44; // eax@38
  int v45; // edi@43
  int v46; // eax@43
  int v47; // edx@43
  int v48; // edi@43
  int v49; // ebp@43
  int v50; // ebp@43
  int v51; // ebp@43
  int v52; // eax@46
  unsigned int v53; // edx@47
  int v54; // eax@47
  int v55; // ecx@47
  unsigned int v56; // edi@47
  unsigned int v57; // ebx@48
  signed __int64 v58; // rax@49
  signed __int64 v59; // rax@49
  int v60; // eax@51
  int v61; // edx@51
  int v62; // edi@51
  int v63; // ebp@51
  int v64; // edx@51
  int v65; // eax@51
  signed int v66; // eax@56
  int v67; // edx@62
  int v68; // edi@67
  signed __int64 v69; // rax@68
  signed __int64 v70; // rax@68
  signed __int64 v71; // rax@68
  signed __int64 v72; // rax@68
  signed __int64 v73; // rax@68
  signed __int64 v74; // rax@68
  int v75; // eax@71
  int v76; // edi@71
  void *v77; // ecx@71
  int v78; // edx@71
  const void *v79; // edx@71
  int v80; // edi@71
  signed int v81; // eax@73
  int v82; // edi@75
  int v83; // ebp@78
  int v84; // edi@78
  unsigned int v85; // eax@79
  int v86; // ecx@80
  int v87; // eax@80
  int v88; // ebx@80
  int v89; // ecx@80
  int v90; // ebx@80
  int v91; // ecx@80
  int v92; // ebx@80
  int v93; // ecx@80
  unsigned int v94; // edx@80
  int v95; // edi@81
  int v96; // edx@82
  int v97; // edx@82
  int v98; // edx@82
  int v99; // edx@82
  int v100; // eax@84
  unsigned int v101; // ebp@86
  int v102; // ebx@86
  int v103; // ST00_4@87
  unsigned int v104; // edx@90
  unsigned int v105; // ecx@90
  int v106; // eax@92
  int v107; // edx@92
  int v108; // eax@92
  unsigned int v109; // ebx@92
  unsigned int v110; // ebp@92
  int v111; // edi@99
  int v112; // edx@99
  int v113; // ecx@102
  int v114; // eax@102
  int v115; // edi@102
  int v116; // edx@102
  int v117; // ebp@102
  int v118; // ebp@102
  int v119; // ebp@102
  int v120; // edi@102
  int v121; // edi@102
  int v122; // ebp@102
  signed int v123; // eax@102
  int v124; // edx@103
  int v125; // edx@109
  int v126; // ecx@109
  int v127; // eax@109
  int v128; // eax@112
  int v129; // ST5C_4@119
  int v130; // ST28_4@119
  signed __int64 v131; // rax@119
  signed __int64 v132; // rax@119
  signed __int64 v133; // rax@121
  signed __int64 v134; // rax@121
  unsigned int v135; // eax@121
  unsigned __int16 v136; // cx@123
  size_t v137; // edx@125
  int v138; // edi@126
  unsigned int v139; // ecx@126
  int v140; // eax@129
  int v141; // ecx@129
  int v142; // eax@129
  int v143; // ecx@129
  int v144; // edx@129
  int v145; // edx@129
  int v146; // eax@129
  unsigned int v147; // edx@129
  _BYTE *v148; // eax@131
  char *v149; // eax@141
  int v150; // ecx@142
  int i; // edx@142
  int v152; // esi@144
  int v153; // edx@147
  int v154; // edx@147
  int v155; // edx@147
  char *v156; // ecx@148
  int v157; // eax@148
  int v158; // edx@150
  int v159; // edx@151
  int v160; // eax@151
  int v161; // [sp+24h] [bp-E8h]@23
  int v162; // [sp+24h] [bp-E8h]@35
  int v163; // [sp+24h] [bp-E8h]@43
  int v164; // [sp+24h] [bp-E8h]@47
  char *v165; // [sp+24h] [bp-E8h]@75
  unsigned int v166; // [sp+24h] [bp-E8h]@84
  int v167; // [sp+24h] [bp-E8h]@99
  size_t v168; // [sp+24h] [bp-E8h]@128
  unsigned int v169; // [sp+28h] [bp-E4h]@6
  int v170; // [sp+28h] [bp-E4h]@44
  __int16 v171; // [sp+28h] [bp-E4h]@81
  unsigned __int16 v172; // [sp+28h] [bp-E4h]@134
  int v173; // [sp+28h] [bp-E4h]@148
  signed int v174; // [sp+2Ch] [bp-E0h]@5
  int v175; // [sp+2Ch] [bp-E0h]@43
  int v176; // [sp+2Ch] [bp-E0h]@48
  unsigned int v177; // [sp+2Ch] [bp-E0h]@80
  size_t v178; // [sp+2Ch] [bp-E0h]@134
  char v179; // [sp+30h] [bp-DCh]@8
  int v180; // [sp+34h] [bp-D8h]@4
  signed int v181; // [sp+38h] [bp-D4h]@5
  unsigned int v182; // [sp+38h] [bp-D4h]@43
  unsigned int v183; // [sp+3Ch] [bp-D0h]@6
  unsigned int v184; // [sp+3Ch] [bp-D0h]@47
  int v185; // [sp+3Ch] [bp-D0h]@79
  int v186; // [sp+40h] [bp-CCh]@79
  char *v187; // [sp+40h] [bp-CCh]@140
  __int16 v188; // [sp+46h] [bp-C6h]@65
  int v189; // [sp+48h] [bp-C4h]@75
  int v190; // [sp+48h] [bp-C4h]@78
  int v191; // [sp+4Ch] [bp-C0h]@66
  int v192; // [sp+50h] [bp-BCh]@78
  int v193; // [sp+50h] [bp-BCh]@147
  int v194; // [sp+54h] [bp-B8h]@79
  int v195; // [sp+54h] [bp-B8h]@142
  int v196; // [sp+58h] [bp-B4h]@84
  int v197; // [sp+58h] [bp-B4h]@147
  int v198; // [sp+5Ch] [bp-B0h]@84
  int v199; // [sp+5Ch] [bp-B0h]@147
  int v200; // [sp+60h] [bp-ACh]@78
  int v201; // [sp+60h] [bp-ACh]@147
  unsigned int v202; // [sp+64h] [bp-A8h]@83
  __int16 v203; // [sp+68h] [bp-A4h]@65
  char v204; // [sp+6Bh] [bp-A1h]@84
  unsigned int v205; // [sp+6Ch] [bp-A0h]@79
  int v206; // [sp+7Ch] [bp-90h]@1
  int v207; // [sp+80h] [bp-8Ch]@62
  int v208; // [sp+84h] [bp-88h]@7
  int v209; // [sp+88h] [bp-84h]@8
  int v210; // [sp+8Ch] [bp-80h]@62
  int v211; // [sp+90h] [bp-7Ch]@62
  int v212; // [sp+94h] [bp-78h]@62
  int *v213; // [sp+98h] [bp-74h]@62
  int *v214; // [sp+9Ch] [bp-70h]@62
  int *v215; // [sp+A0h] [bp-6Ch]@62
  int v216; // [sp+A8h] [bp-64h]@25
  char *v217; // [sp+ACh] [bp-60h]@25
  char *v218; // [sp+B0h] [bp-5Ch]@25
  char *v219; // [sp+B4h] [bp-58h]@25
  int v220; // [sp+B8h] [bp-54h]@62
  int v221; // [sp+BCh] [bp-50h]@62
  int v222; // [sp+C0h] [bp-4Ch]@62
  int v223; // [sp+C4h] [bp-48h]@62
  char v224; // [sp+C8h] [bp-44h]@8

  v4 = *(_DWORD *)a1;
  v206 = 0;
  if ( a3 > 1 )
  {
    v5 = 21;
    if ( a3 > *(_WORD *)(v4 + 290) )
      return v5;
  }
  v7 = (*(_BYTE *)(a1 + 16) & 1) == 0;
  v8 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 20) = a2;
  v180 = v8;
  if ( v7 )
  {
    v15 = *(_DWORD *)(a1 + 4);
    v174 = *(_DWORD *)(v15 + 48);
    v181 = *(_DWORD *)(v15 + 52);
  }
  else
  {
    v181 = 0x10000;
    v174 = 0x10000;
  }
  v9 = a1;
  v183 = a3;
  v169 = a2;
  v10 = *(_DWORD *)(*(_DWORD *)(v4 + 128) + 48);
  if ( v10 )
  {
    v5 = (**(int (__cdecl ***)(_DWORD, unsigned int, int *))v10)(*(_DWORD *)(v10 + 4), a2, &v208);
    v206 = v5;
    if ( v5 )
      return v5;
    v11 = v209;
    *(_DWORD *)(v9 + 28) = v209;
    memset(&v224, 0, 0x28u);
    sub_6F771FA0((int)&v224, v208, v11);
    v12 = 0;
    v179 = 1;
    *(_DWORD *)(v9 + 24) = &v224;
  }
  else
  {
    v12 = sub_6F7A9B80(v4, a2, (int *)(v9 + 28));
    v179 = 0;
  }
  v13 = *(_DWORD *)(v9 + 28);
  if ( v13 <= 0 )
  {
    v16 = 0;
  }
  else
  {
    v14 = *(_DWORD *)(v9 + 84);
    if ( !v14 && !*(_DWORD *)(*(_DWORD *)(v4 + 128) + 48) )
    {
      v206 = 8;
      goto LABEL_13;
    }
    v206 = (*(int (__cdecl **)(int, unsigned int, int, _DWORD))(v4 + 512))(v9, v169, v14 + v12, *(_DWORD *)(v9 + 28));
    if ( v206 )
      goto LABEL_13;
    v206 = (*(int (__cdecl **)(int))(v4 + 520))(v9);
    if ( v206 || (v66 = sub_6F7AE120(v9, v169), v206 = v66, a4) || v66 )
    {
LABEL_34:
      (*(void (__cdecl **)(int))(v4 + 516))(v9);
      goto LABEL_13;
    }
    v13 = *(_DWORD *)(v9 + 28);
    v16 = 1;
  }
  if ( !v13 || (v17 = *(_WORD *)(v9 + 32)) == 0 )
  {
    *(_DWORD *)(v9 + 36) = 0;
    *(_DWORD *)(v9 + 44) = 0;
    *(_DWORD *)(v9 + 40) = 0;
    *(_DWORD *)(v9 + 48) = 0;
    v18 = sub_6F7AE120(v9, v169);
    v206 = v18;
    if ( !a4 && !v18 )
    {
      v19 = *(_DWORD *)(v9 + 52);
      v20 = *(_DWORD *)(v9 + 36);
      v21 = *(_DWORD *)(v9 + 56);
      *(_DWORD *)(v9 + 72) = 0;
      *(_DWORD *)(v9 + 80) = 0;
      *(_DWORD *)(v9 + 184) = 0;
      v22 = v20 - v19;
      v23 = v19;
      *(_DWORD *)(v9 + 192) = 0;
      *(_DWORD *)(v9 + 68) = v22;
      v161 = v21;
      *(_DWORD *)(v9 + 76) = v21 + v22;
      v24 = *(_DWORD *)(v9 + 48) + *(_DWORD *)(v9 + 176);
      *(_DWORD *)(v9 + 188) = v24;
      *(_DWORD *)(v9 + 196) = v24 - *(_DWORD *)(v9 + 180);
      v25 = *(_DWORD *)v9;
      v26 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v9 + 128) + 48);
      if ( v26 )
      {
        v27 = *(int (__cdecl **)(_DWORD, unsigned int, _DWORD, int *))(*(_DWORD *)v26 + 8);
        if ( v27 )
        {
          v216 = v23;
          v217 = 0;
          v219 = 0;
          v218 = (char *)v161;
          if ( !v27(*(_DWORD *)(v26 + 4), v169, 0, &v216) )
          {
            v28 = (signed __int16)v216;
            v7 = *(_BYTE *)(v9 + 64) == 0;
            *(_DWORD *)(v9 + 176) = 0;
            *(_DWORD *)(v9 + 180) = 0;
            *(_DWORD *)(v9 + 52) = v28;
            v29 = (unsigned __int16)v218;
            *(_DWORD *)(v9 + 56) = (unsigned __int16)v218;
            if ( v7 )
            {
              *(_BYTE *)(v9 + 64) = 1;
              *(_DWORD *)(v9 + 60) = v29;
            }
          }
          v25 = *(_DWORD *)v9;
        }
      }
      if ( *(_BYTE *)(v25 + 672) )
      {
        v67 = *(_DWORD *)(v9 + 68);
        v207 = 16843009;
        v212 = 262148;
        v210 = 0x10000;
        v211 = 196610;
        v216 = v67;
        v217 = *(char **)(v9 + 72);
        v218 = *(char **)(v9 + 76);
        v219 = *(char **)(v9 + 80);
        v220 = *(_DWORD *)(v9 + 184);
        v221 = *(_DWORD *)(v9 + 188);
        v222 = *(_DWORD *)(v9 + 192);
        v223 = *(_DWORD *)(v9 + 196);
        v213 = &v216;
        v214 = &v207;
        v215 = &v210;
        v206 = sub_6F7AE850(v25, v169, (int)&v212, 4u);
        if ( v206 )
          goto LABEL_33;
        *(_DWORD *)(v9 + 68) = v216;
        *(_DWORD *)(v9 + 72) = v217;
        *(_DWORD *)(v9 + 76) = v218;
        *(_DWORD *)(v9 + 80) = v219;
        *(_DWORD *)(v9 + 184) = v220;
        *(_DWORD *)(v9 + 188) = v221;
        *(_DWORD *)(v9 + 192) = v222;
        *(_DWORD *)(v9 + 196) = v223;
      }
      if ( !(*(_BYTE *)(v9 + 16) & 1) )
      {
        v30 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 68)) >> 32) >> 31)
                           + 0x8000)
            + v174 * (signed __int64)*(_DWORD *)(v9 + 68);
        *(_DWORD *)(v9 + 68) = (HIDWORD(v30) << 16) + ((unsigned int)v30 >> 16);
        v31 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 76)) >> 32) >> 31)
                           + 0x8000)
            + v174 * (signed __int64)*(_DWORD *)(v9 + 76);
        *(_DWORD *)(v9 + 76) = (HIDWORD(v31) << 16) + ((unsigned int)v31 >> 16);
        v32 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 184)) >> 32) >> 31)
                           + 0x8000)
            + v174 * (signed __int64)*(_DWORD *)(v9 + 184);
        *(_DWORD *)(v9 + 184) = (HIDWORD(v32) << 16) + ((unsigned int)v32 >> 16);
        v33 = (unsigned int)(((signed int)((unsigned __int64)(v181 * (signed __int64)*(_DWORD *)(v9 + 188)) >> 32) >> 31)
                           + 0x8000)
            + v181 * (signed __int64)*(_DWORD *)(v9 + 188);
        *(_DWORD *)(v9 + 188) = (HIDWORD(v33) << 16) + ((unsigned int)v33 >> 16);
        v34 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 192)) >> 32) >> 31)
                           + 0x8000)
            + v174 * (signed __int64)*(_DWORD *)(v9 + 192);
        *(_DWORD *)(v9 + 192) = (HIDWORD(v34) << 16) + ((unsigned int)v34 >> 16);
        v35 = (unsigned int)(((signed int)((unsigned __int64)(v181 * (signed __int64)*(_DWORD *)(v9 + 196)) >> 32) >> 31)
                           + 0x8000)
            + v181 * (signed __int64)*(_DWORD *)(v9 + 196);
        *(_DWORD *)(v9 + 196) = (HIDWORD(v35) << 16) + ((unsigned int)v35 >> 16);
      }
      v206 = 0;
    }
LABEL_33:
    if ( !v16 )
      goto LABEL_13;
    goto LABEL_34;
  }
  v36 = *(_DWORD *)(v9 + 52);
  v37 = *(_DWORD *)(v9 + 36);
  v38 = *(_DWORD *)(v9 + 56);
  *(_DWORD *)(v9 + 72) = 0;
  *(_DWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 184) = 0;
  v39 = v37 - v36;
  v162 = v36;
  *(_DWORD *)(v9 + 192) = 0;
  *(_DWORD *)(v9 + 68) = v39;
  *(_DWORD *)(v9 + 76) = v38 + v39;
  v40 = *(_DWORD *)(v9 + 48) + *(_DWORD *)(v9 + 176);
  *(_DWORD *)(v9 + 188) = v40;
  *(_DWORD *)(v9 + 196) = v40 - *(_DWORD *)(v9 + 180);
  v41 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v9 + 128) + 48);
  if ( v41 )
  {
    v42 = *(int (__cdecl **)(_DWORD, unsigned int, _DWORD, int *))(*(_DWORD *)v41 + 8);
    if ( v42 )
    {
      v217 = 0;
      v218 = (char *)v38;
      v219 = 0;
      v216 = v162;
      if ( !v42(*(_DWORD *)(v41 + 4), v169, 0, &v216) )
      {
        v43 = (signed __int16)v216;
        v7 = *(_BYTE *)(v9 + 64) == 0;
        *(_DWORD *)(v9 + 176) = 0;
        *(_DWORD *)(v9 + 180) = 0;
        *(_DWORD *)(v9 + 52) = v43;
        v44 = (unsigned __int16)v218;
        *(_DWORD *)(v9 + 56) = (unsigned __int16)v218;
        if ( v7 )
        {
          *(_BYTE *)(v9 + 64) = 1;
          *(_DWORD *)(v9 + 60) = v44;
        }
      }
      v17 = *(_WORD *)(v9 + 32);
    }
  }
  if ( v17 > 0 )
  {
    v206 = (*(int (__cdecl **)(int))(v4 + 524))(v9);
    if ( v206 )
      goto LABEL_33;
    (*(void (__cdecl **)(int))(v4 + 516))(v9);
    v45 = *(_DWORD *)(v9 + 12);
    v46 = *(_WORD *)(v45 + 58);
    v47 = *(_DWORD *)(v45 + 60);
    v163 = *(_DWORD *)(v9 + 12);
    v48 = *(_DWORD *)(v9 + 68);
    *(_DWORD *)(v47 + 8 * v46 + 4) = *(_DWORD *)(v9 + 72);
    *(_DWORD *)(v47 + 8 * v46) = v48;
    v49 = *(_DWORD *)(v9 + 80);
    v175 = 8 * v46;
    *(_DWORD *)(v47 + v175 + 8) = *(_DWORD *)(v9 + 76);
    *(_DWORD *)(v47 + v175 + 12) = v49;
    v50 = *(_DWORD *)(v9 + 188);
    *(_DWORD *)(v47 + v175 + 16) = *(_DWORD *)(v9 + 184);
    *(_DWORD *)(v47 + v175 + 20) = v50;
    v51 = *(_DWORD *)(v9 + 196);
    *(_DWORD *)(v47 + v175 + 24) = *(_DWORD *)(v9 + 192);
    *(_DWORD *)(v47 + v175 + 28) = v51;
    *(_BYTE *)(*(_DWORD *)(v163 + 64) + v46) = 0;
    *(_BYTE *)(*(_DWORD *)(v163 + 64) + v46 + 1) = 0;
    *(_BYTE *)(*(_DWORD *)(v163 + 64) + v46 + 2) = 0;
    *(_BYTE *)(*(_DWORD *)(v163 + 64) + v46 + 3) = 0;
    v182 = v46 + 4;
    if ( *(_BYTE *)(*(_DWORD *)v9 + 672) )
    {
      v81 = sub_6F7AE850(*(_DWORD *)v9, *(_DWORD *)(v9 + 20), v163 + 56, v182);
      if ( v81 )
        goto LABEL_74;
    }
    v170 = *(_DWORD *)(v9 + 16);
    if ( *(_DWORD *)(v9 + 16) & 2 )
    {
      if ( v170 & 1 )
        goto LABEL_64;
      v52 = v163;
    }
    else
    {
      v75 = *(_WORD *)(v163 + 58);
      v76 = *(_DWORD *)(v163 + 64);
      v77 = *(void **)(v163 + 80);
      *(_WORD *)(v9 + 134) = *(_WORD *)(v163 + 56);
      v78 = *(_DWORD *)(v163 + 76);
      *(_WORD *)(v9 + 132) = v75;
      *(_DWORD *)(v9 + 136) = v78;
      v79 = *(const void **)(v163 + 60);
      *(_DWORD *)(v9 + 148) = v76;
      v80 = *(_DWORD *)(v163 + 68);
      *(_DWORD *)(v9 + 144) = v77;
      *(_WORD *)(v9 + 156) = 0;
      *(_DWORD *)(v9 + 140) = v79;
      *(_DWORD *)(v9 + 152) = v80;
      memcpy(v77, v79, 8 * v75 + 32);
      v170 = *(_DWORD *)(v9 + 16);
      if ( *(_DWORD *)(v9 + 16) & 1 )
        goto LABEL_52;
      v52 = v163;
    }
    v184 = *(_DWORD *)(v52 + 60);
    v53 = v184 + v175 + 32;
    v54 = *(_DWORD *)(v9 + 4);
    v55 = *(_DWORD *)(v54 + 52);
    v164 = *(_DWORD *)(v54 + 48);
    v56 = v184;
    if ( v184 < v53 )
    {
      v176 = v4;
      v57 = v53;
      do
      {
        v58 = (unsigned int)(((signed int)((unsigned __int64)(v164 * (signed __int64)*(_DWORD *)v56) >> 32) >> 31)
                           + 0x8000)
            + v164 * (signed __int64)*(_DWORD *)v56;
        *(_DWORD *)v56 = (HIDWORD(v58) << 16) + ((unsigned int)v58 >> 16);
        v59 = (unsigned int)(((signed int)((unsigned __int64)(v55 * (signed __int64)*(_DWORD *)(v56 + 4)) >> 32) >> 31)
                           + 0x8000)
            + v55 * (signed __int64)*(_DWORD *)(v56 + 4);
        *(_DWORD *)(v56 + 4) = (HIDWORD(v59) << 16) + ((unsigned int)v59 >> 16);
        v56 += 8;
      }
      while ( v56 < v57 );
      v4 = v176;
    }
    v60 = 8 * (v182 + 536870908);
    v61 = *(_DWORD *)(v184 + 8 * (v182 + 536870908));
    *(_DWORD *)(v9 + 72) = *(_DWORD *)(v184 + 8 * (v182 + 536870908) + 4);
    *(_DWORD *)(v9 + 68) = v61;
    v62 = *(_DWORD *)(v184 + v60 + 8);
    *(_DWORD *)(v9 + 80) = *(_DWORD *)(v184 + v60 + 12);
    *(_DWORD *)(v9 + 76) = v62;
    v63 = *(_DWORD *)(v184 + v60 + 20);
    *(_DWORD *)(v9 + 184) = *(_DWORD *)(v184 + v60 + 16);
    *(_DWORD *)(v9 + 188) = v63;
    v64 = *(_DWORD *)(v184 + v60 + 28);
    v65 = *(_DWORD *)(v184 + v60 + 24);
    *(_DWORD *)(v9 + 196) = v64;
    *(_DWORD *)(v9 + 192) = v65;
LABEL_52:
    if ( !(v170 & 2) )
    {
      *(_WORD *)(v9 + 132) += 4;
      v206 = sub_6F7AA680(v9, 0);
      if ( v206 )
        goto LABEL_13;
      goto LABEL_54;
    }
LABEL_64:
    v206 = 0;
LABEL_54:
    sub_6F7CA8C0(v180);
    goto LABEL_13;
  }
  if ( v17 != -1 )
  {
    v206 = 20;
    goto LABEL_33;
  }
  v188 = *(_WORD *)(v180 + 22);
  v203 = *(_WORD *)(v180 + 20);
  v206 = (*(int (__cdecl **)(int))(v4 + 528))(v9);
  if ( v206 )
    goto LABEL_33;
  v191 = *(_DWORD *)(v9 + 168);
  (*(void (__cdecl **)(int))(v4 + 516))(v9);
  if ( !*(_BYTE *)(v4 + 672) )
    goto LABEL_154;
  v82 = *(_DWORD *)(v180 + 84);
  v189 = *(_DWORD *)(v4 + 100);
  HIWORD(v216) = v82 + 4;
  LOWORD(v216) = v82 + 4;
  v165 = sub_6F773B30(v189, 8, 0, (signed __int16)(v82 + 4), 0, &v206);
  if ( !v206 )
  {
    v187 = sub_6F773B30(v189, 1, 0, SHIWORD(v216), 0, &v206);
    if ( !v206 )
    {
      v149 = sub_6F773B30(v189, 2, 0, SHIWORD(v216), 0, &v206);
      if ( !v206 )
      {
        v195 = v9;
        v150 = *(_DWORD *)(v180 + 88) + 32 * *(_DWORD *)(v180 + 48);
        for ( i = 0; i != v82; ++i )
        {
          v152 = *(_DWORD *)(v150 + 8);
          v150 += 32;
          *(_DWORD *)&v165[8 * i] = v152;
          *(_DWORD *)&v165[8 * i + 4] = *(_DWORD *)(v150 - 20);
          v187[i] = 1;
          *(_WORD *)&v149[2 * i] = i;
        }
        v9 = v195;
        v193 = (int)&v165[8 * v82];
        *(_DWORD *)v193 = *(_DWORD *)(v195 + 68);
        *(_DWORD *)(v193 + 4) = *(_DWORD *)(v195 + 72);
        v187[v82] = 1;
        *(_WORD *)&v149[2 * v82] = v82;
        v197 = 8 * v82 + 8;
        v153 = (int)&v165[v197];
        *(_DWORD *)v153 = *(_DWORD *)(v195 + 76);
        *(_DWORD *)(v153 + 4) = *(_DWORD *)(v195 + 80);
        v187[v82 + 1] = 1;
        *(_WORD *)&v149[2 * v82 + 2] = v82 + 1;
        v199 = 8 * v82 + 16;
        v154 = (int)&v165[v199];
        *(_DWORD *)v154 = *(_DWORD *)(v195 + 184);
        *(_DWORD *)(v154 + 4) = *(_DWORD *)(v195 + 188);
        v187[v82 + 2] = 1;
        v201 = 8 * v82 + 24;
        *(_WORD *)&v149[2 * v82 + 4] = v82 + 2;
        v155 = (int)&v165[v201];
        *(_DWORD *)v155 = *(_DWORD *)(v195 + 192);
        *(_DWORD *)(v155 + 4) = *(_DWORD *)(v195 + 196);
        v187[v82 + 3] = 1;
        *(_WORD *)&v149[2 * v82 + 6] = v82 + 3;
        v219 = v149;
        v218 = v187;
        v217 = v165;
        v206 = sub_6F7AE850(v4, v169, (int)&v216, SHIWORD(v216));
        if ( !v206 )
        {
          v156 = v165;
          v173 = 0;
          v157 = *(_DWORD *)(v180 + 88) + 32 * *(_DWORD *)(v180 + 48);
          while ( v173 != v82 )
          {
            v158 = *(_WORD *)v156;
            ++v173;
            v157 += 32;
            v156 += 8;
            *(_DWORD *)(v157 - 24) = v158;
            *(_DWORD *)(v157 - 20) = *((_WORD *)v156 - 2);
          }
          *(_DWORD *)(v195 + 68) = *(_DWORD *)v193;
          *(_DWORD *)(v195 + 72) = *(_DWORD *)(v193 + 4);
          v159 = *(_DWORD *)&v165[v197];
          *(_DWORD *)(v195 + 80) = *(_DWORD *)&v165[v197 + 4];
          *(_DWORD *)(v195 + 76) = v159;
          v160 = *(_DWORD *)&v165[v199 + 4];
          *(_DWORD *)(v195 + 184) = *(_DWORD *)&v165[v199];
          *(_DWORD *)(v195 + 188) = v160;
          *(_DWORD *)(v195 + 192) = *(_DWORD *)&v165[v201];
          *(_DWORD *)(v195 + 196) = *(_DWORD *)&v165[v201 + 4];
        }
      }
    }
  }
  sub_6F773D90(v189, (int)v217);
  v217 = 0;
  sub_6F773D90(v189, (int)v218);
  v218 = 0;
  sub_6F773D90(v189, (int)v219);
  v219 = 0;
  if ( !v206 )
  {
LABEL_154:
    v68 = *(_DWORD *)(v9 + 16);
    if ( !(v68 & 1) )
    {
      v69 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 68)) >> 32) >> 31)
                         + 0x8000)
          + v174 * (signed __int64)*(_DWORD *)(v9 + 68);
      *(_DWORD *)(v9 + 68) = (HIDWORD(v69) << 16) + ((unsigned int)v69 >> 16);
      v70 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 76)) >> 32) >> 31)
                         + 0x8000)
          + v174 * (signed __int64)*(_DWORD *)(v9 + 76);
      *(_DWORD *)(v9 + 76) = (HIDWORD(v70) << 16) + ((unsigned int)v70 >> 16);
      v71 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 184)) >> 32) >> 31)
                         + 0x8000)
          + v174 * (signed __int64)*(_DWORD *)(v9 + 184);
      *(_DWORD *)(v9 + 184) = (HIDWORD(v71) << 16) + ((unsigned int)v71 >> 16);
      v72 = (unsigned int)(((signed int)((unsigned __int64)(v181 * (signed __int64)*(_DWORD *)(v9 + 188)) >> 32) >> 31)
                         + 0x8000)
          + v181 * (signed __int64)*(_DWORD *)(v9 + 188);
      *(_DWORD *)(v9 + 188) = (HIDWORD(v72) << 16) + ((unsigned int)v72 >> 16);
      v73 = (unsigned int)(((signed int)((unsigned __int64)(v174 * (signed __int64)*(_DWORD *)(v9 + 192)) >> 32) >> 31)
                         + 0x8000)
          + v174 * (signed __int64)*(_DWORD *)(v9 + 192);
      *(_DWORD *)(v9 + 192) = (HIDWORD(v73) << 16) + ((unsigned int)v73 >> 16);
      v74 = (unsigned int)(((signed int)((unsigned __int64)(v181 * (signed __int64)*(_DWORD *)(v9 + 196)) >> 32) >> 31)
                         + 0x8000)
          + v181 * (signed __int64)*(_DWORD *)(v9 + 196);
      *(_DWORD *)(v9 + 196) = (HIDWORD(v74) << 16) + ((unsigned int)v74 >> 16);
    }
    if ( v68 & 0x400 )
    {
      sub_6F7CA8C0(v180);
      *(_DWORD *)(*(_DWORD *)(v9 + 8) + 72) = 1668246896;
      goto LABEL_13;
    }
    v83 = *(_DWORD *)(v180 + 84);
    v84 = *(_DWORD *)(v180 + 48);
    v190 = *(_DWORD *)(v9 + 24);
    v200 = *(_DWORD *)(v180 + 84);
    v192 = *(_DWORD *)(v9 + 28);
    sub_6F7CA8C0(v180);
    if ( v83 )
    {
      v186 = v4;
      v194 = 32 * v84;
      v85 = v183;
      v185 = 0;
      v205 = v85 + 1;
      while ( 1 )
      {
        v86 = *(_DWORD *)(v9 + 68);
        v87 = *(_DWORD *)(v180 + 52);
        v217 = *(char **)(v9 + 72);
        v88 = *(_DWORD *)(v9 + 80);
        v216 = v86;
        v89 = *(_DWORD *)(v9 + 76);
        v219 = (char *)v88;
        v90 = *(_DWORD *)(v9 + 188);
        v218 = (char *)v89;
        v91 = *(_DWORD *)(v9 + 184);
        v221 = v90;
        v92 = *(_DWORD *)(v9 + 196);
        v220 = v91;
        v93 = *(_DWORD *)(v9 + 192);
        v223 = v92;
        v94 = *(_WORD *)(v180 + 22);
        v222 = v93;
        v177 = v94;
        v206 = sub_6F7B41A0(v9, *(_DWORD *)(v194 + v87), v205, 0);
        if ( v206 )
        {
          v4 = v186;
          goto LABEL_13;
        }
        v95 = v194 + *(_DWORD *)(v180 + 52);
        v171 = *(_WORD *)(v95 + 4);
        if ( !(HIBYTE(v171) & 2) )
        {
          v96 = (int)v217;
          *(_DWORD *)(v9 + 68) = v216;
          *(_DWORD *)(v9 + 72) = v96;
          v97 = (int)v219;
          *(_DWORD *)(v9 + 76) = v218;
          *(_DWORD *)(v9 + 80) = v97;
          v98 = v221;
          *(_DWORD *)(v9 + 184) = v220;
          *(_DWORD *)(v9 + 188) = v98;
          v99 = v223;
          *(_DWORD *)(v9 + 192) = v222;
          *(_DWORD *)(v9 + 196) = v99;
        }
        v202 = *(_WORD *)(v180 + 22);
        if ( v177 != v202 )
          break;
LABEL_95:
        ++v185;
        v194 += 32;
        if ( v200 == v185 )
        {
          v7 = (*(_BYTE *)(v9 + 16) & 2) == 0;
          v4 = v186;
          *(_DWORD *)(v9 + 24) = v190;
          *(_DWORD *)(v9 + 28) = v192;
          *(_DWORD *)(v9 + 168) = v191;
          if ( !v7 || !(*(_BYTE *)(v95 + 5) & 1) || v188 >= v202 )
            goto LABEL_13;
          v111 = *(_DWORD *)(v9 + 12);
          v112 = *(_WORD *)(v111 + 22);
          v167 = *(_DWORD *)(v9 + 12);
          if ( (_WORD)v112 == -4 || (unsigned int)(*(_WORD *)(v111 + 58) + 2 * v112 + 4) <= *(_DWORD *)(v111 + 4) )
          {
            v212 = 0;
            goto LABEL_102;
          }
          v81 = sub_6F7CA4F0(v111, v112 + 4, 0);
          v212 = v81;
          if ( !v81 )
          {
LABEL_102:
            v113 = *(_WORD *)(v167 + 22);
            v114 = *(_DWORD *)(v167 + 24);
            v115 = *(_DWORD *)(v9 + 68);
            *(_DWORD *)(v114 + 8 * v113 + 4) = *(_DWORD *)(v9 + 72);
            *(_DWORD *)(v114 + 8 * v113) = v115;
            v116 = 8 * v113;
            v117 = *(_DWORD *)(v9 + 80);
            *(_DWORD *)(v114 + v116 + 8) = *(_DWORD *)(v9 + 76);
            *(_DWORD *)(v114 + v116 + 12) = v117;
            v118 = *(_DWORD *)(v9 + 188);
            *(_DWORD *)(v114 + v116 + 16) = *(_DWORD *)(v9 + 184);
            *(_DWORD *)(v114 + v116 + 20) = v118;
            v119 = *(_DWORD *)(v9 + 196);
            *(_DWORD *)(v114 + v116 + 24) = *(_DWORD *)(v9 + 192);
            v120 = v167;
            *(_DWORD *)(v114 + v116 + 28) = v119;
            *(_BYTE *)(*(_DWORD *)(v167 + 28) + v113) = 0;
            *(_BYTE *)(*(_DWORD *)(v120 + 28) + *(_WORD *)(v120 + 22) + 1) = 0;
            *(_BYTE *)(*(_DWORD *)(v120 + 28) + *(_WORD *)(v120 + 22) + 2) = 0;
            *(_BYTE *)(*(_DWORD *)(v167 + 28) + *(_WORD *)(v167 + 22) + 3) = 0;
            v121 = *(_DWORD *)(v9 + 24);
            v122 = *(_DWORD *)(v9 + 24);
            v123 = sub_6F771FF0(v121, *(_DWORD *)(v9 + 168));
            v212 = v123;
            if ( v123 )
            {
              v124 = v123;
LABEL_104:
              v81 = v124;
              goto LABEL_74;
            }
            v136 = sub_6F772620(v121, &v212);
            v81 = v212;
            v124 = v212;
            if ( v212 )
              goto LABEL_104;
            if ( v136 <= *(_WORD *)(*(_DWORD *)v9 + 286) )
            {
              if ( v136 )
              {
                v137 = v136;
                v138 = *(_DWORD *)(v9 + 160);
                goto LABEL_128;
              }
            }
            else
            {
              v137 = v136;
              v81 = 22;
              if ( (signed int)v136 <= *(_DWORD *)(v9 + 28) )
              {
                v138 = *(_DWORD *)(v9 + 160);
                v139 = *(_DWORD *)(v138 + 388);
                if ( v139 >= v137 )
                  goto LABEL_127;
                v172 = *(_DWORD *)(v138 + 388);
                v178 = v137;
                *(_DWORD *)(v138 + 392) = sub_6F773B30(
                                            *(_DWORD *)(v138 + 8),
                                            1,
                                            v139,
                                            v137,
                                            *(char **)(v138 + 392),
                                            &v216);
                v81 = v216;
                if ( v216 )
                {
                  *(_DWORD *)(*(_DWORD *)(v9 + 160) + 388) = v172;
                }
                else
                {
                  v137 = v178;
                  v138 = *(_DWORD *)(v9 + 160);
                  LOWORD(v139) = v178;
LABEL_127:
                  v212 = 0;
                  *(_DWORD *)(v138 + 388) = (unsigned __int16)v139;
LABEL_128:
                  v168 = v137;
                  v81 = sub_6F7720B0(v122, *(void **)(v138 + 392), v137);
                  v212 = v81;
                  if ( !v81 )
                  {
                    v140 = *(_DWORD *)(v9 + 8);
                    v141 = *(_DWORD *)(*(_DWORD *)(v9 + 160) + 392);
                    *(_DWORD *)(v140 + 140) = v168;
                    *(_DWORD *)(v140 + 136) = v141;
                    v142 = *(_DWORD *)(v9 + 12);
                    v143 = *(_DWORD *)(v142 + 40);
                    *(_WORD *)(v9 + 132) = *(_WORD *)(v142 + 22) - v188;
                    *(_WORD *)(v9 + 134) = *(_WORD *)(v142 + 20) - v203;
                    *(_DWORD *)(v9 + 136) = 8 * v188 + v143;
                    v144 = *(_DWORD *)(v142 + 44) + 8 * v188;
                    *(_DWORD *)(v9 + 140) = 8 * v188 + *(_DWORD *)(v142 + 24);
                    *(_DWORD *)(v9 + 144) = v144;
                    v145 = *(_DWORD *)(v142 + 28);
                    v146 = *(_DWORD *)(v142 + 32);
                    *(_WORD *)(v9 + 156) = v188;
                    *(_DWORD *)(v9 + 148) = v188 + v145;
                    v147 = 0;
                    *(_DWORD *)(v9 + 152) = v146 + 2 * v203;
                    while ( v147 < *(_WORD *)(v9 + 132) )
                    {
                      v148 = (_BYTE *)(v147++ + *(_DWORD *)(v9 + 148));
                      *v148 &= 0xE7u;
                    }
                    *(_WORD *)(v9 + 132) += 4;
                    v81 = sub_6F7AA680(v9, 1);
                  }
                }
              }
            }
          }
LABEL_74:
          v206 = v81;
          goto LABEL_13;
        }
      }
      v100 = *(_DWORD *)(v9 + 12);
      v198 = *(_DWORD *)(v9 + 12);
      v196 = *(_DWORD *)(v100 + 24);
      v166 = *(_WORD *)(v100 + 22);
      v204 = v171 & 0xC8;
      if ( v171 & 0xC8 && v177 < v166 )
      {
        v101 = v177;
        v102 = v196 + 8 * v177;
        do
        {
          v103 = v102;
          ++v101;
          v102 += 8;
          sub_6F770690(v103, v95 + 16);
        }
        while ( v166 > v101 );
        v171 = *(_WORD *)(v95 + 4);
      }
      if ( v171 & 2 )
      {
        v110 = *(_DWORD *)(v95 + 8);
        v109 = *(_DWORD *)(v95 + 12);
        if ( !*(_QWORD *)(v95 + 8) )
          goto LABEL_94;
        if ( v204 && v171 & 0x800 )
        {
          v129 = sub_6F7C93F0(*(_DWORD *)(v95 + 16), *(_DWORD *)(v95 + 20));
          v130 = sub_6F7C93F0(*(_DWORD *)(v95 + 28), *(_DWORD *)(v95 + 24));
          v131 = (unsigned int)(((signed int)((unsigned __int64)(v129 * (signed __int64)(signed int)v110) >> 32) >> 31)
                              + 0x8000)
               + v129 * (signed __int64)(signed int)v110;
          v110 = (HIDWORD(v131) << 16) + ((unsigned int)v131 >> 16);
          v132 = (unsigned int)(((signed int)((unsigned __int64)(v130 * (signed __int64)(signed int)v109) >> 32) >> 31)
                              + 0x8000)
               + v130 * (signed __int64)(signed int)v109;
          v109 = (HIDWORD(v132) << 16) + ((unsigned int)v132 >> 16);
          if ( *(_BYTE *)(v9 + 16) & 1 )
            goto LABEL_93;
          v171 = *(_WORD *)(v95 + 4);
        }
        else if ( *(_BYTE *)(v9 + 16) & 1 )
        {
          goto LABEL_109;
        }
        v133 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 48)
                                                             * (signed __int64)(signed int)v110) >> 32) >> 31)
                            + 0x8000)
             + *(_DWORD *)(*(_DWORD *)(v9 + 4) + 48) * (signed __int64)(signed int)v110;
        v110 = (HIDWORD(v133) << 16) + ((unsigned int)v133 >> 16);
        v134 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 52)
                                                             * (signed __int64)(signed int)v109) >> 32) >> 31)
                            + 0x8000)
             + *(_DWORD *)(*(_DWORD *)(v9 + 4) + 52) * (signed __int64)(signed int)v109;
        v135 = (HIDWORD(v134) << 16) + ((unsigned int)v134 >> 16);
        v109 = v135;
        if ( v171 & 4 )
        {
          v109 = (v135 + 32) & 0xFFFFFFC0;
          v110 = (v110 + 32) & 0xFFFFFFC0;
        }
      }
      else
      {
        v104 = *(_DWORD *)(v95 + 8) + v188;
        v105 = v177 + *(_DWORD *)(v95 + 12);
        if ( v177 <= v104 || v166 <= v105 )
        {
          v4 = v186;
          v206 = 21;
          goto LABEL_13;
        }
        v106 = *(_DWORD *)(v198 + 24);
        v107 = v106 + 8 * v104;
        v108 = v106 + 8 * v105;
        v109 = *(_DWORD *)(v107 + 4) - *(_DWORD *)(v108 + 4);
        v110 = *(_DWORD *)v107 - *(_DWORD *)v108;
      }
LABEL_93:
      if ( !(v109 | v110) )
      {
LABEL_94:
        v206 = 0;
        goto LABEL_95;
      }
LABEL_109:
      v125 = v196 + 8 * v177;
      v126 = v166 - v177;
      v127 = 0;
      if ( v110 )
      {
        while ( v127 != v126 )
          *(_DWORD *)(v125 + 8 * v127++) += v110;
      }
      if ( v109 && v166 != v177 )
      {
        v128 = 0;
        do
          *(_DWORD *)(v125 + 8 * v128++ + 4) += v109;
        while ( v126 != v128 );
      }
      goto LABEL_94;
    }
    *(_DWORD *)(v9 + 24) = v190;
    *(_DWORD *)(v9 + 28) = v192;
    *(_DWORD *)(v9 + 168) = v191;
  }
LABEL_13:
  if ( v179 )
    (*(void (__cdecl **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)(v4 + 128) + 48) + 4))(
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 128) + 48) + 4),
      &v208);
  return v206;
}
