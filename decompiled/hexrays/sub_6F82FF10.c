signed int __cdecl sub_6F82FF10(int a1, int a2)
{
  const void *v2; // ebp@1
  signed int v3; // edi@1
  void *v4; // ecx@2
  int v5; // eax@4
  signed int v6; // edx@4
  int v7; // eax@8
  signed int v8; // esi@10
  int v9; // eax@10
  void *v10; // eax@12
  int v11; // edx@14
  int v12; // esi@14
  int v13; // edx@16
  void *v14; // eax@18
  void *v15; // eax@19
  int v16; // eax@21
  int v17; // ecx@21
  int v18; // edx@22
  int v19; // eax@22
  int v20; // edx@22
  int v21; // ebp@23
  int v22; // edi@23
  int v23; // esi@25
  signed int result; // eax@25
  int v25; // [sp+10h] [bp-3Ch]@1
  int v26; // [sp+14h] [bp-38h]@1
  int v27; // [sp+18h] [bp-34h]@18
  int v28; // [sp+18h] [bp-34h]@22
  int v29; // [sp+1Ch] [bp-30h]@1
  int v30; // [sp+20h] [bp-2Ch]@14
  int v31; // [sp+24h] [bp-28h]@21
  int v32; // [sp+28h] [bp-24h]@22
  signed int v33; // [sp+2Ch] [bp-20h]@22

  v2 = *(const void **)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v25 = *(_DWORD *)(a2 + 16);
  v26 = *(_DWORD *)(a2 + 20);
  v29 = *(_DWORD *)(a2 + 12);
  if ( !a1 )
    return -1;
  v4 = *(void **)a1;
  if ( !*(_DWORD *)a1 || (unsigned int)v3 >> 31 )
    return -1;
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 -= v5;
    *(_DWORD *)(a1 + 8) = v6;
    if ( v6 )
    {
      memmove(v4, (char *)v4 + v5, v6);
      v6 = *(_DWORD *)(a1 + 8);
    }
    *(_DWORD *)(a1 + 12) = 0;
  }
  v7 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 4) - v3 <= v6 )
  {
    if ( v7 > 0x7FFFFFFF - v3 )
      goto LABEL_28;
    v8 = v3 + v7;
    v9 = v3 + v7 + 1024;
    if ( v8 <= 2147482622 )
      v8 = v9;
    v10 = realloc(*(void **)a1, v8);
    if ( !v10 )
    {
LABEL_37:
      sub_6F82FA10(a1);
      return -1;
    }
    *(_DWORD *)(a1 + 4) = v8;
    *(_DWORD *)a1 = v10;
  }
  v11 = *(_DWORD *)(a1 + 24);
  v12 = v3 / 255;
  v30 = v3 / 255 + 1;
  if ( v11 - v30 <= *(_DWORD *)(a1 + 28) )
  {
    if ( v11 <= 2147483646 - v12 )
    {
      v13 = v30 + v11;
      if ( v13 <= 2147483614 )
        v13 += 32;
      v27 = v13;
      v14 = realloc(*(void **)(a1 + 16), 4 * v13);
      if ( v14 )
      {
        *(_DWORD *)(a1 + 16) = v14;
        v15 = realloc(*(void **)(a1 + 20), 8 * v27);
        if ( v15 )
        {
          *(_DWORD *)(a1 + 20) = v15;
          *(_DWORD *)(a1 + 24) = v27;
          goto LABEL_21;
        }
      }
      goto LABEL_37;
    }
LABEL_28:
    if ( *(_DWORD *)a1 )
      free(*(void **)a1);
    if ( *(_DWORD *)(a1 + 16) )
      free(*(void **)(a1 + 16));
    if ( *(_DWORD *)(a1 + 20) )
      free(*(void **)(a1 + 20));
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 356) = 0;
    memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 360) >> 2));
    return -1;
  }
LABEL_21:
  memcpy((void *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 8)), v2, v3);
  v16 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) += v3;
  v17 = *(_DWORD *)(a1 + 28);
  v31 = v16;
  if ( v12 )
  {
    v18 = *(_DWORD *)(a1 + 20);
    v33 = v3;
    v28 = v16 + 4 * v17;
    v32 = v18;
    v19 = v18 + 8 * v17;
    v20 = 0;
    do
    {
      v21 = *(_DWORD *)(a1 + 356);
      *(_DWORD *)(v28 + 4 * v20) = 255;
      v22 = *(_DWORD *)(a1 + 352);
      *(_DWORD *)(v19 + 8 * v20 + 4) = v21;
      *(_DWORD *)(v19 + 8 * v20++) = v22;
    }
    while ( v20 != v12 );
    v3 = v33;
  }
  else
  {
    v32 = *(_DWORD *)(a1 + 20);
  }
  v23 = v17 + v12;
  *(_DWORD *)(v31 + 4 * v23) = v3 % 255;
  *(_DWORD *)(v32 + 8 * v23) = v25;
  *(_DWORD *)(v32 + 8 * v23 + 4) = v26;
  *(_DWORD *)(a1 + 352) = v25;
  *(_DWORD *)(a1 + 356) = v26;
  *(_DWORD *)(v31 + 4 * v17) |= 0x100u;
  ++*(_QWORD *)(a1 + 344);
  result = 0;
  *(_DWORD *)(a1 + 28) = v30 + v17;
  if ( v29 )
    *(_DWORD *)(a1 + 328) = 1;
  return result;
}
