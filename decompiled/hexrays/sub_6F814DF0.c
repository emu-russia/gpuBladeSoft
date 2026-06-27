int __cdecl sub_6F814DF0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi@1
  int v6; // ebp@1
  int v7; // esi@2
  int v8; // ecx@3
  int v9; // eax@3
  bool v10; // bl@3
  int result; // eax@3

  v5 = a5;
  v6 = a1;
  do
  {
    v7 = 0;
    do
    {
      v8 = (*(_BYTE *)(a3 + v7) + *(_BYTE *)(a2 + v7)) >> 1;
      v9 = v8 + *(_WORD *)(v5 + 2 * v7);
      v10 = v9 > 255;
      result = ~v9 >> 31;
      *(_BYTE *)(v6 + v7) = result & (-v10 | (v8 + *(_WORD *)(v5 + 2 * v7)));
      ++v7;
    }
    while ( v7 != 8 );
    v6 += a4;
    v5 += 16;
    a2 += a4;
    a3 += a4;
  }
  while ( v5 != a5 + 128 );
  return result;
}
