int __cdecl sub_6F8A1B90(int a1, int a2)
{
  int result; // eax@1

  result = a2 - 1;
  *(_DWORD *)(*(_DWORD *)a1 + 4) = a2 - 1;
  return result;
}
