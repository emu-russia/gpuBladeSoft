signed int __cdecl sub_6F79CF10(int a1, int a2, int a3, int a4)
{
  signed int result; // eax@2
  unsigned int v5; // esi@7
  unsigned int v6; // ebp@9
  int v7; // ecx@13
  unsigned int v8; // esi@15
  int v9; // ST2C_4@14
  int v10; // eax@14
  int v11; // [sp+20h] [bp-7Ch]@7
  int v12; // [sp+24h] [bp-78h]@7
  signed int v13; // [sp+28h] [bp-74h]@7
  int v14; // [sp+3Ch] [bp-60h]@15
  int v15; // [sp+40h] [bp-5Ch]@7
  int v16; // [sp+44h] [bp-58h]@7
  int v17; // [sp+48h] [bp-54h]@7
  int v18; // [sp+4Ch] [bp-50h]@7
  int v19; // [sp+50h] [bp-4Ch]@16
  int v20; // [sp+54h] [bp-48h]@16
  int v21; // [sp+58h] [bp-44h]@16

  if ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(a1 + 16) )
    return 6;
  result = 19;
  if ( a3 == 2 )
  {
    if ( a4 )
      sub_6F770420(a2 + 108, *(_DWORD *)a4, *(_DWORD *)(a4 + 4));
    sub_6F770380(a2 + 108, (int)&v15);
    v11 = (v15 + 32) & 0xFFFFFFC0;
    v13 = (v18 + 32) & 0xFFFFFFC0;
    v12 = (v16 + 32) & 0xFFFFFFC0;
    v5 = (signed int)(((v17 + 32) & 0xFFFFFFC0) - v11) >> 6;
    if ( !v5 )
    {
      v11 = v15 & 0xFFFFFFC0;
      v5 = (signed int)(((v17 + 63) & 0xFFFFFFC0) - (v15 & 0xFFFFFFC0)) >> 6;
    }
    v6 = (v13 - v12) >> 6;
    if ( !v6 )
    {
      v12 = v16 & 0xFFFFFFC0;
      v13 = (v18 + 63) & 0xFFFFFFC0;
      v6 = (signed int)(v13 - (v16 & 0xFFFFFFC0)) >> 6;
    }
    if ( v5 > 0xFFFF || v6 > 0xFFFF )
      return 6;
    v7 = *(_DWORD *)(a1 + 8);
    if ( *(_BYTE *)(*(_DWORD *)(a2 + 156) + 4) & 1 )
    {
      v9 = *(_DWORD *)(a1 + 8);
      sub_6F773D90(*(_DWORD *)(a1 + 8), *(_DWORD *)(a2 + 88));
      v10 = *(_DWORD *)(a2 + 156);
      *(_DWORD *)(a2 + 88) = 0;
      v7 = v9;
      *(_DWORD *)(v10 + 4) &= 0xFFFFFFFE;
    }
    *(_DWORD *)(a2 + 80) = v5;
    v8 = (v5 + 15) >> 4;
    *(_BYTE *)(a2 + 94) = 1;
    *(_DWORD *)(a2 + 76) = v6;
    *(_DWORD *)(a2 + 84) = 2 * v8;
    *(_DWORD *)(a2 + 88) = sub_6F773B30(v7, v6, 0, 2 * v8, 0, &v14);
    result = v14;
    if ( !v14 )
    {
      *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) |= 1u;
      sub_6F770420(a2 + 108, -v11, -v12);
      v20 = a2 + 108;
      v21 = 0;
      v19 = a2 + 76;
      v14 = (*(int (__cdecl **)(_DWORD, int *))(a1 + 56))(*(_DWORD *)(a1 + 52), &v19);
      sub_6F770420(a2 + 108, v11, v12);
      result = v14;
      if ( !v14 )
      {
        *(_DWORD *)(a2 + 72) = 1651078259;
        *(_DWORD *)(a2 + 100) = v11 >> 6;
        *(_DWORD *)(a2 + 104) = v13 >> 6;
      }
    }
  }
  return result;
}
