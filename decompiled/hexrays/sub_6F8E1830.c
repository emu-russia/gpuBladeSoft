__int64 __userpurge sub_6F8E1830@<edx:eax>(int a1@<edi>, __int64 a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // eax@1
  char v8; // al@5
  char v9; // dl@5
  char v10; // dl@6
  bool v11; // al@10
  unsigned int v12; // edx@15
  signed int v13; // esi@21
  int v14; // ecx@24
  unsigned int v15; // eax@24
  _DWORD *v16; // ecx@27
  _DWORD *v17; // eax@30
  int v19; // ecx@47
  unsigned int v20; // eax@47
  bool v21; // al@53
  void (*v22)(void); // eax@56
  _BYTE *v23; // eax@58
  _DWORD *v24; // esi@76
  int v25; // edx@76
  void (*v26)(void); // eax@78
  int (*v27)(void); // eax@80
  bool v28; // al@90
  _BYTE *v29; // eax@93
  signed int v30; // esi@94
  int v31; // eax@94
  int v32; // ecx@98
  unsigned int v33; // eax@98
  void (*v34)(void); // eax@105
  int (*v35)(void); // eax@109
  _DWORD *v36; // eax@112
  int (*v37)(void); // eax@116
  char v38; // al@118
  __int64 v39; // [sp+0h] [bp-A8h]@1
  __int64 v40; // [sp+8h] [bp-A0h]@13
  bool v41; // [sp+13h] [bp-95h]@5
  const void *v42; // [sp+14h] [bp-94h]@17
  unsigned int v43; // [sp+18h] [bp-90h]@15
  unsigned int v44; // [sp+1Ch] [bp-8Ch]@15
  int *v45; // [sp+20h] [bp-88h]@4
  size_t v46; // [sp+24h] [bp-84h]@1
  __int64 v47; // [sp+28h] [bp-80h]@3
  int v48; // [sp+30h] [bp-78h]@10
  char v49; // [sp+34h] [bp-74h]@15
  char v50; // [sp+35h] [bp-73h]@16
  bool v51; // [sp+36h] [bp-72h]@4
  bool v52; // [sp+37h] [bp-71h]@10
  __int64 v53; // [sp+38h] [bp-70h]@17
  __int64 v54; // [sp+40h] [bp-68h]@5
  int v55; // [sp+48h] [bp-60h]@1
  char v56; // [sp+4Ch] [bp-5Ch]@1
  int v57; // [sp+50h] [bp-58h]@1
  int (__cdecl *v58)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-44h]@1
  __int16 *v59; // [sp+68h] [bp-40h]@1
  char *v60; // [sp+6Ch] [bp-3Ch]@1
  int (*v61)(); // [sp+70h] [bp-38h]@1
  __int64 *v62; // [sp+74h] [bp-34h]@1
  char v63; // [sp+8Bh] [bp-1Dh]@13
  _DWORD *v64; // [sp+8Ch] [bp-1Ch]@13
  char v65; // [sp+90h] [bp-18h]@1

  v60 = &v65;
  v62 = &v39;
  v58 = sub_6F962A50;
  v59 = &word_6F96B646;
  v61 = sub_6F8E223C;
  sub_6F8A1A60((int *)&v56);
  v57 = -1;
  v55 = sub_6F8BEE80(a5 + 108);
  v7 = *(_DWORD *)(a5 + 12) & 0x4A;
  v46 = v7;
  if ( v7 == 64 )
  {
    LODWORD(v47) = 8;
LABEL_4:
    v45 = &a3;
    v57 = -1;
    v51 = sub_6F8C2310(&a2, (int)&a3);
    if ( v51 )
    {
      LOBYTE(v54) = 0;
      v48 = 0;
      v52 = 0;
      v41 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v7 != 8 )
  {
    LODWORD(v47) = 10;
    goto LABEL_4;
  }
  v45 = &a3;
  v57 = -1;
  v51 = sub_6F8C2310(&a2, (int)&a3);
  if ( v51 )
  {
    LOBYTE(v54) = 0;
    v48 = 0;
    v52 = 0;
    v41 = 0;
    LODWORD(v47) = 16;
    v46 = 22;
    goto LABEL_13;
  }
  LODWORD(v47) = 16;
LABEL_5:
  v57 = -1;
  v8 = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
  LOBYTE(v54) = v8;
  v9 = *(_BYTE *)(v55 + 74);
  v41 = v9 == v8;
  if ( v9 == v8 )
  {
    v10 = *(_BYTE *)(v55 + 16);
LABEL_7:
    if ( (!v10 || *(_BYTE *)(v55 + 37) != v8) && *(_BYTE *)(v55 + 36) != v8 )
    {
      v57 = -1;
      sub_6F92D0F0((_DWORD *)a2);
      HIDWORD(a2) = -1;
      v11 = sub_6F8C2310(&a2, (int)v45);
      v48 = 0;
      v51 = v11;
      v52 = 0;
      if ( v11 )
      {
LABEL_11:
        v46 = 22;
        if ( (_DWORD)v47 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOBYTE(v54) = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
      v10 = *(_BYTE *)(v55 + 16);
    }
    goto LABEL_37;
  }
  v10 = *(_BYTE *)(v55 + 16);
  if ( *(_BYTE *)(v55 + 75) == v8 )
    goto LABEL_7;
LABEL_37:
  v48 = 0;
  v52 = 0;
  while ( 1 )
  {
    if ( v10 && *(_BYTE *)(v55 + 37) == (_BYTE)v54 || (a1 = v55, *(_BYTE *)(v55 + 36) == (_BYTE)v54) )
    {
LABEL_88:
      v51 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v55 + 78) != (_BYTE)v54 )
      break;
    v21 = (_DWORD)v47 == 10 || !v52;
    if ( !v21 )
      goto LABEL_43;
    v52 = (_DWORD)v47 == 8 || v46 == 0;
    if ( !v52 )
    {
      ++v48;
      v52 = v21;
LABEL_47:
      v19 = a2;
      v20 = *(_DWORD *)(a2 + 8);
      if ( v20 < *(_DWORD *)(a2 + 12) )
        goto LABEL_48;
      goto LABEL_56;
    }
    v19 = a2;
    v48 = 0;
    LODWORD(v47) = 8;
    v20 = *(_DWORD *)(a2 + 8);
    if ( v20 < *(_DWORD *)(a2 + 12) )
    {
LABEL_48:
      HIDWORD(a2) = -1;
      *(_DWORD *)(v19 + 8) = v20 + 1;
      goto LABEL_49;
    }
LABEL_56:
    v22 = *(void (**)(void))(*(_DWORD *)v19 + 40);
    v57 = -1;
    v22();
    v19 = a2;
    HIDWORD(a2) = -1;
    if ( !(_DWORD)a2 )
    {
      v51 = 1;
      goto LABEL_50;
    }
LABEL_49:
    v51 = 0;
    if ( *(_DWORD *)(v19 + 8) >= *(_DWORD *)(v19 + 12) )
    {
      v35 = *(int (**)(void))(*(_DWORD *)v19 + 36);
      v57 = -1;
      if ( v35() == -1 )
      {
        LODWORD(a2) = 0;
        v51 = 1;
      }
    }
LABEL_50:
    LOBYTE(v53) = a4 == -1;
    v50 = v53 & (a3 != 0);
    if ( v50 )
    {
      LOBYTE(v53) = 0;
      if ( *(_DWORD *)(a3 + 8) >= *(_DWORD *)(a3 + 12) )
      {
        v27 = *(int (**)(void))(*(_DWORD *)a3 + 36);
        v57 = -1;
        if ( v27() == -1 )
        {
          a3 = 0;
          LOBYTE(v53) = v50;
        }
      }
    }
    if ( v51 == (_BYTE)v53 )
    {
      v51 = 1;
      goto LABEL_11;
    }
    LOBYTE(v23) = BYTE4(a2);
    if ( !(_DWORD)a2 || HIDWORD(a2) != -1 )
      goto LABEL_60;
    v23 = *(_BYTE **)(a2 + 8);
    if ( (unsigned int)v23 < *(_DWORD *)(a2 + 12) )
    {
      LOBYTE(v23) = *v23;
LABEL_60:
      LOBYTE(v54) = (_BYTE)v23;
      goto LABEL_61;
    }
    v37 = *(int (**)(void))(*(_DWORD *)a2 + 36);
    v57 = -1;
    v23 = (_BYTE *)v37();
    if ( v23 != (_BYTE *)-1 )
      goto LABEL_60;
    LODWORD(a2) = 0;
    LOBYTE(v54) = -1;
LABEL_61:
    if ( !v52 )
      goto LABEL_88;
    v10 = *(_BYTE *)(v55 + 16);
  }
  if ( !v52 )
    goto LABEL_88;
LABEL_43:
  if ( *(_BYTE *)(v55 + 76) != (_BYTE)v54 && *(_BYTE *)(v55 + 77) != (_BYTE)v54 )
  {
    v51 = 0;
    v52 = 1;
    goto LABEL_11;
  }
  if ( v46 == 0 || (_DWORD)v47 == 16 )
  {
    v48 = 0;
    v52 = 0;
    LODWORD(v47) = 16;
    goto LABEL_47;
  }
  v51 = 0;
  v52 = 1;
LABEL_12:
  v46 = v47;
LABEL_13:
  LODWORD(v40) = &v63;
  v57 = -1;
  v64 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v55 + 16) )
  {
    v57 = 1;
    sub_6F909A00((int *)&v64, 0x20u);
  }
  v47 = (signed int)v47;
  v44 = sub_6F8A1530(a1, 0xFFFFFFFFFFFFFFFFui64, v47, (unsigned __int64)(signed int)v47 >> 32);
  v43 = v12;
  v49 = *(_BYTE *)(v55 + 100);
  if ( v49 )
  {
    if ( v51 )
    {
      v53 = 0i64;
      LOBYTE(v54) = v51;
      v50 = 0;
      v51 = 0;
    }
    else
    {
      v50 = 0;
      v53 = 0i64;
      v42 = (const void *)(v55 + 78);
      v28 = *(_BYTE *)(v55 + 16);
      if ( !v28 || *(_BYTE *)(v55 + 37) != (_BYTE)v54 )
        goto LABEL_92;
LABEL_103:
      if ( v48 )
      {
        v57 = 1;
        sub_6F909C90((int *)&v64, v48);
        v32 = a2;
        v48 = 0;
        v33 = *(_DWORD *)(a2 + 8);
        if ( v33 >= *(_DWORD *)(a2 + 12) )
        {
LABEL_105:
          v34 = *(void (**)(void))(*(_DWORD *)v32 + 40);
          v57 = 1;
          v34();
          goto LABEL_100;
        }
        while ( 1 )
        {
          *(_DWORD *)(v32 + 8) = v33 + 1;
LABEL_100:
          HIDWORD(a2) = -1;
          v57 = 1;
          LOBYTE(v54) = sub_6F8C2310(&a2, (int)v45);
          if ( (_BYTE)v54 )
            break;
          LOBYTE(v54) = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
          v28 = *(_BYTE *)(v55 + 16);
          if ( v28 && *(_BYTE *)(v55 + 37) == (_BYTE)v54 )
            goto LABEL_103;
LABEL_92:
          if ( (_BYTE)v54 == *(_BYTE *)(v55 + 36) || (v29 = memchr(v42, (char)v54, v46)) == 0 )
          {
LABEL_66:
            v16 = v64;
            LOBYTE(v54) = 0;
            if ( !*(v64 - 3) )
              goto LABEL_28;
            goto LABEL_67;
          }
          v30 = v29 - (_BYTE *)v42;
          v31 = v29 - (_BYTE *)v42 - 6;
          if ( v30 > 15 )
            v30 = v31;
          if ( v43 < (unsigned int)(v44 < (unsigned int)v53) + HIDWORD(v53) )
          {
            v50 = v49;
          }
          else
          {
            v54 = v30;
            v50 |= ~(v30 >> 31) < (unsigned int)((~v30 < (unsigned int)(v53 * v47))
                                               + ((unsigned __int64)(v53 * v47) >> 32));
            v53 = v53 * v47 + v30;
            ++v48;
          }
          v32 = a2;
          v33 = *(_DWORD *)(a2 + 8);
          if ( v33 >= *(_DWORD *)(a2 + 12) )
            goto LABEL_105;
        }
      }
      else
      {
        LOBYTE(v54) = 0;
        v51 = v28;
      }
    }
  }
  else
  {
    v50 = 0;
    if ( !v51 )
    {
      v53 = 0i64;
      LOBYTE(v42) = v46 + 48;
      while ( v46 > 0xA )
      {
        if ( (unsigned __int8)(v54 - 48) <= 9u )
          goto LABEL_21;
        if ( (unsigned __int8)(v54 - 97) > 5u )
        {
          if ( (unsigned __int8)(v54 - 65) > 5u )
            goto LABEL_66;
          v13 = (char)v54 - 55;
          goto LABEL_22;
        }
        v13 = (char)v54 - 87;
        if ( v13 == -1 )
          goto LABEL_66;
LABEL_23:
        if ( v43 < (unsigned int)(v44 < (unsigned int)v53) + HIDWORD(v53) )
        {
          v14 = a2;
          v50 = 1;
          v15 = *(_DWORD *)(a2 + 8);
          if ( v15 < *(_DWORD *)(a2 + 12) )
          {
LABEL_25:
            *(_DWORD *)(v14 + 8) = v15 + 1;
            goto LABEL_26;
          }
        }
        else
        {
          v54 = v13;
          v50 |= ~(v13 >> 31) < (unsigned int)((~v13 < (unsigned int)(v53 * v47)) + ((unsigned __int64)(v53 * v47) >> 32));
          v14 = a2;
          ++v48;
          v53 = v53 * v47 + v13;
          v15 = *(_DWORD *)(a2 + 8);
          if ( v15 < *(_DWORD *)(a2 + 12) )
            goto LABEL_25;
        }
        v26 = *(void (**)(void))(*(_DWORD *)v14 + 40);
        v57 = 1;
        v26();
LABEL_26:
        HIDWORD(a2) = -1;
        v57 = 1;
        LOBYTE(v54) = sub_6F8C2310(&a2, (int)v45);
        if ( (_BYTE)v54 )
          goto LABEL_27;
        LOBYTE(v54) = sub_6F8C23B0((int *)&a2, SHIDWORD(a2));
      }
      if ( (char)v54 <= 47 || (char)v42 <= (char)v54 )
        goto LABEL_66;
LABEL_21:
      v13 = (char)v54 - 48;
LABEL_22:
      if ( v13 == -1 )
        goto LABEL_66;
      goto LABEL_23;
    }
    v38 = v51;
    v53 = 0i64;
    v51 = 0;
    LOBYTE(v54) = v38;
  }
LABEL_27:
  v16 = v64;
  if ( *(v64 - 3) )
  {
LABEL_67:
    v57 = 1;
    sub_6F909C90((int *)&v64, v48);
    LODWORD(v40) = &v64;
    v39 = *(_QWORD *)(v55 + 8);
    if ( !(unsigned __int8)sub_6F95AB90(v39, SHIDWORD(v39), &v64) )
      *a6 = 4;
    v16 = v64;
    if ( !v48 && v52 != 1 && !*(v64 - 3) )
      goto LABEL_30;
  }
  else
  {
LABEL_28:
    if ( !v48 && v52 != 1 )
      goto LABEL_30;
  }
  if ( v51 )
  {
LABEL_30:
    v17 = a7;
    *a7 = 0;
    v17[1] = 0;
    *a6 = 4;
    goto LABEL_31;
  }
  if ( v50 )
  {
    v36 = a7;
    *a7 = -1;
    v36[1] = -1;
    *a6 = 4;
  }
  else
  {
    if ( v41 )
      v53 = -v53;
    v24 = a7;
    v25 = HIDWORD(v53);
    *a7 = v53;
    v24[1] = v25;
  }
LABEL_31:
  if ( (_BYTE)v54 )
    *a6 |= 2u;
  v54 = a2;
  sub_6F9086F0((int)(v16 - 3), (int)&v63);
  sub_6F8A1AD0((int *)&v56);
  return v54;
}
