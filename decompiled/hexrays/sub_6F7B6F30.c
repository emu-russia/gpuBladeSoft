int __cdecl sub_6F7B6F30(int a1, int a2)
{
  int result; // eax@1

  result = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 52))(a2, 0, 0, 0);
  *(_DWORD *)(a1 + 540) = result;
  return result;
}
