signed int __cdecl sub_6F83AFB9(int a1, int a2, _DWORD *a3)
{
  signed int result; // eax@5

  if ( a1 && a2 && *(_DWORD *)(a2 + 8) & 2 && a3 )
  {
    *a3 = a2 + 148;
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
