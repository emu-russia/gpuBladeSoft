__int64 __stdcall sub_6F8E03A0(__int64 a1, int a2, int a3, int a4, _DWORD *a5, _WORD *a6)
{
  int v6; // eax@1
  char v7; // al@5
  char v8; // dl@5
  char v9; // dl@6
  bool v10; // al@10
  int v11; // eax@21
  int v12; // ecx@24
  unsigned int v13; // eax@24
  _DWORD *v14; // ecx@27
  int v16; // ecx@47
  unsigned int v17; // eax@47
  bool v18; // al@53
  void (*v19)(void); // eax@56
  _BYTE *v20; // eax@58
  void (*v21)(void); // eax@76
  int (*v22)(void); // eax@78
  bool v23; // al@88
  _BYTE *v24; // eax@91
  int v25; // eax@92
  int v26; // ecx@96
  unsigned int v27; // eax@96
  void (*v28)(void); // eax@103
  int (*v29)(void); // eax@107
  int v30; // eax@110
  int (*v31)(void); // eax@116
  char v32; // al@118
  char v33; // al@119
  int v34; // [sp+0h] [bp-88h]@1
  int v35; // [sp+4h] [bp-84h]@67
  int *v36; // [sp+8h] [bp-80h]@13
  const void *v37; // [sp+10h] [bp-78h]@17
  int v38; // [sp+14h] [bp-74h]@15
  int *v39; // [sp+18h] [bp-70h]@4
  bool v40; // [sp+1Dh] [bp-6Bh]@5
  char v41; // [sp+1Eh] [bp-6Ah]@15
  char v42; // [sp+1Fh] [bp-69h]@16
  size_t v43; // [sp+20h] [bp-68h]@1
  int v44; // [sp+24h] [bp-64h]@10
  int v45; // [sp+28h] [bp-60h]@3
  int v46; // [sp+2Ch] [bp-5Ch]@1
  __int64 v47; // [sp+30h] [bp-58h]@5
  bool v48; // [sp+38h] [bp-50h]@4
  bool v49; // [sp+39h] [bp-4Fh]@10
  unsigned __int16 v50; // [sp+3Ah] [bp-4Eh]@17
  char v51; // [sp+3Ch] [bp-4Ch]@1
  int v52; // [sp+40h] [bp-48h]@1
  int (__cdecl *v53)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-34h]@1
  __int16 *v54; // [sp+58h] [bp-30h]@1
  char *v55; // [sp+5Ch] [bp-2Ch]@1
  int (*v56)(); // [sp+60h] [bp-28h]@1
  int *v57; // [sp+64h] [bp-24h]@1
  char v58; // [sp+7Bh] [bp-Dh]@13
  _DWORD *v59; // [sp+7Ch] [bp-Ch]@13
  char v60; // [sp+80h] [bp-8h]@1

  v55 = &v60;
  v57 = &v34;
  v53 = sub_6F962A50;
  v54 = &word_6F96B62E;
  v56 = sub_6F8E0CB0;
  sub_6F8A1A60((int *)&v51);
  v52 = -1;
  v46 = sub_6F8BEE80(a4 + 108);
  v6 = *(_DWORD *)(a4 + 12) & 0x4A;
  v43 = v6;
  if ( v6 == 64 )
  {
    v45 = 8;
LABEL_4:
    v39 = &a2;
    v52 = -1;
    v48 = sub_6F8C2310(&a1, (int)&a2);
    if ( v48 )
    {
      LOBYTE(v47) = 0;
      v44 = 0;
      v49 = 0;
      v40 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v6 != 8 )
  {
    v45 = 10;
    goto LABEL_4;
  }
  v39 = &a2;
  v52 = -1;
  v48 = sub_6F8C2310(&a1, (int)&a2);
  if ( v48 )
  {
    LOBYTE(v47) = 0;
    v44 = 0;
    v49 = 0;
    v40 = 0;
    v45 = 16;
    v43 = 22;
    goto LABEL_13;
  }
  v45 = 16;
LABEL_5:
  v52 = -1;
  v7 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
  LOBYTE(v47) = v7;
  v8 = *(_BYTE *)(v46 + 74);
  v40 = v8 == v7;
  if ( v8 == v7 )
  {
    v9 = *(_BYTE *)(v46 + 16);
LABEL_7:
    if ( (!v9 || *(_BYTE *)(v46 + 37) != v7) && *(_BYTE *)(v46 + 36) != v7 )
    {
      v52 = -1;
      sub_6F92D0F0((_DWORD *)a1);
      HIDWORD(a1) = -1;
      v10 = sub_6F8C2310(&a1, (int)v39);
      v44 = 0;
      v48 = v10;
      v49 = 0;
      if ( v10 )
      {
LABEL_11:
        v43 = 22;
        if ( v45 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOBYTE(v47) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
      v9 = *(_BYTE *)(v46 + 16);
    }
    goto LABEL_37;
  }
  v9 = *(_BYTE *)(v46 + 16);
  if ( *(_BYTE *)(v46 + 75) == v7 )
    goto LABEL_7;
LABEL_37:
  v44 = 0;
  v49 = 0;
  while ( 1 )
  {
    if ( v9 && *(_BYTE *)(v46 + 37) == (_BYTE)v47 || *(_BYTE *)(v46 + 36) == (_BYTE)v47 )
    {
LABEL_86:
      v48 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v46 + 78) != (_BYTE)v47 )
      break;
    v18 = v45 == 10 || !v49;
    if ( !v18 )
      goto LABEL_43;
    v49 = v45 == 8 || v43 == 0;
    if ( !v49 )
    {
      ++v44;
      v49 = v18;
LABEL_47:
      v16 = a1;
      v17 = *(_DWORD *)(a1 + 8);
      if ( v17 < *(_DWORD *)(a1 + 12) )
        goto LABEL_48;
      goto LABEL_56;
    }
    v16 = a1;
    v44 = 0;
    v45 = 8;
    v17 = *(_DWORD *)(a1 + 8);
    if ( v17 < *(_DWORD *)(a1 + 12) )
    {
LABEL_48:
      HIDWORD(a1) = -1;
      *(_DWORD *)(v16 + 8) = v17 + 1;
      goto LABEL_49;
    }
LABEL_56:
    v19 = *(void (**)(void))(*(_DWORD *)v16 + 40);
    v52 = -1;
    v19();
    v16 = a1;
    HIDWORD(a1) = -1;
    if ( !(_DWORD)a1 )
    {
      v48 = 1;
      goto LABEL_50;
    }
LABEL_49:
    v48 = 0;
    if ( *(_DWORD *)(v16 + 8) >= *(_DWORD *)(v16 + 12) )
    {
      v29 = *(int (**)(void))(*(_DWORD *)v16 + 36);
      v52 = -1;
      if ( v29() == -1 )
      {
        LODWORD(a1) = 0;
        v48 = 1;
      }
    }
LABEL_50:
    LOBYTE(v50) = a3 == -1;
    v42 = v50 & (a2 != 0);
    if ( v42 )
    {
      LOBYTE(v50) = 0;
      if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
      {
        v22 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v52 = -1;
        if ( v22() == -1 )
        {
          a2 = 0;
          LOBYTE(v50) = v42;
        }
      }
    }
    if ( v48 == (_BYTE)v50 )
    {
      v48 = 1;
      goto LABEL_11;
    }
    LOBYTE(v20) = BYTE4(a1);
    if ( !(_DWORD)a1 || HIDWORD(a1) != -1 )
      goto LABEL_60;
    v20 = *(_BYTE **)(a1 + 8);
    if ( (unsigned int)v20 < *(_DWORD *)(a1 + 12) )
    {
      LOBYTE(v20) = *v20;
LABEL_60:
      LOBYTE(v47) = (_BYTE)v20;
      goto LABEL_61;
    }
    v31 = *(int (**)(void))(*(_DWORD *)a1 + 36);
    v52 = -1;
    v20 = (_BYTE *)v31();
    if ( v20 != (_BYTE *)-1 )
      goto LABEL_60;
    LODWORD(a1) = 0;
    LOBYTE(v47) = -1;
LABEL_61:
    if ( !v49 )
      goto LABEL_86;
    v9 = *(_BYTE *)(v46 + 16);
  }
  if ( !v49 )
    goto LABEL_86;
LABEL_43:
  if ( *(_BYTE *)(v46 + 76) != (_BYTE)v47 && *(_BYTE *)(v46 + 77) != (_BYTE)v47 )
  {
    v48 = 0;
    v49 = 1;
    goto LABEL_11;
  }
  if ( v43 == 0 || v45 == 16 )
  {
    v44 = 0;
    v49 = 0;
    v45 = 16;
    goto LABEL_47;
  }
  v48 = 0;
  v49 = 1;
LABEL_12:
  v43 = v45;
LABEL_13:
  v36 = (int *)&v58;
  v52 = -1;
  v59 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v46 + 16) )
  {
    v52 = 1;
    sub_6F909A00((int *)&v59, 0x20u);
  }
  v38 = 0xFFFF / v45;
  v41 = *(_BYTE *)(v46 + 100);
  if ( v41 )
  {
    if ( v48 )
    {
      v33 = v48;
      v42 = 0;
      v48 = 0;
      LOBYTE(v47) = v33;
      v50 = 0;
    }
    else
    {
      v42 = 0;
      v37 = (const void *)(v46 + 78);
      v50 = 0;
      v23 = *(_BYTE *)(v46 + 16);
      if ( !v23 || *(_BYTE *)(v46 + 37) != (_BYTE)v47 )
        goto LABEL_90;
LABEL_101:
      if ( v44 )
      {
        v52 = 1;
        sub_6F909C90((int *)&v59, v44);
        v26 = a1;
        v44 = 0;
        v27 = *(_DWORD *)(a1 + 8);
        if ( v27 >= *(_DWORD *)(a1 + 12) )
        {
LABEL_103:
          v28 = *(void (**)(void))(*(_DWORD *)v26 + 40);
          v52 = 1;
          v28();
          goto LABEL_98;
        }
        while ( 1 )
        {
          *(_DWORD *)(v26 + 8) = v27 + 1;
LABEL_98:
          HIDWORD(a1) = -1;
          v52 = 1;
          LOBYTE(v47) = sub_6F8C2310(&a1, (int)v39);
          if ( (_BYTE)v47 )
            break;
          LOBYTE(v47) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          v23 = *(_BYTE *)(v46 + 16);
          if ( v23 && *(_BYTE *)(v46 + 37) == (_BYTE)v47 )
            goto LABEL_101;
LABEL_90:
          if ( (_BYTE)v47 == *(_BYTE *)(v46 + 36) || (v24 = memchr(v37, (char)v47, v43)) == 0 )
          {
LABEL_66:
            v14 = v59;
            LOBYTE(v47) = 0;
            if ( !*(v59 - 3) )
              goto LABEL_28;
            goto LABEL_67;
          }
          v25 = v24 - (_BYTE *)v37;
          if ( v25 > 15 )
            v25 -= 6;
          if ( (unsigned __int16)v38 < v50 )
          {
            v42 = v41;
          }
          else
          {
            v42 |= (unsigned __int16)(v50 * v45) > 0xFFFF - v25;
            ++v44;
            v50 = v50 * v45 + v25;
          }
          v26 = a1;
          v27 = *(_DWORD *)(a1 + 8);
          if ( v27 >= *(_DWORD *)(a1 + 12) )
            goto LABEL_103;
        }
      }
      else
      {
        LOBYTE(v47) = 0;
        v48 = v23;
      }
    }
  }
  else
  {
    v42 = 0;
    if ( !v48 )
    {
      v50 = 0;
      LOBYTE(v37) = v43 + 48;
      while ( v43 > 0xA )
      {
        if ( (unsigned __int8)(v47 - 48) <= 9u )
          goto LABEL_21;
        if ( (unsigned __int8)(v47 - 97) > 5u )
        {
          if ( (unsigned __int8)(v47 - 65) > 5u )
            goto LABEL_66;
          v11 = (char)v47 - 55;
          goto LABEL_22;
        }
        v11 = (char)v47 - 87;
        if ( v11 == -1 )
          goto LABEL_66;
LABEL_23:
        if ( (unsigned __int16)v38 < v50 )
        {
          v12 = a1;
          v42 = 1;
          v13 = *(_DWORD *)(a1 + 8);
          if ( v13 < *(_DWORD *)(a1 + 12) )
          {
LABEL_25:
            *(_DWORD *)(v12 + 8) = v13 + 1;
            goto LABEL_26;
          }
        }
        else
        {
          v42 |= (unsigned __int16)(v50 * v45) > 0xFFFF - v11;
          v12 = a1;
          v50 = v50 * v45 + v11;
          ++v44;
          v13 = *(_DWORD *)(a1 + 8);
          if ( v13 < *(_DWORD *)(a1 + 12) )
            goto LABEL_25;
        }
        v21 = *(void (**)(void))(*(_DWORD *)v12 + 40);
        v52 = 1;
        v21();
LABEL_26:
        HIDWORD(a1) = -1;
        v52 = 1;
        LOBYTE(v47) = sub_6F8C2310(&a1, (int)v39);
        if ( (_BYTE)v47 )
          goto LABEL_27;
        LOBYTE(v47) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
      }
      if ( (char)v47 <= 47 || (char)v37 <= (char)v47 )
        goto LABEL_66;
LABEL_21:
      v11 = (char)v47 - 48;
LABEL_22:
      if ( v11 == -1 )
        goto LABEL_66;
      goto LABEL_23;
    }
    v32 = v48;
    v48 = 0;
    LOBYTE(v47) = v32;
    v50 = 0;
  }
LABEL_27:
  v14 = v59;
  if ( *(v59 - 3) )
  {
LABEL_67:
    v52 = 1;
    sub_6F909C90((int *)&v59, v44);
    v36 = (int *)&v59;
    v35 = *(_DWORD *)(v46 + 12);
    if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v46 + 8), v35, &v59) )
      *a5 = 4;
    v14 = v59;
    if ( !v44 && v49 != 1 && !*(v59 - 3) )
      goto LABEL_30;
  }
  else
  {
LABEL_28:
    if ( !v44 && v49 != 1 )
      goto LABEL_30;
  }
  if ( v48 )
  {
LABEL_30:
    *a6 = 0;
    *a5 = 4;
    goto LABEL_31;
  }
  if ( v42 )
  {
    *a6 = -1;
    *a5 = 4;
  }
  else
  {
    v30 = -v50;
    if ( !v40 )
      LOWORD(v30) = v50;
    *a6 = v30;
  }
LABEL_31:
  if ( (_BYTE)v47 )
    *a5 |= 2u;
  v47 = a1;
  sub_6F9086F0((int)(v14 - 3), (int)&v58);
  sub_6F8A1AD0((int *)&v51);
  return v47;
}
