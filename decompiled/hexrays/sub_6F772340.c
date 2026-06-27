int __cdecl sub_6F772340(int a1, _DWORD *a2)
{
  int result; // eax@1

  result = a1;
  if ( a1 && *(_DWORD *)(a1 + 20) )
    result = sub_6F773D90(*(_DWORD *)(a1 + 28), *a2);
  *a2 = 0;
  return result;
}
