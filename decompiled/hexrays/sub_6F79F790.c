int __cdecl sub_6F79F790(int a1, int a2)
{
  unsigned int v2; // eax@2
  int v3; // edx@6
  int v4; // ebp@6
  unsigned __int32 v5; // esi@6
  unsigned int v6; // ebx@7
  unsigned int v7; // eax@7
  unsigned int v8; // ebx@7
  unsigned int v9; // edi@7
  unsigned int v10; // eax@12
  int v11; // esi@12
  int v12; // esi@15
  int v14; // edi@28
  int v15; // ebp@28
  int v16; // [sp+10h] [bp-2Ch]@6
  unsigned __int32 v17; // [sp+14h] [bp-28h]@7
  unsigned int v18; // [sp+18h] [bp-24h]@4

  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 8208) )
    sub_6F769150(a2, 8);
  v2 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  if ( v2 > *(_DWORD *)(a2 + 68) - a1 || v2 <= 0x200F )
    sub_6F769150(a2, 8);
  v18 = _byteswap_ulong(*(_DWORD *)(a1 + 8204));
  if ( v18 > (*(_DWORD *)(a2 + 68) - (a1 + 8208)) / 0xCu )
    sub_6F769150(a2, 8);
  if ( v18 )
  {
    v3 = a1 + 8208;
    v16 = 0;
    v4 = a1 + 12;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)v3;
      v7 = *(_DWORD *)(v3 + 4);
      v3 += 12;
      v8 = _byteswap_ulong(v6);
      v17 = _byteswap_ulong(v7);
      v9 = _byteswap_ulong(*(_DWORD *)(v3 - 4));
      if ( v8 > v17 )
        sub_6F769150(a2, 8);
      if ( v16 && v8 <= v5 )
        sub_6F769150(a2, 8);
      if ( *(_DWORD *)(a2 + 72) )
      {
        v10 = *(_DWORD *)(a2 + 80);
        v11 = v17 - v8;
        if ( v17 - v8 > v10 || v9 >= v10 - v11 )
          sub_6F769150(a2, 16);
        v12 = v11 + 1;
        if ( v8 & 0xFFFF0000 )
        {
          for ( ; v12; --v12 )
          {
            if ( !((128 >> ((v8 >> 16) & 7)) & *(_BYTE *)(v4 + (v8 >> 19))) )
              sub_6F769150(a2, 8);
            if ( !((128 >> (v8 & 7)) & *(_BYTE *)(v4 + ((unsigned int)(unsigned __int16)v8 >> 3))) )
              sub_6F769150(a2, 8);
            ++v8;
          }
        }
        else
        {
          if ( v17 & 0xFFFF0000 )
            sub_6F769150(a2, 8);
          if ( v12 )
          {
            v14 = v4;
            v15 = v12;
            do
            {
              if ( (128 >> (v8 & 7)) & *(_BYTE *)(v14 + ((unsigned int)(unsigned __int16)v8 >> 3)) )
                sub_6F769150(a2, 8);
              LOWORD(v8) = v8 + 1;
              --v15;
            }
            while ( v15 );
            v4 = v14;
          }
        }
      }
      ++v16;
      v5 = v17;
    }
    while ( v18 != v16 );
  }
  return 0;
}
