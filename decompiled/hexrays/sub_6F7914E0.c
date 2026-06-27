int __cdecl sub_6F7914E0(int a1)
{
  int result; // eax@1

  result = sub_6F773D90(*(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
