char __cdecl sub_6F86B44C(int a1, int a2)
{
  unsigned int v2; // ebx@5
  int v3; // esi@5
  int v4; // eax@8
  int v5; // ebx@8
  int v6; // edi@9
  _WORD *v7; // edx@10
  __int16 v8; // cx@10
  int v9; // eax@10
  unsigned int v10; // esi@20
  int v11; // edx@22
  char *v12; // edi@23
  unsigned int v13; // esi@23
  __int16 v14; // cx@24
  char *v15; // edx@25
  int v16; // eax@25
  unsigned int v18; // [sp+2Ch] [bp-4Ch]@1
  int v19; // [sp+30h] [bp-48h]@1
  unsigned int v20; // [sp+34h] [bp-44h]@8
  unsigned int v21; // [sp+3Ch] [bp-3Ch]@8
  unsigned int v22; // [sp+3Ch] [bp-3Ch]@21
  int v23; // [sp+40h] [bp-38h]@2
  int v24; // [sp+48h] [bp-30h]@3
  int v25; // [sp+4Ch] [bp-2Ch]@4
  int v26; // [sp+50h] [bp-28h]@1
  unsigned int v27; // [sp+54h] [bp-24h]@20
  void (__cdecl *v28)(int, int, _DWORD, _DWORD, int, _DWORD, unsigned int); // [sp+58h] [bp-20h]@7
  unsigned int v29; // [sp+58h] [bp-20h]@21
  unsigned int v30; // [sp+5Ch] [bp-1Ch]@5
  char *v31; // [sp+5Ch] [bp-1Ch]@22

  v19 = *(_DWORD *)(a1 + 384);
  v18 = *(_DWORD *)(a1 + 268) - 1;
  v26 = *(_DWORD *)(a1 + 84);
  if ( *(_DWORD *)(a1 + 76) > 0 )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = (*(int (__cdecl **)(int, _DWORD, int, _DWORD, signed int))(*(_DWORD *)(a1 + 4) + 32))(
              a1,
              *(_DWORD *)(v19 + 4 * v23 + 64),
              *(_DWORD *)(v19 + 8) * *(_DWORD *)(v26 + 12),
              *(_DWORD *)(v26 + 12),
              1);
      if ( v18 <= *(_DWORD *)(v19 + 8) )
      {
        v25 = *(_DWORD *)(v26 + 32) % *(_DWORD *)(v26 + 12);
        if ( !v25 )
          v25 = *(_DWORD *)(v26 + 12);
      }
      else
      {
        v25 = *(_DWORD *)(v26 + 12);
      }
      v30 = *(_DWORD *)(v26 + 28);
      v2 = *(_DWORD *)(v26 + 8);
      v3 = v30 % v2;
      if ( (signed int)(v30 % v2) > 0 )
        v3 = v2 - v30 % v2;
      v28 = *(void (__cdecl **)(int, int, _DWORD, _DWORD, int, _DWORD, unsigned int))(*(_DWORD *)(a1 + 400) + 4 * v23 + 4);
      if ( v25 > 0 )
      {
        v4 = *(_DWORD *)(v26 + 40);
        v21 = v30 << 7;
        v20 = *(_DWORD *)(v26 + 8);
        v5 = 0;
        while ( 1 )
        {
          v6 = *(_DWORD *)(v24 + 4 * v5);
          v28(a1, v26, *(_DWORD *)(a2 + 4 * v23), *(_DWORD *)(v24 + 4 * v5), v5 * v4, 0, v30);
          if ( v3 > 0 )
          {
            v7 = (_WORD *)(v6 + v21);
            memset((void *)(v6 + v21), 0, v3 << 7);
            v8 = *(_WORD *)(v6 + v21 - 128);
            v9 = 0;
            do
            {
              *v7 = v8;
              ++v9;
              v7 += 64;
            }
            while ( v9 != v3 );
          }
          if ( v25 <= ++v5 )
            break;
          v4 = *(_DWORD *)(v26 + 40);
        }
        v2 = v20;
      }
      if ( *(_DWORD *)(v19 + 8) == v18 )
      {
        v10 = v30 + v3;
        v27 = v10 / v2;
        if ( v25 < *(_DWORD *)(v26 + 12) )
        {
          v22 = v10 << 7;
          v29 = v2 << 7;
          do
          {
            v31 = *(char **)(v24 + 4 * v25);
            v11 = *(_DWORD *)(v24 + 4 * v25 - 4);
            memset(v31, 0, v22);
            if ( v27 )
            {
              v12 = (char *)(v11 + ((v2 - 1) << 7));
              v13 = 0;
              while ( 1 )
              {
                v14 = *(_WORD *)v12;
                if ( (signed int)v2 > 0 )
                {
                  v15 = v31;
                  v16 = 0;
                  do
                  {
                    *(_WORD *)v15 = v14;
                    ++v16;
                    v15 += 128;
                  }
                  while ( v16 != v2 );
                }
                ++v13;
                v12 += v29;
                if ( v27 <= v13 )
                  break;
                v31 += v29;
              }
            }
            ++v25;
          }
          while ( *(_DWORD *)(v26 + 12) > v25 );
        }
      }
      if ( *(_DWORD *)(a1 + 76) <= ++v23 )
        break;
      v26 += 88;
    }
  }
  return sub_6F86B298(a1);
}
