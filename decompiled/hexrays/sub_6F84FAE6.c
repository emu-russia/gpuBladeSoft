int __cdecl sub_6F84FAE6(int a1, int a2, int a3, int a4, signed int a5)
{
  int result; // eax@5

  if ( a5 > 0 && a5 <= 4 )
  {
    if ( !*(_DWORD *)(a1 + 716) )
      sub_6F84FA7F(a1);
    result = (*(int (__cdecl **)(int, int, int))(a1 + 4 * (a5 - 1 + 176) + 12))(a2, a3, a4);
  }
  return result;
}
