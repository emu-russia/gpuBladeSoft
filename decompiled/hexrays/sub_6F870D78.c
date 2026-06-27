signed int __cdecl sub_6F870D78(int a1, int a2)
{
  int v2; // eax@9
  int v3; // edx@14
  int v4; // ecx@16
  _DWORD *v5; // edi@21
  int v6; // esi@21
  int v7; // ebx@21
  signed int result; // eax@27
  unsigned int v9; // eax@29
  int v10; // [sp+28h] [bp-50h]@22
  unsigned int v11; // [sp+30h] [bp-48h]@1
  unsigned int v12; // [sp+34h] [bp-44h]@3
  int i; // [sp+38h] [bp-40h]@1
  int v14; // [sp+3Ch] [bp-3Ch]@1
  int v15; // [sp+40h] [bp-38h]@16
  int v16; // [sp+44h] [bp-34h]@8
  unsigned int v17; // [sp+48h] [bp-30h]@1
  int v18; // [sp+4Ch] [bp-2Ch]@8
  int v19; // [sp+50h] [bp-28h]@17
  void (__cdecl *v20)(int, int, _DWORD, int, int); // [sp+54h] [bp-24h]@14
  int v21; // [sp+58h] [bp-20h]@15
  int v22; // [sp+5Ch] [bp-1Ch]@17

  v14 = *(_DWORD *)(a1 + 408);
  v11 = *(_DWORD *)(a1 + 316) - 1;
  v17 = *(_DWORD *)(a1 + 288) - 1;
  for ( i = *(_DWORD *)(v14 + 24); ; ++i )
  {
    if ( i >= *(_DWORD *)(v14 + 28) )
    {
      ++*(_DWORD *)(a1 + 136);
      v9 = *(_DWORD *)(a1 + 128) + 1;
      *(_DWORD *)(a1 + 128) = v9;
      if ( v9 >= *(_DWORD *)(a1 + 288) )
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
    v12 = *(_DWORD *)(v14 + 20);
    if ( v11 >= v12 )
      break;
LABEL_13:
    *(_DWORD *)(v14 + 20) = 0;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 392) )
      memset(*(void **)(v14 + 32), 0, *(_DWORD *)(a1 + 324) << 7);
    if ( !(unsigned __int8)(*(int (__cdecl **)(int, int))(*(_DWORD *)(a1 + 424) + 4))(a1, v14 + 32) )
      break;
    if ( *(_DWORD *)(a1 + 296) > 0 )
    {
      v16 = 0;
      v18 = 0;
      do
      {
        v2 = *(_DWORD *)(a1 + 4 * v16 + 300);
        if ( *(_BYTE *)(v2 + 52) )
        {
          v3 = *(_DWORD *)(v2 + 4);
          v20 = *(void (__cdecl **)(int, int, _DWORD, int, int))(*(_DWORD *)(a1 + 428) + 4 * v3 + 4);
          if ( v11 <= v12 )
            v21 = *(_DWORD *)(v2 + 72);
          else
            v21 = *(_DWORD *)(v2 + 56);
          v4 = *(_DWORD *)(v2 + 40);
          v15 = *(_DWORD *)(v2 + 68) * v12;
          if ( *(_DWORD *)(v2 + 60) > 0 )
          {
            v22 = *(_DWORD *)(a2 + 4 * v3) + 4 * v4 * i;
            v19 = 0;
            while ( 1 )
            {
              if ( (v17 > *(_DWORD *)(a1 + 128) || *(_DWORD *)(v2 + 76) > v19 + i) && v21 > 0 )
              {
                v5 = (_DWORD *)(v14 + 4 * v18 + 32);
                v6 = v15;
                v7 = 0;
                do
                {
                  v10 = v2;
                  v20(a1, v2, *v5, v22, v6);
                  v2 = v10;
                  v6 += *(_DWORD *)(v10 + 36);
                  ++v7;
                  ++v5;
                }
                while ( v21 > v7 );
                v4 = *(_DWORD *)(v10 + 40);
              }
              v18 += *(_DWORD *)(v2 + 56);
              if ( *(_DWORD *)(v2 + 60) <= ++v19 )
                break;
              v22 += 4 * v4;
            }
          }
        }
        else
        {
          v18 += *(_DWORD *)(v2 + 64);
        }
        ++v16;
      }
      while ( *(_DWORD *)(a1 + 296) > v16 );
    }
    if ( v11 < ++v12 )
      goto LABEL_13;
  }
  *(_DWORD *)(v14 + 24) = i;
  *(_DWORD *)(v14 + 20) = v12;
  return 0;
}
