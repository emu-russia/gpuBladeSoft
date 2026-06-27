__int64 __stdcall sub_6F8EC450(__int64 a1, char a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  bool v6; // al@1
  int v7; // eax@8
  int v8; // eax@9
  int v9; // ecx@11
  unsigned int v10; // eax@11
  unsigned int v11; // eax@19
  __int16 v12; // ax@22
  char v13; // al@24
  void (*v14)(void); // eax@26
  unsigned __int8 v15; // al@28
  bool v16; // zf@32
  int v17; // eax@32
  int v18; // ecx@36
  unsigned int v19; // eax@36
  int v20; // eax@39
  _WORD *v22; // eax@48
  __int16 v23; // ax@58
  __int16 v24; // bx@58
  __int16 v25; // dx@58
  void (*v26)(void); // eax@63
  void (*v27)(void); // eax@75
  __int16 v28; // dx@76
  char v29; // al@77
  char v30; // dl@78
  int v31; // ecx@84
  unsigned int v32; // eax@84
  bool v33; // al@86
  void (*v34)(void); // eax@89
  __int16 v35; // ax@90
  bool v36; // al@96
  int v37; // edx@104
  int v38; // eax@106
  int v39; // [sp+0h] [bp-88h]@1
  int v40; // [sp+4h] [bp-84h]@44
  char *v41; // [sp+8h] [bp-80h]@3
  _WORD *v42; // [sp+1Ch] [bp-6Ch]@28
  _WORD *v43; // [sp+20h] [bp-68h]@28
  int v44; // [sp+24h] [bp-64h]@2
  unsigned __int8 v45; // [sp+29h] [bp-5Fh]@5
  unsigned __int8 v46; // [sp+2Ah] [bp-5Eh]@7
  unsigned __int8 v47; // [sp+2Bh] [bp-5Dh]@2
  int *v48; // [sp+2Ch] [bp-5Ch]@2
  __int64 v49; // [sp+30h] [bp-58h]@1
  _DWORD *v50; // [sp+38h] [bp-50h]@2
  char v51; // [sp+3Ch] [bp-4Ch]@1
  int v52; // [sp+40h] [bp-48h]@1
  int (__cdecl *v53)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-34h]@1
  int *v54; // [sp+58h] [bp-30h]@1
  char *v55; // [sp+5Ch] [bp-2Ch]@1
  int (*v56)(); // [sp+60h] [bp-28h]@1
  int *v57; // [sp+64h] [bp-24h]@1
  char v58; // [sp+7Bh] [bp-Dh]@3
  _DWORD *v59; // [sp+7Ch] [bp-Ch]@3
  char v60; // [sp+80h] [bp-8h]@1

  v55 = &v60;
  v57 = &v39;
  v53 = sub_6F962A50;
  v54 = &dword_6F96B170;
  v56 = sub_6F8ECD58;
  sub_6F8A1A60((int *)&v51);
  v52 = -1;
  LODWORD(v49) = sub_6F8BF000(a4 + 108);
  v6 = sub_6F8C2450(&a1, (int)&a2);
  if ( v6 )
  {
    LOBYTE(v48) = v6;
    LOWORD(v50) = 0;
    v44 = 0;
    v47 = 0;
    goto LABEL_3;
  }
  LOWORD(v50) = sub_6F8C24F0((int *)&a1, WORD2(a1));
  v28 = *(_WORD *)(v49 + 114);
  if ( v28 == (_WORD)v50 )
  {
    v29 = *(_BYTE *)(v49 + 16);
  }
  else
  {
    v29 = *(_BYTE *)(v49 + 16);
    if ( *(_WORD *)(v49 + 112) != (_WORD)v50 )
    {
LABEL_78:
      v44 = 0;
      v30 = 0;
      while ( 1 )
      {
        if ( v29 && *(_WORD *)(v49 + 38) == (_WORD)v50
          || *(_WORD *)(v49 + 36) == (_WORD)v50
          || *(_WORD *)(v49 + 120) != (_WORD)v50 )
        {
          v47 = v30;
          LOBYTE(v48) = 0;
          goto LABEL_3;
        }
        if ( v30 )
        {
          v31 = a1;
          ++v44;
          v32 = *(_DWORD *)(a1 + 8);
          if ( v32 < *(_DWORD *)(a1 + 12) )
            goto LABEL_85;
        }
        else
        {
          v52 = -1;
          sub_6F909C90(a6, 48);
          v31 = a1;
          ++v44;
          v32 = *(_DWORD *)(a1 + 8);
          if ( v32 < *(_DWORD *)(a1 + 12) )
          {
LABEL_85:
            *(_DWORD *)(v31 + 8) = v32 + 2;
            goto LABEL_86;
          }
        }
        v34 = *(void (**)(void))(*(_DWORD *)v31 + 40);
        v52 = -1;
        v34();
LABEL_86:
        WORD2(a1) = -1;
        v52 = -1;
        v33 = sub_6F8C2450(&a1, (int)&a2);
        if ( v33 )
        {
          LOBYTE(v48) = v33;
          v47 = v33;
          goto LABEL_3;
        }
        v35 = sub_6F8C24F0((int *)&a1, WORD2(a1));
        v30 = 1;
        LOWORD(v50) = v35;
        v29 = *(_BYTE *)(v49 + 16);
      }
    }
  }
  if ( v29 && *(_WORD *)(v49 + 38) == (_WORD)v50 || *(_WORD *)(v49 + 36) == (_WORD)v50 )
    goto LABEL_78;
  v52 = -1;
  sub_6F909C90(a6, 2 * (v28 != (_WORD)v50) + 43);
  sub_6F92DAB0((_DWORD *)a1);
  WORD2(a1) = -1;
  v36 = sub_6F8C2450(&a1, (int)&a2);
  v47 = 0;
  LOBYTE(v48) = v36;
  v44 = 0;
  if ( !v36 )
  {
    LOWORD(v50) = sub_6F8C24F0((int *)&a1, WORD2(a1));
    v29 = *(_BYTE *)(v49 + 16);
    goto LABEL_78;
  }
LABEL_3:
  v41 = &v58;
  v52 = -1;
  v59 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v49 + 16) )
  {
    v52 = 1;
    sub_6F909A00((int *)&v59, 0x20u);
  }
  v45 = *(_BYTE *)(v49 + 164);
  if ( !v45 )
  {
    if ( !(_BYTE)v48 )
    {
      v46 = 0;
LABEL_8:
      v7 = (unsigned __int16)v50;
      if ( (unsigned __int16)((_WORD)v50 - 48) <= 9u )
      {
LABEL_9:
        v8 = v7 - 48;
        if ( v8 == -1 )
          goto LABEL_15;
        v52 = 1;
        sub_6F909C90(a6, v8 + 48);
        v47 = 1;
        goto LABEL_11;
      }
      while ( 1 )
      {
LABEL_15:
        if ( *(_WORD *)(v49 + 36) == (_WORD)v50 && !(v46 | (unsigned __int8)v48) )
        {
          v52 = 1;
          sub_6F909C90(a6, 46);
          v46 = 0;
          LOBYTE(v48) = 1;
LABEL_11:
          v9 = a1;
          v10 = *(_DWORD *)(a1 + 8);
          if ( v10 >= *(_DWORD *)(a1 + 12) )
            goto LABEL_26;
LABEL_12:
          *(_DWORD *)(v9 + 8) = v10 + 2;
          goto LABEL_13;
        }
        if ( *(_WORD *)(v49 + 148) != (_WORD)v50 && *(_WORD *)(v49 + 160) != (_WORD)v50 )
          goto LABEL_39;
        v47 &= v46 ^ 1;
        if ( !v47 )
          goto LABEL_39;
        v52 = 1;
        sub_6F909C90(a6, 101);
        v11 = *(_DWORD *)(a1 + 8);
        if ( v11 >= *(_DWORD *)(a1 + 12) )
        {
          v27 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v52 = 1;
          v27();
        }
        else
        {
          *(_DWORD *)(a1 + 8) = v11 + 2;
        }
        WORD2(a1) = -1;
        v52 = 1;
        if ( sub_6F8C2450(&a1, (int)&a2) )
          goto LABEL_101;
        v12 = sub_6F8C24F0((int *)&a1, WORD2(a1));
        LOWORD(v50) = v12;
        if ( *(_WORD *)(v49 + 114) == v12 )
        {
          v13 = 43;
        }
        else
        {
          if ( *(_WORD *)(v49 + 112) != v12 )
          {
            v46 = v47;
            goto LABEL_8;
          }
          v13 = 45;
        }
        v52 = 1;
        sub_6F909C90(a6, v13);
        v9 = a1;
        v46 = v47;
        v10 = *(_DWORD *)(a1 + 8);
        if ( v10 < *(_DWORD *)(a1 + 12) )
          goto LABEL_12;
LABEL_26:
        v14 = *(void (**)(void))(*(_DWORD *)v9 + 40);
        v52 = 1;
        v14();
LABEL_13:
        WORD2(a1) = -1;
        v52 = 1;
        if ( sub_6F8C2450(&a1, (int)&a2) )
          goto LABEL_39;
        v52 = 1;
        LOWORD(v50) = sub_6F8C24F0((int *)&a1, WORD2(a1));
        v7 = (unsigned __int16)v50;
        if ( (unsigned __int16)((_WORD)v50 - 48) <= 9u )
          goto LABEL_9;
      }
    }
LABEL_104:
    v37 = *(v59 - 3);
    v50 = v59;
    if ( !v37 )
      goto LABEL_46;
    goto LABEL_43;
  }
  if ( (_BYTE)v48 )
    goto LABEL_104;
  v46 = 0;
  v43 = (_WORD *)(v49 + 120);
  v15 = *(_BYTE *)(v49 + 16);
  v42 = (_WORD *)(v49 + 140);
  while ( 1 )
  {
    if ( v15 && *(_WORD *)(v49 + 38) == (_WORD)v50 )
    {
      LOBYTE(v48) = v46 | (unsigned __int8)v48;
      if ( (_BYTE)v48 )
      {
        v50 = v59;
        v17 = *(v59 - 3);
LABEL_99:
        v48 = (int *)&v59;
        if ( v17 )
          goto LABEL_44;
        goto LABEL_46;
      }
      if ( !v44 )
      {
        v41 = 0;
        v38 = *(_DWORD *)(*a6 - 12);
        v52 = 1;
        sub_6F909B10((const void **)a6, 0, v38, 0);
        v50 = v59;
        if ( *(v59 - 3) )
          goto LABEL_43;
        goto LABEL_46;
      }
      v52 = 1;
      sub_6F909C90((int *)&v59, v44);
      v46 = 0;
      v44 = 0;
    }
    else if ( *(_WORD *)(v49 + 36) == (_WORD)v50 )
    {
      v16 = ((unsigned __int8)v48 | v46) == 0;
      v46 |= (unsigned __int8)v48;
      v50 = v59;
      v17 = *(v59 - 3);
      if ( !v16 )
        goto LABEL_99;
      if ( v17 )
      {
        v52 = 1;
        sub_6F909C90((int *)&v59, v44);
      }
      v52 = 1;
      sub_6F909C90(a6, 46);
      LOBYTE(v48) = v45;
    }
    else
    {
      v22 = v43;
      do
      {
        if ( *v22 == (_WORD)v50 )
        {
          v52 = 1;
          sub_6F909C90(a6, v22 - v43 + 48);
          v18 = a1;
          ++v44;
          v47 = v45;
          v19 = *(_DWORD *)(a1 + 8);
          if ( v19 < *(_DWORD *)(a1 + 12) )
            goto LABEL_37;
          goto LABEL_63;
        }
        ++v22;
      }
      while ( v22 != v42 );
      if ( *(_WORD *)(v49 + 148) != (_WORD)v50 && *(_WORD *)(v49 + 160) != (_WORD)v50 )
        break;
      v16 = ((unsigned __int8)(v46 ^ 1) & v47) == 0;
      v47 &= v46 ^ 1;
      v50 = v59;
      v20 = *(v59 - 3);
      if ( v16 )
        goto LABEL_40;
      if ( v20 && !(_BYTE)v48 )
      {
        v52 = 1;
        sub_6F909C90((int *)&v59, v44);
      }
      v52 = 1;
      sub_6F909C90(a6, 101);
      sub_6F92DAB0((_DWORD *)a1);
      WORD2(a1) = -1;
      if ( sub_6F8C2450(&a1, (int)&a2) )
      {
LABEL_101:
        v48 = (int *)&v59;
        v50 = v59;
        if ( *(v59 - 3) )
          goto LABEL_44;
        goto LABEL_46;
      }
      v23 = sub_6F8C24F0((int *)&a1, WORD2(a1));
      v24 = v23;
      LOWORD(v50) = v23;
      v25 = *(_WORD *)(v49 + 114);
      v15 = *(_BYTE *)(v49 + 16);
      if ( v25 != v24 && *(_WORD *)(v49 + 112) != v24 )
        goto LABEL_60;
      if ( v15 && *(_WORD *)(v49 + 38) == (_WORD)v50 )
      {
        v46 = *(_BYTE *)(v49 + 16);
        v47 = v15;
        continue;
      }
      if ( *(_WORD *)(v49 + 36) == (_WORD)v50 )
      {
LABEL_60:
        v46 = v47;
        continue;
      }
      v52 = 1;
      sub_6F909C90(a6, 2 * (v25 != (_WORD)v50) + 43);
      v46 = v47;
    }
    v18 = a1;
    v19 = *(_DWORD *)(a1 + 8);
    if ( v19 >= *(_DWORD *)(a1 + 12) )
    {
LABEL_63:
      v26 = *(void (**)(void))(*(_DWORD *)v18 + 40);
      v52 = 1;
      v26();
    }
    else
    {
LABEL_37:
      *(_DWORD *)(v18 + 8) = v19 + 2;
    }
    WORD2(a1) = -1;
    v52 = 1;
    if ( sub_6F8C2450(&a1, (int)&a2) )
      break;
    v52 = 1;
    LOWORD(v50) = sub_6F8C24F0((int *)&a1, WORD2(a1));
    v15 = *(_BYTE *)(v49 + 16);
  }
LABEL_39:
  v50 = v59;
  v20 = *(v59 - 3);
LABEL_40:
  if ( !v20 )
    goto LABEL_46;
  if ( (_BYTE)v48 || v46 )
  {
    v48 = (int *)&v59;
    goto LABEL_44;
  }
LABEL_43:
  v48 = (int *)&v59;
  v52 = 1;
  sub_6F909C90((int *)&v59, v44);
  v50 = v59;
LABEL_44:
  v41 = (char *)v48;
  v40 = *(_DWORD *)(v49 + 12);
  v39 = *(_DWORD *)(v49 + 8);
  if ( !(unsigned __int8)sub_6F95AB90(v39, v40, v48) )
    *a5 = 4;
LABEL_46:
  v49 = a1;
  sub_6F9086F0((int)(v50 - 3), (int)&v58);
  sub_6F8A1AD0((int *)&v51);
  return v49;
}
