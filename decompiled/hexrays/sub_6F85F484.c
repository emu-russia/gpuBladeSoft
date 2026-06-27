int __cdecl sub_6F85F484(int a1)
{
  int result; // eax@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 0, 274);
  *(_BYTE *)(result + 273) = 0;
  return result;
}
