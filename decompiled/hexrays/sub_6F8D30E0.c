__int64 __stdcall sub_6F8D30E0(__int64 a1, int a2, __int16 a3, int a4, _DWORD *a5, int a6)
{
  int v6; // eax@3
  int v7; // eax@7
  char *v8; // eax@7
  char v9; // al@11
  signed __int16 v10; // ax@15
  int v11; // ecx@15
  bool v12; // dl@16
  __int16 v13; // ax@19
  unsigned int v14; // eax@22
  __int16 *v15; // eax@26
  __int16 v16; // ax@27
  signed __int16 v17; // ax@30
  int v18; // ecx@30
  bool v19; // dl@32
  __int16 v20; // ax@34
  _WORD *v21; // edx@36
  char v22; // dl@39
  int *v23; // edx@44
  unsigned int v24; // eax@44
  char v25; // al@48
  int v26; // ebx@48
  unsigned int v27; // eax@49
  int v28; // ecx@56
  int v29; // ecx@62
  signed __int16 i; // ax@62
  bool v31; // al@63
  __int16 v32; // ax@65
  unsigned int v33; // eax@68
  __int16 *v34; // eax@72
  __int16 v35; // ax@73
  signed __int16 v36; // ax@78
  int v37; // ecx@78
  unsigned __int8 v38; // dl@79
  unsigned __int16 v39; // ax@81
  int v40; // edx@83
  int (__stdcall *v41)(signed int, int); // eax@83
  unsigned int v42; // eax@84
  __int16 *v43; // eax@88
  __int16 v44; // ax@89
  char v45; // al@92
  int *v46; // edx@92
  unsigned int v47; // eax@92
  int v48; // ecx@96
  void (*v49)(void); // eax@97
  __int16 *v50; // eax@98
  __int16 v51; // ax@99
  __int16 *v53; // eax@112
  __int16 v54; // ax@113
  __int16 *v55; // eax@116
  int v56; // eax@121
  __int16 *v57; // eax@128
  __int16 v58; // ax@129
  __int16 *v59; // eax@132
  unsigned __int16 v60; // ax@142
  int v61; // edx@142
  __int16 *v62; // eax@149
  __int16 v63; // ax@150
  char v64; // al@159
  __int16 *v65; // eax@166
  __int16 *v66; // eax@170
  __int16 v67; // dx@171
  __int16 *v68; // eax@174
  void (*v69)(void); // eax@178
  void (*v70)(void); // eax@179
  void (*v71)(void); // eax@180
  int (*v72)(void); // eax@181
  int (*v73)(void); // eax@182
  int (*v74)(void); // eax@183
  int v75; // eax@186
  int v76; // eax@186
  unsigned int v77; // eax@187
  __int16 v78; // ax@192
  unsigned int v79; // eax@193
  __int16 v80; // ax@194
  void *v81; // eax@2
  int v82; // ebx@2
  _DWORD *v83; // ecx@2
  int (*v84)(void); // eax@199
  int (*v85)(void); // eax@200
  int (*v86)(void); // eax@205
  int (*v87)(void); // eax@206
  int (*v88)(void); // eax@207
  int (*v89)(void); // eax@208
  int (*v90)(void); // eax@212
  int (*v91)(void); // eax@213
  int (*v92)(void); // eax@214
  int v93; // [sp+0h] [bp-C8h]@1
  int v94; // [sp+4h] [bp-C4h]@83
  int *v95; // [sp+8h] [bp-C0h]@161
  int v96; // [sp+10h] [bp-B8h]@2
  int v97; // [sp+14h] [bp-B4h]@7
  int *v98; // [sp+18h] [bp-B0h]@1
  unsigned int v99; // [sp+1Ch] [bp-ACh]@7
  int v100; // [sp+20h] [bp-A8h]@3
  int v101; // [sp+24h] [bp-A4h]@7
  bool v102; // [sp+29h] [bp-9Fh]@4
  char v103; // [sp+2Ah] [bp-9Eh]@7
  unsigned __int8 v104; // [sp+2Bh] [bp-9Dh]@7
  _WORD *v105; // [sp+2Ch] [bp-9Ch]@30
  unsigned int v106; // [sp+30h] [bp-98h]@14
  __int64 v107; // [sp+34h] [bp-94h]@1
  int v108; // [sp+3Ch] [bp-8Ch]@1
  __int64 v109; // [sp+40h] [bp-88h]@1
  int v110; // [sp+48h] [bp-80h]@1
  char v111; // [sp+4Ch] [bp-7Ch]@1
  int v112; // [sp+50h] [bp-78h]@1
  int (__cdecl *v113)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-64h]@1
  int *v114; // [sp+68h] [bp-60h]@1
  char *v115; // [sp+6Ch] [bp-5Ch]@1
  int (*v116)(); // [sp+70h] [bp-58h]@1
  int *v117; // [sp+74h] [bp-54h]@1
  char v118; // [sp+8Bh] [bp-3Dh]@125
  int v119; // [sp+8Ch] [bp-3Ch]@7
  int *v120; // [sp+90h] [bp-38h]@5
  int v121; // [sp+94h] [bp-34h]@5
  unsigned int v122; // [sp+98h] [bp-30h]@5
  int *v123; // [sp+A8h] [bp-20h]@7
  unsigned int v124; // [sp+ACh] [bp-1Ch]@7
  unsigned int v125; // [sp+B0h] [bp-18h]@7
  char v126; // [sp+C0h] [bp-8h]@1

  v115 = &v126;
  v113 = sub_6F962A50;
  v114 = dword_6F96C1F8;
  v116 = sub_6F8D4171;
  v117 = &v93;
  sub_6F8A1A60((int *)&v111);
  LODWORD(v109) = a4 + 108;
  v112 = -1;
  v98 = (int *)sub_6F95DC70(a4 + 108);
  v108 = sub_6F8C3BF0(&unk_6FB49F68);
  HIDWORD(v107) = *(_DWORD *)(*(_DWORD *)(a4 + 108) + 12) + 4 * v108;
  v110 = *(_DWORD *)HIDWORD(v107);
  if ( !v110 )
  {
    v112 = 5;
    v81 = sub_6F961B60(0x54u);
    v82 = v109;
    *((_DWORD *)v81 + 1) = 0;
    *(_DWORD *)v81 = off_6FBB0944;
    *((_DWORD *)v81 + 2) = 0;
    *((_DWORD *)v81 + 3) = 0;
    *((_BYTE *)v81 + 16) = 0;
    *(_DWORD *)((char *)v81 + 18) = 0;
    *((_DWORD *)v81 + 6) = 0;
    *((_DWORD *)v81 + 7) = 0;
    *((_DWORD *)v81 + 8) = 0;
    *((_DWORD *)v81 + 9) = 0;
    *((_DWORD *)v81 + 10) = 0;
    *((_DWORD *)v81 + 11) = 0;
    *((_DWORD *)v81 + 12) = 0;
    *((_DWORD *)v81 + 13) = 0;
    *((_DWORD *)v81 + 14) = 0;
    *((_BYTE *)v81 + 82) = 0;
    v112 = 4;
    v96 = (int)v81;
    sub_6F9336C0(v81, v82);
    v83 = *(_DWORD **)(a4 + 108);
    v112 = -1;
    sub_6F936240(v83, v96, v108);
    v110 = *(_DWORD *)HIDWORD(v107);
  }
  v6 = *(_DWORD *)(v110 + 36);
  v100 = v110 + 60;
  if ( v6 )
    v102 = *(_DWORD *)(v110 + 44) != 0;
  else
    v102 = 0;
  v121 = 0;
  v120 = (int *)&v122;
  LOBYTE(v122) = 0;
  if ( *(_BYTE *)(v110 + 16) )
  {
    v112 = 1;
    sub_6F93BF60((int)&v120, 0x20u);
  }
  v124 = 0;
  v123 = (int *)&v125;
  LOBYTE(v125) = 0;
  v112 = 2;
  sub_6F93BF60((int)&v123, 0x20u);
  v101 = 1;
  v104 = 0;
  v7 = *(_DWORD *)(v110 + 56);
  v108 = 0;
  HIDWORD(v107) = v110 + 62;
  v119 = v7;
  v8 = (char *)&v119;
  v103 = 0;
  v97 = 0;
  v99 = 0;
  if ( (unsigned __int8)v119 > 4u )
    goto LABEL_126;
LABEL_8:
  switch ( *v8 )
  {
    case 0:
      LOBYTE(v107) = 1;
      goto LABEL_10;
    case 1:
      v112 = 2;
      if ( sub_6F8C2450(&a1, (int)&a2)
        || (v112 = 2,
            v60 = sub_6F8C2540((int *)&a1, WORD2(a1)),
            v61 = *v98,
            v94 = v60,
            v93 = 32,
            LOBYTE(v107) = (*(int (__stdcall **)(signed int, _DWORD))(v61 + 8))(32, v60),
            !(_BYTE)v107) )
      {
        LOBYTE(v107) = 0;
        if ( v101 == 4 )
        {
LABEL_11:
          v9 = v107 & (v99 > 1);
          goto LABEL_12;
        }
      }
      else
      {
        sub_6F92DAB0((_DWORD *)a1);
        WORD2(a1) = -1;
LABEL_10:
        if ( v101 == 4 )
          goto LABEL_11;
      }
      v36 = WORD2(a1);
      v37 = a1;
      while ( 1 )
      {
        LOBYTE(v109) = v36 == -1;
        LOBYTE(v106) = v109 & (v37 != 0);
        if ( (_BYTE)v106 )
        {
          v43 = *(__int16 **)(v37 + 8);
          if ( (unsigned int)v43 >= *(_DWORD *)(v37 + 12) )
          {
            v86 = *(int (**)(void))(*(_DWORD *)v37 + 36);
            v112 = 2;
            v44 = v86();
          }
          else
          {
            v44 = *v43;
          }
          LOBYTE(v109) = 0;
          if ( v44 == -1 )
          {
            LODWORD(a1) = 0;
            LOBYTE(v109) = v106;
          }
        }
        v38 = a3 == -1;
        LOBYTE(v106) = v38 & (a2 != 0);
        if ( v38 & (a2 != 0) )
        {
          v57 = *(__int16 **)(a2 + 8);
          if ( (unsigned int)v57 >= *(_DWORD *)(a2 + 12) )
          {
            v85 = *(int (**)(void))(*(_DWORD *)a2 + 36);
            v112 = 2;
            v58 = v85();
          }
          else
          {
            v58 = *v57;
          }
          v38 = 0;
          if ( v58 == -1 )
          {
            a2 = 0;
            v38 = v106;
          }
        }
        if ( (_BYTE)v109 == v38 )
          break;
        v39 = WORD2(a1);
        if ( (_DWORD)a1 && WORD2(a1) == -1 )
        {
          v59 = *(__int16 **)(a1 + 8);
          if ( (unsigned int)v59 >= *(_DWORD *)(a1 + 12) )
          {
            v84 = *(int (**)(void))(*(_DWORD *)a1 + 36);
            v112 = 2;
            v39 = v84();
          }
          else
          {
            v39 = *v59;
          }
          if ( v39 == -1 )
            LODWORD(a1) = 0;
        }
        v40 = *v98;
        v94 = v39;
        v93 = 32;
        v41 = *(int (__stdcall **)(signed int, int))(v40 + 8);
        v112 = 2;
        if ( !(unsigned __int8)v41(32, v94) )
          break;
        v37 = a1;
        v42 = *(_DWORD *)(a1 + 8);
        if ( v42 >= *(_DWORD *)(a1 + 12) )
        {
          v69 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v112 = 2;
          v69();
          v37 = a1;
        }
        else
        {
          *(_DWORD *)(a1 + 8) = v42 + 2;
        }
        WORD2(a1) = -1;
        v36 = -1;
      }
      goto LABEL_122;
    case 2:
      if ( *(_BYTE *)(a4 + 13) & 2 )
        goto LABEL_62;
      v28 = v101 - 1;
      LOBYTE(v109) = v101 == 1 || v99 > 1;
      if ( (_BYTE)v109 )
        goto LABEL_62;
      if ( v28 != 1 )
      {
        LOBYTE(v107) = 1;
        if ( v28 != 2 )
          goto LABEL_123;
        if ( BYTE3(v119) != 4 && (BYTE3(v119) != 3 || !v102) )
          goto LABEL_125;
LABEL_62:
        v29 = a1;
        LODWORD(v107) = 0;
        v106 = *(_DWORD *)(v110 + 28);
        for ( i = WORD2(a1); ; i = -1 )
        {
          LOBYTE(v109) = i == -1;
          LOBYTE(v105) = v109 & (v29 != 0);
          if ( (_BYTE)v105 )
          {
            v34 = *(__int16 **)(v29 + 8);
            if ( (unsigned int)v34 >= *(_DWORD *)(v29 + 12) )
            {
              v91 = *(int (**)(void))(*(_DWORD *)v29 + 36);
              v112 = 2;
              v35 = v91();
            }
            else
            {
              v35 = *v34;
            }
            LOBYTE(v109) = 0;
            if ( v35 == -1 )
            {
              LODWORD(a1) = 0;
              LOBYTE(v109) = (_BYTE)v105;
            }
          }
          v31 = a3 == -1;
          LOBYTE(v105) = v31 && a2 != 0;
          if ( v31 && a2 != 0 )
          {
            v66 = *(__int16 **)(a2 + 8);
            if ( (unsigned int)v66 >= *(_DWORD *)(a2 + 12) )
            {
              v90 = *(int (**)(void))(*(_DWORD *)a2 + 36);
              v112 = 2;
              v67 = v90();
            }
            else
            {
              v67 = *v66;
            }
            v31 = 0;
            if ( v67 == -1 )
            {
              a2 = 0;
              v31 = (char)v105;
            }
          }
          LOBYTE(v109) = (v109 ^ v31) & ((unsigned int)v107 < v106);
          if ( !(_BYTE)v109 )
            break;
          v32 = WORD2(a1);
          if ( WORD2(a1) == -1 && (_DWORD)a1 )
          {
            v68 = *(__int16 **)(a1 + 8);
            if ( (unsigned int)v68 >= *(_DWORD *)(a1 + 12) )
            {
              v92 = *(int (**)(void))(*(_DWORD *)a1 + 36);
              v112 = 2;
              v32 = v92();
            }
            else
            {
              v32 = *v68;
            }
            if ( v32 == -1 )
              LODWORD(a1) = 0;
          }
          if ( *(_WORD *)(*(_DWORD *)(v110 + 24) + 2 * v107) != v32 )
            goto LABEL_185;
          v29 = a1;
          v33 = *(_DWORD *)(a1 + 8);
          if ( v33 >= *(_DWORD *)(a1 + 12) )
          {
            v71 = *(void (**)(void))(*(_DWORD *)a1 + 40);
            v112 = 2;
            v71();
            v29 = a1;
          }
          else
          {
            *(_DWORD *)(a1 + 8) = v33 + 2;
          }
          LODWORD(v107) = v107 + 1;
          WORD2(a1) = -1;
        }
        if ( (_DWORD)v107 == v106 )
          goto LABEL_127;
LABEL_185:
        if ( (_DWORD)v107 )
          goto LABEL_104;
        v75 = *(_DWORD *)(a4 + 12);
        LODWORD(v109) = v75;
        v76 = v75 & 0x200;
        LODWORD(v107) = v76 == 0;
        LOBYTE(v109) = v76 != 0;
        goto LABEL_123;
      }
      if ( v102 || (_BYTE)v119 == 3 || BYTE2(v119) == 1 )
        goto LABEL_62;
      do
      {
LABEL_125:
        v8 = &v118 + ++v101;
        if ( (unsigned __int8)*(&v118 + v101) <= 4u )
          goto LABEL_8;
LABEL_126:
        LOBYTE(v109) = 0;
LABEL_127:
        LOBYTE(v107) = 1;
LABEL_123:
        ;
      }
      while ( v101 <= 3 && !(_BYTE)v109 );
      v9 = v107 & (v99 > 1);
LABEL_12:
      if ( v9 )
      {
        if ( v103 )
          v106 = *(_DWORD *)(v110 + 40);
        else
          v106 = *(_DWORD *)(v110 + 32);
        v10 = WORD2(a1);
        v11 = a1;
        HIDWORD(v107) = 1;
        while ( 1 )
        {
          LOBYTE(v109) = v10 == -1;
          LOBYTE(v107) = v109 & (v11 != 0);
          if ( (_BYTE)v107 )
          {
            v15 = *(__int16 **)(v11 + 8);
            if ( (unsigned int)v15 >= *(_DWORD *)(v11 + 12) )
            {
              v87 = *(int (**)(void))(*(_DWORD *)v11 + 36);
              v112 = 2;
              v16 = v87();
            }
            else
            {
              v16 = *v15;
            }
            LOBYTE(v109) = 0;
            if ( v16 == -1 )
            {
              LODWORD(a1) = 0;
              LOBYTE(v109) = v107;
            }
          }
          v12 = a3 == -1;
          LOBYTE(v107) = v12 && a2 != 0;
          if ( v12
            && a2 != 0
            && ((v62 = *(__int16 **)(a2 + 8), (unsigned int)v62 >= *(_DWORD *)(a2 + 12)) ? (v88 = *(int (**)(void))(*(_DWORD *)a2 + 36),
                                                                                            v112 = 2,
                                                                                            v63 = v88()) : (v63 = *v62),
                v12 = 0,
                v63 == -1) )
          {
            a2 = 0;
            if ( (_BYTE)v109 == (_BYTE)v107 )
            {
LABEL_153:
              if ( HIDWORD(v107) == v99 )
              {
                if ( v124 <= 1 )
                  goto LABEL_155;
                goto LABEL_187;
              }
              goto LABEL_104;
            }
          }
          else if ( (_BYTE)v109 == v12 )
          {
            goto LABEL_153;
          }
          if ( HIDWORD(v107) >= v99 )
            goto LABEL_153;
          v13 = WORD2(a1);
          if ( (_DWORD)a1 && WORD2(a1) == -1 )
          {
            v65 = *(__int16 **)(a1 + 8);
            if ( (unsigned int)v65 >= *(_DWORD *)(a1 + 12) )
            {
              v89 = *(int (**)(void))(*(_DWORD *)a1 + 36);
              v112 = 2;
              v13 = v89();
            }
            else
            {
              v13 = *v65;
            }
            if ( v13 == -1 )
              LODWORD(a1) = 0;
          }
          if ( *(_WORD *)(v106 + 2 * HIDWORD(v107)) != v13 )
            goto LABEL_104;
          v11 = a1;
          v14 = *(_DWORD *)(a1 + 8);
          if ( v14 >= *(_DWORD *)(a1 + 12) )
          {
            v70 = *(void (**)(void))(*(_DWORD *)a1 + 40);
            v112 = 2;
            v70();
            v11 = a1;
          }
          else
          {
            *(_DWORD *)(a1 + 8) = v14 + 2;
          }
          ++HIDWORD(v107);
          v10 = -1;
          WORD2(a1) = -1;
        }
      }
      if ( !(_BYTE)v107 )
        goto LABEL_104;
      if ( v124 <= 1 )
        goto LABEL_155;
LABEL_187:
      v77 = sub_6F8C70B0((int)&v123, 48, 0);
      if ( v77 )
      {
        if ( v77 != -1 )
          goto LABEL_223;
        v77 = v124 - 1;
        if ( !v124 )
        {
          *(_BYTE *)v123 = 0;
          goto LABEL_155;
        }
        if ( v124 != 1 )
        {
LABEL_223:
          v93 = 0;
          if ( v77 > v124 )
            v77 = v124;
          v112 = 2;
          sub_6F93C060((int)&v123, v93, v77);
        }
      }
LABEL_155:
      if ( v103 && *(_BYTE *)v123 != 48 )
      {
        v112 = 2;
        sub_6F93A950((int)&v123, 0, 0, 1u, 45);
      }
      if ( v121 )
      {
        v64 = v108;
        if ( v104 )
          v64 = v97;
        v112 = 2;
        sub_6F93C440((int)&v120, v64);
        v95 = (int *)&v120;
        v94 = *(_DWORD *)(v110 + 12);
        if ( !(unsigned __int8)sub_6F95AAF0(*(_DWORD *)(v110 + 8), v94, (int)&v120) )
          *a5 |= 4u;
      }
      if ( v104 && *(_DWORD *)(v110 + 48) != v108 )
LABEL_104:
        *a5 |= 4u;
      else
        sub_6F93AAF0(a6, (int)&v123);
      v112 = 2;
      if ( sub_6F8C2450(&a1, (int)&a2) )
        *a5 |= 2u;
      v109 = a1;
      if ( (unsigned int *)v123 != &v125 )
        j_free_1(v123);
      if ( (unsigned int *)v120 != &v122 )
        j_free_1(v120);
      sub_6F8A1AD0((int *)&v111);
      return v109;
    case 3:
      if ( *(_DWORD *)(v110 + 36) )
      {
        LODWORD(v107) = &a2;
        v112 = 2;
        LOBYTE(v109) = sub_6F8C2450(&a1, (int)&a2);
        if ( !(_BYTE)v109 )
        {
          v80 = sub_6F8C2540((int *)&a1, WORD2(a1));
          if ( **(_WORD **)(v110 + 32) == v80 )
          {
            v99 = *(_DWORD *)(v110 + 36);
            sub_6F92DAB0((_DWORD *)a1);
            LOBYTE(v107) = 1;
            WORD2(a1) = -1;
            goto LABEL_123;
          }
        }
        if ( !*(_DWORD *)(v110 + 44) )
        {
          if ( !*(_DWORD *)(v110 + 36) )
            goto LABEL_54;
          goto LABEL_141;
        }
      }
      else
      {
        if ( !*(_DWORD *)(v110 + 44) )
          goto LABEL_54;
        LODWORD(v107) = &a2;
      }
      v112 = 2;
      LOBYTE(v109) = sub_6F8C2450(&a1, v107);
      if ( !(_BYTE)v109 )
      {
        v112 = 2;
        v78 = sub_6F8C2540((int *)&a1, WORD2(a1));
        if ( **(_WORD **)(v110 + 40) == v78 )
        {
          v79 = *(_DWORD *)(v110 + 44);
          v112 = 2;
          v99 = v79;
          sub_6F92DAB0((_DWORD *)a1);
          LOBYTE(v107) = 1;
          WORD2(a1) = -1;
          v103 = 1;
          goto LABEL_123;
        }
      }
      if ( !*(_DWORD *)(v110 + 36) || *(_DWORD *)(v110 + 44) )
      {
LABEL_54:
        LOBYTE(v109) = v102;
        LOBYTE(v107) = !v102;
        goto LABEL_123;
      }
LABEL_141:
      LOBYTE(v109) = 0;
      LOBYTE(v107) = 1;
      v103 = 1;
      goto LABEL_123;
    case 4:
      v17 = WORD2(a1);
      v18 = a1;
      v105 = (_WORD *)(v110 + 82);
      while ( 2 )
      {
        LOBYTE(v109) = v17 == -1;
        LOBYTE(v107) = v109 & (v18 != 0);
        if ( (_BYTE)v107 )
        {
          v53 = *(__int16 **)(v18 + 8);
          if ( (unsigned int)v53 >= *(_DWORD *)(v18 + 12) )
          {
            v73 = *(int (**)(void))(*(_DWORD *)v18 + 36);
            v112 = 2;
            v54 = v73();
          }
          else
          {
            v54 = *v53;
          }
          LOBYTE(v109) = 0;
          if ( v54 == -1 )
          {
            LODWORD(a1) = 0;
            LOBYTE(v109) = v107;
          }
        }
        v19 = a3 == -1;
        LOBYTE(v107) = v19 && a2 != 0;
        if ( v19
          && a2 != 0
          && ((v50 = *(__int16 **)(a2 + 8), (unsigned int)v50 >= *(_DWORD *)(a2 + 12)) ? (v72 = *(int (**)(void))(*(_DWORD *)a2 + 36),
                                                                                          v112 = 2,
                                                                                          v51 = v72()) : (v51 = *v50),
              v19 = 0,
              v51 == -1) )
        {
          a2 = 0;
          if ( (_BYTE)v109 == (_BYTE)v107 )
            goto LABEL_102;
        }
        else if ( (_BYTE)v109 == v19 )
        {
          goto LABEL_102;
        }
        v20 = WORD2(a1);
        if ( (_DWORD)a1 && WORD2(a1) == -1 )
        {
          v55 = *(__int16 **)(a1 + 8);
          if ( (unsigned int)v55 >= *(_DWORD *)(a1 + 12) )
          {
            v74 = *(int (**)(void))(*(_DWORD *)a1 + 36);
            v112 = 2;
            v20 = v74();
          }
          else
          {
            v20 = *v55;
          }
          if ( v20 == -1 )
            LODWORD(a1) = 0;
        }
        v21 = (_WORD *)HIDWORD(v107);
        do
        {
          if ( *v21 == v20 )
          {
            v45 = off_6FB49DE8[((signed int)v21 - v100) >> 1];
            v46 = v123;
            LOBYTE(v107) = v45;
            LODWORD(v109) = v124;
            v47 = 15;
            if ( (unsigned int *)v123 != &v125 )
              v47 = v125;
            v106 = v124 + 1;
            if ( v124 + 1 > v47 )
            {
              v112 = 2;
              sub_6F93C2B0((int)&v123, v109, 0, 0, 1u);
              v46 = v123;
            }
            v48 = v109;
            ++v108;
            *((_BYTE *)v46 + v109) = v107;
            v124 = v106;
            *((_BYTE *)v123 + v48 + 1) = 0;
            v18 = a1;
            v27 = *(_DWORD *)(a1 + 8);
            if ( v27 < *(_DWORD *)(a1 + 12) )
              goto LABEL_50;
            goto LABEL_97;
          }
          ++v21;
        }
        while ( v21 != v105 );
        v22 = v104 | (*(_WORD *)(v110 + 18) != v20);
        if ( v104 | (*(_WORD *)(v110 + 18) != v20) )
        {
          LOBYTE(v107) = *(_BYTE *)(v110 + 16);
          if ( (_BYTE)v107 )
          {
            if ( *(_WORD *)(v110 + 20) == v20 )
            {
              if ( v104 )
              {
                LOBYTE(v107) = v104;
              }
              else
              {
                if ( v108 )
                {
                  v23 = v120;
                  LODWORD(v109) = v121;
                  v24 = 15;
                  if ( (unsigned int *)v120 != &v122 )
                    v24 = v122;
                  LODWORD(v107) = v121 + 1;
                  if ( v121 + 1 > v24 )
                  {
                    v112 = 2;
                    sub_6F93C2B0((int)&v120, v109, 0, 0, 1u);
                    v23 = v120;
                  }
                  v25 = v108;
                  v26 = v109;
                  v108 = 0;
                  *((_BYTE *)v23 + v109) = v25;
                  v121 = v107;
                  *((_BYTE *)v120 + v26 + 1) = 0;
LABEL_49:
                  v18 = a1;
                  v27 = *(_DWORD *)(a1 + 8);
                  if ( v27 < *(_DWORD *)(a1 + 12) )
                  {
LABEL_50:
                    *(_DWORD *)(v18 + 8) = v27 + 2;
LABEL_51:
                    WORD2(a1) = -1;
                    v17 = -1;
                    continue;
                  }
LABEL_97:
                  v49 = *(void (**)(void))(*(_DWORD *)v18 + 40);
                  v112 = 2;
                  v49();
                  v18 = a1;
                  goto LABEL_51;
                }
                LOBYTE(v107) = 0;
              }
            }
          }
          else
          {
            LOBYTE(v107) = v22;
          }
          goto LABEL_103;
        }
        break;
      }
      if ( *(_DWORD *)(v110 + 48) > 0 )
      {
        v56 = v108;
        v104 = 1;
        v108 = 0;
        v97 = v56;
        goto LABEL_49;
      }
      v104 = 0;
LABEL_102:
      LOBYTE(v107) = 1;
LABEL_103:
      if ( !v124 )
        goto LABEL_104;
LABEL_122:
      LOBYTE(v109) = v107 ^ 1;
      goto LABEL_123;
  }
}
