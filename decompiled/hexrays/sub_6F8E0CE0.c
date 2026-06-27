__int64 __userpurge sub_6F8E0CE0@<edx:eax>(int a1@<edi>, __int64 a2, int a3, int a4, int a5, _DWORD *a6, signed int *a7)
{
  int v7; // eax@1
  char v8; // al@5
  char v9; // dl@5
  char v10; // dl@6
  bool v11; // al@10
  unsigned int v12; // edx@16
  int v13; // ecx@22
  int v14; // eax@25
  int v15; // ecx@25
  unsigned int v16; // eax@25
  _DWORD *v17; // ecx@28
  signed int *v18; // eax@31
  bool v20; // al@35
  char v21; // al@37
  char v22; // al@40
  _BYTE *v23; // eax@43
  int v24; // ecx@44
  int v25; // eax@44
  int v26; // ecx@48
  unsigned int v27; // eax@48
  void (*v28)(void); // eax@55
  int v29; // ecx@67
  unsigned int v30; // eax@67
  bool v31; // al@73
  void (*v32)(void); // eax@76
  _BYTE *v33; // eax@78
  signed int v34; // eax@95
  signed int v35; // edx@95
  signed int *v36; // esi@97
  _DWORD *v37; // eax@97
  void (*v38)(void); // eax@99
  int (*v39)(void); // eax@101
  int (*v40)(void); // eax@113
  signed int *v41; // edi@118
  signed int v42; // edx@118
  int (*v43)(void); // eax@121
  char v44; // al@126
  __int64 v45; // [sp+0h] [bp-B8h]@1
  __int64 v46; // [sp+8h] [bp-B0h]@13
  char *v47; // [sp+14h] [bp-A4h]@13
  unsigned __int64 v48; // [sp+18h] [bp-A0h]@14
  const void *v49; // [sp+20h] [bp-98h]@18
  unsigned int v50; // [sp+24h] [bp-94h]@16
  unsigned int v51; // [sp+28h] [bp-90h]@16
  int *v52; // [sp+2Ch] [bp-8Ch]@4
  size_t v53; // [sp+30h] [bp-88h]@11
  int v54; // [sp+34h] [bp-84h]@1
  __int64 v55; // [sp+38h] [bp-80h]@3
  int v56; // [sp+40h] [bp-78h]@10
  bool v57; // [sp+45h] [bp-73h]@5
  char v58; // [sp+46h] [bp-72h]@4
  bool v59; // [sp+47h] [bp-71h]@10
  __int64 v60; // [sp+48h] [bp-70h]@16
  __int64 v61; // [sp+50h] [bp-68h]@5
  int v62; // [sp+58h] [bp-60h]@1
  char v63; // [sp+5Ch] [bp-5Ch]@1
  int v64; // [sp+60h] [bp-58h]@1
  int (__cdecl *v65)(int, int, __int64, void (**)(void), int *); // [sp+74h] [bp-44h]@1
  int *v66; // [sp+78h] [bp-40h]@1
  char *v67; // [sp+7Ch] [bp-3Ch]@1
  int (*v68)(); // [sp+80h] [bp-38h]@1
  __int64 *v69; // [sp+84h] [bp-34h]@1
  char v70; // [sp+9Bh] [bp-1Dh]@13
  _DWORD *v71; // [sp+9Ch] [bp-1Ch]@13
  char v72; // [sp+A0h] [bp-18h]@1

  v67 = &v72;
  v69 = &v45;
  v65 = sub_6F962A50;
  v66 = &dword_6F96B640;
  v68 = sub_6F8E17F4;
  sub_6F8A1A60((int *)&v63);
  v64 = -1;
  v62 = sub_6F8BEE80(a5 + 108);
  v7 = *(_DWORD *)(a5 + 12) & 0x4A;
  v54 = v7;
  if ( v7 == 64 )
  {
    LODWORD(v55) = 8;
LABEL_4:
    v52 = &a3;
    v64 = -1;
    v58 = sub_6F8C2310(&a2, (int)&a3);
    if ( v58 )
    {
      LOBYTE(v61) = 0;
      v56 = 0;
      v59 = 0;
      v57 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v7 != 8 )
  {
    LODWORD(v55) = 10;
    goto LABEL_4;
  }
  v52 = &a3;
  v64 = -1;
  v20 = sub_6F8C2310(&a2, (int)&a3);
  LODWORD(v55) = 16;
  LOBYTE(v61) = v20;
  if ( v20 )
  {
    v47 = &v70;
    LODWORD(v46) = &v70;
    v71 = sub_6F9081A0(0, 0);
    v59 = *(_BYTE *)(v62 + 16);
    if ( !v59 )
    {
      v21 = *(_BYTE *)(v62 + 100);
      v57 = 0;
      v58 = v21;
      if ( !v21 )
      {
        v59 = 0;
        LOBYTE(v54) = 0;
        v55 = 0i64;
        v56 = 0;
        goto LABEL_28;
      }
      v53 = 22;
      LOBYTE(v61) = 0;
      v51 = -1;
      v50 = 0x7FFFFFF;
      v48 = 0x7FFFFFFFFFFFFFFFi64;
      v56 = 0;
      v60 = 16i64;
      goto LABEL_39;
    }
    LOBYTE(v61) = 0;
    v56 = 0;
    v58 = v59;
    v59 = 0;
    v57 = 0;
    v53 = 22;
LABEL_111:
    v64 = 1;
    sub_6F909A00((int *)&v71, 0x20u);
    goto LABEL_14;
  }
LABEL_5:
  v64 = -1;
  v8 = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
  LOBYTE(v61) = v8;
  v9 = *(_BYTE *)(v62 + 74);
  v57 = v9 == v8;
  if ( v9 == v8 )
  {
    v10 = *(_BYTE *)(v62 + 16);
LABEL_7:
    if ( !v10 || (a1 = v62, *(_BYTE *)(v62 + 37) != v8) )
    {
      if ( *(_BYTE *)(v62 + 36) != v8 )
      {
        v64 = -1;
        sub_6F92D0F0((_DWORD *)a2);
        HIDWORD(a2) = -1;
        v11 = sub_6F8C2310(&a2, (int)v52);
        v56 = 0;
        v58 = v11;
        v59 = 0;
        if ( v11 )
        {
LABEL_11:
          v53 = 22;
          if ( (_DWORD)v55 != 16 )
            goto LABEL_12;
          goto LABEL_13;
        }
        LOBYTE(v61) = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
        v10 = *(_BYTE *)(v62 + 16);
      }
    }
    goto LABEL_57;
  }
  a1 = v62;
  v10 = *(_BYTE *)(v62 + 16);
  if ( *(_BYTE *)(v62 + 75) == v8 )
    goto LABEL_7;
LABEL_57:
  v56 = 0;
  v59 = 0;
  while ( 1 )
  {
    if ( v10 && *(_BYTE *)(v62 + 37) == (_BYTE)v61 || (a1 = v62, *(_BYTE *)(v62 + 36) == (_BYTE)v61) )
    {
LABEL_107:
      v58 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v62 + 78) != (_BYTE)v61 )
      break;
    a1 = v55;
    v31 = (_DWORD)v55 == 10 || !v59;
    if ( !v31 )
      goto LABEL_63;
    v59 = (_DWORD)v55 == 8 || v54 == 0;
    if ( !v59 )
    {
      ++v56;
      v59 = v31;
LABEL_67:
      v29 = a2;
      v30 = *(_DWORD *)(a2 + 8);
      if ( v30 < *(_DWORD *)(a2 + 12) )
        goto LABEL_68;
      goto LABEL_76;
    }
    v29 = a2;
    v56 = 0;
    LODWORD(v55) = 8;
    v30 = *(_DWORD *)(a2 + 8);
    if ( v30 < *(_DWORD *)(a2 + 12) )
    {
LABEL_68:
      HIDWORD(a2) = -1;
      *(_DWORD *)(v29 + 8) = v30 + 1;
      goto LABEL_69;
    }
LABEL_76:
    v32 = *(void (**)(void))(*(_DWORD *)v29 + 40);
    v64 = -1;
    v32();
    v29 = a2;
    HIDWORD(a2) = -1;
    if ( !(_DWORD)a2 )
    {
      v58 = 1;
      goto LABEL_70;
    }
LABEL_69:
    v58 = 0;
    if ( *(_DWORD *)(v29 + 8) >= *(_DWORD *)(v29 + 12) )
    {
      v40 = *(int (**)(void))(*(_DWORD *)v29 + 36);
      v64 = -1;
      if ( v40() == -1 )
      {
        LODWORD(a2) = 0;
        v58 = 1;
      }
    }
LABEL_70:
    LOBYTE(v60) = a4 == -1;
    LOBYTE(v53) = v60 & (a3 != 0);
    if ( (_BYTE)v53 )
    {
      LOBYTE(v60) = 0;
      if ( *(_DWORD *)(a3 + 8) >= *(_DWORD *)(a3 + 12) )
      {
        v39 = *(int (**)(void))(*(_DWORD *)a3 + 36);
        v64 = -1;
        if ( v39() == -1 )
        {
          a3 = 0;
          LOBYTE(v60) = v53;
        }
      }
    }
    if ( (_BYTE)v60 == v58 )
    {
      v58 = 1;
      goto LABEL_11;
    }
    LOBYTE(v33) = BYTE4(a2);
    if ( !(_DWORD)a2 || HIDWORD(a2) != -1 )
      goto LABEL_80;
    v33 = *(_BYTE **)(a2 + 8);
    if ( (unsigned int)v33 < *(_DWORD *)(a2 + 12) )
    {
      LOBYTE(v33) = *v33;
LABEL_80:
      LOBYTE(v61) = (_BYTE)v33;
      goto LABEL_81;
    }
    v43 = *(int (**)(void))(*(_DWORD *)a2 + 36);
    v64 = -1;
    v33 = (_BYTE *)v43();
    if ( v33 != (_BYTE *)-1 )
      goto LABEL_80;
    LODWORD(a2) = 0;
    LOBYTE(v61) = -1;
LABEL_81:
    if ( !v59 )
      goto LABEL_107;
    v10 = *(_BYTE *)(v62 + 16);
  }
  if ( !v59 )
    goto LABEL_107;
LABEL_63:
  if ( *(_BYTE *)(v62 + 76) != (_BYTE)v61 && *(_BYTE *)(v62 + 77) != (_BYTE)v61 )
  {
    v58 = 0;
    v59 = 1;
    goto LABEL_11;
  }
  if ( v54 == 0 || (_DWORD)v55 == 16 )
  {
    v56 = 0;
    v59 = 0;
    LODWORD(v55) = 16;
    goto LABEL_67;
  }
  v58 = 0;
  v59 = 1;
LABEL_12:
  v53 = v55;
LABEL_13:
  v47 = &v70;
  LODWORD(v46) = &v70;
  v64 = -1;
  v71 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v62 + 16) )
    goto LABEL_111;
LABEL_14:
  v48 = 0x8000000000000000i64;
  if ( !v57 )
    v48 = 0x7FFFFFFFFFFFFFFFi64;
  v60 = (signed int)v55;
  v46 = (signed int)v55;
  v51 = sub_6F8A1530(a1, v48, v46, HIDWORD(v46));
  v50 = v12;
  LOBYTE(v54) = *(_BYTE *)(v62 + 100);
  if ( (_BYTE)v54 )
  {
LABEL_39:
    if ( v58 )
    {
      v55 = 0i64;
      LOBYTE(v61) = v58;
      LOBYTE(v54) = 0;
      v58 = 0;
    }
    else
    {
      LOBYTE(v54) = 0;
      v55 = 0i64;
      v49 = (const void *)(v62 + 78);
      v22 = *(_BYTE *)(v62 + 16);
      if ( !v22 || *(_BYTE *)(v62 + 37) != (_BYTE)v61 )
        goto LABEL_42;
LABEL_53:
      if ( v56 )
      {
        v64 = 1;
        sub_6F909C90((int *)&v71, v56);
        v26 = a2;
        v56 = 0;
        v27 = *(_DWORD *)(a2 + 8);
        if ( v27 >= *(_DWORD *)(a2 + 12) )
        {
LABEL_55:
          v28 = *(void (**)(void))(*(_DWORD *)v26 + 40);
          v64 = 1;
          v28();
          goto LABEL_50;
        }
        while ( 1 )
        {
          *(_DWORD *)(v26 + 8) = v27 + 1;
LABEL_50:
          HIDWORD(a2) = -1;
          v64 = 1;
          LOBYTE(v61) = sub_6F8C2310(&a2, (int)v52);
          if ( (_BYTE)v61 )
            break;
          LOBYTE(v61) = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
          v22 = *(_BYTE *)(v62 + 16);
          if ( v22 && *(_BYTE *)(v62 + 37) == (_BYTE)v61 )
            goto LABEL_53;
LABEL_42:
          if ( (_BYTE)v61 == *(_BYTE *)(v62 + 36) || (v23 = memchr(v49, (char)v61, v53)) == 0 )
          {
LABEL_87:
            v17 = v71;
            LOBYTE(v61) = 0;
            if ( !*(v71 - 3) )
              goto LABEL_29;
            goto LABEL_88;
          }
          v24 = v23 - (_BYTE *)v49;
          v25 = v23 - (_BYTE *)v49 - 6;
          if ( v24 > 15 )
            v24 = v25;
          if ( v50 < (unsigned int)(v51 < (unsigned int)v55) + HIDWORD(v55) )
          {
            LOBYTE(v54) = 1;
          }
          else
          {
            LOBYTE(v54) = ((v48 - v24) >> 32 < (unsigned int)(((signed int)v48 - v24 < (unsigned int)(v60 * v55))
                                                            + v55 * HIDWORD(v60)
                                                            + v60 * HIDWORD(v55)
                                                            + ((unsigned int)v60 * (unsigned __int64)(unsigned int)v55 >> 32))) | v54;
            ++v56;
            v55 = v60 * v55 + v24;
          }
          v26 = a2;
          v27 = *(_DWORD *)(a2 + 8);
          if ( v27 >= *(_DWORD *)(a2 + 12) )
            goto LABEL_55;
        }
      }
      else
      {
        LOBYTE(v61) = 0;
        v58 = v22;
      }
    }
    goto LABEL_28;
  }
  if ( !v58 )
  {
    LOBYTE(v54) = v58;
    v55 = 0i64;
    LOBYTE(v49) = v53 + 48;
    while ( v53 > 0xA )
    {
      if ( (unsigned __int8)(v61 - 48) <= 9u )
        goto LABEL_22;
      v13 = (char)v61 - 87;
      if ( (unsigned __int8)(v61 - 97) <= 5u )
        goto LABEL_23;
      if ( (unsigned __int8)(v61 - 65) > 5u )
        goto LABEL_87;
      v13 = (char)v61 - 55;
      if ( v13 == -1 )
        goto LABEL_87;
LABEL_24:
      if ( v50 < (unsigned int)(v51 < (unsigned int)v55) + HIDWORD(v55) )
      {
        v15 = a2;
        LOBYTE(v54) = 1;
        v16 = *(_DWORD *)(a2 + 8);
        if ( v16 < *(_DWORD *)(a2 + 12) )
        {
LABEL_26:
          *(_DWORD *)(v15 + 8) = v16 + 1;
          goto LABEL_27;
        }
      }
      else
      {
        LODWORD(v61) = v55 * HIDWORD(v60);
        v14 = v13;
        LOBYTE(v54) = ((v48 - v13) >> 32 < (unsigned int)(((signed int)v48 - v13 < (unsigned int)(v60 * v55))
                                                        + ((unsigned __int64)(v60 * v55) >> 32))) | v54;
        v15 = a2;
        v55 = v60 * v55 + v14;
        v16 = *(_DWORD *)(a2 + 8);
        ++v56;
        if ( v16 < *(_DWORD *)(a2 + 12) )
          goto LABEL_26;
      }
      v38 = *(void (**)(void))(*(_DWORD *)v15 + 40);
      v64 = 1;
      v38();
LABEL_27:
      HIDWORD(a2) = -1;
      v64 = 1;
      LOBYTE(v61) = sub_6F8C2310(&a2, (int)v52);
      if ( (_BYTE)v61 )
        goto LABEL_28;
      LOBYTE(v61) = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
    }
    if ( (char)v61 <= 47 || (char)v49 <= (char)v61 )
      goto LABEL_87;
LABEL_22:
    v13 = (char)v61 - 48;
LABEL_23:
    if ( v13 == -1 )
      goto LABEL_87;
    goto LABEL_24;
  }
  v44 = v58;
  v55 = 0i64;
  v58 = 0;
  LOBYTE(v61) = v44;
LABEL_28:
  v17 = v71;
  if ( *(v71 - 3) )
  {
LABEL_88:
    v64 = 1;
    sub_6F909C90((int *)&v71, v56);
    LODWORD(v46) = &v71;
    v45 = *(_QWORD *)(v62 + 8);
    if ( !(unsigned __int8)sub_6F95AB90(v45, SHIDWORD(v45), &v71) )
      *a6 = 4;
    v17 = v71;
    if ( !v56 && v59 != 1 && !*(v71 - 3) )
      goto LABEL_31;
  }
  else
  {
LABEL_29:
    if ( !v56 && v59 != 1 )
      goto LABEL_31;
  }
  if ( v58 )
  {
LABEL_31:
    v18 = a7;
    *a7 = 0;
    v18[1] = 0;
    *a6 = 4;
    goto LABEL_32;
  }
  if ( (_BYTE)v54 )
  {
    v34 = 0;
    v35 = 2147483648;
    if ( !v57 )
    {
      v34 = -1;
      v35 = 0x7FFFFFFF;
    }
    v36 = a7;
    *a7 = v34;
    v37 = a6;
    v36[1] = v35;
    *v37 = 4;
  }
  else
  {
    if ( v57 )
      v55 = -v55;
    v41 = a7;
    v42 = HIDWORD(v55);
    *a7 = v55;
    v41[1] = v42;
  }
LABEL_32:
  if ( (_BYTE)v61 )
    *a6 |= 2u;
  v61 = a2;
  sub_6F9086F0((int)(v17 - 3), (int)v47);
  sub_6F8A1AD0((int *)&v63);
  return v61;
}
