int __cdecl sub_6F862058(int a1)
{
  int v1; // eax@1
  int result; // eax@1

  v1 = *(_DWORD *)(a1 + 416);
  *(_DWORD *)v1 = sub_6F86230C;
  *(_BYTE *)(v1 + 16) = 0;
  *(_BYTE *)(v1 + 17) = 0;
  *(_DWORD *)(v1 + 20) = 1;
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 16))(a1);
  result = (**(int (__cdecl ***)(_DWORD))(a1 + 420))(a1);
  *(_DWORD *)(a1 + 140) = 0;
  return result;
}
