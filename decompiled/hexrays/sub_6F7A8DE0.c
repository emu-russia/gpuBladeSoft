signed int __cdecl sub_6F7A8DE0(int a1, int a2, int a3, int a4)
{
  signed int v4; // esi@2
  int v6; // edi@4
  int v7; // ebp@8
  unsigned int v8; // ecx@9
  int v9; // edx@11
  void *v10; // eax@13
  int v11; // ebp@14
  int v12; // eax@16
  int v13; // esi@16
  unsigned int v14; // ST2C_4@12
  int v15; // eax@12
  signed int v16; // [sp+1Ch] [bp-90h]@9
  int v17; // [sp+20h] [bp-8Ch]@7
  int v18; // [sp+24h] [bp-88h]@8
  int v19; // [sp+24h] [bp-88h]@14
  unsigned int v20; // [sp+28h] [bp-84h]@9
  signed int v21; // [sp+2Ch] [bp-80h]@13
  unsigned int v22; // [sp+30h] [bp-7Ch]@9
  signed int v23; // [sp+34h] [bp-78h]@9
  int v24; // [sp+3Ch] [bp-70h]@13
  int v25; // [sp+4Ch] [bp-60h]@13
  unsigned int v26; // [sp+50h] [bp-5Ch]@9
  unsigned int v27; // [sp+54h] [bp-58h]@9
  unsigned int v28; // [sp+58h] [bp-54h]@9
  unsigned int v29; // [sp+5Ch] [bp-50h]@9
  int v30; // [sp+60h] [bp-4Ch]@15
  int v31; // [sp+64h] [bp-48h]@15
  int v32; // [sp+68h] [bp-44h]@15

  if ( a3 == 1 )
  {
    v4 = 6;
    v6 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(a1 + 16) )
      return v4;
  }
  else
  {
    v4 = 6;
    if ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(a1 + 16) )
      return v4;
    v6 = *(_DWORD *)(a1 + 8);
    if ( a3 )
      return 19;
  }
  v17 = a2 + 108;
  if ( a4 )
  {
    v7 = *(_DWORD *)a4;
    v18 = *(_DWORD *)(a4 + 4);
  }
  else
  {
    v18 = 0;
    v7 = 0;
  }
  sub_6F770380(v17, (int)&v26);
  v26 = (v7 + v26) & 0xFFFFFFC0;
  v8 = v26;
  v22 = (v18 + v27) & 0xFFFFFFC0;
  v27 = (v18 + v27) & 0xFFFFFFC0;
  v29 = (v29 + v18 + 63) & 0xFFFFFFC0;
  v23 = v29;
  v28 = (v7 + v28 + 63) & 0xFFFFFFC0;
  v16 = (v28 - v26) >> 6;
  v20 = (v29 - v27) >> 6;
  if ( v16 > 0x7FFF || (signed int)((v29 - v27) >> 6) > 0x7FFF )
    return 98;
  v9 = a1;
  if ( *(_BYTE *)(*(_DWORD *)(a2 + 156) + 4) & 1 )
  {
    v14 = v26;
    sub_6F773D90(v6, *(_DWORD *)(a2 + 88));
    v15 = *(_DWORD *)(a2 + 156);
    *(_DWORD *)(a2 + 88) = 0;
    v9 = a1;
    v8 = v14;
    *(_DWORD *)(v15 + 4) &= 0xFFFFFFFE;
  }
  v24 = v9;
  v21 = v8;
  v10 = sub_6F773A50(v6, v20 * v16, &v25);
  v4 = v25;
  *(_DWORD *)(a2 + 88) = v10;
  if ( v4 )
    return v4;
  *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) |= 1u;
  v11 = v7 - v21;
  *(_DWORD *)(a2 + 72) = 1651078259;
  *(_BYTE *)(a2 + 94) = 2;
  *(_DWORD *)(a2 + 100) = v21 >> 6;
  v19 = v18 - v22;
  *(_DWORD *)(a2 + 104) = v23 >> 6;
  *(_WORD *)(a2 + 92) = 256;
  *(_DWORD *)(a2 + 76) = v20;
  *(_DWORD *)(a2 + 80) = v16;
  *(_DWORD *)(a2 + 84) = v16;
  if ( v11 | v19 )
  {
    sub_6F770420(v17, v11, v19);
    v31 = a2 + 108;
    v32 = 1;
    v30 = a2 + 76;
    v25 = (*(int (__cdecl **)(_DWORD, int *))(v24 + 56))(*(_DWORD *)(v24 + 52), &v30);
    if ( !v25 )
    {
      sub_6F770420(v17, -v11, -v19);
      return v25;
    }
    sub_6F770420(v17, -v11, -v19);
  }
  else
  {
    v32 = 1;
    v30 = a2 + 76;
    v31 = a2 + 108;
    v25 = (*(int (__cdecl **)(_DWORD, int *))(v24 + 56))(*(_DWORD *)(v24 + 52), &v30);
    if ( !v25 )
      return v4;
  }
  sub_6F773D90(v6, *(_DWORD *)(a2 + 88));
  v12 = *(_DWORD *)(a2 + 156);
  v13 = v25;
  *(_DWORD *)(a2 + 88) = 0;
  *(_DWORD *)(v12 + 4) &= 0xFFFFFFFE;
  return v13;
}
