__int64 __stdcall sub_6F8DFA80(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int *a6)
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
  int v33; // [sp+0h] [bp-98h]@1
  int v34; // [sp+4h] [bp-94h]@67
  int *v35; // [sp+8h] [bp-90h]@13
  bool v36; // [sp+1Fh] [bp-79h]@5
  const void *v37; // [sp+20h] [bp-78h]@17
  unsigned int v38; // [sp+24h] [bp-74h]@15
  int *v39; // [sp+28h] [bp-70h]@4
  size_t v40; // [sp+2Ch] [bp-6Ch]@1
  int v41; // [sp+30h] [bp-68h]@10
  char v42; // [sp+34h] [bp-64h]@15
  char v43; // [sp+35h] [bp-63h]@16
  bool v44; // [sp+36h] [bp-62h]@4
  bool v45; // [sp+37h] [bp-61h]@10
  unsigned int v46; // [sp+38h] [bp-60h]@3
  int v47; // [sp+3Ch] [bp-5Ch]@1
  __int64 v48; // [sp+40h] [bp-58h]@5
  unsigned int v49; // [sp+48h] [bp-50h]@17
  char v50; // [sp+4Ch] [bp-4Ch]@1
  int v51; // [sp+50h] [bp-48h]@1
  int (__cdecl *v52)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  __int16 *v53; // [sp+68h] [bp-30h]@1
  char *v54; // [sp+6Ch] [bp-2Ch]@1
  int (*v55)(); // [sp+70h] [bp-28h]@1
  int *v56; // [sp+74h] [bp-24h]@1
  char v57; // [sp+8Bh] [bp-Dh]@13
  _DWORD *v58; // [sp+8Ch] [bp-Ch]@13
  char v59; // [sp+90h] [bp-8h]@1

  v54 = &v59;
  v56 = &v33;
  v52 = sub_6F962A50;
  v53 = &word_6F96B63A;
  v55 = sub_6F8E0372;
  sub_6F8A1A60((int *)&v50);
  v51 = -1;
  v47 = sub_6F8BEE80(a4 + 108);
  v6 = *(_DWORD *)(a4 + 12) & 0x4A;
  v40 = v6;
  if ( v6 == 64 )
  {
    v46 = 8;
LABEL_4:
    v39 = &a2;
    v51 = -1;
    v44 = sub_6F8C2310(&a1, (int)&a2);
    if ( v44 )
    {
      LOBYTE(v48) = 0;
      v41 = 0;
      v45 = 0;
      v36 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v6 != 8 )
  {
    v46 = 10;
    goto LABEL_4;
  }
  v39 = &a2;
  v51 = -1;
  v44 = sub_6F8C2310(&a1, (int)&a2);
  if ( v44 )
  {
    LOBYTE(v48) = 0;
    v41 = 0;
    v45 = 0;
    v36 = 0;
    v46 = 16;
    v40 = 22;
    goto LABEL_13;
  }
  v46 = 16;
LABEL_5:
  v51 = -1;
  v7 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
  LOBYTE(v48) = v7;
  v8 = *(_BYTE *)(v47 + 74);
  v36 = v8 == v7;
  if ( v8 == v7 )
  {
    v9 = *(_BYTE *)(v47 + 16);
LABEL_7:
    if ( (!v9 || *(_BYTE *)(v47 + 37) != v7) && *(_BYTE *)(v47 + 36) != v7 )
    {
      v51 = -1;
      sub_6F92D0F0((_DWORD *)a1);
      HIDWORD(a1) = -1;
      v10 = sub_6F8C2310(&a1, (int)v39);
      v41 = 0;
      v44 = v10;
      v45 = 0;
      if ( v10 )
      {
LABEL_11:
        v40 = 22;
        if ( v46 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOBYTE(v48) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
      v9 = *(_BYTE *)(v47 + 16);
    }
    goto LABEL_37;
  }
  v9 = *(_BYTE *)(v47 + 16);
  if ( *(_BYTE *)(v47 + 75) == v7 )
    goto LABEL_7;
LABEL_37:
  v41 = 0;
  v45 = 0;
  while ( 1 )
  {
    if ( v9 && *(_BYTE *)(v47 + 37) == (_BYTE)v48 || *(_BYTE *)(v47 + 36) == (_BYTE)v48 )
    {
LABEL_86:
      v44 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v47 + 78) != (_BYTE)v48 )
      break;
    v18 = v46 == 10 || !v45;
    if ( !v18 )
      goto LABEL_43;
    v45 = v46 == 8 || v40 == 0;
    if ( !v45 )
    {
      ++v41;
      v45 = v18;
LABEL_47:
      v16 = a1;
      v17 = *(_DWORD *)(a1 + 8);
      if ( v17 < *(_DWORD *)(a1 + 12) )
        goto LABEL_48;
      goto LABEL_56;
    }
    v16 = a1;
    v41 = 0;
    v46 = 8;
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
    v51 = -1;
    v19();
    v16 = a1;
    HIDWORD(a1) = -1;
    if ( !(_DWORD)a1 )
    {
      v44 = 1;
      goto LABEL_50;
    }
LABEL_49:
    v44 = 0;
    if ( *(_DWORD *)(v16 + 8) >= *(_DWORD *)(v16 + 12) )
    {
      v29 = *(int (**)(void))(*(_DWORD *)v16 + 36);
      v51 = -1;
      if ( v29() == -1 )
      {
        LODWORD(a1) = 0;
        v44 = 1;
      }
    }
LABEL_50:
    LOBYTE(v49) = a3 == -1;
    v43 = v49 & (a2 != 0);
    if ( v43 )
    {
      LOBYTE(v49) = 0;
      if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
      {
        v22 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v51 = -1;
        if ( v22() == -1 )
        {
          a2 = 0;
          LOBYTE(v49) = v43;
        }
      }
    }
    if ( v44 == (_BYTE)v49 )
    {
      v44 = 1;
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
      LOBYTE(v48) = (_BYTE)v20;
      goto LABEL_61;
    }
    v31 = *(int (**)(void))(*(_DWORD *)a1 + 36);
    v51 = -1;
    v20 = (_BYTE *)v31();
    if ( v20 != (_BYTE *)-1 )
      goto LABEL_60;
    LODWORD(a1) = 0;
    LOBYTE(v48) = -1;
LABEL_61:
    if ( !v45 )
      goto LABEL_86;
    v9 = *(_BYTE *)(v47 + 16);
  }
  if ( !v45 )
    goto LABEL_86;
LABEL_43:
  if ( *(_BYTE *)(v47 + 76) != (_BYTE)v48 && *(_BYTE *)(v47 + 77) != (_BYTE)v48 )
  {
    v44 = 0;
    v45 = 1;
    goto LABEL_11;
  }
  if ( v40 == 0 || v46 == 16 )
  {
    v41 = 0;
    v45 = 0;
    v46 = 16;
    goto LABEL_47;
  }
  v44 = 0;
  v45 = 1;
LABEL_12:
  v40 = v46;
LABEL_13:
  v35 = (int *)&v57;
  v51 = -1;
  v58 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v47 + 16) )
  {
    v51 = 1;
    sub_6F909A00((int *)&v58, 0x20u);
  }
  v38 = 0xFFFFFFFF / v46;
  v42 = *(_BYTE *)(v47 + 100);
  if ( v42 )
  {
    if ( v44 )
    {
      v49 = 0;
      v43 = 0;
      LOBYTE(v48) = v44;
      v44 = 0;
    }
    else
    {
      v43 = 0;
      v49 = 0;
      v37 = (const void *)(v47 + 78);
      v23 = *(_BYTE *)(v47 + 16);
      if ( !v23 || *(_BYTE *)(v47 + 37) != (_BYTE)v48 )
        goto LABEL_90;
LABEL_101:
      if ( v41 )
      {
        v51 = 1;
        sub_6F909C90((int *)&v58, v41);
        v26 = a1;
        v41 = 0;
        v27 = *(_DWORD *)(a1 + 8);
        if ( v27 >= *(_DWORD *)(a1 + 12) )
        {
LABEL_103:
          v28 = *(void (**)(void))(*(_DWORD *)v26 + 40);
          v51 = 1;
          v28();
          goto LABEL_98;
        }
        while ( 1 )
        {
          *(_DWORD *)(v26 + 8) = v27 + 1;
LABEL_98:
          HIDWORD(a1) = -1;
          v51 = 1;
          LOBYTE(v48) = sub_6F8C2310(&a1, (int)v39);
          if ( (_BYTE)v48 )
            break;
          LOBYTE(v48) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          v23 = *(_BYTE *)(v47 + 16);
          if ( v23 && *(_BYTE *)(v47 + 37) == (_BYTE)v48 )
            goto LABEL_101;
LABEL_90:
          if ( (_BYTE)v48 == *(_BYTE *)(v47 + 36) || (v24 = memchr(v37, (char)v48, v40)) == 0 )
          {
LABEL_66:
            v14 = v58;
            LOBYTE(v48) = 0;
            if ( !*(v58 - 3) )
              goto LABEL_28;
            goto LABEL_67;
          }
          v25 = v24 - (_BYTE *)v37;
          if ( v25 > 15 )
            v25 -= 6;
          if ( v38 < v49 )
          {
            v43 = v42;
          }
          else
          {
            v43 |= ~v25 < v46 * v49;
            ++v41;
            v49 = v46 * v49 + v25;
          }
          v26 = a1;
          v27 = *(_DWORD *)(a1 + 8);
          if ( v27 >= *(_DWORD *)(a1 + 12) )
            goto LABEL_103;
        }
      }
      else
      {
        LOBYTE(v48) = 0;
        v44 = v23;
      }
    }
  }
  else
  {
    v43 = 0;
    if ( !v44 )
    {
      v49 = 0;
      LOBYTE(v37) = v40 + 48;
      while ( v40 > 0xA )
      {
        if ( (unsigned __int8)(v48 - 48) <= 9u )
          goto LABEL_21;
        if ( (unsigned __int8)(v48 - 97) > 5u )
        {
          if ( (unsigned __int8)(v48 - 65) > 5u )
            goto LABEL_66;
          v11 = (char)v48 - 55;
          goto LABEL_22;
        }
        v11 = (char)v48 - 87;
        if ( v11 == -1 )
          goto LABEL_66;
LABEL_23:
        if ( v38 < v49 )
        {
          v12 = a1;
          v43 = 1;
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
          v43 |= ~v11 < v46 * v49;
          v12 = a1;
          v49 = v46 * v49 + v11;
          ++v41;
          v13 = *(_DWORD *)(a1 + 8);
          if ( v13 < *(_DWORD *)(a1 + 12) )
            goto LABEL_25;
        }
        v21 = *(void (**)(void))(*(_DWORD *)v12 + 40);
        v51 = 1;
        v21();
LABEL_26:
        HIDWORD(a1) = -1;
        v51 = 1;
        LOBYTE(v48) = sub_6F8C2310(&a1, (int)v39);
        if ( (_BYTE)v48 )
          goto LABEL_27;
        LOBYTE(v48) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
      }
      if ( (char)v48 <= 47 || (char)v37 <= (char)v48 )
        goto LABEL_66;
LABEL_21:
      v11 = (char)v48 - 48;
LABEL_22:
      if ( v11 == -1 )
        goto LABEL_66;
      goto LABEL_23;
    }
    v32 = v44;
    v49 = 0;
    v44 = 0;
    LOBYTE(v48) = v32;
  }
LABEL_27:
  v14 = v58;
  if ( *(v58 - 3) )
  {
LABEL_67:
    v51 = 1;
    sub_6F909C90((int *)&v58, v41);
    v35 = (int *)&v58;
    v34 = *(_DWORD *)(v47 + 12);
    if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v47 + 8), v34, &v58) )
      *a5 = 4;
    v14 = v58;
    if ( !v41 && v45 != 1 && !*(v58 - 3) )
      goto LABEL_30;
  }
  else
  {
LABEL_28:
    if ( !v41 && v45 != 1 )
      goto LABEL_30;
  }
  if ( v44 )
  {
LABEL_30:
    *a6 = 0;
    *a5 = 4;
    goto LABEL_31;
  }
  if ( v43 )
  {
    *a6 = -1;
    *a5 = 4;
  }
  else
  {
    v30 = -v49;
    if ( !v36 )
      v30 = v49;
    *a6 = v30;
  }
LABEL_31:
  if ( (_BYTE)v48 )
    *a5 |= 2u;
  v48 = a1;
  sub_6F9086F0((int)(v14 - 3), (int)&v57);
  sub_6F8A1AD0((int *)&v50);
  return v48;
}
