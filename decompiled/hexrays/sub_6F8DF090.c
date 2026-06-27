__int64 __stdcall sub_6F8DF090(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int *a6)
{
  int v6; // eax@1
  char v7; // al@5
  char v8; // dl@5
  char v9; // dl@6
  bool v10; // al@10
  int v11; // eax@20
  int v12; // ecx@23
  unsigned int v13; // eax@23
  _DWORD *v14; // ecx@26
  bool v16; // al@33
  char v17; // al@35
  char v18; // al@38
  char *v19; // eax@41
  int v20; // eax@42
  int v21; // ecx@46
  unsigned int v22; // eax@46
  void (*v23)(void); // eax@53
  int v24; // ecx@65
  unsigned int v25; // eax@65
  bool v26; // al@71
  void (*v27)(void); // eax@74
  _BYTE *v28; // eax@76
  void (*v29)(void); // eax@94
  int (*v30)(void); // eax@96
  int (*v31)(void); // eax@110
  int v32; // eax@113
  int (*v33)(void); // eax@118
  char v34; // al@123
  int v35; // [sp+0h] [bp-A8h]@1
  int v36; // [sp+4h] [bp-A4h]@85
  int *v37; // [sp+8h] [bp-A0h]@13
  unsigned int v38; // [sp+1Ch] [bp-8Ch]@14
  char *v39; // [sp+20h] [bp-88h]@13
  int v40; // [sp+24h] [bp-84h]@5
  unsigned int v41; // [sp+28h] [bp-80h]@14
  unsigned int v42; // [sp+2Ch] [bp-7Ch]@14
  unsigned int v43; // [sp+30h] [bp-78h]@14
  int *v44; // [sp+34h] [bp-74h]@4
  size_t v45; // [sp+38h] [bp-70h]@11
  int v46; // [sp+3Ch] [bp-6Ch]@1
  int v47; // [sp+40h] [bp-68h]@10
  char v48; // [sp+46h] [bp-62h]@4
  bool v49; // [sp+47h] [bp-61h]@10
  unsigned int v50; // [sp+48h] [bp-60h]@3
  int v51; // [sp+4Ch] [bp-5Ch]@1
  __int64 v52; // [sp+50h] [bp-58h]@5
  unsigned int v53; // [sp+58h] [bp-50h]@16
  char v54; // [sp+5Ch] [bp-4Ch]@1
  int v55; // [sp+60h] [bp-48h]@1
  int (__cdecl *v56)(int, int, __int64, void (**)(void), int *); // [sp+74h] [bp-34h]@1
  int *v57; // [sp+78h] [bp-30h]@1
  char *v58; // [sp+7Ch] [bp-2Ch]@1
  int (*v59)(); // [sp+80h] [bp-28h]@1
  int *v60; // [sp+84h] [bp-24h]@1
  char v61; // [sp+9Bh] [bp-Dh]@13
  _DWORD *v62; // [sp+9Ch] [bp-Ch]@13
  char v63; // [sp+A0h] [bp-8h]@1

  v58 = &v63;
  v60 = &v35;
  v56 = sub_6F962A50;
  v57 = &dword_6F96B628;
  v59 = sub_6F8DFA48;
  sub_6F8A1A60((int *)&v54);
  v55 = -1;
  v51 = sub_6F8BEE80(a4 + 108);
  v6 = *(_DWORD *)(a4 + 12) & 0x4A;
  v46 = v6;
  if ( v6 == 64 )
  {
    v50 = 8;
LABEL_4:
    v44 = &a2;
    v55 = -1;
    v48 = sub_6F8C2310(&a1, (int)&a2);
    if ( v48 )
    {
      LOBYTE(v52) = 0;
      v47 = 0;
      v49 = 0;
      LOBYTE(v40) = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v6 != 8 )
  {
    v50 = 10;
    goto LABEL_4;
  }
  v44 = &a2;
  v55 = -1;
  v16 = sub_6F8C2310(&a1, (int)&a2);
  v50 = 16;
  LOBYTE(v52) = v16;
  if ( v16 )
  {
    v39 = &v61;
    v37 = (int *)&v61;
    v62 = sub_6F9081A0(0, 0);
    v49 = *(_BYTE *)(v51 + 16);
    if ( !v49 )
    {
      v17 = *(_BYTE *)(v51 + 100);
      LOBYTE(v40) = 0;
      v48 = v17;
      if ( !v17 )
      {
        v49 = 0;
        LOBYTE(v46) = 0;
        v53 = 0;
        v47 = 0;
        goto LABEL_26;
      }
      v45 = 22;
      LOBYTE(v52) = 0;
      v41 = 0x7FFFFFF;
      v42 = 0x7FFFFFFF;
      v47 = 0;
      v38 = 16;
      goto LABEL_37;
    }
    LOBYTE(v52) = 0;
    v47 = 0;
    v48 = v49;
    v49 = 0;
    LOBYTE(v40) = 0;
    v45 = 22;
LABEL_108:
    v55 = 1;
    sub_6F909A00((int *)&v62, 0x20u);
    goto LABEL_14;
  }
LABEL_5:
  v55 = -1;
  v7 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
  LOBYTE(v52) = v7;
  v8 = *(_BYTE *)(v51 + 74);
  LOBYTE(v40) = v8 == v7;
  if ( v8 == v7 )
  {
    v9 = *(_BYTE *)(v51 + 16);
LABEL_7:
    if ( (!v9 || *(_BYTE *)(v51 + 37) != v7) && *(_BYTE *)(v51 + 36) != v7 )
    {
      v55 = -1;
      sub_6F92D0F0((_DWORD *)a1);
      HIDWORD(a1) = -1;
      v10 = sub_6F8C2310(&a1, (int)v44);
      v47 = 0;
      v48 = v10;
      v49 = 0;
      if ( v10 )
      {
LABEL_11:
        v45 = 22;
        if ( v50 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOBYTE(v52) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
      v9 = *(_BYTE *)(v51 + 16);
    }
    goto LABEL_55;
  }
  v9 = *(_BYTE *)(v51 + 16);
  if ( *(_BYTE *)(v51 + 75) == v7 )
    goto LABEL_7;
LABEL_55:
  v47 = 0;
  v49 = 0;
  while ( 1 )
  {
    if ( v9 && *(_BYTE *)(v51 + 37) == (_BYTE)v52 || *(_BYTE *)(v51 + 36) == (_BYTE)v52 )
    {
LABEL_104:
      v48 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v51 + 78) != (_BYTE)v52 )
      break;
    v26 = v50 == 10 || !v49;
    if ( !v26 )
      goto LABEL_61;
    v49 = v50 == 8 || v46 == 0;
    if ( !v49 )
    {
      ++v47;
      v49 = v26;
LABEL_65:
      v24 = a1;
      v25 = *(_DWORD *)(a1 + 8);
      if ( v25 < *(_DWORD *)(a1 + 12) )
        goto LABEL_66;
      goto LABEL_74;
    }
    v24 = a1;
    v47 = 0;
    v50 = 8;
    v25 = *(_DWORD *)(a1 + 8);
    if ( v25 < *(_DWORD *)(a1 + 12) )
    {
LABEL_66:
      HIDWORD(a1) = -1;
      *(_DWORD *)(v24 + 8) = v25 + 1;
      goto LABEL_67;
    }
LABEL_74:
    v27 = *(void (**)(void))(*(_DWORD *)v24 + 40);
    v55 = -1;
    v27();
    v24 = a1;
    HIDWORD(a1) = -1;
    if ( !(_DWORD)a1 )
    {
      v48 = 1;
      goto LABEL_68;
    }
LABEL_67:
    v48 = 0;
    if ( *(_DWORD *)(v24 + 8) >= *(_DWORD *)(v24 + 12) )
    {
      v31 = *(int (**)(void))(*(_DWORD *)v24 + 36);
      v55 = -1;
      if ( v31() == -1 )
      {
        LODWORD(a1) = 0;
        v48 = 1;
      }
    }
LABEL_68:
    LOBYTE(v53) = a3 == -1;
    LOBYTE(v45) = v53 & (a2 != 0);
    if ( (_BYTE)v45 )
    {
      LOBYTE(v53) = 0;
      if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
      {
        v30 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v55 = -1;
        if ( v30() == -1 )
        {
          a2 = 0;
          LOBYTE(v53) = v45;
        }
      }
    }
    if ( (_BYTE)v53 == v48 )
    {
      v48 = 1;
      goto LABEL_11;
    }
    LOBYTE(v28) = BYTE4(a1);
    if ( !(_DWORD)a1 || HIDWORD(a1) != -1 )
      goto LABEL_78;
    v28 = *(_BYTE **)(a1 + 8);
    if ( (unsigned int)v28 < *(_DWORD *)(a1 + 12) )
    {
      LOBYTE(v28) = *v28;
LABEL_78:
      LOBYTE(v52) = (_BYTE)v28;
      goto LABEL_79;
    }
    v33 = *(int (**)(void))(*(_DWORD *)a1 + 36);
    v55 = -1;
    v28 = (_BYTE *)v33();
    if ( v28 != (_BYTE *)-1 )
      goto LABEL_78;
    LODWORD(a1) = 0;
    LOBYTE(v52) = -1;
LABEL_79:
    if ( !v49 )
      goto LABEL_104;
    v9 = *(_BYTE *)(v51 + 16);
  }
  if ( !v49 )
    goto LABEL_104;
LABEL_61:
  if ( *(_BYTE *)(v51 + 76) != (_BYTE)v52 && *(_BYTE *)(v51 + 77) != (_BYTE)v52 )
  {
    v48 = 0;
    v49 = 1;
    goto LABEL_11;
  }
  if ( v46 == 0 || v50 == 16 )
  {
    v47 = 0;
    v49 = 0;
    v50 = 16;
    goto LABEL_65;
  }
  v48 = 0;
  v49 = 1;
LABEL_12:
  v45 = v50;
LABEL_13:
  v39 = &v61;
  v37 = (int *)&v61;
  v55 = -1;
  v62 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v51 + 16) )
    goto LABEL_108;
LABEL_14:
  v38 = v50;
  v42 = (v40 & 1) + 0x7FFFFFFF;
  v43 = v42 / v50;
  v41 = v42 / v50;
  LOBYTE(v46) = *(_BYTE *)(v51 + 100);
  if ( (_BYTE)v46 )
  {
LABEL_37:
    if ( v48 )
    {
      v53 = 0;
      LOBYTE(v46) = 0;
      LOBYTE(v52) = v48;
      v48 = 0;
    }
    else
    {
      LOBYTE(v46) = 0;
      v53 = 0;
      v50 = v51 + 78;
      v18 = *(_BYTE *)(v51 + 16);
      if ( !v18 || *(_BYTE *)(v51 + 37) != (_BYTE)v52 )
        goto LABEL_40;
LABEL_51:
      if ( v47 )
      {
        v55 = 1;
        sub_6F909C90((int *)&v62, v47);
        v21 = a1;
        v47 = 0;
        v22 = *(_DWORD *)(a1 + 8);
        if ( v22 >= *(_DWORD *)(a1 + 12) )
        {
LABEL_53:
          v23 = *(void (**)(void))(*(_DWORD *)v21 + 40);
          v55 = 1;
          v23();
          goto LABEL_48;
        }
        while ( 1 )
        {
          *(_DWORD *)(v21 + 8) = v22 + 1;
LABEL_48:
          HIDWORD(a1) = -1;
          v55 = 1;
          LOBYTE(v52) = sub_6F8C2310(&a1, (int)v44);
          if ( (_BYTE)v52 )
            break;
          LOBYTE(v52) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          v18 = *(_BYTE *)(v51 + 16);
          if ( v18 && *(_BYTE *)(v51 + 37) == (_BYTE)v52 )
            goto LABEL_51;
LABEL_40:
          if ( (_BYTE)v52 == *(_BYTE *)(v51 + 36) || (v19 = (char *)memchr((const void *)v50, (char)v52, v45)) == 0 )
          {
LABEL_84:
            v14 = v62;
            LOBYTE(v52) = 0;
            if ( !*(v62 - 3) )
              goto LABEL_27;
            goto LABEL_85;
          }
          v20 = (int)&v19[-v50];
          if ( v20 > 15 )
            v20 -= 6;
          if ( v53 > v41 )
          {
            LOBYTE(v46) = 1;
          }
          else
          {
            LOBYTE(v46) = (v42 - v20 < v38 * v53) | v46;
            ++v47;
            v53 = v38 * v53 + v20;
          }
          v21 = a1;
          v22 = *(_DWORD *)(a1 + 8);
          if ( v22 >= *(_DWORD *)(a1 + 12) )
            goto LABEL_53;
        }
      }
      else
      {
        LOBYTE(v52) = 0;
        v48 = v18;
      }
    }
    goto LABEL_26;
  }
  if ( !v48 )
  {
    LOBYTE(v46) = v48;
    v53 = 0;
    LOBYTE(v41) = v45 + 48;
    while ( v45 > 0xA )
    {
      if ( (unsigned __int8)(v52 - 48) <= 9u )
        goto LABEL_20;
      if ( (unsigned __int8)(v52 - 97) > 5u )
      {
        if ( (unsigned __int8)(v52 - 65) > 5u )
          goto LABEL_84;
        v11 = (char)v52 - 55;
        goto LABEL_21;
      }
      v11 = (char)v52 - 87;
      if ( v11 == -1 )
        goto LABEL_84;
LABEL_22:
      if ( v43 < v53 )
      {
        v12 = a1;
        LOBYTE(v46) = 1;
        v13 = *(_DWORD *)(a1 + 8);
        if ( v13 < *(_DWORD *)(a1 + 12) )
        {
LABEL_24:
          *(_DWORD *)(v12 + 8) = v13 + 1;
          goto LABEL_25;
        }
      }
      else
      {
        LOBYTE(v46) = (v42 - v11 < v50 * v53) | v46;
        v12 = a1;
        v53 = v50 * v53 + v11;
        ++v47;
        v13 = *(_DWORD *)(a1 + 8);
        if ( v13 < *(_DWORD *)(a1 + 12) )
          goto LABEL_24;
      }
      v29 = *(void (**)(void))(*(_DWORD *)v12 + 40);
      v55 = 1;
      v29();
LABEL_25:
      HIDWORD(a1) = -1;
      v55 = 1;
      LOBYTE(v52) = sub_6F8C2310(&a1, (int)v44);
      if ( (_BYTE)v52 )
        goto LABEL_26;
      LOBYTE(v52) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
    }
    if ( (char)v52 <= 47 || (char)v41 <= (char)v52 )
      goto LABEL_84;
LABEL_20:
    v11 = (char)v52 - 48;
LABEL_21:
    if ( v11 == -1 )
      goto LABEL_84;
    goto LABEL_22;
  }
  v34 = v48;
  v53 = 0;
  v48 = 0;
  LOBYTE(v52) = v34;
LABEL_26:
  v14 = v62;
  if ( *(v62 - 3) )
  {
LABEL_85:
    v55 = 1;
    sub_6F909C90((int *)&v62, v47);
    v37 = (int *)&v62;
    v36 = *(_DWORD *)(v51 + 12);
    if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v51 + 8), v36, &v62) )
      *a5 = 4;
    v14 = v62;
    if ( !v47 && v49 != 1 && !*(v62 - 3) )
      goto LABEL_29;
  }
  else
  {
LABEL_27:
    if ( !v47 && v49 != 1 )
      goto LABEL_29;
  }
  if ( v48 )
  {
LABEL_29:
    *a6 = 0;
    *a5 = 4;
    goto LABEL_30;
  }
  if ( (_BYTE)v46 )
  {
    *a6 = (v40 & 1) + 0x7FFFFFFF;
    *a5 = 4;
  }
  else
  {
    v32 = -v53;
    if ( !(_BYTE)v40 )
      v32 = v53;
    *a6 = v32;
  }
LABEL_30:
  if ( (_BYTE)v52 )
    *a5 |= 2u;
  v52 = a1;
  sub_6F9086F0((int)(v14 - 3), (int)v39);
  sub_6F8A1AD0((int *)&v54);
  return v52;
}
