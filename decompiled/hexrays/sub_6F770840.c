int __cdecl sub_6F770840(int a1)
{
  int v1; // eax@2
  int v2; // ebx@3
  unsigned int v3; // ebp@3
  unsigned int v4; // eax@3
  signed int v5; // esi@3
  int v6; // ecx@3
  int v7; // ebx@4
  signed int v8; // edx@4
  int v9; // edi@9
  int result; // eax@14
  int v11; // edi@16
  unsigned int v12; // ebp@21
  int v13; // ebx@21
  int v14; // eax@22
  int v15; // ecx@22
  int v16; // edx@22
  int v17; // eax@22
  int v18; // edx@22
  int v19; // ebx@23
  int v20; // edi@24
  int v21; // esi@24
  int v22; // edx@24
  char v23; // [sp+4h] [bp-2Ch]@18
  char v24; // [sp+8h] [bp-28h]@20
  int v25; // [sp+Ch] [bp-24h]@21
  int v26; // [sp+10h] [bp-20h]@22
  int v27; // [sp+14h] [bp-1Ch]@3
  int v28; // [sp+1Ch] [bp-14h]@21

  if ( a1 && (v1 = *(_WORD *)(a1 + 2), (signed __int16)v1 > 0) )
  {
    v2 = *(_DWORD *)(a1 + 4);
    v3 = v2 + 8 * v1;
    v4 = v2 + 8;
    v27 = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)v2;
    v6 = *(_DWORD *)(v2 + 4);
    if ( v3 <= v2 + 8 )
    {
      result = 2;
    }
    else
    {
      v7 = *(_DWORD *)(v2 + 4);
      v8 = v5;
      do
      {
        if ( v8 > *(_DWORD *)v4 )
          v8 = *(_DWORD *)v4;
        if ( v5 < *(_DWORD *)v4 )
          v5 = *(_DWORD *)v4;
        v9 = *(_DWORD *)(v4 + 4);
        if ( v7 > v9 )
          v7 = *(_DWORD *)(v4 + 4);
        if ( v6 < v9 )
          v6 = *(_DWORD *)(v4 + 4);
        v4 += 8;
      }
      while ( v3 > v4 );
      result = 2;
      if ( v5 != v8 && v6 != v7 )
      {
        _BitScanReverse((unsigned int *)&v9, (((v8 >> 31) ^ v8) - (v8 >> 31)) | (((v5 >> 31) ^ v5) - (v5 >> 31)));
        LOBYTE(v5) = 0;
        v11 = 17 - (v9 ^ 0x1F);
        if ( v11 < 0 )
          LOBYTE(v11) = 0;
        _BitScanReverse((unsigned int *)&v6, v6 - v7);
        v23 = v11;
        if ( 17 - (v6 ^ 0x1F) >= 0 )
          v5 = 17 - (v6 ^ 0x1F);
        v24 = v5;
        if ( (signed int)*(_WORD *)a1 > 0 )
        {
          v12 = 0;
          v13 = 0;
          v25 = 0;
          v28 = *(_DWORD *)(a1 + 12);
          do
          {
            v14 = *(_WORD *)(v28 + 2 * v25);
            v15 = 8 * v14;
            v26 = *(_WORD *)(v28 + 2 * v25);
            v16 = v27 + 8 * v14;
            v17 = *(_DWORD *)v16;
            v18 = *(_DWORD *)(v16 + 4);
            if ( v26 >= v13 )
            {
              v19 = v27 + 8 * v13;
              do
              {
                v20 = *(_DWORD *)(v19 + 4);
                v21 = *(_DWORD *)v19;
                v19 += 8;
                v22 = ((v21 + v17) >> v23) * ((v20 - v18) >> v24);
                v17 = v21;
                v12 += v22;
                v18 = v20;
              }
              while ( v27 + v15 + 8 != v19 );
            }
            ++v25;
            v13 = v26 + 1;
          }
          while ( v25 != *(_WORD *)a1 );
          result = 1;
          if ( (signed int)v12 <= 0 )
            result = v12 < 1 ? 2 : 0;
        }
      }
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
