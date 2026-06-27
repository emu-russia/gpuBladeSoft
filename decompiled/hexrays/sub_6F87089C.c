signed int __cdecl sub_6F87089C(int a1)
{
  int v1; // ebx@1
  int v2; // edi@1
  int v3; // eax@9
  int v4; // ecx@9
  _DWORD *v5; // edi@10
  int v6; // ebx@12
  _DWORD *v7; // edx@12
  int v8; // eax@12
  signed int result; // eax@20
  unsigned int v10; // eax@22
  int v11; // [sp+24h] [bp-54h]@4
  int i; // [sp+28h] [bp-50h]@4
  int v13; // [sp+2Ch] [bp-4Ch]@7
  unsigned int v14; // [sp+30h] [bp-48h]@6
  int v15; // [sp+34h] [bp-44h]@8
  int v16; // [sp+3Ch] [bp-3Ch]@1
  int v17; // [sp+40h] [bp-38h]@9
  int v18; // [sp+44h] [bp-34h]@9
  int v19; // [sp+48h] [bp-30h]@8
  int v20; // [sp+4Ch] [bp-2Ch]@10
  int v21[10]; // [sp+50h] [bp-28h]@3

  v16 = *(_DWORD *)(a1 + 408);
  v1 = 0;
  v2 = *(_DWORD *)(a1 + 408);
  while ( v1 < *(_DWORD *)(a1 + 296) )
  {
    v21[v1] = (*(int (__cdecl **)(int, _DWORD, int, _DWORD, signed int))(*(_DWORD *)(a1 + 4) + 32))(
                a1,
                *(_DWORD *)(v2 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 300) + 4) + 72),
                *(_DWORD *)(a1 + 128) * *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 300) + 12),
                *(_DWORD *)(*(_DWORD *)(a1 + 4 * v1 + 300) + 12),
                1);
    ++v1;
  }
  v11 = *(_DWORD *)(v16 + 24);
  for ( i = 4 * v11; ; i += 4 )
  {
    if ( v11 >= *(_DWORD *)(v16 + 28) )
    {
      v10 = *(_DWORD *)(a1 + 128) + 1;
      *(_DWORD *)(a1 + 128) = v10;
      if ( v10 >= *(_DWORD *)(a1 + 288) )
      {
        (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 416) + 12))(a1);
        result = 4;
      }
      else
      {
        sub_6F870808(a1);
        result = 3;
      }
      return result;
    }
    v14 = *(_DWORD *)(v16 + 20);
    if ( v14 < *(_DWORD *)(a1 + 316) )
      break;
LABEL_19:
    *(_DWORD *)(v16 + 20) = 0;
    ++v11;
  }
  while ( 1 )
  {
    v13 = *(_DWORD *)(a1 + 296);
    if ( v13 > 0 )
    {
      v15 = 0;
      v19 = 0;
      do
      {
        v3 = *(_DWORD *)(a1 + 4 * v15 + 300);
        v4 = *(_DWORD *)(v3 + 56);
        v18 = *(_DWORD *)(v3 + 56);
        v17 = *(_DWORD *)(v3 + 60);
        if ( v17 > 0 )
        {
          v5 = (_DWORD *)(v21[v15] + i);
          v20 = 0;
          do
          {
            if ( v18 > 0 )
            {
              v6 = (v4 << 7) * v14 + *v5;
              v7 = (_DWORD *)(v16 + 4 * v19 + 32);
              v8 = 0;
              do
              {
                *v7 = v6 + v8;
                v8 += 128;
                ++v7;
              }
              while ( v4 << 7 != v8 );
              v19 += v18;
            }
            ++v20;
            ++v5;
          }
          while ( v20 != v17 );
        }
        ++v15;
      }
      while ( v15 != v13 );
    }
    if ( !(unsigned __int8)(*(int (__cdecl **)(int, int))(*(_DWORD *)(a1 + 424) + 4))(a1, v16 + 32) )
      break;
    if ( *(_DWORD *)(a1 + 316) <= ++v14 )
      goto LABEL_19;
  }
  *(_DWORD *)(v16 + 24) = v11;
  *(_DWORD *)(v16 + 20) = v14;
  return 0;
}
