void __cdecl sub_6F7B1482(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // edx@1
  int v9; // eax@1

  v8 = *(_DWORD *)(a8 + 8);
  v9 = *(_DWORD *)(a8 + 4);
  *(_DWORD *)(a8 + 8) = *(_DWORD *)a8;
  *(_DWORD *)(a8 + 4) = v8;
  JUMPOUT(&loc_6F7B10D0);
}
