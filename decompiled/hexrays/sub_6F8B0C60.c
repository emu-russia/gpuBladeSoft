int *__cdecl sub_6F8B0C60(int a1, signed int a2)
{
  void *v2; // ebp@1
  signed int v3; // esi@1
  signed int v4; // edx@1
  int v5; // eax@1
  int v6; // ebx@1
  int i; // eax@1
  int *v8; // eax@3
  _DWORD *v9; // edi@4
  int v10; // ecx@5
  int v11; // edx@5
  int v12; // eax@5
  int v13; // eax@8
  _DWORD *v14; // esi@8
  unsigned int v15; // edx@8
  int v16; // eax@9
  int v17; // edx@10
  _DWORD *v19; // edi@16
  _DWORD *v20; // esi@16
  unsigned int v21; // [sp+1Ch] [bp-30h]@9
  int *v22; // [sp+20h] [bp-2Ch]@3
  int v23; // [sp+24h] [bp-28h]@1

  v2 = (void *)a1;
  v3 = a2 >> 5;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = (a2 >> 5) + *(_DWORD *)(a1 + 16);
  v23 = v5;
  v6 = v5 + 1;
  for ( i = *(_DWORD *)(a1 + 8); v6 > i; ++v4 )
    i *= 2;
  v8 = sub_6F8B0700(v4);
  v22 = v8;
  if ( v8 )
  {
    v9 = v8 + 5;
    if ( v3 > 0 )
    {
      v10 = 4 * v3 + 20;
      v11 = (int)v8 + v10;
      v12 = (int)(v8 + 5);
      do
      {
        v12 += 4;
        *(_DWORD *)(v12 - 4) = 0;
      }
      while ( v11 != v12 );
      v9 = (_DWORD *)((char *)v9 + v10 - 20);
    }
    v13 = *(_DWORD *)(a1 + 16);
    v14 = (_DWORD *)(a1 + 20);
    v15 = a1 + 20 + 4 * v13;
    if ( a2 & 0x1F )
    {
      v21 = a1 + 20 + 4 * v13;
      v16 = 0;
      do
      {
        v17 = *v14;
        ++v9;
        ++v14;
        *(v9 - 1) = (v17 << (a2 & 0x1F)) | v16;
        v16 = *(v14 - 1) >> (32 - (a2 & 0x1F));
      }
      while ( v21 > (unsigned int)v14 );
      if ( !v16 )
        v6 = v23;
      *v9 = v16;
      v2 = (void *)a1;
      v23 = v6;
    }
    else
    {
      do
      {
        *v9 = *v14;
        v20 = v14 + 1;
        v19 = v9 + 1;
        if ( v15 <= (unsigned int)v20 )
          break;
        *v19 = *v20;
        v14 = v20 + 1;
        v9 = v19 + 1;
      }
      while ( v15 > (unsigned int)v14 );
    }
    v22[4] = v23;
    sub_6F8B07F0(v2);
  }
  return v22;
}
