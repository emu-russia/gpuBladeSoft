char __cdecl sub_6F86B6A4(int a1, int a2)
{
  int v2; // ebx@6
  int v3; // eax@14
  int v4; // esi@15
  _WORD **v5; // edx@16
  int v6; // ecx@16
  _WORD *v7; // edi@20
  _WORD **v8; // ecx@20
  int v9; // edx@20
  unsigned int v11; // [sp+2Ch] [bp-4Ch]@1
  unsigned int v12; // [sp+30h] [bp-48h]@3
  int v13; // [sp+38h] [bp-40h]@5
  int i; // [sp+3Ch] [bp-3Ch]@1
  int v15; // [sp+40h] [bp-38h]@8
  void (__cdecl *v16)(int, int, _DWORD, _DWORD, int, int, int); // [sp+44h] [bp-34h]@6
  unsigned int v17; // [sp+48h] [bp-30h]@1
  int v18; // [sp+4Ch] [bp-2Ch]@7
  int v19; // [sp+50h] [bp-28h]@9
  int v20; // [sp+54h] [bp-24h]@1
  int v21; // [sp+58h] [bp-20h]@5
  int v22; // [sp+5Ch] [bp-1Ch]@9

  v20 = *(_DWORD *)(a1 + 384);
  v11 = *(_DWORD *)(a1 + 292) - 1;
  v17 = *(_DWORD *)(a1 + 268) - 1;
  for ( i = *(_DWORD *)(v20 + 16); ; ++i )
  {
    if ( i >= *(_DWORD *)(v20 + 20) )
    {
      ++*(_DWORD *)(v20 + 8);
      sub_6F86B168(a1);
      return 1;
    }
    v12 = *(_DWORD *)(v20 + 12);
    if ( v11 >= v12 )
      break;
LABEL_26:
    *(_DWORD *)(v20 + 12) = 0;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 272) > 0 )
    {
      v13 = 0;
      v21 = 0;
      do
      {
        v2 = *(_DWORD *)(a1 + 4 * v13 + 276);
        v16 = *(void (__cdecl **)(int, int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)(a1 + 400)
                                                                          + 4 * *(_DWORD *)(v2 + 4)
                                                                          + 4);
        if ( v11 <= v12 )
          v18 = *(_DWORD *)(v2 + 72);
        else
          v18 = *(_DWORD *)(v2 + 56);
        v15 = *(_DWORD *)(v2 + 68) * v12;
        if ( *(_DWORD *)(v2 + 60) > 0 )
        {
          v19 = i * *(_DWORD *)(v2 + 40);
          v22 = 0;
          while ( 1 )
          {
            if ( v17 <= *(_DWORD *)(v20 + 8) && *(_DWORD *)(v2 + 76) <= i + v22 )
            {
              memset(*(void **)(v20 + 4 * (v21 + 4) + 8), 0, *(_DWORD *)(v2 + 56) << 7);
              v3 = *(_DWORD *)(v2 + 56);
              if ( v3 > 0 )
              {
                v7 = *(_WORD **)(v20 + 4 * v21 + 20);
                v8 = (_WORD **)(v20 + 4 * (v21 + 4) + 8);
                v9 = 0;
                do
                {
                  **v8 = *v7;
                  ++v9;
                  ++v8;
                }
                while ( v9 != v3 );
              }
            }
            else
            {
              v16(a1, v2, *(_DWORD *)(a2 + 4 * *(_DWORD *)(v2 + 4)), *(_DWORD *)(v20 + 4 * v21 + 24), v19, v15, v18);
              v3 = *(_DWORD *)(v2 + 56);
              if ( v18 < v3 )
              {
                v4 = v18 + v21 + 4;
                memset(*(void **)(v20 + 4 * v4 + 8), 0, (v3 - v18) << 7);
                v3 = *(_DWORD *)(v2 + 56);
                if ( v18 < v3 )
                {
                  v5 = (_WORD **)(v20 + 4 * v4 + 8);
                  v6 = v18;
                  do
                  {
                    **v5 = **(v5 - 1);
                    ++v6;
                    ++v5;
                  }
                  while ( v6 != v3 );
                }
              }
            }
            v21 += v3;
            if ( *(_DWORD *)(v2 + 60) <= ++v22 )
              break;
            v19 += *(_DWORD *)(v2 + 40);
          }
        }
        ++v13;
      }
      while ( *(_DWORD *)(a1 + 272) > v13 );
    }
    if ( !(unsigned __int8)(*(int (__cdecl **)(int, int))(*(_DWORD *)(a1 + 404) + 4))(a1, v20 + 24) )
      break;
    if ( v11 < ++v12 )
      goto LABEL_26;
  }
  *(_DWORD *)(v20 + 16) = i;
  *(_DWORD *)(v20 + 12) = v12;
  return 0;
}
