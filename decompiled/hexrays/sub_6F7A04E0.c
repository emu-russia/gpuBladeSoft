signed int __cdecl sub_6F7A04E0(int a1, int a2)
{
  signed int v2; // esi@1
  unsigned int v4; // eax@5
  int v5; // edx@5
  int v6; // edi@5
  unsigned int v7; // ebx@5
  int v8; // ebp@8
  int v9; // eax@8
  int v10; // ecx@9
  unsigned int v11; // esi@9
  int v12; // edx@12
  int v13; // ebx@13
  int v14; // edx@16
  int v15; // eax@17
  int v16; // eax@20
  unsigned int *v17; // ebp@20
  unsigned __int32 v18; // edx@20
  unsigned __int32 v19; // edi@21
  unsigned __int32 v20; // edx@23
  signed int v21; // [sp+1Ch] [bp-40h]@9
  unsigned int v22; // [sp+20h] [bp-3Ch]@6
  int v23; // [sp+24h] [bp-38h]@9
  int v24; // [sp+28h] [bp-34h]@9
  unsigned int v25; // [sp+3Ch] [bp-20h]@1

  v2 = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1801810542, a2, (int *)&v25);
  if ( v2 )
    return v2;
  v2 = 142;
  if ( v25 <= 3 )
    return v2;
  v2 = sub_6F772240(a2, v25, (int *)(a1 + 740));
  if ( v2 )
    return v2;
  v4 = v25;
  v5 = *(_DWORD *)(a1 + 740);
  *(_DWORD *)(a1 + 744) = v25;
  v6 = v5 + 4;
  v7 = v5 + v4;
  if ( _byteswap_ushort(*(_WORD *)(v5 + 2)) <= 0x20u )
  {
    v22 = _byteswap_ushort(*(_WORD *)(v5 + 2));
    if ( !_byteswap_ushort(*(_WORD *)(v5 + 2)) )
    {
LABEL_28:
      v24 = 0;
      v23 = 0;
      v10 = 0;
      goto LABEL_29;
    }
  }
  else
  {
    v22 = 32;
  }
  if ( v7 < v5 + 10 )
    goto LABEL_28;
  v8 = _byteswap_ushort(*(_WORD *)(v5 + 6));
  v9 = _byteswap_ushort(*(_WORD *)(v5 + 8));
  if ( _byteswap_ushort(*(_WORD *)(v5 + 6)) <= 0xEu )
    goto LABEL_28;
  v21 = 1;
  v10 = 0;
  v24 = 0;
  v23 = 0;
  v11 = v7;
  do
  {
    v13 = v6 + v8;
    if ( v11 <= v6 + v8 )
      v13 = v11;
    if ( (v9 & 0xFFFFFFF7) == 1 )
    {
      v14 = v6 + 14;
      if ( v11 >= v6 + 14 )
      {
        v15 = _byteswap_ushort(*(_WORD *)(v6 + 6));
        if ( v13 - v14 < 6 * (unsigned __int16)v15 )
          v15 = (v13 - v14) / 6;
        v23 |= v21;
        if ( v15 )
        {
          v16 = v15 - 1;
          v17 = (unsigned int *)(v6 + 20);
          v18 = _byteswap_ulong(*(_DWORD *)(v6 + 14));
          if ( v16 )
          {
            v19 = _byteswap_ulong(*(_DWORD *)(v6 + 20));
            if ( v18 >= v19 )
              goto LABEL_10;
            while ( 1 )
            {
              v17 = (unsigned int *)((char *)v17 + 6);
              if ( !--v16 )
                break;
              v20 = _byteswap_ulong(*v17);
              if ( v20 <= v19 )
                goto LABEL_10;
              v19 = v20;
            }
          }
          v24 |= v21;
        }
      }
    }
LABEL_10:
    if ( ++v10 >= v22 )
      break;
    v21 = 1 << v10;
    if ( v11 < v13 + 6 )
      break;
    v12 = *(_BYTE *)(v13 + 3) | (*(_BYTE *)(v13 + 2) << 8);
    v8 = _byteswap_ushort(*(_WORD *)(v13 + 2));
    v6 = v13;
    v9 = _byteswap_ushort(*(_WORD *)(v13 + 4));
  }
  while ( _byteswap_ushort(*(_WORD *)(v13 + 2)) > 0xEu );
  v2 = 0;
LABEL_29:
  *(_DWORD *)(a1 + 748) = v10;
  *(_DWORD *)(a1 + 752) = v23;
  *(_DWORD *)(a1 + 756) = v24;
  return v2;
}
