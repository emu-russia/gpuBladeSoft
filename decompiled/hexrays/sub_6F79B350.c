void __cdecl sub_6F79B350(int a1, int a2, int a3)
{
  int v3; // ebx@1
  unsigned int v4; // esi@2
  int v5; // edi@2
  int v6; // ebp@4
  char *v7; // eax@5
  int v8; // edx@5
  bool v9; // cf@5
  bool v10; // zf@5
  int v11; // ebp@6
  int v12; // ebp@7
  unsigned int v13; // ecx@9
  int v14; // eax@12
  unsigned int v15; // edx@12
  unsigned int v16; // eax@12
  char *v17; // eax@13
  _BYTE *v18; // ebp@15
  signed int v19; // ecx@15
  signed int v20; // edx@15
  int v21; // ebx@16
  char v22; // si@16
  int v23; // ebx@16
  bool v24; // zf@18
  bool v25; // zf@22
  int v26; // ecx@28
  char *v27; // eax@37
  int v28; // [sp+20h] [bp-3Ch]@4
  unsigned int v29; // [sp+24h] [bp-38h]@15
  signed int v30; // [sp+24h] [bp-38h]@35
  unsigned int v31; // [sp+28h] [bp-34h]@15
  int v32; // [sp+28h] [bp-34h]@31
  int v33; // [sp+3Ch] [bp-20h]@12

  v3 = a1;
  if ( *(_DWORD *)(a1 + 4) )
    return;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 52);
  if ( a2 != v4 + v5 )
    return;
  v6 = *(_DWORD *)(a1 + 28);
  v28 = *(_DWORD *)a1;
  if ( v6 )
  {
    v7 = *(char **)(a1 + 36);
    *(_DWORD *)&v7[16 * (v6 + 0xFFFFFFF) + 12] = 0;
    v8 = v6 + 1;
    v9 = (unsigned int)(v6 + 1) < *(_DWORD *)(a1 + 32);
    v10 = v6 + 1 == *(_DWORD *)(a1 + 32);
    if ( (unsigned int)(v6 + 1) <= *(_DWORD *)(a1 + 32) )
      goto LABEL_6;
    v13 = *(_DWORD *)(a1 + 32);
    v33 = 0;
    if ( v9 || v10 )
      goto LABEL_6;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 32);
    v7 = *(char **)(a1 + 36);
    if ( v13 )
    {
      *(_DWORD *)v7 = 0;
      *((_DWORD *)v7 + 3) = 0;
      v8 = 1;
      *(_DWORD *)(a1 + 28) = 1;
      goto LABEL_11;
    }
    v33 = 0;
    v8 = 1;
  }
  v32 = v8;
  v7 = sub_6F773B30(v28, 16, v13, (v6 + 8) & 0xFFFFFFF8, v7, &v33);
  v26 = v33;
  *(_DWORD *)(a1 + 36) = v7;
  if ( v26 )
    goto LABEL_29;
  *(_DWORD *)(a1 + 32) = (v6 + 8) & 0xFFFFFFF8;
  v8 = v32;
LABEL_6:
  v11 = (int)&v7[16 * v6];
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_DWORD *)(a1 + 28) = v8;
  if ( v8 )
  {
LABEL_11:
    v12 = (int)&v7[16 * (v8 + 0xFFFFFFF)];
    goto LABEL_12;
  }
  v12 = (int)v7;
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v33 = 0;
    v27 = sub_6F773B30(v28, 16, 0, 8, v7, &v33);
    v26 = v33;
    *(_DWORD *)(a1 + 36) = v27;
    if ( v26 )
      goto LABEL_29;
    *(_DWORD *)(a1 + 32) = 8;
    v12 = (int)v27;
  }
  *(_DWORD *)v12 = 0;
  *(_DWORD *)(v12 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 1;
LABEL_12:
  v14 = *(_DWORD *)(v12 + 4);
  v33 = 0;
  v15 = (v4 + 7) >> 3;
  v16 = (unsigned int)(v14 + 7) >> 3;
  if ( v16 >= v15 )
  {
    v17 = *(char **)(v12 + 8);
    goto LABEL_14;
  }
  v30 = (v15 + 7) & 0xFFFFFFF8;
  v17 = sub_6F773B30(v28, 1, v16, v30, *(char **)(v12 + 8), &v33);
  v26 = v33;
  *(_DWORD *)(v12 + 8) = v17;
  if ( v26 )
  {
LABEL_29:
    *(_DWORD *)(v3 + 4) = v26;
    return;
  }
  *(_DWORD *)(v12 + 4) = 8 * v30;
LABEL_14:
  *(_DWORD *)v12 = v4;
  if ( v4 )
  {
    v18 = (_BYTE *)a3;
    v29 = v4;
    v19 = 128;
    v20 = 128;
    v31 = v4;
    do
    {
      v21 = (unsigned __int8)*v17;
      v22 = v21 | v20;
      v23 = ~v20 & v21;
      if ( (unsigned __int8)v19 & *v18 )
        LOBYTE(v23) = v22;
      v19 >>= 1;
      v24 = v19 == 0;
      *v17 = v23;
      if ( !v19 )
        v19 = 128;
      if ( v24 )
        ++v18;
      v20 >>= 1;
      v25 = v20 == 0;
      if ( !v20 )
        v20 = 128;
      if ( v25 )
        ++v17;
      --v29;
    }
    while ( v29 );
    v4 = v31;
    v3 = a1;
  }
  v26 = sub_6F79A4B0(v3 + 52, a3, v4, v5, 0, v28);
  if ( v26 )
    goto LABEL_29;
}
