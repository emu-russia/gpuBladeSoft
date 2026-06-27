int __cdecl sub_6F8A1B40(int *a1, int a2, int a3)
{
  int result; // eax@1

  result = *a1;
  *(_DWORD *)(*a1 + 4 * a2 + 8) = a3;
  return result;
}
