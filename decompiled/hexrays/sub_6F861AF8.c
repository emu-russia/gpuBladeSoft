int __cdecl sub_6F861AF8(int a1)
{
  int v1; // ebx@1
  int result; // eax@1

  v1 = *(_DWORD *)(a1 + 24);
  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 4096);
  *(_DWORD *)(v1 + 24) = result;
  *(_DWORD *)v1 = result;
  *(_DWORD *)(v1 + 4) = 4096;
  return result;
}
