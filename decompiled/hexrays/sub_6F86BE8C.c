unsigned int __cdecl sub_6F86BE8C(int a1, int *a2, int a3, int a4, int a5)
{
  unsigned int v5; // esi@1
  unsigned int result; // eax@1
  int v7; // ebx@4
  int v8; // edx@5
  int v9; // edi@5
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@2
  int v12; // [sp+8h] [bp-10h]@1

  v12 = *(_DWORD *)(a1 + 76);
  v5 = *(_DWORD *)(a1 + 28);
  result = a5 - 1;
  v10 = a5 - 1;
  if ( a5 - 1 >= 0 )
  {
    result = 4 * a4;
    v11 = 4 * a4;
    while ( 1 )
    {
      if ( v12 > 0 )
      {
        v7 = 0;
        do
        {
          v8 = *a2;
          result = *(_DWORD *)(a3 + 4 * v7);
          v9 = *(_DWORD *)(result + v11);
          if ( v5 )
          {
            result = 0;
            do
            {
              *(_BYTE *)(v9 + result) = *(_BYTE *)(v8 + v7);
              v8 += v12;
              ++result;
            }
            while ( v5 > result );
          }
          ++v7;
        }
        while ( v7 != v12 );
      }
      --v10;
      v11 += 4;
      if ( v10 == -1 )
        break;
      ++a2;
    }
  }
  return result;
}
