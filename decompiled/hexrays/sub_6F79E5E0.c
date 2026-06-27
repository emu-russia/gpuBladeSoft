int __cdecl sub_6F79E5E0(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // esi@2
  unsigned int v5; // ecx@4
  int v6; // ebx@7
  unsigned int v7; // edx@8
  int v8; // edi@10
  unsigned int v9; // edi@12
  unsigned int v10; // ecx@14
  int v11; // ebp@14
  unsigned __int32 v12; // eax@14
  unsigned __int32 v13; // edx@17
  int v15; // edx@31
  int v16; // eax@31
  int v17; // edx@35
  unsigned int v18; // eax@16
  signed int v19; // [sp+0h] [bp-30h]@3
  unsigned int v20; // [sp+4h] [bp-2Ch]@1
  int v21; // [sp+8h] [bp-28h]@1
  int v22; // [sp+10h] [bp-20h]@3
  char v23; // [sp+16h] [bp-1Ah]@10
  unsigned int v24; // [sp+18h] [bp-18h]@3
  unsigned int v25; // [sp+1Ch] [bp-14h]@12

  v3 = *(_DWORD *)(a1 + 740);
  v20 = v3 + *(_DWORD *)(a1 + 744);
  v21 = *(_DWORD *)(a1 + 748);
  if ( *(_DWORD *)(a1 + 748) )
  {
    v4 = v3 + 4;
    if ( v3 + *(_DWORD *)(a1 + 744) >= (unsigned int)(v3 + 10) )
    {
      v19 = 1;
      v22 = 0;
      v24 = a3 | (a2 << 16);
      while ( 1 )
      {
        v5 = v4 + _byteswap_ushort(*(_WORD *)(v4 + 2));
        if ( v20 <= v5 )
          v5 = v20;
        if ( !(*(_DWORD *)(a1 + 752) & v19) )
          goto LABEL_22;
        v6 = v4 + 14;
        if ( v4 + 14 > v5 )
          goto LABEL_22;
        v7 = _byteswap_ushort(*(_WORD *)(v4 + 6));
        if ( (signed int)(v5 - v6) < 6 * (unsigned __int16)v7 )
          v7 = (signed int)(v5 - v6) / 6;
        v8 = (*(_BYTE *)(v4 + 4) << 8) | *(_BYTE *)(v4 + 5);
        v23 = _byteswap_ushort(*(_WORD *)(v4 + 4));
        if ( BYTE1(v8) )
          goto LABEL_22;
        if ( v19 & *(_DWORD *)(a1 + 756) )
          break;
        if ( v7 )
        {
          if ( v24 != _byteswap_ulong(*(_DWORD *)(v4 + 14)) )
          {
            do
            {
              v6 += 6;
              if ( !--v7 )
                goto LABEL_22;
            }
            while ( v24 != _byteswap_ulong(*(_DWORD *)v6) );
          }
          v17 = *(_BYTE *)(v6 + 5);
          v16 = (signed __int16)_byteswap_ushort(*(_WORD *)(v6 + 4));
          goto LABEL_32;
        }
LABEL_22:
        v19 *= 2;
        if ( --v21 )
        {
          v4 = v5;
          if ( v20 >= v5 + 6 )
            continue;
        }
        return v22;
      }
      v9 = 0;
      v25 = v5;
      while ( 1 )
      {
        if ( v9 >= v7 )
          goto LABEL_21;
        v10 = (v9 + v7) >> 1;
        v11 = v6 + 6 * v10;
        v12 = _byteswap_ulong(*(_DWORD *)v11);
        if ( v24 == v12 )
          break;
        if ( v24 <= v12 )
        {
          while ( v9 < v10 )
          {
            v18 = (v9 + v10) >> 1;
            v11 = v6 + 6 * v18;
            v13 = _byteswap_ulong(*(_DWORD *)v11);
            if ( v24 == v13 )
              goto LABEL_31;
            if ( v24 > v13 )
              goto LABEL_36;
            v10 = (v9 + v10) >> 1;
          }
LABEL_21:
          v5 = v25;
          goto LABEL_22;
        }
        v18 = (v9 + v7) >> 1;
        v10 = v7;
LABEL_36:
        v9 = v18 + 1;
        v7 = v10;
      }
LABEL_31:
      v15 = *(_BYTE *)(v11 + 5);
      v5 = v25;
      v16 = (signed __int16)_byteswap_ushort(*(_WORD *)(v11 + 4));
LABEL_32:
      if ( !(v23 & 8) )
        v16 += v22;
      v22 = v16;
      goto LABEL_22;
    }
  }
  return 0;
}
