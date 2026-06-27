int __cdecl sub_6F839BE3(int a1, int a2, int a3, int a4)
{
  int result; // eax@2

  if ( a1 )
  {
    *(_DWORD *)(a1 + 84) = a2;
    *(_DWORD *)(a1 + 76) = a3;
    result = a1;
    *(_DWORD *)(a1 + 80) = a4;
  }
  return result;
}
