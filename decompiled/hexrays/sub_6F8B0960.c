int *__cdecl sub_6F8B0960(int a1, int a2)
{
  int v2; // ebp@1
  int v3; // esi@1
  int v4; // ebx@1
  int v5; // edi@1
  int *v6; // eax@3
  _DWORD *v7; // eax@4
  unsigned int v8; // esi@10
  _DWORD *v9; // ebp@10
  unsigned __int64 v10; // rax@11
  int v11; // eax@15
  unsigned int v13; // [sp+14h] [bp-48h]@10
  unsigned int v14; // [sp+18h] [bp-44h]@6
  unsigned int v15; // [sp+1Ch] [bp-40h]@10
  unsigned int v16; // [sp+20h] [bp-3Ch]@6
  _DWORD *v17; // [sp+24h] [bp-38h]@6
  unsigned int v18; // [sp+28h] [bp-34h]@6
  int v19; // [sp+2Ch] [bp-30h]@3
  int v20; // [sp+30h] [bp-2Ch]@6
  int *v21; // [sp+34h] [bp-28h]@3
  _DWORD *v22; // [sp+38h] [bp-24h]@4
  unsigned int i; // [sp+3Ch] [bp-20h]@4

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 16);
  if ( v4 >= v5 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v4 = *(_DWORD *)(a2 + 16);
    v3 = a1;
    v2 = a2;
  }
  v19 = v5 + v4;
  v6 = sub_6F8B0700(*(_DWORD *)(v3 + 4) + (*(_DWORD *)(v3 + 8) < v5 + v4));
  v21 = v6;
  if ( v6 )
  {
    v7 = v6 + 5;
    v22 = v7;
    for ( i = (unsigned int)&v7[v19]; i > (unsigned int)v7; ++v7 )
      *v7 = 0;
    v20 = v3 + 20;
    v16 = v3 + 20 + 4 * v5;
    v14 = v2 + 20;
    v18 = v2 + 20 + 4 * v4;
    v17 = v22;
    if ( v2 + 20 < v18 )
    {
      do
      {
        while ( 1 )
        {
          v14 += 4;
          if ( *(_DWORD *)(v14 - 4) )
            break;
          ++v17;
          if ( v18 <= v14 )
            goto LABEL_13;
        }
        v15 = *(_DWORD *)(v14 - 4);
        v8 = 0;
        v13 = v20;
        v9 = v17;
        do
        {
          v13 += 4;
          v10 = v8 + *v9 + *(_DWORD *)(v13 - 4) * (unsigned __int64)v15;
          ++v9;
          v8 = HIDWORD(v10);
          *(v9 - 1) = v10;
        }
        while ( v16 > v13 );
        ++v17;
        *v9 = HIDWORD(v10);
      }
      while ( v18 > v14 );
    }
LABEL_13:
    if ( v19 > 0 && !*(_DWORD *)(i - 4) )
    {
      v11 = v5 + v4;
      do
        --v11;
      while ( v11 && !v22[v11 - 1] );
      v19 = v11;
    }
    v21[4] = v19;
  }
  return v21;
}
