int __cdecl sub_6F83B617(int a1, int a2, int a3, int a4)
{
  int result; // eax@2

  if ( a1 )
  {
    *(_DWORD *)(a1 + 624) = a2;
    *(_DWORD *)(a1 + 628) = a3;
    result = a1;
    *(_DWORD *)(a1 + 632) = a4;
  }
  return result;
}
