signed int __cdecl sub_6F7A6E20(int a1, int a2, int a3, int a4)
{
  signed int v4; // esi@1
  int v5; // ebx@1
  int v7; // ebp@5
  int v8; // edi@6
  unsigned int v9; // edx@6
  unsigned int v10; // ecx@6
  unsigned int v11; // esi@6
  unsigned int v12; // esi@6
  int v13; // esi@6
  void *v14; // eax@10
  signed int v15; // edx@11
  int v16; // ebp@13
  int v17; // edi@13
  int v18; // ebx@15
  unsigned int v19; // esi@15
  char *v20; // ebp@15
  void *v21; // ST00_4@16
  void *v22; // ebx@16
  char *v23; // ST04_4@16
  char *v24; // ST00_4@16
  int v25; // eax@18
  int v26; // eax@24
  unsigned int v27; // ST38_4@9
  unsigned int v28; // ST34_4@9
  int v29; // eax@9
  int v30; // edi@27
  signed int v31; // [sp+1Ch] [bp-90h]@6
  int v32; // [sp+20h] [bp-8Ch]@5
  int v33; // [sp+20h] [bp-8Ch]@11
  int v34; // [sp+24h] [bp-88h]@6
  char v35; // [sp+24h] [bp-88h]@14
  int v36; // [sp+28h] [bp-84h]@6
  unsigned int v37; // [sp+2Ch] [bp-80h]@6
  signed int v38; // [sp+30h] [bp-7Ch]@6
  signed int v39; // [sp+34h] [bp-78h]@10
  int v40; // [sp+34h] [bp-78h]@11
  unsigned int v41; // [sp+38h] [bp-74h]@10
  int v42; // [sp+4Ch] [bp-60h]@10
  unsigned int v43; // [sp+50h] [bp-5Ch]@6
  unsigned int v44; // [sp+54h] [bp-58h]@6
  unsigned int v45; // [sp+58h] [bp-54h]@6
  unsigned int v46; // [sp+5Ch] [bp-50h]@6
  int v47; // [sp+60h] [bp-4Ch]@12
  int v48; // [sp+64h] [bp-48h]@12
  int v49; // [sp+68h] [bp-44h]@12

  v4 = 6;
  v5 = a2;
  if ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(a1 + 16) )
    return v4;
  v4 = 19;
  if ( a3 != 4 )
    return v4;
  if ( a4 )
  {
    v7 = *(_DWORD *)a4;
    v32 = *(_DWORD *)(a4 + 4);
  }
  else
  {
    v32 = 0;
    v7 = 0;
  }
  v36 = a2 + 108;
  v8 = *(_DWORD *)(a1 + 8);
  sub_6F770380(a2 + 108, (int)&v43);
  v43 = (v7 + v43) & 0xFFFFFFC0;
  v9 = v43;
  v10 = (v32 + v44) & 0xFFFFFFC0;
  v44 = v10;
  v11 = (v46 + v32 + 63) & 0xFFFFFFC0;
  v38 = v11;
  v46 = (v46 + v32 + 63) & 0xFFFFFFC0;
  v45 = (v7 + v45 + 63) & 0xFFFFFFC0;
  v31 = (v45 - v43) >> 6;
  v12 = (v11 - v10) >> 6;
  v37 = v12;
  v13 = 3 * v12;
  v34 = v13;
  if ( v31 > 0x7FFF || v13 > 0x7FFF )
    return 98;
  if ( *(_BYTE *)(*(_DWORD *)(a2 + 156) + 4) & 1 )
  {
    v27 = v10;
    v28 = v43;
    sub_6F773D90(v8, *(_DWORD *)(a2 + 88));
    v29 = *(_DWORD *)(a2 + 156);
    *(_DWORD *)(a2 + 88) = 0;
    v10 = v27;
    v9 = v28;
    *(_DWORD *)(v29 + 4) &= 0xFFFFFFFE;
  }
  v41 = v10;
  v39 = v9;
  v14 = sub_6F773A50(v8, v13 * v31, &v42);
  v4 = v42;
  *(_DWORD *)(a2 + 88) = v14;
  if ( v4 )
    return v4;
  v15 = v39 >> 6;
  v40 = v7 - v39;
  v33 = v32 - v41;
  *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) |= 1u;
  *(_DWORD *)(a2 + 100) = v15;
  *(_DWORD *)(a2 + 72) = 1651078259;
  *(_BYTE *)(a2 + 94) = 2;
  *(_DWORD *)(a2 + 104) = v38 >> 6;
  *(_WORD *)(a2 + 92) = 256;
  *(_DWORD *)(a2 + 76) = v34;
  *(_DWORD *)(a2 + 80) = v31;
  *(_DWORD *)(a2 + 84) = v31;
  if ( v33 | v40 )
  {
    sub_6F770420(v36, v40, v33);
    v48 = a2 + 108;
    v49 = 1;
    v47 = a2 + 76;
    v42 = (*(int (__cdecl **)(_DWORD, int *))(a1 + 56))(*(_DWORD *)(a1 + 52), &v47);
    if ( !v42 )
    {
      v30 = v34;
      v16 = *(_DWORD *)(a2 + 88);
      v35 = 1;
      v17 = v16 + v31 * (v30 - v37);
      if ( !v37 )
      {
        v42 = 0;
LABEL_18:
        sub_6F770420(v36, -v40, -v33);
        v25 = v42;
LABEL_19:
        if ( !v25 )
          goto LABEL_20;
        return v25;
      }
LABEL_15:
      v18 = v16;
      v19 = v37;
      v20 = (char *)v17;
      do
      {
        v21 = (void *)v18;
        v22 = (void *)(v31 + v18);
        memcpy(v21, v20, v31);
        memcpy(v22, v20, v31);
        v23 = v20;
        v24 = (char *)v22 + v31;
        v20 += v31;
        v18 = (int)v22 + v31 + v31;
        memcpy(v24, v23, v31);
        --v19;
      }
      while ( v19 );
      v4 = 0;
      v5 = a2;
      v42 = 0;
      if ( !v35 )
        goto LABEL_20;
      goto LABEL_18;
    }
    sub_6F770420(v36, -v40, -v33);
LABEL_24:
    sub_6F773D90(v8, *(_DWORD *)(a2 + 88));
    v26 = *(_DWORD *)(a2 + 156);
    *(_DWORD *)(a2 + 88) = 0;
    *(_DWORD *)(v26 + 4) &= 0xFFFFFFFE;
    v25 = v42;
    goto LABEL_19;
  }
  v49 = 1;
  v47 = a2 + 76;
  v48 = a2 + 108;
  v42 = (*(int (__cdecl **)(_DWORD, int *))(a1 + 56))(*(_DWORD *)(a1 + 52), &v47);
  if ( v42 )
    goto LABEL_24;
  v16 = *(_DWORD *)(a2 + 88);
  v17 = v16 + v31 * (v34 - v37);
  if ( v37 )
  {
    v35 = 0;
    goto LABEL_15;
  }
LABEL_20:
  *(_BYTE *)(v5 + 94) = 6;
  return v4;
}
