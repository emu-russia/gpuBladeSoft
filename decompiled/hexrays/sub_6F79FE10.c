int __cdecl sub_6F79FE10(int a1, int a2)
{
  unsigned int v2; // edx@2
  unsigned int v3; // ebx@2
  int v4; // edx@6
  unsigned __int32 v5; // ebx@7
  unsigned int v6; // edi@7
  unsigned __int32 v7; // ebp@7
  unsigned int *v8; // ebx@11
  _BYTE *v9; // edi@11
  unsigned int v10; // edx@13
  int v11; // ebp@13
  int v12; // eax@16
  unsigned int v13; // eax@16
  unsigned int v14; // ebx@16
  int v15; // edi@20
  unsigned int v16; // ebx@20
  unsigned int v17; // ebp@22
  int v18; // ebx@27
  int v19; // eax@27
  unsigned int v20; // ebx@27
  unsigned int v22; // [sp+10h] [bp-3Ch]@11
  int v23; // [sp+10h] [bp-3Ch]@22
  int v24; // [sp+14h] [bp-38h]@7
  unsigned __int32 v25; // [sp+20h] [bp-2Ch]@7
  unsigned int v26; // [sp+24h] [bp-28h]@6
  unsigned __int32 v27; // [sp+28h] [bp-24h]@2
  int v28; // [sp+2Ch] [bp-20h]@6

  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 10) )
    sub_6F769150(a2, 8);
  v2 = _byteswap_ulong(*(_DWORD *)(a1 + 2));
  v27 = v2;
  v3 = _byteswap_ulong(*(_DWORD *)(a1 + 6));
  if ( v2 > *(_DWORD *)(a2 + 68) - a1 || v2 <= 9 || v3 > (v2 - 10) / 0xB )
    sub_6F769150(a2, 8);
  if ( v3 )
  {
    v4 = a1 + 10;
    v26 = 1;
    v28 = a1 + 10 + 11 * v3;
    do
    {
      v5 = _byteswap_ulong(*(_DWORD *)(v4 + 3));
      v6 = *(_BYTE *)(v4 + 2) | (*(_BYTE *)(v4 + 1) << 8) | (*(_BYTE *)v4 << 16);
      v24 = v4 + 11;
      v7 = _byteswap_ulong(*(_DWORD *)(v4 + 7));
      v25 = v7;
      if ( v27 <= v5 || v27 <= v7 )
        sub_6F769150(a2, 8);
      if ( v6 < v26 )
        sub_6F769150(a2, 8);
      v26 = v6 + 1;
      if ( v5 )
      {
        v8 = (unsigned int *)(a1 + v5);
        v9 = v8 + 1;
        v22 = _byteswap_ulong(*v8);
        if ( v22 > (unsigned int)(*(_DWORD *)(a2 + 68) - (_DWORD)(v8 + 1)) >> 2 )
          sub_6F769150(a2, 8);
        if ( v22 )
        {
          v10 = 0;
          v11 = 0;
          do
          {
            v12 = *v9;
            v9 += 4;
            v13 = *(v9 - 2) | (v12 << 16) | (*(v9 - 3) << 8);
            v14 = *(v9 - 1) + v13;
            if ( v14 > 0x10FFFF )
              sub_6F769150(a2, 8);
            if ( v13 < v10 )
              sub_6F769150(a2, 8);
            ++v11;
            v10 = v14 + 1;
          }
          while ( v22 != v11 );
        }
      }
      if ( v25 )
      {
        v15 = a1 + v25 + 4;
        v16 = _byteswap_ulong(*(_DWORD *)(a1 + v25));
        if ( v16 > (unsigned int)(*(_DWORD *)(a2 + 68) - v15) >> 2 )
          sub_6F769150(a2, 8);
        if ( v16 )
        {
          v17 = 0;
          v23 = a1 + v25 + 5 * v16 + 4;
          do
          {
            v18 = *(_BYTE *)v15;
            v19 = *(_BYTE *)(v15 + 1);
            v15 += 5;
            v20 = *(_BYTE *)(v15 - 3) | (v19 << 8) | (v18 << 16);
            if ( v20 > 0x10FFFF )
              sub_6F769150(a2, 8);
            if ( v20 < v17 )
              sub_6F769150(a2, 8);
            v17 = v20 + 1;
            if ( *(_DWORD *)(a2 + 72)
              && (unsigned int)(unsigned __int16)((*(_BYTE *)(v15 - 2) << 8) | *(_BYTE *)(v15 - 1)) >= *(_DWORD *)(a2 + 80) )
            {
              sub_6F769150(a2, 16);
            }
          }
          while ( v23 != v15 );
        }
      }
      v4 = v24;
    }
    while ( v28 != v24 );
  }
  return 0;
}
