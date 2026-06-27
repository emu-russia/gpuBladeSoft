__int64 __stdcall sub_6F8F8CF0(__int64 a1, int a2, __int16 a3, int a4, _DWORD *a5, int a6)
{
  int v6; // eax@1
  int v7; // ecx@1
  int v8; // eax@5
  char *v9; // eax@5
  char v10; // al@9
  unsigned int v11; // eax@15
  __int16 v12; // ax@20
  __int16 *v13; // eax@22
  signed __int16 v14; // ax@26
  int v15; // ecx@26
  bool v16; // dl@28
  __int16 v17; // ax@30
  _WORD *v18; // edx@32
  char v19; // dl@35
  unsigned int v20; // eax@41
  int v21; // ecx@45
  bool v22; // al@54
  __int16 v23; // ax@55
  unsigned int v24; // eax@56
  void (*v25)(void); // eax@57
  int v26; // edx@64
  int (__stdcall *v27)(signed int, int); // eax@64
  unsigned int v28; // eax@65
  unsigned __int16 v29; // ax@69
  __int16 *v30; // eax@71
  void (*v31)(void); // eax@76
  __int16 *v32; // eax@77
  __int16 v33; // ax@78
  __int16 *v35; // eax@88
  __int16 v36; // ax@89
  __int16 *v37; // eax@92
  int v38; // eax@97
  unsigned __int16 v39; // ax@109
  int v40; // edx@109
  void (*v41)(void); // eax@116
  void (*v42)(void); // eax@117
  char v43; // al@122
  int (*v44)(void); // eax@128
  int (*v45)(void); // eax@129
  int (*v46)(void); // eax@130
  int v47; // eax@133
  int v48; // eax@133
  unsigned int v49; // eax@136
  unsigned int v50; // edx@137
  __int16 v51; // ax@142
  unsigned int v52; // eax@143
  __int16 v53; // ax@144
  int (*v54)(void); // eax@149
  _BYTE *v55; // eax@154
  int (*v56)(void); // eax@160
  int v57; // [sp+8h] [bp-98h]@1
  int v58; // [sp+Ch] [bp-94h]@64
  int *v59; // [sp+10h] [bp-90h]@3
  int v60; // [sp+1Ch] [bp-84h]@5
  unsigned int v61; // [sp+20h] [bp-80h]@51
  int *v62; // [sp+24h] [bp-7Ch]@1
  unsigned int v63; // [sp+28h] [bp-78h]@5
  int v64; // [sp+2Ch] [bp-74h]@1
  int v65; // [sp+30h] [bp-70h]@5
  char v66; // [sp+34h] [bp-6Ch]@5
  bool v67; // [sp+35h] [bp-6Bh]@1
  char v68; // [sp+36h] [bp-6Ah]@45
  unsigned __int8 v69; // [sp+37h] [bp-69h]@5
  __int64 v70; // [sp+38h] [bp-68h]@5
  unsigned int v71; // [sp+40h] [bp-60h]@5
  int v72; // [sp+44h] [bp-5Ch]@5
  __int64 v73; // [sp+48h] [bp-58h]@1
  int v74; // [sp+50h] [bp-50h]@1
  char v75; // [sp+54h] [bp-4Ch]@1
  int v76; // [sp+58h] [bp-48h]@1
  int (__cdecl *v77)(int, int, __int64, void (**)(void), int *); // [sp+6Ch] [bp-34h]@1
  int *v78; // [sp+70h] [bp-30h]@1
  char *v79; // [sp+74h] [bp-2Ch]@1
  int (*v80)(); // [sp+78h] [bp-28h]@1
  int *v81; // [sp+7Ch] [bp-24h]@1
  char v82; // [sp+8Ah] [bp-16h]@5
  char v83; // [sp+8Bh] [bp-15h]@87
  _DWORD *v84; // [sp+8Ch] [bp-14h]@3
  _DWORD *v85; // [sp+90h] [bp-10h]@5
  int v86; // [sp+94h] [bp-Ch]@3
  char v87; // [sp+98h] [bp-8h]@1

  v79 = &v87;
  v81 = &v57;
  v77 = sub_6F962A50;
  v78 = dword_6F96B1B4;
  v80 = sub_6F8F9833;
  sub_6F8A1A60((int *)&v75);
  LODWORD(v73) = a4 + 108;
  v76 = -1;
  v62 = (int *)sub_6F95DC70(a4 + 108);
  v6 = sub_6F8BF4C0(v73);
  v67 = 0;
  v7 = *(_DWORD *)(v6 + 36);
  v74 = v6;
  v64 = v6 + 60;
  if ( v7 )
    v67 = *(_DWORD *)(v6 + 44) != 0;
  v59 = &v86;
  v76 = -1;
  v84 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v74 + 16) )
  {
    v76 = 1;
    sub_6F909A00((int *)&v84, 0x20u);
  }
  v59 = (int *)&v82;
  v76 = 1;
  v85 = sub_6F9081A0(0, 0);
  v76 = 2;
  sub_6F909A00((int *)&v85, 0x20u);
  v65 = 1;
  v69 = 0;
  v72 = 0;
  v71 = v74 + 62;
  v8 = *(_DWORD *)(v74 + 56);
  v60 = 0;
  v86 = v8;
  HIDWORD(v70) = v74 + 82;
  v9 = (char *)&v86;
  v63 = 0;
  v66 = 0;
  if ( (unsigned __int8)v86 > 4u )
    goto LABEL_102;
LABEL_6:
  switch ( *v9 )
  {
    case 0:
      LOBYTE(v70) = 1;
      goto LABEL_8;
    case 1:
      v76 = 2;
      if ( sub_6F8C2450(&a1, (int)&a2)
        || (v76 = 2,
            v39 = sub_6F8C24F0((int *)&a1, WORD2(a1)),
            v40 = *v62,
            v58 = v39,
            v57 = 32,
            LOBYTE(v70) = (*(int (__stdcall **)(signed int, _DWORD))(v40 + 8))(32, v39),
            !(_BYTE)v70) )
      {
        LOBYTE(v70) = 0;
        if ( v65 == 4 )
        {
LABEL_9:
          v10 = v70 & (v63 > 1);
          goto LABEL_10;
        }
      }
      else
      {
        sub_6F92DAB0((_DWORD *)a1);
        WORD2(a1) = -1;
LABEL_8:
        if ( v65 == 4 )
          goto LABEL_9;
      }
      LODWORD(v73) = &a2;
      while ( 1 )
      {
        v76 = 2;
        if ( sub_6F8C2450(&a1, v73) )
          break;
        v29 = WORD2(a1);
        if ( (_DWORD)a1 && WORD2(a1) == -1 )
        {
          v30 = *(__int16 **)(a1 + 8);
          if ( (unsigned int)v30 >= *(_DWORD *)(a1 + 12) )
          {
            v54 = *(int (**)(void))(*(_DWORD *)a1 + 36);
            v76 = 2;
            v29 = v54();
          }
          else
          {
            v29 = *v30;
          }
          if ( v29 == -1 )
            LODWORD(a1) = 0;
        }
        v26 = *v62;
        v58 = v29;
        v57 = 32;
        v27 = *(int (__stdcall **)(signed int, int))(v26 + 8);
        v76 = 2;
        if ( !(unsigned __int8)v27(32, v58) )
          break;
        v28 = *(_DWORD *)(a1 + 8);
        if ( v28 >= *(_DWORD *)(a1 + 12) )
        {
          v41 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v76 = 2;
          v41();
        }
        else
        {
          *(_DWORD *)(a1 + 8) = v28 + 2;
        }
        WORD2(a1) = -1;
      }
      goto LABEL_98;
    case 2:
      if ( *(_BYTE *)(a4 + 13) & 2 )
        goto LABEL_51;
      v21 = v65 - 1;
      v68 = v65 == 1 || v63 > 1;
      if ( v68 )
        goto LABEL_51;
      if ( v21 != 1 )
      {
        LOBYTE(v70) = 1;
        if ( v21 != 2 )
          goto LABEL_99;
        if ( BYTE3(v86) != 4 && (BYTE3(v86) != 3 || !v67) )
          goto LABEL_101;
        goto LABEL_51;
      }
      if ( v67 || (_BYTE)v86 == 3 || BYTE2(v86) == 1 )
      {
LABEL_51:
        LODWORD(v70) = 0;
        v61 = *(_DWORD *)(v74 + 28);
        LODWORD(v73) = &a2;
        while ( 1 )
        {
          v76 = 2;
          v22 = sub_6F8C2450(&a1, v73);
          v68 = (unsigned int)v70 < v61 && !v22;
          if ( !v68 )
            break;
          v23 = sub_6F8C24F0((int *)&a1, WORD2(a1));
          if ( *(_WORD *)(*(_DWORD *)(v74 + 24) + 2 * v70) != v23 )
            goto LABEL_132;
          v24 = *(_DWORD *)(a1 + 8);
          if ( v24 < *(_DWORD *)(a1 + 12) )
          {
            *(_DWORD *)(a1 + 8) = v24 + 2;
          }
          else
          {
            v25 = *(void (**)(void))(*(_DWORD *)a1 + 40);
            v76 = 2;
            v25();
          }
          LODWORD(v70) = v70 + 1;
          WORD2(a1) = -1;
        }
        if ( (_DWORD)v70 == v61 )
          goto LABEL_103;
LABEL_132:
        if ( !(_DWORD)v70 )
        {
          v47 = *(_DWORD *)(a4 + 12);
          LODWORD(v73) = v47;
          v48 = v47 & 0x200;
          LODWORD(v70) = v48 == 0;
          v68 = v48 != 0;
          goto LABEL_99;
        }
        goto LABEL_84;
      }
      do
      {
LABEL_101:
        v9 = (char *)&v85 + ++v65 + 3;
        if ( *((_BYTE *)&v85 + v65 + 3) <= 4u )
          goto LABEL_6;
LABEL_102:
        v68 = 0;
LABEL_103:
        LOBYTE(v70) = 1;
LABEL_99:
        ;
      }
      while ( v65 <= 3 && !v68 );
      v10 = v70 & (v63 > 1);
LABEL_10:
      if ( v10 )
      {
        if ( v66 )
          HIDWORD(v70) = *(_DWORD *)(v74 + 40);
        else
          HIDWORD(v70) = *(_DWORD *)(v74 + 32);
        v71 = 1;
        LODWORD(v73) = &a2;
        while ( 1 )
        {
          v76 = 2;
          if ( sub_6F8C2450(&a1, v73) == 1 || v71 >= v63 )
            break;
          v12 = WORD2(a1);
          if ( (_DWORD)a1 && WORD2(a1) == -1 )
          {
            v13 = *(__int16 **)(a1 + 8);
            if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 12) )
            {
              v56 = *(int (**)(void))(*(_DWORD *)a1 + 36);
              v76 = 2;
              v12 = v56();
            }
            else
            {
              v12 = *v13;
            }
            if ( v12 == -1 )
              LODWORD(a1) = 0;
          }
          if ( *(_WORD *)(HIDWORD(v70) + 2 * v71) != v12 )
            goto LABEL_84;
          v11 = *(_DWORD *)(a1 + 8);
          if ( v11 >= *(_DWORD *)(a1 + 12) )
          {
            v42 = *(void (**)(void))(*(_DWORD *)a1 + 40);
            v76 = 2;
            v42();
          }
          else
          {
            *(_DWORD *)(a1 + 8) = v11 + 2;
          }
          ++v71;
          WORD2(a1) = -1;
        }
        if ( v71 != v63 )
          goto LABEL_84;
        if ( *(v85 - 3) <= 1u )
          goto LABEL_120;
        goto LABEL_136;
      }
      if ( !(_BYTE)v70 )
        goto LABEL_83;
      if ( *(v85 - 3) > 1u )
      {
LABEL_136:
        v49 = sub_6F8BD2C0(&v85, 48, 0);
        if ( v49 )
        {
          v50 = *(v85 - 3);
          v59 = 0;
          v57 = 0;
          if ( v49 == -1 )
            v49 = v50 - 1;
          if ( v49 > v50 )
            v49 = v50;
          v76 = 2;
          sub_6F909B10((const void **)&v85, v57, v49, (int)v59);
        }
      }
LABEL_120:
      if ( v66 )
      {
        v55 = v85;
        if ( *(v85 - 1) >= 0 )
        {
          v76 = 2;
          sub_6F908160((int *)&v85);
          v55 = v85;
        }
        if ( *v55 != 48 )
        {
          if ( *((_DWORD *)v55 - 1) >= 0 )
          {
            v76 = 2;
            sub_6F908160((int *)&v85);
          }
          v76 = 2;
          sub_6F908550(&v85, 0, 0, 1u, 45);
          *(v85 - 1) = -1;
        }
      }
      if ( *(v84 - 3) )
      {
        v43 = v72;
        if ( v69 )
          v43 = v60;
        v76 = 2;
        sub_6F909C90((int *)&v84, v43);
        v59 = (int *)&v84;
        v58 = *(_DWORD *)(v74 + 12);
        if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v74 + 8), v58, &v84) )
          *a5 |= 4u;
      }
      if ( v69 )
      {
        LODWORD(v73) = &a2;
        if ( *(_DWORD *)(v74 + 48) != v72 )
        {
LABEL_84:
          *a5 |= 4u;
          goto LABEL_85;
        }
      }
      v76 = 2;
      sub_6F908910((void *)a6, (int *)&v85);
      LODWORD(v73) = &a2;
LABEL_85:
      v76 = 2;
      if ( sub_6F8C2450(&a1, v73) )
        *a5 |= 2u;
      v73 = a1;
      sub_6F9086F0((int)(v85 - 3), (int)&v83);
      sub_6F9086F0((int)(v84 - 3), (int)&v83);
      sub_6F8A1AD0((int *)&v75);
      return v73;
    case 3:
      if ( *(_DWORD *)(v74 + 36) )
      {
        LODWORD(v73) = &a2;
        v76 = 2;
        v68 = sub_6F8C2450(&a1, (int)&a2);
        if ( !v68 )
        {
          v53 = sub_6F8C24F0((int *)&a1, WORD2(a1));
          if ( **(_WORD **)(v74 + 32) == v53 )
          {
            v63 = *(_DWORD *)(v74 + 36);
            sub_6F92DAB0((_DWORD *)a1);
            LOBYTE(v70) = 1;
            WORD2(a1) = -1;
            goto LABEL_99;
          }
        }
        if ( !*(_DWORD *)(v74 + 44) )
        {
          if ( !*(_DWORD *)(v74 + 36) )
            goto LABEL_60;
          goto LABEL_108;
        }
      }
      else
      {
        if ( !*(_DWORD *)(v74 + 44) )
          goto LABEL_60;
        LODWORD(v73) = &a2;
      }
      v76 = 2;
      v68 = sub_6F8C2450(&a1, v73);
      if ( !v68 )
      {
        v76 = 2;
        v51 = sub_6F8C24F0((int *)&a1, WORD2(a1));
        if ( **(_WORD **)(v74 + 40) == v51 )
        {
          v52 = *(_DWORD *)(v74 + 44);
          v76 = 2;
          v63 = v52;
          sub_6F92DAB0((_DWORD *)a1);
          LOBYTE(v70) = 1;
          WORD2(a1) = -1;
          v66 = 1;
          goto LABEL_99;
        }
      }
      if ( !*(_DWORD *)(v74 + 36) || *(_DWORD *)(v74 + 44) )
      {
LABEL_60:
        v68 = v67;
        LOBYTE(v70) = !v67;
        goto LABEL_99;
      }
LABEL_108:
      v68 = 0;
      LOBYTE(v70) = 1;
      v66 = 1;
      goto LABEL_99;
    case 4:
      v14 = WORD2(a1);
      v15 = a1;
      while ( 2 )
      {
        LOBYTE(v73) = v14 == -1;
        LOBYTE(v70) = v73 & (v15 != 0);
        if ( (_BYTE)v70 )
        {
          v35 = *(__int16 **)(v15 + 8);
          if ( (unsigned int)v35 >= *(_DWORD *)(v15 + 12) )
          {
            v45 = *(int (**)(void))(*(_DWORD *)v15 + 36);
            v76 = 2;
            v36 = v45();
          }
          else
          {
            v36 = *v35;
          }
          LOBYTE(v73) = 0;
          if ( v36 == -1 )
          {
            LODWORD(a1) = 0;
            LOBYTE(v73) = v70;
          }
        }
        v16 = a3 == -1;
        LOBYTE(v70) = v16 && a2 != 0;
        if ( v16
          && a2 != 0
          && ((v32 = *(__int16 **)(a2 + 8), (unsigned int)v32 >= *(_DWORD *)(a2 + 12)) ? (v44 = *(int (**)(void))(*(_DWORD *)a2 + 36),
                                                                                          v76 = 2,
                                                                                          v33 = v44()) : (v33 = *v32),
              v16 = 0,
              v33 == -1) )
        {
          a2 = 0;
          if ( (_BYTE)v73 == (_BYTE)v70 )
            goto LABEL_81;
        }
        else if ( (_BYTE)v73 == v16 )
        {
          goto LABEL_81;
        }
        v17 = WORD2(a1);
        if ( (_DWORD)a1 && WORD2(a1) == -1 )
        {
          v37 = *(__int16 **)(a1 + 8);
          if ( (unsigned int)v37 >= *(_DWORD *)(a1 + 12) )
          {
            v46 = *(int (**)(void))(*(_DWORD *)a1 + 36);
            v76 = 2;
            v17 = v46();
          }
          else
          {
            v17 = *v37;
          }
          if ( v17 == -1 )
            LODWORD(a1) = 0;
        }
        v18 = (_WORD *)v71;
        do
        {
          if ( *v18 == v17 )
          {
            v57 = off_6FB49DE8[((signed int)v18 - v64) >> 1];
            v76 = 2;
            sub_6F909C90((int *)&v85, v57);
            v15 = a1;
            ++v72;
            v20 = *(_DWORD *)(a1 + 8);
            if ( v20 < *(_DWORD *)(a1 + 12) )
              goto LABEL_42;
            goto LABEL_76;
          }
          ++v18;
        }
        while ( v18 != (_WORD *)HIDWORD(v70) );
        v19 = v69 | (*(_WORD *)(v74 + 18) != v17);
        if ( v69 | (*(_WORD *)(v74 + 18) != v17) )
        {
          LOBYTE(v70) = *(_BYTE *)(v74 + 16);
          if ( (_BYTE)v70 )
          {
            if ( *(_WORD *)(v74 + 20) == v17 )
            {
              if ( v69 )
              {
                LOBYTE(v70) = v69;
              }
              else
              {
                if ( v72 )
                {
                  v76 = 2;
                  sub_6F909C90((int *)&v84, v72);
                  v72 = 0;
                  goto LABEL_41;
                }
                LOBYTE(v70) = 0;
              }
            }
          }
          else
          {
            LOBYTE(v70) = v19;
          }
LABEL_82:
          if ( !*(v85 - 3) )
          {
LABEL_83:
            LODWORD(v73) = &a2;
            goto LABEL_84;
          }
LABEL_98:
          v68 = v70 ^ 1;
          goto LABEL_99;
        }
        if ( *(_DWORD *)(v74 + 48) > 0 )
        {
          v38 = v72;
          v69 = 1;
          v72 = 0;
          v60 = v38;
LABEL_41:
          v15 = a1;
          v20 = *(_DWORD *)(a1 + 8);
          if ( v20 < *(_DWORD *)(a1 + 12) )
          {
LABEL_42:
            *(_DWORD *)(v15 + 8) = v20 + 2;
LABEL_43:
            WORD2(a1) = -1;
            v14 = -1;
            continue;
          }
LABEL_76:
          v31 = *(void (**)(void))(*(_DWORD *)v15 + 40);
          v76 = 2;
          v31();
          v15 = a1;
          goto LABEL_43;
        }
        break;
      }
      v69 = 0;
LABEL_81:
      LOBYTE(v70) = 1;
      goto LABEL_82;
  }
}
