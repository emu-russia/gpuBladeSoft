int __cdecl sub_6F8348B4(int a1, int a2)
{
  int result; // eax@2

  if ( a1 )
  {
    result = a1;
    *(_DWORD *)(a1 + 96) = a2;
  }
  return result;
}
