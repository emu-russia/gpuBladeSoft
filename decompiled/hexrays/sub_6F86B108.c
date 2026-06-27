int __cdecl sub_6F86B108(int a1)
{
  int result; // eax@1
  int v2; // edx@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 208);
  *(_DWORD *)(a1 + 404) = result;
  *(_DWORD *)result = sub_6F86A188;
  *(_DWORD *)(result + 8) = sub_6F869DBC;
  v2 = 0;
  do
  {
    *(_DWORD *)(result + 4 * v2 + 76) = 0;
    *(_DWORD *)(result + 4 * v2++ + 140) = 0;
  }
  while ( v2 != 16 );
  *(_BYTE *)(result + 204) = 113;
  return result;
}
