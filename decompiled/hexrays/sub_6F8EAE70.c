__int64 __userpurge sub_6F8EAE70@<edx:eax>(int a1@<edi>, __int64 a2, int a3, __int16 a4, int a5, _DWORD *a6, signed int *a7)
{
  int v7; // eax@1
  __int16 v8; // ax@5
  char v9; // al@6
  bool v10; // al@10
  unsigned int v11; // edx@16
  int v12; // ecx@22
  int v13; // eax@25
  int v14; // ecx@25
  unsigned int v15; // eax@25
  _DWORD *v16; // ecx@28
  signed int *v17; // eax@31
  int v19; // ecx@48
  unsigned int v20; // eax@48
  __int16 *v21; // eax@50
  __int16 v22; // ax@51
  char v23; // dl@54
  bool v24; // al@57
  void (*v25)(void); // eax@60
  __int16 *v26; // eax@66
  __int16 v27; // ax@67
  signed int v28; // eax@82
  signed int v29; // edx@82
  signed int *v30; // edi@84
  _DWORD *v31; // eax@84
  void (*v32)(void); // eax@86
  _WORD *v33; // eax@88
  int v34; // edi@96
  char v35; // al@96
  int v36; // ecx@100
  unsigned int v37; // eax@100
  __int16 v38; // ax@103
  char *v39; // eax@105
  unsigned int v40; // edx@105
  signed int v41; // eax@108
  signed int v42; // edx@108
  int v43; // eax@108
  int v44; // ecx@108
  void (*v45)(void); // eax@112
  _DWORD *v46; // eax@115
  int (*v47)(void); // eax@119
  int (*v48)(void); // eax@120
  signed int *v49; // edi@124
  signed int v50; // edx@124
  int (*v51)(void); // eax@127
  char v52; // al@128
  char v53; // al@132
  __int64 v54; // [sp+0h] [bp-B8h]@1
  __int64 v55; // [sp+8h] [bp-B0h]@13
  char *v56; // [sp+18h] [bp-A0h]@13
  char *v57; // [sp+1Ch] [bp-9Ch]@18
  unsigned __int64 v58; // [sp+20h] [bp-98h]@14
  unsigned int v59; // [sp+28h] [bp-90h]@16
  unsigned int v60; // [sp+2Ch] [bp-8Ch]@16
  unsigned int v61; // [sp+30h] [bp-88h]@11
  int *v62; // [sp+34h] [bp-84h]@4
  __int64 v63; // [sp+38h] [bp-80h]@1
  __int64 v64; // [sp+40h] [bp-78h]@3
  int v65; // [sp+48h] [bp-70h]@10
  bool v66; // [sp+4Ch] [bp-6Ch]@5
  char v67; // [sp+4Dh] [bp-6Bh]@16
  char v68; // [sp+4Eh] [bp-6Ah]@4
  bool v69; // [sp+4Fh] [bp-69h]@10
  __int64 v70; // [sp+50h] [bp-68h]@5
  int v71; // [sp+58h] [bp-60h]@1
  char v72; // [sp+5Ch] [bp-5Ch]@1
  int v73; // [sp+60h] [bp-58h]@1
  int (__cdecl *v74)(int, int, __int64, void (**)(void), int *); // [sp+74h] [bp-44h]@1
  int *v75; // [sp+78h] [bp-40h]@1
  char *v76; // [sp+7Ch] [bp-3Ch]@1
  int (*v77)(); // [sp+80h] [bp-38h]@1
  __int64 *v78; // [sp+84h] [bp-34h]@1
  char v79; // [sp+9Bh] [bp-1Dh]@13
  _DWORD *v80; // [sp+9Ch] [bp-1Ch]@13
  char v81; // [sp+A0h] [bp-18h]@1

  v76 = &v81;
  v78 = &v54;
  v74 = sub_6F962A50;
  v75 = &dword_6F96B1A0;
  v77 = sub_6F8EB9A4;
  sub_6F8A1A60((int *)&v72);
  v73 = -1;
  v71 = sub_6F8BF000(a5 + 108);
  v7 = *(_DWORD *)(a5 + 12) & 0x4A;
  LODWORD(v63) = v7;
  if ( v7 == 64 )
  {
    LODWORD(v64) = 8;
LABEL_4:
    v62 = &a3;
    v73 = -1;
    v68 = sub_6F8C2450(&a2, (int)&a3);
    if ( v68 )
    {
      v65 = 0;
      LOWORD(v70) = 0;
      v69 = 0;
      v66 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v7 != 8 )
  {
    LODWORD(v64) = 10;
    goto LABEL_4;
  }
  v62 = &a3;
  v73 = -1;
  LOBYTE(v70) = sub_6F8C2450(&a2, (int)&a3);
  if ( (_BYTE)v70 )
  {
    v56 = &v79;
    LODWORD(v55) = &v79;
    v73 = -1;
    v46 = sub_6F9081A0(0, 0);
    a1 = v71;
    v80 = v46;
    v68 = *(_BYTE *)(v71 + 16);
    if ( !v68 )
    {
      v52 = *(_BYTE *)(v71 + 164);
      v66 = 0;
      v69 = 0;
      v67 = v52;
      if ( !v52 )
      {
        v68 = 0;
        v64 = 0i64;
        v65 = 0;
        goto LABEL_28;
      }
      v65 = 0;
      v61 = 22;
      v68 = v67;
      LOWORD(v70) = 0;
      v60 = -1;
      v59 = 0x7FFFFFF;
      v58 = 0x7FFFFFFFFFFFFFFFi64;
      v63 = 16i64;
      goto LABEL_95;
    }
    v65 = 0;
    LOWORD(v70) = 0;
    v69 = 0;
    v66 = 0;
    LODWORD(v64) = 16;
    v61 = 22;
LABEL_117:
    v73 = 1;
    sub_6F909A00((int *)&v80, 0x20u);
    goto LABEL_14;
  }
  LODWORD(v64) = 16;
LABEL_5:
  v73 = -1;
  LOWORD(v70) = sub_6F8C24F0((int *)&a2, WORD2(a2));
  v8 = *(_WORD *)(v71 + 112);
  v66 = v8 == (_WORD)v70;
  if ( v8 == (_WORD)v70 )
  {
    v9 = *(_BYTE *)(v71 + 16);
LABEL_7:
    if ( !v9 || (a1 = v71, *(_WORD *)(v71 + 38) != (_WORD)v70) )
    {
      a1 = v71;
      if ( *(_WORD *)(v71 + 36) != (_WORD)v70 )
      {
        v73 = -1;
        a1 = -1;
        sub_6F92DAB0((_DWORD *)a2);
        WORD2(a2) = -1;
        v10 = sub_6F8C2450(&a2, (int)v62);
        v65 = 0;
        v68 = v10;
        v69 = 0;
        if ( v10 )
        {
LABEL_11:
          v61 = 22;
          if ( (_DWORD)v64 != 16 )
            goto LABEL_12;
          goto LABEL_13;
        }
        LOWORD(v70) = sub_6F8C24F0((int *)&a2, WORD2(a2));
        v9 = *(_BYTE *)(v71 + 16);
      }
    }
    goto LABEL_38;
  }
  a1 = v71;
  v9 = *(_BYTE *)(v71 + 16);
  if ( *(_WORD *)(v71 + 114) == (_WORD)v70 )
    goto LABEL_7;
LABEL_38:
  v65 = 0;
  v69 = 0;
  while ( 1 )
  {
    if ( v9 && (a1 = (unsigned __int16)v70, *(_WORD *)(v71 + 38) == (_WORD)v70) || *(_WORD *)(v71 + 36) == (_WORD)v70 )
    {
LABEL_93:
      v68 = 0;
      goto LABEL_11;
    }
    if ( *(_WORD *)(v71 + 120) != (_WORD)v70 )
      break;
    v24 = (_DWORD)v64 == 10 || !v69;
    if ( !v24 )
      goto LABEL_44;
    v69 = (_DWORD)v64 == 8 || (_DWORD)v63 == 0;
    if ( !v69 )
    {
      ++v65;
      v69 = v24;
LABEL_48:
      v19 = a2;
      v20 = *(_DWORD *)(a2 + 8);
      if ( v20 < *(_DWORD *)(a2 + 12) )
        goto LABEL_49;
      goto LABEL_60;
    }
    v19 = a2;
    v65 = 0;
    LODWORD(v64) = 8;
    v20 = *(_DWORD *)(a2 + 8);
    if ( v20 < *(_DWORD *)(a2 + 12) )
    {
LABEL_49:
      *(_DWORD *)(v19 + 8) = v20 + 2;
      WORD2(a2) = -1;
      goto LABEL_50;
    }
LABEL_60:
    v25 = *(void (**)(void))(*(_DWORD *)v19 + 40);
    v73 = -1;
    v25();
    v19 = a2;
    WORD2(a2) = -1;
    if ( !(_DWORD)a2 )
    {
      v68 = 1;
      goto LABEL_54;
    }
LABEL_50:
    v21 = *(__int16 **)(v19 + 8);
    if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 12) )
    {
      v48 = *(int (**)(void))(*(_DWORD *)v19 + 36);
      v73 = -1;
      v22 = v48();
    }
    else
    {
      v22 = *v21;
    }
    v68 = 0;
    if ( v22 == -1 )
    {
      LODWORD(a2) = 0;
      v68 = 1;
    }
LABEL_54:
    v23 = a4 == -1;
    v67 = v23 & (a3 != 0);
    if ( (unsigned __int8)v23 & (a3 != 0) )
    {
      v26 = *(__int16 **)(a3 + 8);
      if ( (unsigned int)v26 >= *(_DWORD *)(a3 + 12) )
      {
        v47 = *(int (**)(void))(*(_DWORD *)a3 + 36);
        v73 = -1;
        v27 = v47();
      }
      else
      {
        v27 = *v26;
      }
      v23 = 0;
      if ( v27 == -1 )
      {
        a3 = 0;
        v23 = v67;
      }
    }
    if ( v23 == v68 )
    {
      v68 = 1;
      goto LABEL_11;
    }
    LOWORD(v70) = WORD2(a2);
    if ( (_DWORD)a2 && WORD2(a2) == -1 )
    {
      v33 = *(_WORD **)(a2 + 8);
      if ( (unsigned int)v33 >= *(_DWORD *)(a2 + 12) )
      {
        v51 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v73 = -1;
        LOWORD(v70) = v51();
      }
      else
      {
        LOWORD(v70) = *v33;
      }
      if ( (_WORD)v70 == -1 )
        LODWORD(a2) = 0;
    }
    if ( !v69 )
      goto LABEL_93;
    v9 = *(_BYTE *)(v71 + 16);
  }
  if ( !v69 )
    goto LABEL_93;
LABEL_44:
  a1 = (unsigned __int16)v70;
  if ( *(_WORD *)(v71 + 116) != (_WORD)v70 && *(_WORD *)(v71 + 118) != (_WORD)a1 )
  {
    v68 = 0;
    v69 = 1;
    goto LABEL_11;
  }
  if ( (_DWORD)v63 == 0 || (_DWORD)v64 == 16 )
  {
    v65 = 0;
    v69 = 0;
    LODWORD(v64) = 16;
    goto LABEL_48;
  }
  v68 = 0;
  v69 = 1;
LABEL_12:
  v61 = v64;
LABEL_13:
  v56 = &v79;
  LODWORD(v55) = &v79;
  v73 = -1;
  v80 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v71 + 16) )
    goto LABEL_117;
LABEL_14:
  v58 = 0x8000000000000000i64;
  if ( !v66 )
    v58 = 0x7FFFFFFFFFFFFFFFi64;
  v63 = (signed int)v64;
  v55 = (signed int)v64;
  v60 = sub_6F8A1530(a1, v58, v55, HIDWORD(v55));
  v59 = v11;
  v67 = *(_BYTE *)(v71 + 164);
  if ( !v67 )
  {
    if ( !v68 )
    {
      v67 = v68;
      v64 = 0i64;
      LOWORD(v57) = v61 + 48;
      while ( v61 > 0xA )
      {
        if ( (unsigned __int16)(v70 - 48) <= 9u )
          goto LABEL_22;
        v12 = (unsigned __int16)v70 - 87;
        if ( (unsigned __int16)(v70 - 97) <= 5u )
          goto LABEL_23;
        if ( (unsigned __int16)(v70 - 65) > 5u )
          goto LABEL_74;
        v12 = (unsigned __int16)v70 - 55;
        if ( v12 == -1 )
          goto LABEL_74;
LABEL_24:
        if ( v59 < (unsigned int)(v60 < (unsigned int)v64) + HIDWORD(v64) )
        {
          v14 = a2;
          v67 = 1;
          v15 = *(_DWORD *)(a2 + 8);
          if ( v15 < *(_DWORD *)(a2 + 12) )
          {
LABEL_26:
            *(_DWORD *)(v14 + 8) = v15 + 2;
            goto LABEL_27;
          }
        }
        else
        {
          LODWORD(v70) = v64 * HIDWORD(v63);
          v13 = v12;
          v67 |= (v58 - v12) >> 32 < (unsigned int)(((signed int)v58 - v12 < (unsigned int)(v63 * v64))
                                                  + ((unsigned __int64)(v63 * v64) >> 32));
          v14 = a2;
          v64 = v63 * v64 + v13;
          v15 = *(_DWORD *)(a2 + 8);
          ++v65;
          if ( v15 < *(_DWORD *)(a2 + 12) )
            goto LABEL_26;
        }
        v32 = *(void (**)(void))(*(_DWORD *)v14 + 40);
        v73 = 1;
        v32();
LABEL_27:
        WORD2(a2) = -1;
        v73 = 1;
        LOBYTE(v70) = sub_6F8C2450(&a2, (int)v62);
        if ( (_BYTE)v70 )
          goto LABEL_28;
        LOWORD(v70) = sub_6F8C24F0((int *)&a2, WORD2(a2));
      }
      if ( (unsigned __int16)v70 <= 0x2Fu || (unsigned __int16)v57 <= (unsigned __int16)v70 )
        goto LABEL_74;
LABEL_22:
      v12 = (unsigned __int16)v70 - 48;
LABEL_23:
      if ( v12 == -1 )
        goto LABEL_74;
      goto LABEL_24;
    }
    v53 = v68;
    v64 = 0i64;
    v68 = 0;
    LOBYTE(v70) = v53;
LABEL_28:
    v16 = v80;
    if ( !*(v80 - 3) )
      goto LABEL_29;
LABEL_75:
    v73 = 1;
    sub_6F909C90((int *)&v80, v65);
    LODWORD(v55) = &v80;
    v54 = *(_QWORD *)(v71 + 8);
    if ( !(unsigned __int8)sub_6F95AB90(v54, SHIDWORD(v54), &v80) )
      *a6 = 4;
    v16 = v80;
    if ( !v65 && v69 != 1 && !*(v80 - 3) )
      goto LABEL_31;
    goto LABEL_80;
  }
LABEL_95:
  if ( v68 )
  {
    v64 = 0i64;
    LOBYTE(v70) = v68;
    v67 = 0;
    v68 = 0;
    goto LABEL_28;
  }
  v34 = v71;
  v67 = 0;
  v64 = 0i64;
  v57 = (char *)(v71 + 120);
  v35 = *(_BYTE *)(v71 + 16);
  if ( !v35 )
    goto LABEL_104;
LABEL_97:
  if ( *(_WORD *)(v34 + 38) == (_WORD)v70 )
  {
    if ( v65 )
    {
      v73 = 1;
      sub_6F909C90((int *)&v80, v65);
      v65 = 0;
      goto LABEL_100;
    }
    LOBYTE(v70) = 0;
    v68 = v35;
    goto LABEL_28;
  }
  while ( 1 )
  {
LABEL_104:
    if ( (_WORD)v70 == *(_WORD *)(v71 + 36) )
      goto LABEL_74;
    v39 = v57;
    v40 = v61;
    if ( *(_WORD *)v57 != (_WORD)v70 )
      break;
LABEL_108:
    v41 = v39 - v57;
    v42 = v41;
    v43 = v41 >> 1;
    v44 = v43 - 6;
    if ( v42 <= 30 )
      v44 = v43;
    if ( v59 >= (unsigned int)(v60 < (unsigned int)v64) + HIDWORD(v64) )
    {
      v67 |= (v58 - v44) >> 32 < (unsigned int)(((signed int)v58 - v44 < (unsigned int)(v63 * v64))
                                              + ((unsigned __int64)(v63 * v64) >> 32));
      v64 = v63 * v64 + v44;
      ++v65;
LABEL_100:
      v36 = a2;
      v37 = *(_DWORD *)(a2 + 8);
      if ( v37 >= *(_DWORD *)(a2 + 12) )
        goto LABEL_112;
LABEL_101:
      *(_DWORD *)(v36 + 8) = v37 + 2;
      goto LABEL_102;
    }
    v36 = a2;
    v67 = 1;
    v37 = *(_DWORD *)(a2 + 8);
    if ( v37 < *(_DWORD *)(a2 + 12) )
      goto LABEL_101;
LABEL_112:
    v45 = *(void (**)(void))(*(_DWORD *)v36 + 40);
    v73 = 1;
    v45();
LABEL_102:
    WORD2(a2) = -1;
    v73 = 1;
    LOBYTE(v70) = sub_6F8C2450(&a2, (int)v62);
    if ( (_BYTE)v70 )
      goto LABEL_28;
    v38 = sub_6F8C24F0((int *)&a2, WORD2(a2));
    v34 = v71;
    LOWORD(v70) = v38;
    v35 = *(_BYTE *)(v71 + 16);
    if ( v35 )
      goto LABEL_97;
  }
  while ( 1 )
  {
    v39 += 2;
    if ( !--v40 )
      break;
    if ( *(_WORD *)v39 == (_WORD)v70 )
      goto LABEL_108;
  }
LABEL_74:
  v16 = v80;
  LOBYTE(v70) = 0;
  if ( *(v80 - 3) )
    goto LABEL_75;
LABEL_29:
  if ( !v65 && v69 != 1 )
    goto LABEL_31;
LABEL_80:
  if ( v68 )
  {
LABEL_31:
    v17 = a7;
    *a7 = 0;
    v17[1] = 0;
    *a6 = 4;
    goto LABEL_32;
  }
  if ( v67 )
  {
    v28 = 0;
    v29 = 2147483648;
    if ( !v66 )
    {
      v28 = -1;
      v29 = 0x7FFFFFFF;
    }
    v30 = a7;
    *a7 = v28;
    v31 = a6;
    v30[1] = v29;
    *v31 = 4;
  }
  else
  {
    if ( v66 )
      v64 = -v64;
    v49 = a7;
    v50 = HIDWORD(v64);
    *a7 = v64;
    v49[1] = v50;
  }
LABEL_32:
  if ( (_BYTE)v70 )
    *a6 |= 2u;
  v70 = a2;
  sub_6F9086F0((int)(v16 - 3), (int)v56);
  sub_6F8A1AD0((int *)&v72);
  return v70;
}
