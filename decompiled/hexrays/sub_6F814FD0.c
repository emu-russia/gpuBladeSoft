int __cdecl sub_6F814FD0(int a1, int a2)
{
  int result; // eax@1

  result = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  return result;
}
