int __cdecl sub_6F865A88(int a1, int a2, _DWORD *a3, int a4, int a5, _DWORD *a6)
{
  int result; // eax@1

  result = (*(int (__cdecl **)(int, int, _DWORD, int))(*(_DWORD *)(a1 + 432) + 12))(a1, a2, *a3, a5 + 4 * *a6);
  ++*a6;
  ++*a3;
  return result;
}
