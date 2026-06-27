int __cdecl sub_6F791510(int a1)
{
  int result; // eax@1

  result = sub_6F773D90(*(_DWORD *)(*(_DWORD *)a1 + 100), *(_DWORD *)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
