int __cdecl sub_6F79F190(int a1, int a2)
{
  unsigned int v2; // edi@2
  int v3; // eax@6
  unsigned __int16 v4; // si@6
  int v5; // ebp@10
  unsigned int v6; // esi@10
  unsigned int v7; // esi@11
  int v8; // edx@14
  int v9; // ebp@14
  unsigned int v10; // edx@18
  unsigned int v11; // edi@19
  unsigned int v12; // esi@19
  int v13; // ebx@19
  unsigned int v14; // ebx@28
  __int16 v15; // cx@34
  unsigned int v16; // ebp@34
  __int16 v17; // ax@36
  int v19; // [sp+14h] [bp-58h]@18
  int v20; // [sp+18h] [bp-54h]@14
  int v21; // [sp+1Ch] [bp-50h]@14
  unsigned __int16 *v22; // [sp+20h] [bp-4Ch]@18
  int v23; // [sp+24h] [bp-48h]@19
  unsigned int v24; // [sp+28h] [bp-44h]@18
  unsigned int v25; // [sp+2Ch] [bp-40h]@8
  __int16 v26; // [sp+30h] [bp-3Ch]@0
  unsigned int v27; // [sp+40h] [bp-2Ch]@14
  int v28; // [sp+44h] [bp-28h]@18
  int v29; // [sp+48h] [bp-24h]@18
  unsigned int v30; // [sp+4Ch] [bp-20h]@18

  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 4) )
    sub_6F769150(a2, 8);
  v2 = _byteswap_ushort(*(_WORD *)(a1 + 2));
  if ( *(_DWORD *)(a2 + 68) < a1 + (unsigned int)(unsigned __int16)v2 )
  {
    if ( *(_DWORD *)(a2 + 72) )
      sub_6F769150(a2, 8);
    v2 = *(_DWORD *)(a2 + 68) - a1;
  }
  if ( v2 <= 0xF )
    sub_6F769150(a2, 8);
  v3 = *(_BYTE *)(a1 + 7) | (*(_BYTE *)(a1 + 6) << 8);
  v4 = _byteswap_ushort(*(_WORD *)(a1 + 6));
  if ( *(_DWORD *)(a2 + 72) > 1u && v3 & 1 )
    sub_6F769150(a2, 8);
  v25 = (unsigned int)v4 >> 1;
  if ( v2 < 8 * v25 + 16 )
    sub_6F769150(a2, 8);
  if ( *(_DWORD *)(a2 + 72) > 1u )
  {
    v5 = *(_BYTE *)(a1 + 10);
    v6 = _byteswap_ushort(*(_WORD *)(a1 + 8));
    if ( (*(_BYTE *)(a1 + 13) | *(_BYTE *)(a1 + 9)) & 1 )
      sub_6F769150(a2, 8);
    v7 = v6 >> 1;
    if ( v25 < v7
      || v25 > 2 * v7
      || v25 != ((unsigned int)_byteswap_ushort(*(_WORD *)(a1 + 12)) >> 1) + v7
      || v7 != 1 << *(_BYTE *)(a1 + 11) )
    {
      sub_6F769150(a2, 8);
    }
  }
  v20 = a1 + 14;
  v8 = 2 * v25 + 16;
  v9 = a1 + v8 + 2 * v25 + 2 * v25;
  v21 = a1 + v8 + 2 * v25;
  v27 = v9 + 2 * v25;
  if ( *(_DWORD *)(a2 + 72) > 1u && _byteswap_ushort(*(_WORD *)(a1 + 14 + v8 - 18)) != -1 )
    sub_6F769150(a2, 8);
  if ( v25 )
  {
    v22 = (unsigned __int16 *)(a1 + v8);
    v10 = 0;
    v29 = v25 - 1;
    v24 = 0;
    v19 = 0;
    v28 = 0;
    v30 = a1 + v2;
    while ( 1 )
    {
      v20 += 2;
      v21 += 2;
      v11 = _byteswap_ushort(*v22);
      v12 = (unsigned __int16)(*(_BYTE *)(v20 - 1) | (unsigned __int16)(*(_BYTE *)(v20 - 2) << 8));
      v23 = v9 + 2;
      v13 = *(_BYTE *)(v9 + 1) | (*(_BYTE *)v9 << 8);
      if ( (unsigned __int16)v11 > v12 )
        sub_6F769150(a2, 8);
      if ( (unsigned __int16)v11 <= v10 && v19 )
      {
        if ( *(_DWORD *)(a2 + 72) )
          sub_6F769150(a2, 8);
        if ( (unsigned __int16)v11 < v24 || v12 < v10 )
          v28 |= 1u;
        else
          v28 |= 2u;
      }
      if ( _byteswap_ushort(*(_WORD *)v9) && _byteswap_ushort(*(_WORD *)v9) != 0xFFFF )
      {
        v14 = v9 + _byteswap_ushort(*(_WORD *)v9);
        if ( *(_DWORD *)(a2 + 72) )
        {
          if ( v27 > v14 || v14 + 2 * (v12 - (unsigned __int16)v11) + 2 > v30 )
            goto LABEL_31;
        }
        else if ( (v29 != v19 || (unsigned __int16)v11 != 0xFFFF || v12 != 0xFFFF)
               && (v27 > v14 || *(_DWORD *)(a2 + 68) < v14 + 2 * (v12 - (unsigned __int16)v11) + 2) )
        {
LABEL_31:
          sub_6F769150(a2, 8);
        }
        if ( *(_DWORD *)(a2 + 72) && (unsigned __int16)v11 < v12 )
        {
          LOBYTE(v26) = *(_BYTE *)(v21 - 2);
          v15 = v26;
          v16 = (unsigned __int16)v11;
          HIBYTE(v26) = BYTE1(v11);
          do
          {
            v14 += 2;
            v17 = *(_BYTE *)(v14 - 1) | (unsigned __int16)(*(_BYTE *)(v14 - 2) << 8);
            if ( v17
              && (unsigned int)(unsigned __int16)((*(_BYTE *)(v21 - 1) | (unsigned __int16)(v15 << 8)) + v17) >= *(_DWORD *)(a2 + 80) )
            {
              sub_6F769150(a2, 16);
            }
            ++v16;
          }
          while ( v12 > v16 );
          v11 = (unsigned __int16)v11;
        }
      }
      else if ( _byteswap_ushort(*(_WORD *)v9) == -1
             && (*(_DWORD *)(a2 + 72) > 1u || v29 != v19 || (unsigned __int16)v11 != 0xFFFF || v12 != 0xFFFF) )
      {
        sub_6F769150(a2, 8);
      }
      ++v19;
      ++v22;
      v10 = (unsigned __int16)(*(_BYTE *)(v20 - 1) | (unsigned __int16)(*(_BYTE *)(v20 - 2) << 8));
      v24 = v11;
      v9 = v23;
      if ( v25 == v19 )
        return v28;
    }
  }
  return 0;
}
