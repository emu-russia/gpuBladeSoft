int __cdecl sub_6F871C8C(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // ebx@1
  int v6; // esi@1
  int result; // eax@1
  int v8; // edi@5
  _BYTE *v9; // edx@6
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@2
  int v12; // [sp+8h] [bp-10h]@4

  v5 = *(_DWORD *)(a1 + 36);
  v6 = *(_DWORD *)(a1 + 92);
  result = a5 - 1;
  v10 = a5 - 1;
  if ( a5 - 1 >= 0 )
  {
    result = 4 * a3;
    v11 = 4 * a3;
    while ( 1 )
    {
      if ( v5 > 0 )
      {
        v12 = 0;
        do
        {
          result = *(_DWORD *)(a2 + 4 * v12);
          v8 = *(_DWORD *)(result + v11);
          if ( v6 )
          {
            v9 = (_BYTE *)(v12 + *a4);
            result = 0;
            do
            {
              *v9 = *(_BYTE *)(v8 + result);
              v9 += v5;
              ++result;
            }
            while ( result != v6 );
          }
          ++v12;
        }
        while ( v12 != v5 );
      }
      --v10;
      v11 += 4;
      if ( v10 == -1 )
        break;
      ++a4;
    }
  }
  return result;
}
