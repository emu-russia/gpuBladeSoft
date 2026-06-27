int __cdecl sub_6F8414F4(int a1, int a2, int a3)
{
  if ( !*(_DWORD *)(a1 + 92) )
    sub_6F839044(a1, (int)"Call to NULL read function");
  return (*(int (__cdecl **)(int, int, int))(a1 + 92))(a1, a2, a3);
}
