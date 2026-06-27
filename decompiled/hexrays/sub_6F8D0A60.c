__int64 __stdcall sub_6F8D0A60(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // eax@7
  char *v7; // eax@7
  char v8; // al@11
  signed int v9; // eax@15
  int v10; // ecx@15
  bool v11; // al@16
  int v12; // eax@21
  _BYTE *v13; // eax@24
  int (*v14)(void); // eax@29
  int v15; // eax@29
  signed int v16; // eax@31
  int v17; // ecx@31
  int *v18; // edx@32
  unsigned int v19; // eax@32
  int v20; // ebx@36
  unsigned int v21; // eax@37
  unsigned __int8 v22; // dl@41
  char v23; // al@43
  _BYTE *v24; // eax@46
  char v25; // al@48
  int *v26; // edx@52
  unsigned int v27; // eax@52
  int v28; // ecx@56
  char v29; // al@56
  void (*v30)(void); // eax@57
  int v31; // ecx@62
  int v32; // ecx@68
  signed int v33; // eax@68
  bool v34; // al@69
  int v35; // eax@73
  _BYTE *v36; // eax@76
  int (*v37)(void); // eax@81
  int v38; // eax@81
  signed int v39; // eax@85
  int v40; // ecx@85
  unsigned __int8 v41; // dl@86
  int v42; // eax@88
  _BYTE *v43; // eax@91
  int (*v44)(void); // eax@96
  int v45; // eax@96
  int (__fastcall *v46)(int, _DWORD); // eax@99
  int v47; // eax@99
  int (*v48)(void); // eax@102
  int v49; // eax@102
  char *v50; // eax@104
  int v51; // eax@107
  int (__fastcall *v53)(int, _DWORD); // eax@127
  int v54; // eax@127
  unsigned __int8 v55; // al@131
  int (*v56)(void); // eax@143
  int v57; // eax@143
  int (*v58)(void); // eax@149
  int v59; // eax@149
  int v60; // eax@154
  int v61; // eax@154
  void (*v62)(void); // eax@155
  void (*v63)(void); // eax@156
  char v64; // al@163
  void (*v65)(void); // eax@170
  int (*v66)(void); // eax@171
  int v67; // eax@171
  unsigned int v68; // eax@178
  char v69; // al@183
  char v70; // al@185
  unsigned int v71; // eax@186
  _WORD *v72; // eax@2
  int v73; // esi@2
  _DWORD *v74; // ecx@2
  int (*v75)(void); // eax@194
  int (*v76)(void); // eax@196
  int (*v77)(void); // eax@199
  int v78; // [sp+0h] [bp-C8h]@1
  int v79; // [sp+4h] [bp-C4h]@165
  int *v80; // [sp+8h] [bp-C0h]@165
  int v81; // [sp+14h] [bp-B4h]@2
  int v82; // [sp+18h] [bp-B0h]@7
  int v83; // [sp+1Ch] [bp-ACh]@1
  unsigned int v84; // [sp+20h] [bp-A8h]@7
  int v85; // [sp+24h] [bp-A4h]@3
  int v86; // [sp+28h] [bp-A0h]@7
  bool v87; // [sp+2Ch] [bp-9Ch]@4
  char v88; // [sp+2Dh] [bp-9Bh]@7
  char v89; // [sp+2Eh] [bp-9Ah]@79
  char v90; // [sp+2Fh] [bp-99h]@7
  unsigned int v91; // [sp+30h] [bp-98h]@27
  __int64 v92; // [sp+34h] [bp-94h]@1
  int v93; // [sp+3Ch] [bp-8Ch]@1
  __int64 v94; // [sp+40h] [bp-88h]@1
  int v95; // [sp+48h] [bp-80h]@1
  char v96; // [sp+4Ch] [bp-7Ch]@1
  int v97; // [sp+50h] [bp-78h]@1
  int (__cdecl *v98)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-64h]@1
  int *v99; // [sp+68h] [bp-60h]@1
  char *v100; // [sp+6Ch] [bp-5Ch]@1
  int (*v101)(); // [sp+70h] [bp-58h]@1
  int *v102; // [sp+74h] [bp-54h]@1
  char v103; // [sp+8Bh] [bp-3Dh]@124
  int v104; // [sp+8Ch] [bp-3Ch]@7
  int *v105; // [sp+90h] [bp-38h]@5
  int v106; // [sp+94h] [bp-34h]@5
  unsigned int v107; // [sp+98h] [bp-30h]@5
  int *v108; // [sp+A8h] [bp-20h]@7
  unsigned int v109; // [sp+ACh] [bp-1Ch]@7
  unsigned int v110; // [sp+B0h] [bp-18h]@7
  char v111; // [sp+C0h] [bp-8h]@1

  v100 = &v111;
  v98 = sub_6F962A50;
  v99 = dword_6F96B85C;
  v101 = sub_6F8D1B50;
  v102 = &v78;
  sub_6F8A1A60((int *)&v96);
  LODWORD(v94) = a4 + 108;
  v97 = -1;
  v83 = sub_6F95DC10(a4 + 108);
  v93 = sub_6F8C3BF0(&unk_6FB49F60);
  HIDWORD(v92) = *(_DWORD *)(*(_DWORD *)(a4 + 108) + 12) + 4 * v93;
  v95 = *(_DWORD *)HIDWORD(v92);
  if ( !v95 )
  {
    v97 = 5;
    v72 = sub_6F961B60(0x44u);
    v73 = v94;
    *(_DWORD *)v72 = off_6FBB0924;
    v72[8] = 0;
    *((_DWORD *)v72 + 1) = 0;
    *((_DWORD *)v72 + 2) = 0;
    *((_DWORD *)v72 + 3) = 0;
    *((_BYTE *)v72 + 18) = 0;
    *((_DWORD *)v72 + 5) = 0;
    *((_DWORD *)v72 + 6) = 0;
    *((_DWORD *)v72 + 7) = 0;
    *((_DWORD *)v72 + 8) = 0;
    *((_DWORD *)v72 + 9) = 0;
    *((_DWORD *)v72 + 10) = 0;
    *((_DWORD *)v72 + 11) = 0;
    *((_DWORD *)v72 + 12) = 0;
    *((_DWORD *)v72 + 13) = 0;
    *((_BYTE *)v72 + 67) = 0;
    v97 = 4;
    v81 = (int)v72;
    sub_6F9325E0(v72, v73);
    v74 = *(_DWORD **)(a4 + 108);
    v97 = -1;
    sub_6F936240(v74, v81, v93);
    v95 = *(_DWORD *)HIDWORD(v92);
  }
  v85 = v95 + 56;
  if ( *(_DWORD *)(v95 + 32) )
    v87 = *(_DWORD *)(v95 + 40) != 0;
  else
    v87 = 0;
  v106 = 0;
  v105 = (int *)&v107;
  LOBYTE(v107) = 0;
  if ( *(_BYTE *)(v95 + 16) )
  {
    v97 = 1;
    sub_6F93BF60((int)&v105, 0x20u);
  }
  v109 = 0;
  v108 = (int *)&v110;
  LOBYTE(v110) = 0;
  v97 = 2;
  sub_6F93BF60((int)&v108, 0x20u);
  v86 = 1;
  v90 = 0;
  v6 = *(_DWORD *)(v95 + 52);
  v93 = 0;
  HIDWORD(v92) = v95 + 57;
  v104 = v6;
  v7 = (char *)&v104;
  v88 = 0;
  v82 = 0;
  v84 = 0;
  if ( (unsigned __int8)v104 > 4u )
    goto LABEL_125;
LABEL_8:
  switch ( *v7 )
  {
    case 0:
      LOBYTE(v92) = 1;
      goto LABEL_10;
    case 1:
      v97 = 2;
      if ( sub_6F8C2310(&a1, (int)&a2)
        || (v97 = 2, v55 = sub_6F8C2400((int *)&a1, SHIDWORD(a1)), !(*(_BYTE *)(*(_DWORD *)(v83 + 24) + 2 * v55) & 0x20)) )
      {
        LOBYTE(v92) = 0;
        if ( v86 == 4 )
        {
LABEL_11:
          v8 = v92 & (v84 > 1);
          goto LABEL_12;
        }
      }
      else
      {
        sub_6F92D0F0((_DWORD *)a1);
        HIDWORD(a1) = -1;
        LOBYTE(v92) = 1;
LABEL_10:
        if ( v86 == 4 )
          goto LABEL_11;
      }
      v39 = HIDWORD(a1);
      v40 = a1;
      while ( 1 )
      {
        LOBYTE(v94) = v39 == -1;
        LOBYTE(v91) = v94 & (v40 != 0);
        if ( (_BYTE)v91 )
        {
          LOBYTE(v94) = 0;
          if ( *(_DWORD *)(v40 + 8) >= *(_DWORD *)(v40 + 12) )
          {
            v44 = *(int (**)(void))(*(_DWORD *)v40 + 36);
            v97 = 2;
            v45 = v44();
            LOBYTE(v94) = 0;
            if ( v45 == -1 )
            {
              LODWORD(a1) = 0;
              LOBYTE(v94) = v91;
            }
          }
        }
        v41 = a3 == -1;
        LOBYTE(v91) = v41 & (a2 != 0);
        if ( v41 & (a2 != 0) )
        {
          v41 = 0;
          if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
          {
            v53 = *(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 36);
            v97 = 2;
            v54 = v53(a2, 0);
            v41 = 0;
            if ( v54 == -1 )
            {
              a2 = 0;
              v41 = v91;
            }
          }
        }
        if ( (_BYTE)v94 == v41 )
          goto LABEL_121;
        LOBYTE(v42) = BYTE4(a1);
        v40 = a1;
        if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
        {
          v43 = *(_BYTE **)(a1 + 8);
          if ( (unsigned int)v43 < *(_DWORD *)(a1 + 12) )
          {
            if ( !(*(_BYTE *)(*(_DWORD *)(v83 + 24) + 2 * *v43) & 0x20) )
              goto LABEL_121;
LABEL_92:
            *(_DWORD *)(v40 + 8) = v43 + 1;
            goto LABEL_93;
          }
          v75 = *(int (**)(void))(*(_DWORD *)a1 + 36);
          v97 = 2;
          v42 = v75();
          if ( v42 == -1 )
            LODWORD(a1) = 0;
        }
        if ( !(*(_BYTE *)(*(_DWORD *)(v83 + 24) + 2 * (unsigned __int8)v42) & 0x20) )
          goto LABEL_121;
        v40 = a1;
        v43 = *(_BYTE **)(a1 + 8);
        if ( (unsigned int)v43 < *(_DWORD *)(a1 + 12) )
          goto LABEL_92;
        v62 = *(void (**)(void))(*(_DWORD *)a1 + 40);
        v97 = 2;
        v62();
        v40 = a1;
LABEL_93:
        HIDWORD(a1) = -1;
        v39 = -1;
      }
    case 2:
      if ( *(_BYTE *)(a4 + 13) & 2 )
        goto LABEL_68;
      v31 = v86 - 1;
      LOBYTE(v94) = v86 == 1 || v84 > 1;
      if ( (_BYTE)v94 )
        goto LABEL_68;
      if ( v31 != 1 )
      {
        LOBYTE(v92) = 1;
        if ( v31 != 2 )
          goto LABEL_122;
        if ( BYTE3(v104) != 4 && (BYTE3(v104) != 3 || !v87) )
          goto LABEL_124;
        goto LABEL_68;
      }
      if ( v87 || (_BYTE)v104 == 3 || BYTE2(v104) == 1 )
      {
LABEL_68:
        v32 = a1;
        LODWORD(v92) = 0;
        v91 = *(_DWORD *)(v95 + 24);
        v33 = HIDWORD(a1);
        while ( 1 )
        {
          LOBYTE(v94) = v33 == -1;
          v89 = v94 & (v32 != 0);
          if ( v89 )
          {
            LOBYTE(v94) = 0;
            if ( *(_DWORD *)(v32 + 8) >= *(_DWORD *)(v32 + 12) )
            {
              v37 = *(int (**)(void))(*(_DWORD *)v32 + 36);
              v97 = 2;
              v38 = v37();
              LOBYTE(v94) = 0;
              if ( v38 == -1 )
              {
                LODWORD(a1) = 0;
                LOBYTE(v94) = v89;
              }
            }
          }
          v34 = a3 == -1;
          if ( a2 && v34 )
          {
            if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
            {
              v58 = *(int (**)(void))(*(_DWORD *)a2 + 36);
              v97 = 2;
              v59 = v58();
              LOBYTE(v94) = (v59 == -1) ^ v94;
              if ( v59 == -1 )
                a2 = 0;
            }
          }
          else
          {
            LOBYTE(v94) = v34 ^ v94;
          }
          LOBYTE(v94) = ((unsigned int)v92 < v91) & v94;
          if ( !(_BYTE)v94 )
          {
            if ( (_DWORD)v92 == v91 )
            {
              LOBYTE(v92) = 1;
              goto LABEL_122;
            }
LABEL_153:
            if ( (_DWORD)v92 )
              goto LABEL_111;
            v60 = *(_DWORD *)(a4 + 12);
            LODWORD(v94) = v60;
            v61 = v60 & 0x200;
            LODWORD(v92) = v61 == 0;
            LOBYTE(v94) = v61 != 0;
            goto LABEL_122;
          }
          LOBYTE(v35) = BYTE4(a1);
          v32 = a1;
          if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
          {
            v36 = *(_BYTE **)(a1 + 8);
            if ( (unsigned int)v36 < *(_DWORD *)(a1 + 12) )
            {
              if ( *v36 != *(_BYTE *)(*(_DWORD *)(v95 + 20) + v92) )
                goto LABEL_153;
LABEL_77:
              *(_DWORD *)(v32 + 8) = v36 + 1;
              goto LABEL_78;
            }
            v77 = *(int (**)(void))(*(_DWORD *)a1 + 36);
            v97 = 2;
            v35 = v77();
            if ( v35 == -1 )
              LODWORD(a1) = 0;
          }
          if ( *(_BYTE *)(*(_DWORD *)(v95 + 20) + v92) != (_BYTE)v35 )
            goto LABEL_153;
          v32 = a1;
          v36 = *(_BYTE **)(a1 + 8);
          if ( (unsigned int)v36 < *(_DWORD *)(a1 + 12) )
            goto LABEL_77;
          v65 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v97 = 2;
          v65();
          v32 = a1;
LABEL_78:
          LODWORD(v92) = v92 + 1;
          v33 = -1;
          HIDWORD(a1) = -1;
        }
      }
      do
      {
LABEL_124:
        v7 = &v103 + ++v86;
        if ( (unsigned __int8)*(&v103 + v86) <= 4u )
          goto LABEL_8;
LABEL_125:
        LOBYTE(v94) = 0;
        LOBYTE(v92) = 1;
LABEL_122:
        ;
      }
      while ( v86 <= 3 && !(_BYTE)v94 );
      v8 = v92 & (v84 > 1);
LABEL_12:
      if ( v8 )
      {
        if ( v88 )
          LODWORD(v92) = *(_DWORD *)(v95 + 36);
        else
          LODWORD(v92) = *(_DWORD *)(v95 + 28);
        v9 = HIDWORD(a1);
        v10 = a1;
        HIDWORD(v92) = 1;
        while ( 1 )
        {
          LOBYTE(v94) = v9 == -1;
          LOBYTE(v91) = v94 & (v10 != 0);
          if ( (_BYTE)v91 )
          {
            LOBYTE(v94) = 0;
            if ( *(_DWORD *)(v10 + 8) >= *(_DWORD *)(v10 + 12) )
            {
              v14 = *(int (**)(void))(*(_DWORD *)v10 + 36);
              v97 = 2;
              v15 = v14();
              LOBYTE(v94) = 0;
              if ( v15 == -1 )
              {
                LODWORD(a1) = 0;
                LOBYTE(v94) = v91;
              }
            }
          }
          v11 = a3 == -1;
          if ( a2 && v11 )
          {
            if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
            {
              v56 = *(int (**)(void))(*(_DWORD *)a2 + 36);
              v97 = 2;
              v57 = v56();
              LOBYTE(v94) = (v57 == -1) ^ v94;
              if ( v57 == -1 )
                a2 = 0;
            }
          }
          else
          {
            LOBYTE(v94) = v11 ^ v94;
          }
          if ( HIDWORD(v92) >= v84 || !(_BYTE)v94 )
          {
            if ( HIDWORD(v92) == v84 )
            {
              if ( v109 <= 1 )
                goto LABEL_159;
              goto LABEL_178;
            }
            goto LABEL_111;
          }
          LOBYTE(v12) = BYTE4(a1);
          v10 = a1;
          if ( (_DWORD)a1 && HIDWORD(a1) == -1 )
          {
            v13 = *(_BYTE **)(a1 + 8);
            if ( (unsigned int)v13 < *(_DWORD *)(a1 + 12) )
            {
              if ( *(_BYTE *)(v92 + HIDWORD(v92)) != *v13 )
                goto LABEL_111;
LABEL_25:
              *(_DWORD *)(v10 + 8) = v13 + 1;
              goto LABEL_26;
            }
            v76 = *(int (**)(void))(*(_DWORD *)a1 + 36);
            v97 = 2;
            v12 = v76();
            if ( v12 == -1 )
              LODWORD(a1) = 0;
          }
          if ( *(_BYTE *)(v92 + HIDWORD(v92)) != (_BYTE)v12 )
            goto LABEL_111;
          v10 = a1;
          v13 = *(_BYTE **)(a1 + 8);
          if ( (unsigned int)v13 < *(_DWORD *)(a1 + 12) )
            goto LABEL_25;
          v63 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v97 = 2;
          v63();
          v10 = a1;
LABEL_26:
          ++HIDWORD(v92);
          v9 = -1;
          HIDWORD(a1) = -1;
        }
      }
      if ( !(_BYTE)v92 )
        goto LABEL_111;
      if ( v109 <= 1 )
        goto LABEL_159;
LABEL_178:
      v68 = sub_6F8C70B0((int)&v108, 48, 0);
      if ( v68 )
      {
        if ( v68 != -1 )
          goto LABEL_208;
        v68 = v109 - 1;
        if ( !v109 )
        {
          *(_BYTE *)v108 = 0;
          goto LABEL_159;
        }
        if ( v109 != 1 )
        {
LABEL_208:
          v78 = 0;
          if ( v68 > v109 )
            v68 = v109;
          v97 = 2;
          sub_6F93C060((int)&v108, v78, v68);
        }
      }
LABEL_159:
      if ( v88 && *(_BYTE *)v108 != 48 )
      {
        v97 = 2;
        sub_6F93A950((int)&v108, 0, 0, 1u, 45);
      }
      if ( v106 )
      {
        v64 = v93;
        if ( v90 )
          v64 = v82;
        v97 = 2;
        sub_6F93C440((int)&v105, v64);
        v80 = (int *)&v105;
        v79 = *(_DWORD *)(v95 + 12);
        if ( !(unsigned __int8)sub_6F95AAF0(*(_DWORD *)(v95 + 8), v79, (int)&v105) )
          *a5 |= 4u;
      }
      if ( v90 && *(_DWORD *)(v95 + 44) != v93 )
LABEL_111:
        *a5 |= 4u;
      else
        sub_6F93AAF0(a6, (int)&v108);
      v97 = 2;
      if ( sub_6F8C2310(&a1, (int)&a2) )
        *a5 |= 2u;
      v94 = a1;
      if ( (unsigned int *)v108 != &v110 )
        j_free_1(v108);
      if ( (unsigned int *)v105 != &v107 )
        j_free_1(v105);
      sub_6F8A1AD0((int *)&v96);
      return v94;
    case 3:
      if ( *(_DWORD *)(v95 + 32) )
      {
        LODWORD(v92) = &a2;
        v97 = 2;
        LOBYTE(v94) = sub_6F8C2310(&a1, (int)&a2);
        if ( !(_BYTE)v94 )
        {
          v69 = sub_6F8C2400((int *)&a1, SHIDWORD(a1));
          if ( **(_BYTE **)(v95 + 28) == v69 )
          {
            v84 = *(_DWORD *)(v95 + 32);
            sub_6F92D0F0((_DWORD *)a1);
            HIDWORD(a1) = -1;
            LOBYTE(v92) = 1;
            goto LABEL_122;
          }
        }
        if ( !*(_DWORD *)(v95 + 40) )
        {
          if ( !*(_DWORD *)(v95 + 32) )
            goto LABEL_60;
          goto LABEL_136;
        }
      }
      else
      {
        if ( !*(_DWORD *)(v95 + 40) )
          goto LABEL_60;
        LODWORD(v92) = &a2;
      }
      v97 = 2;
      LOBYTE(v94) = sub_6F8C2310(&a1, v92);
      if ( !(_BYTE)v94 )
      {
        v97 = 2;
        v70 = sub_6F8C2400((int *)&a1, SHIDWORD(a1));
        if ( **(_BYTE **)(v95 + 36) == v70 )
        {
          v71 = *(_DWORD *)(v95 + 40);
          v97 = 2;
          v84 = v71;
          sub_6F92D0F0((_DWORD *)a1);
          HIDWORD(a1) = -1;
          LOBYTE(v92) = 1;
          v88 = 1;
          goto LABEL_122;
        }
      }
      if ( !*(_DWORD *)(v95 + 32) || *(_DWORD *)(v95 + 40) )
      {
LABEL_60:
        LOBYTE(v94) = v87;
        LOBYTE(v92) = !v87;
        goto LABEL_122;
      }
LABEL_136:
      LOBYTE(v94) = 0;
      LOBYTE(v92) = 1;
      v88 = 1;
      goto LABEL_122;
    case 4:
      v16 = HIDWORD(a1);
      v17 = a1;
      while ( 2 )
      {
        LOBYTE(v94) = v16 == -1;
        LOBYTE(v92) = v94 & (v17 != 0);
        if ( (_BYTE)v92 )
        {
          LOBYTE(v94) = 0;
          if ( *(_DWORD *)(v17 + 8) >= *(_DWORD *)(v17 + 12) )
          {
            v48 = *(int (**)(void))(*(_DWORD *)v17 + 36);
            v97 = 2;
            v49 = v48();
            LOBYTE(v94) = 0;
            if ( v49 == -1 )
            {
              LODWORD(a1) = 0;
              LOBYTE(v94) = v92;
            }
          }
        }
        v22 = a3 == -1;
        LOBYTE(v92) = v22 & (a2 != 0);
        if ( v22 & (a2 != 0) )
        {
          v22 = 0;
          if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
          {
            v46 = *(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 36);
            v97 = 2;
            v47 = v46(a2, 0);
            v22 = 0;
            if ( v47 == -1 )
            {
              a2 = 0;
              v22 = v92;
            }
          }
        }
        if ( v22 == (_BYTE)v94 )
          goto LABEL_174;
        v23 = BYTE4(a1);
        if ( HIDWORD(a1) != -1 || !(_DWORD)a1 )
          goto LABEL_45;
        v50 = *(char **)(a1 + 8);
        if ( (unsigned int)v50 >= *(_DWORD *)(a1 + 12) )
        {
          v66 = *(int (**)(void))(*(_DWORD *)a1 + 36);
          v97 = 2;
          v67 = v66();
          LOBYTE(v94) = v67;
          if ( v67 == -1 )
          {
            LODWORD(a1) = 0;
            LOBYTE(v94) = -1;
          }
        }
        else
        {
          v23 = *v50;
LABEL_45:
          LOBYTE(v94) = v23;
        }
        v24 = memchr((const void *)HIDWORD(v92), (char)v94, 0xAu);
        if ( v24 )
        {
          v18 = v108;
          LOBYTE(v92) = off_6FB49DE8[(_DWORD)&v24[-v85]];
          LODWORD(v94) = v109;
          v19 = 15;
          if ( (unsigned int *)v108 != &v110 )
            v19 = v110;
          v91 = v109 + 1;
          if ( v109 + 1 > v19 )
          {
            v97 = 2;
            sub_6F93C2B0((int)&v108, v94, 0, 0, 1u);
            v18 = v108;
          }
          v20 = v94;
          ++v93;
          *((_BYTE *)v18 + v94) = v92;
          v109 = v91;
          *((_BYTE *)v108 + v20 + 1) = 0;
        }
        else
        {
          LOBYTE(v92) = v90 | (*(_BYTE *)(v95 + 17) != (_BYTE)v94);
          if ( (_BYTE)v92 )
          {
            v25 = *(_BYTE *)(v95 + 16);
            if ( v25 )
            {
              if ( *(_BYTE *)(v95 + 18) == (_BYTE)v94 )
              {
                if ( !v90 )
                {
                  if ( v93 )
                  {
                    v26 = v105;
                    LODWORD(v94) = v106;
                    v27 = 15;
                    if ( (unsigned int *)v105 != &v107 )
                      v27 = v107;
                    LODWORD(v92) = v106 + 1;
                    if ( v106 + 1 > v27 )
                    {
                      v97 = 2;
                      sub_6F93C2B0((int)&v105, v94, 0, 0, 1u);
                      v26 = v105;
                    }
                    v28 = v94;
                    v29 = v93;
                    v93 = 0;
                    *((_BYTE *)v26 + v94) = v29;
                    v106 = v92;
                    *((_BYTE *)v105 + v28 + 1) = 0;
                    v17 = a1;
                    v21 = *(_DWORD *)(a1 + 8);
                    if ( v21 >= *(_DWORD *)(a1 + 12) )
                      goto LABEL_57;
                    goto LABEL_38;
                  }
                  LOBYTE(v92) = 0;
                  goto LABEL_110;
                }
                v25 = v90;
              }
              LOBYTE(v92) = v25;
            }
LABEL_110:
            if ( !v109 )
              goto LABEL_111;
LABEL_121:
            LOBYTE(v94) = v92 ^ 1;
            goto LABEL_122;
          }
          if ( *(_DWORD *)(v95 + 44) <= 0 )
          {
            v90 = 0;
LABEL_174:
            LOBYTE(v92) = 1;
            if ( !v109 )
              goto LABEL_111;
            goto LABEL_121;
          }
          v51 = v93;
          v90 = 1;
          v93 = 0;
          v82 = v51;
        }
        v17 = a1;
        v21 = *(_DWORD *)(a1 + 8);
        if ( v21 >= *(_DWORD *)(a1 + 12) )
        {
LABEL_57:
          v30 = *(void (**)(void))(*(_DWORD *)v17 + 40);
          v97 = 2;
          v30();
          v17 = a1;
          goto LABEL_39;
        }
LABEL_38:
        *(_DWORD *)(v17 + 8) = v21 + 1;
LABEL_39:
        HIDWORD(a1) = -1;
        v16 = -1;
        continue;
      }
  }
}
