int __cdecl sub_6F8AA020(int a1, int a2)
{
  signed int v2; // edx@1
  int result; // eax@1
  unsigned __int16 v4; // ax@2

  v2 = 7;
  LOWORD(result) = 0;
  do
  {
    v4 = *(_WORD *)(a2 + 2 * v2 + 2) + *(_WORD *)(a1 + 2 * v2 + 2) + result;
    *(_WORD *)(a2 + 2 * v2 + 2) = v4;
    result = v4 >> 16;
    --v2;
  }
  while ( v2 );
  return result;
}
