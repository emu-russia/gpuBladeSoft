signed int __cdecl sub_6F8AA800(int a1, signed int a2, int a3, int a4, int a5, signed int a6)
{
  signed int result; // eax@1
  int v7; // esi@1
  __int16 v8; // dx@7
  unsigned __int16 v9; // ax@8
  bool v10; // zf@14
  signed int v11; // eax@14
  signed int v12; // ecx@24
  __int16 v13; // ax@24
  unsigned __int16 v14; // ax@25
  int v15; // ecx@27
  int v16; // edx@27
  __int16 v17; // ax@30
  unsigned __int16 *v18; // ecx@35
  int v19; // edx@35
  unsigned __int16 v20; // ax@39
  unsigned __int16 *v21; // ecx@51
  int v22; // edx@51
  unsigned __int16 v23; // ax@54
  bool v24; // [sp+7h] [bp-3Dh]@5
  __int16 *v25; // [sp+8h] [bp-3Ch]@6
  signed int v26; // [sp+Ch] [bp-38h]@18
  signed int v27; // [sp+10h] [bp-34h]@18
  int v28; // [sp+22h] [bp-22h]@1
  int v29; // [sp+26h] [bp-1Eh]@1
  int v30; // [sp+2Ah] [bp-1Ah]@1
  int v31; // [sp+2Eh] [bp-16h]@1
  __int16 v32; // [sp+32h] [bp-12h]@1

  v32 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  HIWORD(v31) = 1;
  result = sub_6F8AA650(a1);
  v7 = a4 - result;
  if ( result > 80 && v7 <= 32766 )
    goto LABEL_19;
  if ( v7 < 0 )
  {
    if ( v7 >= -80 )
    {
      v10 = sub_6F8A9D90(a1, a4 - result) == 0;
      v11 = 1;
      if ( v10 )
        v11 = a2;
      a2 = v11;
      if ( !a5 )
        goto LABEL_34;
      v24 = a6 != 80;
      if ( a6 == 64 )
      {
        v31 = 1;
        v25 = (__int16 *)(a1 + 14);
        v26 = 6;
        v27 = 7;
        goto LABEL_51;
      }
      goto LABEL_6;
    }
LABEL_19:
    *(_DWORD *)(a1 + 2) = 0;
    *(_DWORD *)(a1 + 6) = 0;
    *(_DWORD *)(a1 + 10) = 0;
    *(_DWORD *)(a1 + 14) = 0;
    return result;
  }
  if ( !a5 )
    goto LABEL_9;
  v24 = a6 != 80 && v7 <= 0;
  if ( a6 != 64 )
  {
LABEL_6:
    v25 = (__int16 *)(a1 + 16);
    if ( !v24 )
    {
      v8 = *(_WORD *)(a1 + 16);
      *(_WORD *)(a1 + 16) = 0;
      if ( v8 >= 0 )
        goto LABEL_8;
      v26 = 7;
      goto LABEL_24;
    }
    v26 = 7;
    v27 = 8;
    goto LABEL_51;
  }
  v31 = 1;
  v25 = (__int16 *)(a1 + 14);
  if ( a6 == 80 || v7 > 0 )
  {
    v26 = 6;
    v8 = *(_WORD *)(a1 + 14);
LABEL_45:
    if ( *(_WORD *)(a1 + 16) )
      v8 |= 1u;
    *(_WORD *)(a1 + 16) = 0;
    goto LABEL_48;
  }
  v26 = 6;
  v27 = 7;
LABEL_51:
  v21 = (unsigned __int16 *)(a1 + 4);
  v22 = 0;
  a2 |= *(_WORD *)(a1 + 16) & 1;
  do
  {
    if ( *v21 & 1 )
      v22 |= 1u;
    v23 = *v21 >> 1;
    if ( v22 & 2 )
      v23 |= 0x8000u;
    ++v21;
    v22 *= 2;
    *(v21 - 1) = v23;
  }
  while ( (unsigned __int16 *)(a1 + 18) != v21 );
  v8 = *v25;
  if ( a6 <= 79 && v27 == 7 )
    goto LABEL_45;
LABEL_48:
  *v25 = 0;
  if ( v8 >= 0 )
    goto LABEL_26;
LABEL_24:
  v12 = 7;
  v13 = 0;
  if ( v8 == -32768 )
  {
    if ( a2 )
    {
      if ( a3 )
        goto LABEL_26;
    }
    else if ( !(*(_BYTE *)(a1 + 2 * v26) & 1) )
    {
      goto LABEL_26;
    }
  }
  do
  {
    v14 = *(_WORD *)(a1 + 2 * v12 + 2) + *((_WORD *)&v28 + v12 + 1) + v13;
    *(_WORD *)(a1 + 2 * v12 + 2) = v14;
    v13 = v14 >> 16;
    --v12;
  }
  while ( v12 );
LABEL_26:
  if ( !v24 )
  {
LABEL_8:
    v9 = *(_WORD *)(a1 + 4);
    if ( !v9 )
      goto LABEL_9;
    goto LABEL_35;
  }
  v15 = a1 + 16;
  v16 = 0;
  do
  {
    if ( *(_WORD *)v15 < 0 )
      v16 |= 1u;
    v17 = 2 * *(_WORD *)v15;
    if ( v16 & 2 )
      v17 |= 1u;
    v15 -= 2;
    v16 *= 2;
    *(_WORD *)(v15 + 2) = v17;
  }
  while ( a1 + 2 != v15 );
  v9 = *(_WORD *)(a1 + 4);
  if ( !v9 )
  {
LABEL_34:
    *(_WORD *)(a1 + 16) = 0;
    goto LABEL_10;
  }
LABEL_35:
  v18 = (unsigned __int16 *)(a1 + 4);
  v19 = 0;
  while ( 1 )
  {
    if ( v9 & 1 )
      v19 |= 1u;
    v20 = v9 >> 1;
    if ( v19 & 2 )
      v20 |= 0x8000u;
    ++v18;
    v19 *= 2;
    *(v18 - 1) = v20;
    if ( (unsigned __int16 *)(a1 + 18) == v18 )
      break;
    v9 = *v18;
  }
  ++v7;
LABEL_9:
  *(_WORD *)(a1 + 16) = 0;
  if ( v7 > 32766 )
  {
    result = a1 + 4;
    *(_WORD *)(a1 + 2) = 0x7FFF;
    do
    {
      result += 2;
      *(_WORD *)(result - 2) = 0;
    }
    while ( a1 + 16 != result );
    return result;
  }
LABEL_10:
  result = 0;
  if ( v7 < 0 )
    LOWORD(v7) = 0;
  *(_WORD *)(a1 + 2) = v7;
  return result;
}
