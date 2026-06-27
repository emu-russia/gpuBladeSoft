int __cdecl sub_6F8AA0A0(int a1, int a2)
{
  char *v2; // eax@1
  unsigned __int16 *v3; // ecx@3
  int v4; // edx@3
  unsigned __int16 v5; // ax@6
  int v6; // ebp@9
  char *v7; // ebx@9
  unsigned int v8; // eax@10
  unsigned __int16 v9; // ax@11
  signed int v10; // eax@12
  unsigned __int16 v11; // cx@13
  signed int v12; // edx@15
  int v13; // ecx@15
  int v14; // eax@16
  _WORD *v15; // eax@17
  int v16; // edx@20
  int result; // eax@20
  int v18; // edx@22
  char *v19; // edx@27
  int v20; // ecx@27
  int v21; // eax@27
  int v22; // ebp@28
  int v23; // eax@28
  signed int v24; // eax@29
  unsigned __int16 v25; // cx@30
  int v26; // ecx@34
  int v27; // eax@34
  char *v28; // edx@34
  int v29; // ebp@35
  int v30; // eax@35
  unsigned int v31; // [sp+8h] [bp-54h]@9
  int v32; // [sp+10h] [bp-4Ch]@27
  signed __int16 v33; // [sp+14h] [bp-48h]@11
  int v34; // [sp+26h] [bp-36h]@1
  char v35; // [sp+2Ah] [bp-32h]@1
  char v36[2]; // [sp+38h] [bp-24h]@2
  char v37; // [sp+3Ah] [bp-22h]@28
  char v38; // [sp+48h] [bp-14h]@27

  v34 = *(_DWORD *)a2;
  v2 = &v35;
  do
  {
    v2 += 2;
    *((_WORD *)v2 - 1) = 0;
  }
  while ( v2 != v36 );
  v3 = (unsigned __int16 *)(a2 + 4);
  v4 = 0;
  do
  {
    if ( *v3 & 1 )
      v4 |= 1u;
    v5 = *v3 >> 1;
    if ( v4 & 2 )
      v5 |= 0x8000u;
    ++v3;
    v4 *= 2;
    *(v3 - 1) = v5;
  }
  while ( v3 != (unsigned __int16 *)(a2 + 18) );
  v6 = a2 + 16;
  v31 = *(_WORD *)(a1 + 6);
  v7 = &v35;
  do
  {
    v8 = *(_WORD *)(a2 + 6) + (*(_WORD *)(a2 + 4) << 16);
    if ( 0xFFFF * v31 < v8 )
    {
      v9 = -1;
      v33 = -1;
    }
    else
    {
      v33 = v8 / v31;
      v9 = v8 / v31;
    }
    sub_6F8A9D00(v9, a1, (int)v36);
    v10 = 2;
    while ( 1 )
    {
      v11 = *(_WORD *)(a2 + 2 * v10);
      if ( *(_WORD *)&v36[2 * v10] != v11 )
        break;
      if ( ++v10 == 9 )
        goto LABEL_15;
    }
    if ( *(_WORD *)&v36[2 * v10] > v11 )
    {
      v32 = v6;
      v19 = &v38;
      v20 = a1 + 16;
      v21 = 0;
      do
      {
        v22 = *(_WORD *)v19;
        v19 -= 2;
        v20 -= 2;
        v23 = v22 - v21 - *(_WORD *)(v20 + 2);
        *((_WORD *)v19 + 1) = v23;
        v21 = (unsigned __int16)v23 >> 16;
      }
      while ( v19 != &v37 );
      v6 = v32;
      v24 = 2;
      while ( 1 )
      {
        v25 = *(_WORD *)(a2 + 2 * v24);
        if ( *(_WORD *)&v36[2 * v24] != v25 )
          break;
        if ( ++v24 == 9 )
          goto LABEL_32;
      }
      if ( *(_WORD *)&v36[2 * v24] <= v25 )
      {
LABEL_32:
        --v33;
        goto LABEL_15;
      }
      v33 -= 2;
      v26 = a1 + 16;
      v27 = 0;
      v28 = &v38;
      do
      {
        v29 = *(_WORD *)v28;
        v28 -= 2;
        v26 -= 2;
        v30 = v29 - v27 - *(_WORD *)(v26 + 2);
        *((_WORD *)v28 + 1) = v30;
        v27 = (unsigned __int16)v30 >> 16;
      }
      while ( v28 != &v37 );
      v6 = v32;
    }
LABEL_15:
    v12 = 7;
    v13 = 0;
    do
    {
      v14 = *(_WORD *)(a2 + 2 * v12 + 2) - v13 - *(_WORD *)&v36[2 * v12 + 2];
      *(_WORD *)(a2 + 2 * v12 + 2) = v14;
      v13 = (unsigned __int16)v14 >> 16;
      --v12;
    }
    while ( v12 );
    *(_WORD *)v7 = v33;
    v15 = (_WORD *)(a2 + 4);
    do
    {
      ++v15;
      *(v15 - 1) = *v15;
    }
    while ( v15 != (_WORD *)v6 );
    v7 += 2;
    *(_WORD *)(a2 + 16) = 0;
  }
  while ( v36 != v7 );
  v16 = a2 + 4;
  LOWORD(result) = 0;
  do
  {
    v16 += 2;
    LOWORD(result) = *(_WORD *)(v16 - 2) | result;
  }
  while ( v16 != a2 + 18 );
  LOBYTE(result) = (_WORD)result != 0;
  v18 = 0;
  do
  {
    *(_WORD *)(a2 + 2 * v18) = *((_WORD *)&v34 + v18);
    ++v18;
  }
  while ( v18 != 9 );
  return (unsigned __int8)result;
}
