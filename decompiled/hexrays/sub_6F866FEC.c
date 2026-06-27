int __cdecl sub_6F866FEC(int *a1)
{
  int v1; // eax@1

  v1 = *a1;
  *(_DWORD *)(v1 + 20) = 47;
  return (*(int (**)(void))v1)();
}
