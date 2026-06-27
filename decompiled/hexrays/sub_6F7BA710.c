signed int __cdecl sub_6F7BA710(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // edx@1
  int v4; // eax@1
  unsigned int v5; // eax@2
  unsigned int v6; // edi@5
  int *v7; // esi@6
  int v8; // ebx@7
  int v9; // edi@7
  int i; // edx@10
  int v11; // ecx@11
  int v12; // ebp@11
  int v13; // eax@14
  int v14; // eax@15
  unsigned int v15; // edx@15
  int v16; // eax@17
  unsigned int v17; // edi@18
  int v18; // eax@19
  unsigned int v19; // ebp@21
  int v20; // esi@22
  unsigned int v21; // ebx@23
  unsigned int v22; // eax@23
  int v23; // edx@25
  signed __int64 v24; // rax@28
  unsigned int v26; // [sp+18h] [bp-74h]@5
  int v27; // [sp+1Ch] [bp-70h]@5
  int v28; // [sp+1Ch] [bp-70h]@21
  int *v29; // [sp+20h] [bp-6Ch]@6
  int v30; // [sp+20h] [bp-6Ch]@22
  unsigned int v31; // [sp+24h] [bp-68h]@5
  unsigned int v32; // [sp+28h] [bp-64h]@4
  int v33; // [sp+2Ch] [bp-60h]@1
  int v34[23]; // [sp+30h] [bp-5Ch]@16

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 528);
  v33 = *(_DWORD *)(a1 + 528);
  if ( !v4 )
    return 6;
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 <= a2 )
    v3 = v5;
  v32 = v3;
  if ( !v5 )
  {
    v17 = 0;
    v15 = 0;
    v16 = *(_DWORD *)(a1 + 528);
LABEL_19:
    v18 = *(_DWORD *)v16;
    if ( v17 <= v15 )
      v15 = v17;
    v19 = v15;
    v28 = v18;
    if ( v18 )
    {
      v20 = 0;
      v30 = *(_DWORD *)(v33 + 136);
      do
      {
        v21 = 0;
        v22 = 0x10000;
        if ( v17 )
        {
          do
          {
            v23 = 0x8000;
            if ( v19 > v21 )
            {
              v23 = v34[v21];
              if ( v23 < 0 )
              {
                v23 = 0;
              }
              else if ( v23 >= 65537 )
              {
                v23 = 0x10000;
              }
            }
            if ( !((1 << v21) & v20) )
              v23 = 0x10000 - v23;
            v24 = (unsigned int)(((signed int)((unsigned __int64)(v23 * (signed __int64)(signed int)v22) >> 32) >> 31)
                               + 0x8000)
                + v23 * (signed __int64)(signed int)v22;
            v22 = (HIDWORD(v24) << 16) + ((unsigned int)v24 >> 16);
            ++v21;
          }
          while ( v17 != v21 );
        }
        *(_DWORD *)(v30 + 4 * v20++) = v22;
      }
      while ( v20 != v28 );
    }
    return 0;
  }
  v26 = 0;
  v31 = v5;
  v27 = *(_DWORD *)(a1 + 528) + 88;
  v6 = 0;
  do
  {
    v7 = *(int **)(v27 + 4);
    v29 = *(int **)(v27 + 8);
    if ( v32 <= v6 )
    {
      v9 = *(_BYTE *)v27;
      v8 = (v7[v9 - 1] - *v7) / 2;
      if ( !*(_BYTE *)v27 )
      {
LABEL_37:
        v15 = v31;
        v14 = *v29;
        goto LABEL_16;
      }
    }
    else
    {
      v8 = *(_DWORD *)(a3 + 4 * v6);
      v9 = *(_BYTE *)v27;
      if ( !*(_BYTE *)v27 )
        goto LABEL_37;
    }
    if ( v8 == *v7 )
    {
      v12 = 0;
LABEL_39:
      v15 = v31;
      v14 = v29[v12];
    }
    else
    {
      if ( v8 < *v7 )
        goto LABEL_37;
      for ( i = 0; ; ++i )
      {
        v13 = i + 1;
        if ( i + 1 == v9 )
        {
          v14 = v29[i];
          v15 = v31;
          goto LABEL_16;
        }
        v11 = v7[v13];
        v12 = v13;
        if ( v8 == v11 )
          goto LABEL_39;
        if ( v8 < v11 )
          break;
      }
      v14 = sub_6F7C9420(v8 - v7[i], v29[v12] - v29[i], v11 - v7[i]);
      v15 = *(_DWORD *)(v33 + 4);
    }
LABEL_16:
    v27 += 12;
    v31 = v15;
    v34[v26] = v14;
    v6 = v26 + 1;
    v26 = v6;
  }
  while ( v6 < v15 );
  v16 = *(_DWORD *)(a1 + 528);
  v33 = *(_DWORD *)(a1 + 528);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 4);
    goto LABEL_19;
  }
  return 6;
}
