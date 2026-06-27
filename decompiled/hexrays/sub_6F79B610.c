void __cdecl sub_6F79B610(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  int v5; // esi@2
  unsigned int v6; // edi@2
  int v7; // ebp@4
  char *v8; // eax@5
  unsigned int v9; // edx@5
  int v10; // ebp@6
  int v11; // ebp@7
  unsigned int v12; // ecx@9
  int v13; // eax@12
  unsigned int v14; // edx@12
  unsigned int v15; // eax@12
  char *v16; // eax@13
  _BYTE *v17; // ebp@14
  signed int v18; // ecx@14
  signed int v19; // edx@14
  int v20; // ebx@15
  bool v21; // zf@17
  bool v22; // zf@21
  int v23; // ecx@27
  char *v24; // eax@36
  signed int v25; // [sp+24h] [bp-38h]@34
  int v26; // [sp+28h] [bp-34h]@4
  unsigned int v27; // [sp+2Ch] [bp-30h]@30
  int v28; // [sp+3Ch] [bp-20h]@12

  v4 = a1;
  if ( *(_DWORD *)(a1 + 4) )
    return;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 52);
  if ( a3 != v5 + v6 )
    return;
  v7 = *(_DWORD *)(a1 + 28);
  v26 = *(_DWORD *)a1;
  if ( v7 )
  {
    v8 = *(char **)(a1 + 36);
    *(_DWORD *)&v8[16 * (v7 + 0xFFFFFFF) + 12] = a2;
    v9 = v7 + 1;
    if ( (unsigned int)(v7 + 1) <= *(_DWORD *)(a1 + 32) )
      goto LABEL_6;
    v12 = *(_DWORD *)(a1 + 32);
    v28 = 0;
    if ( v12 >= v9 )
      goto LABEL_6;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 32);
    v8 = *(char **)(a1 + 36);
    if ( v12 )
    {
      *(_DWORD *)v8 = 0;
      *((_DWORD *)v8 + 3) = 0;
      v9 = 1;
      *(_DWORD *)(a1 + 28) = 1;
      goto LABEL_11;
    }
    v28 = 0;
    v9 = 1;
  }
  v27 = v9;
  v8 = sub_6F773B30(v26, 16, v12, (v7 + 8) & 0xFFFFFFF8, v8, &v28);
  v23 = v28;
  *(_DWORD *)(a1 + 36) = v8;
  if ( v23 )
    goto LABEL_28;
  *(_DWORD *)(a1 + 32) = (v7 + 8) & 0xFFFFFFF8;
  v9 = v27;
LABEL_6:
  v10 = (int)&v8[16 * v7];
  *(_DWORD *)v10 = 0;
  *(_DWORD *)(v10 + 12) = 0;
  *(_DWORD *)(a1 + 28) = v9;
  if ( v9 )
  {
LABEL_11:
    v11 = (int)&v8[16 * (v9 + 0xFFFFFFF)];
    goto LABEL_12;
  }
  v11 = (int)v8;
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v28 = 0;
    v24 = sub_6F773B30(v26, 16, 0, 8, v8, &v28);
    v23 = v28;
    *(_DWORD *)(a1 + 36) = v24;
    if ( v23 )
      goto LABEL_28;
    *(_DWORD *)(a1 + 32) = 8;
    v11 = (int)v24;
  }
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 1;
LABEL_12:
  v13 = *(_DWORD *)(v11 + 4);
  v28 = 0;
  v14 = (unsigned int)(v5 + 7) >> 3;
  v15 = (unsigned int)(v13 + 7) >> 3;
  if ( v15 >= v14 )
  {
    v16 = *(char **)(v11 + 8);
    goto LABEL_14;
  }
  v25 = (v14 + 7) & 0xFFFFFFF8;
  v16 = sub_6F773B30(v26, 1, v15, v25, *(char **)(v11 + 8), &v28);
  v23 = v28;
  *(_DWORD *)(v11 + 8) = v16;
  if ( v23 )
  {
LABEL_28:
    *(_DWORD *)(v4 + 4) = v23;
    return;
  }
  *(_DWORD *)(v11 + 4) = 8 * v25;
LABEL_14:
  *(_DWORD *)v11 = v5;
  v17 = (_BYTE *)(a4 + (v6 >> 3));
  v18 = 128 >> (v6 & 7);
  v19 = 128;
  if ( v5 )
  {
    do
    {
      v20 = ~v19 & (unsigned __int8)*v16;
      if ( (unsigned __int8)v18 & *v17 )
        LOBYTE(v20) = v19 | *v16;
      v18 >>= 1;
      v21 = v18 == 0;
      if ( !v18 )
        v18 = 128;
      *v16 = v20;
      if ( v21 )
        ++v17;
      v19 >>= 1;
      v22 = v19 == 0;
      if ( !v19 )
        v19 = 128;
      if ( v22 )
        ++v16;
      --v5;
    }
    while ( v5 );
    v4 = a1;
  }
  v23 = sub_6F79A4B0(v4 + 52, a4, 0, v6, a2, v26);
  if ( v23 )
    goto LABEL_28;
}
