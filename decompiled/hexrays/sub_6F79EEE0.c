int __cdecl sub_6F79EEE0(int a1, int a2)
{
  int v2; // eax@2
  unsigned int v3; // ecx@2
  int v4; // ebx@4
  unsigned int v5; // ebp@4
  int v6; // eax@8
  unsigned int v7; // edx@8
  unsigned int v8; // edi@13
  int v9; // ebp@13
  char v10; // al@14
  int v11; // edx@15
  unsigned __int16 v12; // si@18
  unsigned int v13; // eax@19
  unsigned int v14; // ebp@23
  __int16 v15; // cx@24
  unsigned int v16; // esi@24
  __int16 v17; // bx@24
  __int16 v18; // ax@26
  unsigned int v20; // [sp+14h] [bp-38h]@12
  unsigned int v21; // [sp+18h] [bp-34h]@12
  int v22; // [sp+1Ch] [bp-30h]@0
  int v23; // [sp+20h] [bp-2Ch]@24
  unsigned int v24; // [sp+28h] [bp-24h]@11
  unsigned int v25; // [sp+2Ch] [bp-20h]@2

  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 4) )
    sub_6F769150(a2, 8);
  v2 = *(_BYTE *)(a1 + 3) | (*(_BYTE *)(a1 + 2) << 8);
  v3 = a1 + _byteswap_ushort(*(_WORD *)(a1 + 2));
  v25 = v3;
  if ( _byteswap_ushort(*(_WORD *)(a1 + 2)) <= 0x205u || v3 > *(_DWORD *)(a2 + 68) )
    sub_6F769150(a2, 8);
  v4 = a1 + 6;
  v5 = 0;
  do
  {
    v4 += 2;
    v6 = *(_BYTE *)(v4 - 1) | (*(_BYTE *)(v4 - 2) << 8);
    v7 = (unsigned __int16)(*(_BYTE *)(v4 - 1) | (unsigned __int16)(*(_BYTE *)(v4 - 2) << 8));
    if ( *(_DWORD *)(a2 + 72) > 1u && v6 & 7 )
      sub_6F769150(a2, 8);
    if ( v5 < v7 >> 3 )
      v5 = v7 >> 3;
  }
  while ( v4 != a1 + 518 );
  v24 = v4 + 8 * v5 + 8;
  if ( v24 > *(_DWORD *)(a2 + 68) )
    sub_6F769150(a2, 8);
  v20 = 0;
  v21 = v5;
  do
  {
    while ( 1 )
    {
      v8 = v4 + 8;
      LOWORD(v9) = _byteswap_ushort(*(_WORD *)(v4 + 2));
      if ( !(_WORD)v9 )
        break;
      v9 = (unsigned __int16)v9;
      v10 = *(_BYTE *)(v4 + 7);
      if ( *(_DWORD *)(a2 + 72) > 1u )
      {
        v11 = *(_BYTE *)(v4 + 1) | (*(_BYTE *)v4 << 8);
        if ( _byteswap_ushort(*(_WORD *)v4) > 0xFFu || v9 + (unsigned int)(unsigned __int16)v11 > 0x100 )
          sub_6F769150(a2, 8);
      }
      v12 = _byteswap_ushort(*(_WORD *)(v4 + 6));
      if ( !v12 )
        break;
      v13 = v8 + v12 - 2;
      if ( v24 > v13 || v25 < v13 + 2 * v9 )
        sub_6F769150(a2, 9);
      if ( !*(_DWORD *)(a2 + 72) )
        break;
      v14 = v8 + 2 * v9;
      if ( v8 >= v14 )
        break;
      LOBYTE(v22) = *(_BYTE *)(v4 + 4);
      v15 = v22;
      v16 = v4 + 8;
      v22 = v4;
      v23 = v4 + 8;
      v17 = *(_BYTE *)(v4 + 5) | (unsigned __int16)(v15 << 8);
      do
      {
        v16 += 2;
        v18 = *(_BYTE *)(v16 - 1) | (unsigned __int16)(*(_BYTE *)(v16 - 2) << 8);
        if ( v18 )
        {
          if ( (unsigned int)(unsigned __int16)(v17 + v18) >= *(_DWORD *)(a2 + 80) )
            sub_6F769150(a2, 16);
        }
      }
      while ( v14 > v16 );
      ++v20;
      v4 = v23 + 2 * ((v14 - v22 - 9) >> 1) + 2;
      if ( v21 < v20 )
        return 0;
    }
    ++v20;
    v4 += 8;
  }
  while ( v21 >= v20 );
  return 0;
}
