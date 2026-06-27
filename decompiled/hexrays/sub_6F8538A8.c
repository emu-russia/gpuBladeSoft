int __cdecl sub_6F8538A8(int a1, int a2, int a3)
{
  if ( !*(_DWORD *)(a1 + 88) )
    sub_6F839044(a1, (int)"Call to NULL write function");
  return (*(int (__cdecl **)(int, int, int))(a1 + 88))(a1, a2, a3);
}
