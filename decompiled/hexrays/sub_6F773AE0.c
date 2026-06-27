unsigned int __cdecl sub_6F773AE0(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int result; // eax@2

  if ( (signed int)a2 <= 0 )
  {
    result = 0;
    *a3 = a2 >= 1 ? 6 : 0;
  }
  else
  {
    result = (*(int (__cdecl **)(int, unsigned int))(a1 + 4))(a1, a2);
    *a3 = result < 1 ? 0x40 : 0;
  }
  return result;
}
