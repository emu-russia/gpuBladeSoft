int __cdecl sub_6F779BE0(int a1, int a2, int a3, int a4)
{
  int v4; // eax@1

  v4 = *(_DWORD *)(a1 + 532);
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  if ( v4 )
    *(_DWORD *)a4 = (*(int (__cdecl **)(int, int, int))(v4 + 84))(a1, a2, a3);
  return 0;
}
