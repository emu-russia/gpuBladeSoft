int __cdecl sub_6F85393D(int a1)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 380);
  if ( result )
    result = (*(int (__cdecl **)(int))(a1 + 380))(a1);
  return result;
}
