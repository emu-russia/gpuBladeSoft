signed int __cdecl sub_6F7A9110(int a1, int a2, int a3, int a4)
{
  signed int v4; // esi@1
  int v5; // ebx@1
  int v7; // ebp@5
  int v8; // edi@6
  unsigned int v9; // ecx@6
  unsigned int v10; // edx@6
  void *v11; // eax@10
  int v12; // ebp@11
  int v13; // edi@13
  unsigned int v14; // esi@14
  unsigned int v15; // ebx@14
  unsigned int v16; // edx@15
  int i; // eax@15
  char v18; // cl@16
  int v19; // eax@19
  int v20; // eax@25
  unsigned int v21; // ST34_4@9
  unsigned int v22; // ST30_4@9
  int v23; // eax@9
  int v24; // [sp+18h] [bp-94h]@5
  int v25; // [sp+18h] [bp-94h]@11
  unsigned int v26; // [sp+1Ch] [bp-90h]@6
  unsigned int v27; // [sp+20h] [bp-8Ch]@6
  int v28; // [sp+24h] [bp-88h]@6
  int v29; // [sp+28h] [bp-84h]@6
  unsigned int v30; // [sp+2Ch] [bp-80h]@6
  char v31; // [sp+2Ch] [bp-80h]@14
  unsigned int v32; // [sp+30h] [bp-7Ch]@10
  signed int v33; // [sp+34h] [bp-78h]@10
  signed int v34; // [sp+34h] [bp-78h]@14
  signed int v35; // [sp+38h] [bp-74h]@10
  int v36; // [sp+4Ch] [bp-60h]@10
  unsigned int v37; // [sp+50h] [bp-5Ch]@6
  unsigned int v38; // [sp+54h] [bp-58h]@6
  unsigned int v39; // [sp+58h] [bp-54h]@6
  unsigned int v40; // [sp+5Ch] [bp-50h]@6
  int v41; // [sp+60h] [bp-4Ch]@12
  int v42; // [sp+64h] [bp-48h]@12
  int v43; // [sp+68h] [bp-44h]@12

  v4 = 6;
  v5 = a2;
  if ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(a1 + 16) )
    return v4;
  v4 = 19;
  if ( a3 != 3 )
    return v4;
  if ( a4 )
  {
    v7 = *(_DWORD *)a4;
    v24 = *(_DWORD *)(a4 + 4);
  }
  else
  {
    v24 = 0;
    v7 = 0;
  }
  v29 = a2 + 108;
  v8 = *(_DWORD *)(a1 + 8);
  sub_6F770380(a2 + 108, (int)&v37);
  v37 = (v7 + v37) & 0xFFFFFFC0;
  v9 = v37;
  v30 = (v24 + v38) & 0xFFFFFFC0;
  v38 = (v24 + v38) & 0xFFFFFFC0;
  v10 = (v40 + v24 + 63) & 0xFFFFFFC0;
  v40 = v10;
  v39 = (v7 + v39 + 63) & 0xFFFFFFC0;
  v26 = (v39 - v37) >> 6;
  v27 = (v10 - v38) >> 6;
  v28 = 3 * v26;
  if ( (signed int)(3 * v26) > 0x7FFF || (signed int)((v10 - v38) >> 6) > 0x7FFF )
    return 98;
  if ( *(_BYTE *)(*(_DWORD *)(a2 + 156) + 4) & 1 )
  {
    v21 = v10;
    v22 = v37;
    sub_6F773D90(v8, *(_DWORD *)(a2 + 88));
    v23 = *(_DWORD *)(a2 + 156);
    *(_DWORD *)(a2 + 88) = 0;
    v10 = v21;
    v9 = v22;
    *(_DWORD *)(v23 + 4) &= 0xFFFFFFFE;
  }
  v33 = v9;
  v35 = v10;
  v32 = (v28 + 3) & 0xFFFFFFFC;
  v11 = sub_6F773A50(v8, v32 * v27, &v36);
  v4 = v36;
  *(_DWORD *)(a2 + 88) = v11;
  if ( v4 )
    return v4;
  *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) |= 1u;
  v12 = v7 - v33;
  *(_DWORD *)(a2 + 72) = 1651078259;
  *(_BYTE *)(a2 + 94) = 2;
  v25 = v24 - v30;
  *(_DWORD *)(a2 + 100) = v33 >> 6;
  *(_DWORD *)(a2 + 84) = v32;
  *(_DWORD *)(a2 + 104) = v35 >> 6;
  *(_WORD *)(a2 + 92) = 256;
  *(_DWORD *)(a2 + 80) = v28;
  *(_DWORD *)(a2 + 76) = v27;
  if ( v12 | v25 )
  {
    sub_6F770420(v29, v12, v25);
    v43 = 1;
    v41 = a2 + 76;
    v42 = a2 + 108;
    v36 = (*(int (__cdecl **)(_DWORD, int *))(a1 + 56))(*(_DWORD *)(a1 + 52), &v41);
    if ( !v36 )
    {
      v13 = *(_DWORD *)(a2 + 88);
      v31 = 1;
      if ( !v27 )
      {
        v36 = 0;
LABEL_19:
        sub_6F770420(v29, -v12, -v25);
        v19 = v36;
LABEL_20:
        if ( !v19 )
          goto LABEL_21;
        return v19;
      }
      v34 = 0;
      v14 = v27;
      v15 = v26;
      do
      {
LABEL_15:
        v16 = v15;
        for ( i = v13 + v28; v16; *(_BYTE *)(i + 2) = v18 )
        {
          --v16;
          i -= 3;
          v18 = *(_BYTE *)(v13 + v16);
          *(_BYTE *)i = v18;
          *(_BYTE *)(i + 1) = v18;
        }
        v13 += v32;
        --v14;
      }
      while ( v14 );
      v4 = v34;
      v5 = a2;
      v36 = 0;
      if ( !v31 )
        goto LABEL_21;
      goto LABEL_19;
    }
    sub_6F770420(v29, -v12, -v25);
LABEL_25:
    sub_6F773D90(v8, *(_DWORD *)(a2 + 88));
    v20 = *(_DWORD *)(a2 + 156);
    *(_DWORD *)(a2 + 88) = 0;
    *(_DWORD *)(v20 + 4) &= 0xFFFFFFFE;
    v19 = v36;
    goto LABEL_20;
  }
  v43 = 1;
  v41 = a2 + 76;
  v42 = a2 + 108;
  v36 = (*(int (__cdecl **)(_DWORD, int *))(a1 + 56))(*(_DWORD *)(a1 + 52), &v41);
  if ( v36 )
    goto LABEL_25;
  v13 = *(_DWORD *)(a2 + 88);
  if ( v27 )
  {
    v34 = 0;
    v14 = v27;
    v15 = v26;
    v31 = 0;
    goto LABEL_15;
  }
LABEL_21:
  *(_BYTE *)(v5 + 94) = 5;
  return v4;
}
