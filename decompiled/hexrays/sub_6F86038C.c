int __cdecl sub_6F86038C(int a1, int a2, int *a3, unsigned int a4, int a5, int *a6, unsigned int a7)
{
  int v7; // esi@1
  int result; // eax@1
  unsigned int v9; // edi@2
  int v10; // ecx@5
  int v11; // edx@5
  int v12; // edi@7
  int v13; // edx@12
  int v14; // eax@12
  int v15; // eax@14
  int v16; // ecx@17
  int v17; // ecx@25
  int v18; // esi@25
  signed int v19; // edi@27
  int v20; // eax@27
  int v21; // esi@27
  int v22; // ecx@27
  int v23; // [sp+20h] [bp-28h]@28
  int v24; // [sp+24h] [bp-24h]@1
  int v25; // [sp+28h] [bp-20h]@1
  int v26; // [sp+2Ch] [bp-1Ch]@17

  v7 = *(_DWORD *)(a1 + 380);
  v24 = 3 * *(_DWORD *)(a1 + 256);
  result = v7 + 8;
  v25 = v7 + 8;
  while ( 1 )
  {
    v9 = *a6;
    if ( a7 <= *a6 )
      return result;
    while ( 1 )
    {
      result = *a3;
      if ( *a3 < a4 )
      {
        v16 = *(_DWORD *)(v7 + 52);
        v26 = a4 - result;
        if ( a4 - result > *(_DWORD *)(v7 + 60) - v16 )
          v26 = *(_DWORD *)(v7 + 60) - v16;
        (*(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)(a1 + 392) + 4))(a1, a2 + 4 * result, v25, v16, v26);
        if ( *(_DWORD *)(v7 + 48) == *(_DWORD *)(a1 + 32) && *(_DWORD *)(a1 + 76) > 0 )
        {
          v17 = v7;
          v18 = 0;
          do
          {
            if ( *(_DWORD *)(a1 + 256) > 0 )
            {
              v19 = 1;
              v20 = v18;
              v21 = v17;
              v22 = v20;
              do
              {
                v23 = v22;
                sub_6F868CF4(
                  *(_DWORD *)(v21 + 4 * v22 + 8),
                  0,
                  *(_DWORD *)(v21 + 4 * v22 + 8),
                  -v19++,
                  1,
                  *(_DWORD *)(a1 + 28));
                v22 = v23;
              }
              while ( *(_DWORD *)(a1 + 256) >= v19 );
              v17 = v21;
              v18 = v23;
            }
            ++v18;
          }
          while ( *(_DWORD *)(a1 + 76) > v18 );
          v7 = v17;
        }
        *a3 += v26;
        v10 = *(_DWORD *)(v7 + 52) + v26;
        *(_DWORD *)(v7 + 52) = v10;
        *(_DWORD *)(v7 + 48) -= v26;
        v11 = *(_DWORD *)(v7 + 60);
        result = (int)a6;
        v9 = *a6;
        goto LABEL_21;
      }
      if ( *(_DWORD *)(v7 + 48) )
        return result;
      v10 = *(_DWORD *)(v7 + 52);
      v11 = *(_DWORD *)(v7 + 60);
      if ( v10 < v11 )
        break;
LABEL_21:
      if ( v10 == v11 )
        goto LABEL_12;
      if ( a7 <= v9 )
        return result;
    }
    if ( *(_DWORD *)(a1 + 76) > 0 )
    {
      v12 = 0;
      while ( 1 )
      {
        sub_6F8601B8(*(_DWORD *)(v7 + 4 * v12++ + 8), *(_DWORD *)(a1 + 28), v10, v11);
        if ( *(_DWORD *)(a1 + 76) <= v12 )
          break;
        v11 = *(_DWORD *)(v7 + 60);
        v10 = *(_DWORD *)(v7 + 52);
      }
      v11 = *(_DWORD *)(v7 + 60);
    }
    *(_DWORD *)(v7 + 52) = v11;
    v9 = *a6;
LABEL_12:
    (*(void (__cdecl **)(int, int, _DWORD, int, unsigned int))(*(_DWORD *)(a1 + 396) + 4))(
      a1,
      v25,
      *(_DWORD *)(v7 + 56),
      a5,
      v9);
    ++*a6;
    v13 = *(_DWORD *)(a1 + 256);
    v14 = v13 + *(_DWORD *)(v7 + 56);
    *(_DWORD *)(v7 + 56) = v14;
    if ( v24 <= v14 )
      *(_DWORD *)(v7 + 56) = 0;
    v15 = *(_DWORD *)(v7 + 52);
    if ( v24 <= v15 )
    {
      *(_DWORD *)(v7 + 52) = 0;
      v15 = 0;
    }
    result = v13 + v15;
    *(_DWORD *)(v7 + 60) = result;
  }
}
