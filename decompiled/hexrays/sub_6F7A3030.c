signed int __cdecl sub_6F7A3030(int a1, int a2)
{
  signed int result; // eax@1

  result = (*(int (__cdecl **)(int, signed int, int, int))(a1 + 508))(a1, 1668112752, a2, a1 + 504);
  if ( !result )
  {
    result = sub_6F772240(a2, *(_DWORD *)(a1 + 504), (int *)(a1 + 500));
    if ( result )
      *(_DWORD *)(a1 + 504) = 0;
  }
  return result;
}
