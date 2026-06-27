int __cdecl sub_6F839DC8(int a1, int a2, int a3)
{
  int result; // eax@3

  if ( a1 && a2 )
    result = a3 & *(_DWORD *)(a2 + 8);
  else
    result = 0;
  return result;
}
