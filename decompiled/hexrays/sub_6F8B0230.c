signed int __cdecl sub_6F8B0230(int *a1, signed int *a2, int *a3)
{
  int *v3; // edx@3
  int *v4; // ebp@4
  int i; // edi@5
  unsigned int v6; // edx@9
  int v7; // esi@10
  signed int v8; // ebx@10
  unsigned int v9; // edi@10
  int v10; // eax@17
  char v11; // cl@18
  int v12; // edx@20
  unsigned __int8 j; // dl@25
  int v14; // edx@31
  int *v15; // ebx@31
  int v16; // edx@31
  unsigned int v17; // eax@32
  int v18; // edx@32
  unsigned int v19; // eax@32
  int *v20; // esi@34
  signed int result; // eax@34
  int *v22; // ebp@34
  int *v23; // edx@37
  unsigned int v24; // eax@37
  unsigned int v25; // esi@38
  int *v26; // edi@41
  int v27; // eax@44
  int v28; // edi@58
  _BYTE *v29; // eax@58
  int v30; // edx@64
  int v31; // [sp+8h] [bp-44h]@10
  int v32; // [sp+8h] [bp-44h]@37
  char v33; // [sp+Ch] [bp-40h]@31
  unsigned int v34; // [sp+Ch] [bp-40h]@34
  int v35; // [sp+10h] [bp-3Ch]@10
  int *v36; // [sp+10h] [bp-3Ch]@37
  int *v37; // [sp+14h] [bp-38h]@4
  int v38; // [sp+18h] [bp-34h]@31
  int *v39; // [sp+28h] [bp-24h]@10
  int v40; // [sp+2Ch] [bp-20h]@3

  if ( !byte_703735D0 )
    sub_6F8B01B0();
  v3 = &a3[*a2 >> 5];
  v40 = *a2 & 0x1F;
  if ( v40 )
  {
    v4 = &a3[*a2 >> 5];
    v37 = v3 + 1;
  }
  else
  {
    v37 = &a3[*a2 >> 5];
    v4 = v3 - 1;
  }
  *(v37 - 1) = 0;
  for ( i = *a1; (unsigned int)*(_BYTE *)(i + 1) - 1 <= 0x1F; ++i )
    ;
  if ( *(_BYTE *)(i + 1) != 48
    || (*(_BYTE *)(i + 2) & 0xDF) != 88
    || (v6 = *(_BYTE *)(i + 3), (unsigned __int8)v6 <= 0x20u) )
  {
    v6 = *(_BYTE *)(i + 1);
  }
  else
  {
    i += 2;
  }
  v7 = i;
  v8 = 0;
  v39 = v4;
  v9 = (unsigned int)v4;
  v35 = 0;
  v31 = 0;
  while ( 1 )
  {
    v10 = v7 + 1;
    if ( !v6 )
    {
      v20 = v4;
      v34 = v9;
      result = 4;
      v22 = v39;
      if ( !v31 )
        return result;
      if ( (unsigned int)v20 < v9 )
        goto LABEL_36;
      goto LABEL_40;
    }
    v11 = byte_703735A0[v6];
    if ( v11 )
    {
      ++v8;
      ++v31;
      if ( v8 <= 8 )
      {
        v12 = 16 * *v4;
LABEL_21:
        *v4 = v12 | v11 & 0xF;
        goto LABEL_16;
      }
      if ( v4 > a3 )
      {
        *(v4 - 1) = 0;
        v12 = 0;
        --v4;
        v8 = 1;
        goto LABEL_21;
      }
      goto LABEL_16;
    }
    if ( v6 > 0x20 )
      break;
    if ( v31 <= v35 )
      goto LABEL_25;
    if ( (unsigned int)v4 < v9 && v8 <= 7 )
    {
      v14 = 8 - v8;
      v15 = v4;
      v33 = 4 * v14;
      v38 = 32 - 4 * v14;
      v16 = *v4;
      do
      {
        v17 = v15[1];
        ++v15;
        v18 = (v17 << v38) | v16;
        v19 = v17 >> v33;
        *(v15 - 1) = v18;
        *v15 = v19;
        v16 = v19;
      }
      while ( v9 > (unsigned int)v15 );
      v10 = v7 + 1;
    }
    v8 = 8;
    if ( v4 > a3 )
    {
      v9 = (unsigned int)(v4 - 1);
      *(v4 - 1) = 0;
      --v4;
      v35 = v31;
      v8 = 0;
LABEL_25:
      for ( j = *(_BYTE *)(v7 + 2); j <= 0x20u; j = *(_BYTE *)(v10 + 1) )
        ++v10;
      if ( j == 48 && (*(_BYTE *)(v10 + 2) & 0xDF) == 88 && *(_BYTE *)(v10 + 3) > 0x20u )
        v10 += 2;
    }
LABEL_16:
    v6 = *(_BYTE *)(v10 + 1);
    v7 = v10;
  }
  v34 = v9;
  v28 = v7;
  v20 = v4;
  v22 = v39;
  v29 = (_BYTE *)(v28 + 2);
  if ( v6 == 41 && v31 )
  {
    *a1 = (int)v29;
    if ( (unsigned int)v20 >= v34 )
      goto LABEL_40;
LABEL_36:
    if ( v8 <= 7 )
    {
      v36 = v20;
      v23 = v20;
      v32 = 4 * (8 - v8);
      v24 = *v20;
      do
      {
        v25 = v23[1];
        ++v23;
        *(v23 - 1) = (v25 << (32 - v32)) | v24;
        v24 = v25 >> v32;
        *v23 = v25 >> v32;
      }
      while ( v34 > (unsigned int)v23 );
      v20 = v36;
    }
LABEL_40:
    if ( v20 <= a3 )
    {
      v27 = *(v37 - 1);
      if ( v40 )
      {
        v27 &= 0xFFFFFFFF >> (32 - v40);
        *(v37 - 1) = v27;
      }
    }
    else
    {
      v26 = a3;
      do
      {
        *v26 = *v20;
        ++v20;
        ++v26;
      }
      while ( v20 <= v22 );
      do
      {
        ++v26;
        *(v26 - 1) = 0;
      }
      while ( v26 <= v22 );
      v27 = *(v37 - 1);
    }
    if ( !v27 )
    {
      if ( a3 == v22 )
      {
LABEL_62:
        *v22 = 1;
        return 5;
      }
      while ( 1 )
      {
        --v22;
        if ( *v22 )
          break;
        if ( a3 == v22 )
          goto LABEL_62;
      }
    }
    return 5;
  }
  if ( v6 != 41 )
  {
    v30 = *(_BYTE *)(v28 + 2);
    if ( !*(_BYTE *)(v28 + 2) )
      return 4;
    while ( 1 )
    {
      ++v29;
      if ( v30 == 41 )
        break;
      v30 = *v29;
      if ( !*v29 )
        return 4;
    }
  }
  *a1 = (int)v29;
  return 4;
}
