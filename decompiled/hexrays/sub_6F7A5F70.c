int __cdecl sub_6F7A5F70(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // edi@1
  unsigned __int32 v5; // ebx@1
  unsigned int v6; // esi@3
  int v7; // ecx@3
  unsigned int v8; // eax@3
  int v9; // edx@3
  unsigned int v10; // ecx@3
  int v11; // ebx@5
  int result; // eax@8
  unsigned __int32 v13; // eax@14
  int v14; // ebp@16
  unsigned int v15; // edi@16
  unsigned __int32 i; // edx@16
  unsigned int v17; // esi@18
  int v18; // ecx@18
  unsigned int v19; // eax@18
  unsigned int v20; // ebx@19
  unsigned int v21; // edi@26
  int v22; // ebp@26
  unsigned __int32 v23; // ebx@26
  unsigned int v24; // esi@28
  unsigned int v25; // eax@28
  int v26; // edx@28
  unsigned int v27; // ecx@28
  int v28; // edx@37
  int v29; // [sp+0h] [bp-2Ch]@1
  unsigned __int32 v30; // [sp+8h] [bp-24h]@14

  v4 = 0;
  v29 = *(_DWORD *)(a1 + 16);
  v5 = _byteswap_ulong(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 6));
  while ( 1 )
  {
    if ( v5 <= v4 )
      return 0;
    v6 = (v5 + v4) >> 1;
    v7 = v29 + 11 * v6 + 10;
    v8 = *(_BYTE *)(v7 + 2) | (*(_BYTE *)v7 << 16) | (*(_BYTE *)(v7 + 1) << 8);
    v9 = v7 + 3;
    v10 = (v5 + v4) >> 1;
    if ( a4 < v8 )
    {
      while ( v4 < v6 )
      {
        v10 = (v4 + v6) >> 1;
        v11 = v29 + 11 * v10 + 10;
        v8 = *(_BYTE *)(v11 + 2) | (*(_BYTE *)v11 << 16) | (*(_BYTE *)(v11 + 1) << 8);
        if ( a4 >= v8 )
        {
          v9 = v11 + 3;
          v5 = v6;
          goto LABEL_11;
        }
        v6 = (v4 + v6) >> 1;
      }
      return 0;
    }
LABEL_11:
    if ( a4 <= v8 )
      break;
    v4 = v10 + 1;
  }
  if ( !v9 )
    return 0;
  v13 = _byteswap_ulong(*(_DWORD *)v9);
  v30 = _byteswap_ulong(*(_DWORD *)(v9 + 4));
  if ( v13 )
  {
    v21 = 0;
    v22 = v29 + v13;
    v23 = _byteswap_ulong(*(_DWORD *)(v29 + v13));
    while ( v23 > v21 )
    {
      v24 = (v23 + v21) >> 1;
      v25 = *(_BYTE *)(v22 + 4 * v24 + 6) | (*(_BYTE *)(v22 + 4 * v24 + 4) << 16) | (*(_BYTE *)(v22 + 4 * v24 + 5) << 8);
      v26 = *(_BYTE *)(v22 + 4 * v24 + 7);
      v27 = (v23 + v21) >> 1;
      if ( a3 < v25 )
      {
        while ( v21 < v24 )
        {
          v27 = (v21 + v24) >> 1;
          v26 = *(_BYTE *)(v22 + 4 * v27 + 7);
          v25 = *(_BYTE *)(v22 + 4 * v27 + 6) | (*(_BYTE *)(v22 + 4 * v27 + 4) << 16) | (*(_BYTE *)(v22 + 4 * v27 + 5) << 8);
          if ( a3 >= v25 )
          {
            v23 = v24;
            goto LABEL_34;
          }
          v24 = (v21 + v24) >> 1;
        }
        break;
      }
LABEL_34:
      if ( a3 <= v25 + v26 )
        return (*(int (__thiscall **)(unsigned int))(*(_DWORD *)(a2 + 12) + 12))(v27);
      v21 = v27 + 1;
    }
  }
  result = 0;
  if ( v30 )
  {
    v14 = v30 + v29;
    v15 = 0;
    for ( i = _byteswap_ulong(*(_DWORD *)(v30 + v29)); i > v15; i = v17 )
    {
      v17 = (i + v15) >> 1;
      v18 = v14 + 5 * v17 + 4;
      v19 = (*(_BYTE *)(v18 + 1) << 8) | (*(_BYTE *)v18 << 16) | *(_BYTE *)(v18 + 2);
      if ( a3 < v19 )
      {
        while ( v15 < v17 )
        {
          v20 = (v15 + v17) >> 1;
          v18 = v14 + 5 * v20 + 4;
          v19 = *(_BYTE *)(v18 + 2) | (*(_BYTE *)v18 << 16) | (*(_BYTE *)(v18 + 1) << 8);
          if ( a3 >= v19 )
            goto LABEL_24;
          v17 = (v15 + v17) >> 1;
        }
        return 0;
      }
      v20 = (i + v15) >> 1;
      v17 = i;
LABEL_24:
      if ( a3 <= v19 )
      {
        v28 = *(_BYTE *)(v18 + 4);
        return _byteswap_ushort(*(_WORD *)(v18 + 3));
      }
      v15 = v20 + 1;
    }
    return 0;
  }
  return result;
}
