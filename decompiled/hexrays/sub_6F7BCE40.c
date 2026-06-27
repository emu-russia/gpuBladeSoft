signed int __cdecl sub_6F7BCE40(int a1, int a2, int a3)
{
  int v3; // ebp@1
  int v4; // eax@1
  int v6; // eax@7
  int v7; // edx@7
  int v8; // eax@7
  char *v9; // ecx@11
  int v10; // esi@12
  char v11; // al@13
  char v12; // dl@15
  int v13; // ecx@22
  _BYTE *v14; // eax@22
  bool v15; // zf@24
  const char *v16; // edi@25
  signed int v17; // ecx@25
  _BYTE *v18; // esi@25
  const char *v19; // edi@29
  signed int v20; // ecx@29
  _BYTE *v21; // esi@29
  int v22; // eax@34
  int v23; // esi@34
  int v24; // eax@34
  int v25; // eax@34
  __int16 v26; // di@34
  int v27; // eax@34
  int v28; // ecx@34
  int v29; // eax@35
  int v30; // edi@41
  int v31; // eax@41
  signed int v32; // eax@41
  unsigned int v33; // eax@46
  int v34; // eax@50
  int v35; // eax@55
  int v36; // esi@58
  __int16 v37; // ah^1@39
  int v38; // [sp+14h] [bp-38h]@1
  int v39; // [sp+18h] [bp-34h]@1
  signed __int16 v40; // [sp+1Eh] [bp-2Eh]@35
  int v41; // [sp+24h] [bp-28h]@38
  int v42; // [sp+28h] [bp-24h]@41
  __int16 v43; // [sp+2Ch] [bp-20h]@41
  __int16 v44; // [sp+2Eh] [bp-1Eh]@41

  v3 = 11;
  *(_DWORD *)a2 = 1;
  v4 = sub_6F76F110(*(_DWORD *)(a2 + 96), (int)"postscript-cmaps");
  *(_DWORD *)(a2 + 484) = v4;
  v38 = v4;
  v39 = sub_6F76F0A0(*(_DWORD *)(*(_DWORD *)(a2 + 96) + 4), "psaux");
  *(_DWORD *)(a2 + 488) = v39;
  if ( !v39 )
    return v3;
  *(_DWORD *)(a2 + 548) = sub_6F76F0A0(*(_DWORD *)(*(_DWORD *)(a2 + 96) + 4), "pshinter");
  v3 = sub_6F7BC1A0(a2);
  if ( v3 || a3 < 0 )
    return v3;
  if ( a3 )
    return 6;
  v6 = *(_DWORD *)(a2 + 416);
  v7 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 16) = v6;
  v8 = v7 | 0xA11;
  v15 = *(_BYTE *)(a2 + 156) == 0;
  *(_DWORD *)(a2 + 8) = v7 | 0xA11;
  if ( !v15 )
  {
    v8 = v7 | 0xA15;
    *(_DWORD *)(a2 + 8) = v7 | 0xA15;
  }
  if ( *(_DWORD *)(a2 + 528) )
  {
    BYTE1(v8) |= 1u;
    *(_DWORD *)(a2 + 8) = v8;
  }
  v9 = *(char **)(a2 + 144);
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 20) = v9;
  if ( !v9 )
  {
    v35 = *(_DWORD *)(a2 + 364);
    if ( v35 )
      *(_DWORD *)(a2 + 20) = v35;
    goto LABEL_57;
  }
  v10 = *(_DWORD *)(a2 + 140);
  if ( !v10 )
    goto LABEL_57;
  v11 = *(_BYTE *)v10;
LABEL_14:
  if ( !v11 )
  {
LABEL_21:
    *(_DWORD *)(a2 + 24) = "Regular";
    goto LABEL_22;
  }
  while ( 1 )
  {
    v12 = *v9;
    if ( *v9 == v11 )
    {
      v11 = *(_BYTE *)(v10 + 1);
      ++v9;
      ++v10;
      goto LABEL_14;
    }
    if ( v11 == 32 || v11 == 45 )
    {
      v11 = *(_BYTE *)(v10++ + 1);
      goto LABEL_14;
    }
    if ( v12 != 32 && v12 != 45 )
      break;
    ++v9;
    if ( !v11 )
      goto LABEL_21;
  }
  if ( !v12 )
  {
    *(_DWORD *)(a2 + 24) = v10;
    if ( v10 )
    {
LABEL_22:
      v13 = *(_DWORD *)(a2 + 152);
      *(_DWORD *)(a2 + 12) = 0;
      v14 = *(_BYTE **)(a2 + 148);
      if ( !v13 )
        goto LABEL_24;
      goto LABEL_23;
    }
  }
LABEL_57:
  v14 = *(_BYTE **)(a2 + 148);
  if ( !v14 )
  {
    v15 = *(_DWORD *)(a2 + 152) == 0;
    *(_DWORD *)(a2 + 24) = "Regular";
    *(_DWORD *)(a2 + 12) = 0;
    if ( v15 )
      goto LABEL_34;
    goto LABEL_23;
  }
  v36 = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a2 + 24) = v14;
  *(_DWORD *)(a2 + 12) = 0;
  v15 = v36 == 0;
  if ( v36 )
  {
LABEL_23:
    *(_DWORD *)(a2 + 12) = 1;
LABEL_24:
    v15 = v14 == 0;
    if ( !v14 )
      goto LABEL_34;
  }
  v16 = "Bold";
  v17 = 5;
  v18 = v14;
  do
  {
    if ( !v17 )
      break;
    v15 = *v18++ == *v16++;
    --v17;
  }
  while ( v15 );
  if ( v15 )
    goto LABEL_71;
  v19 = "Black";
  v20 = 6;
  v21 = v14;
  do
  {
    if ( !v20 )
      break;
    v15 = *v21++ == *v19++;
    --v20;
  }
  while ( v15 );
  if ( v15 )
LABEL_71:
    *(_DWORD *)(a2 + 12) |= 2u;
LABEL_34:
  v22 = *(_WORD *)(a2 + 462);
  v23 = *(_WORD *)(a2 + 466);
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 52) = v22;
  v24 = *(_DWORD *)(a2 + 468);
  *(_DWORD *)(a2 + 56) = v23;
  v25 = (v24 + 0xFFFF) >> 16;
  v26 = v25;
  *(_DWORD *)(a2 + 60) = v25;
  v27 = *(_WORD *)(a2 + 68);
  v28 = (*(_DWORD *)(a2 + 472) + 0xFFFF) >> 16;
  *(_DWORD *)(a2 + 64) = v28;
  if ( (_WORD)v27 )
  {
    v40 = (unsigned int)((unsigned __int64)(20615843028i64 * v27) >> 32) >> 2;
    v29 = v40;
  }
  else
  {
    *(_WORD *)(a2 + 68) = 1000;
    v40 = 1200;
    v29 = 1200;
  }
  *(_WORD *)(a2 + 70) = v28;
  *(_WORD *)(a2 + 72) = v23;
  if ( v28 - v23 > v29 )
    *(_WORD *)(a2 + 74) = v28 - v23;
  else
    *(_WORD *)(a2 + 74) = v40;
  *(_WORD *)(a2 + 76) = v26;
  if ( !sub_6F7BA9B0(a2, &v41) )
  {
    sub_6F7C9390(v41);
    *(_WORD *)(a2 + 76) = v37;
  }
  *(_WORD *)(a2 + 78) = *(_WORD *)(a2 + 74);
  *(_WORD *)(a2 + 80) = *(_WORD *)(a2 + 158);
  *(_WORD *)(a2 + 82) = *(_WORD *)(a2 + 160);
  if ( v38 )
  {
    v30 = *(_DWORD *)(v39 + 20);
    v41 = a2;
    v43 = 3;
    v44 = 1;
    v31 = *(_DWORD *)(v30 + 12);
    v42 = 1970170211;
    v32 = sub_6F76D420(v31, 0, (int)&v41, 0);
    if ( v32 && (_BYTE)v32 != -93 )
    {
      v3 = v32;
    }
    else
    {
      v43 = 7;
      v33 = *(_DWORD *)(a2 + 368);
      if ( v33 == 2 )
      {
        v42 = 1094995778;
        v34 = *(_DWORD *)v30;
        v44 = 0;
      }
      else if ( v33 <= 2 )
      {
        if ( v33 != 1 )
          return v3;
        v42 = 1094992451;
        v34 = *(_DWORD *)(v30 + 8);
        v44 = 2;
      }
      else if ( v33 == 3 )
      {
        v42 = 1818326065;
        v44 = 3;
        v34 = *(_DWORD *)(v30 + 12);
      }
      else
      {
        if ( v33 != 4 )
          return v3;
        v34 = *(_DWORD *)(v30 + 4);
        v42 = 1094992453;
        v44 = 1;
      }
      if ( v34 )
        v3 = sub_6F76D420(v34, 0, (int)&v41, 0);
    }
  }
  return v3;
}
