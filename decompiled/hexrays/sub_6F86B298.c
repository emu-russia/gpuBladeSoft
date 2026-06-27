char __cdecl sub_6F86B298(int a1)
{
  int v1; // ebx@1
  int v2; // edi@1
  int v3; // eax@9
  int v4; // ecx@9
  _DWORD *v5; // edi@10
  int v6; // ebx@12
  _DWORD *v7; // edx@12
  int v8; // eax@12
  int v10; // [sp+24h] [bp-54h]@4
  int i; // [sp+28h] [bp-50h]@4
  int v12; // [sp+2Ch] [bp-4Ch]@7
  unsigned int v13; // [sp+30h] [bp-48h]@6
  int v14; // [sp+34h] [bp-44h]@8
  int v15; // [sp+3Ch] [bp-3Ch]@1
  int v16; // [sp+40h] [bp-38h]@9
  int v17; // [sp+44h] [bp-34h]@9
  int v18; // [sp+48h] [bp-30h]@8
  int v19; // [sp+4Ch] [bp-2Ch]@10
  int v20[10]; // [sp+50h] [bp-28h]@3

  v15 = *(_DWORD *)(a1 + 384);
  v1 = 0;
  v2 = *(_DWORD *)(a1 + 384);
  while ( v1 < *(_DWORD *)(a1 + 272) )
  {
    v20[v1] = (*(int (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 4) + 32))(
                a1,
                *(_DWORD *)(v2 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 276) + 4) + 64),
                *(_DWORD *)(v2 + 8) * *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 276) + 12),
                *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 276) + 12),
                0);
    ++v1;
  }
  v10 = *(_DWORD *)(v15 + 16);
  for ( i = 4 * v10; ; i += 4 )
  {
    if ( v10 >= *(_DWORD *)(v15 + 20) )
    {
      ++*(_DWORD *)(v15 + 8);
      sub_6F86B168(a1);
      return 1;
    }
    v13 = *(_DWORD *)(v15 + 12);
    if ( v13 < *(_DWORD *)(a1 + 292) )
      break;
LABEL_19:
    *(_DWORD *)(v15 + 12) = 0;
    ++v10;
  }
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 272);
    if ( v12 > 0 )
    {
      v14 = 0;
      v18 = 0;
      do
      {
        v3 = *(_DWORD *)(a1 + 4 * v14 + 276);
        v4 = *(_DWORD *)(v3 + 56);
        v17 = *(_DWORD *)(v3 + 56);
        v16 = *(_DWORD *)(v3 + 60);
        if ( v16 > 0 )
        {
          v5 = (_DWORD *)(v20[v14] + i);
          v19 = 0;
          do
          {
            if ( v17 > 0 )
            {
              v6 = (v4 << 7) * v13 + *v5;
              v7 = (_DWORD *)(v15 + 4 * v18 + 24);
              v8 = 0;
              do
              {
                *v7 = v6 + v8;
                v8 += 128;
                ++v7;
              }
              while ( v4 << 7 != v8 );
              v18 += v17;
            }
            ++v19;
            ++v5;
          }
          while ( v19 != v16 );
        }
        ++v14;
      }
      while ( v14 != v12 );
    }
    if ( !(unsigned __int8)(*(int (__cdecl **)(int, int))(*(_DWORD *)(a1 + 404) + 4))(a1, v15 + 24) )
      break;
    if ( *(_DWORD *)(a1 + 292) <= ++v13 )
      goto LABEL_19;
  }
  *(_DWORD *)(v15 + 16) = v10;
  *(_DWORD *)(v15 + 12) = v13;
  return 0;
}
