int __cdecl sub_6F772460(int a1)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 20);
  if ( result )
  {
    result = sub_6F773D90(*(_DWORD *)(a1 + 28), *(_DWORD *)a1);
    *(_DWORD *)a1 = 0;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  return result;
}
