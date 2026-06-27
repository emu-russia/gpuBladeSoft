int __cdecl sub_6F8607A8(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi@1
  int result; // eax@1
  int v7; // ebx@2
  int v8; // edi@2
  int v9; // edx@2
  int v10; // ST14_4@3

  v5 = *(_DWORD *)(a1 + 84);
  result = *(_DWORD *)(a1 + 76);
  if ( result > 0 )
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 396);
    v9 = a1;
    do
    {
      v10 = v9;
      result = (*(int (__cdecl **)(int, int, int, int))(v8 + 4 * v7 + 12))(
                 v9,
                 v5,
                 *(_DWORD *)(a2 + 4 * v7) + 4 * a3,
                 *(_DWORD *)(a4 + 4 * v7) + *(_DWORD *)(v8 + 4 * v7 + 52) * 4 * a5);
      ++v7;
      v5 += 88;
      v9 = v10;
    }
    while ( *(_DWORD *)(v10 + 76) > v7 );
  }
  return result;
}
