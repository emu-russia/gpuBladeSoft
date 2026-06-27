int __cdecl sub_6F85F458(int a1)
{
  int result; // eax@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 0, 130);
  *(_BYTE *)(result + 128) = 0;
  return result;
}
