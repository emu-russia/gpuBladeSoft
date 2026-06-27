int __cdecl sub_6F86F5B4(int a1)
{
  int result; // eax@1
  int v2; // edx@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 140);
  *(_DWORD *)(a1 + 404) = result;
  *(_DWORD *)result = sub_6F86CFA4;
  v2 = 0;
  do
  {
    *(_DWORD *)(result + 4 * v2 + 60) = 0;
    *(_DWORD *)(result + 4 * v2 + 44) = 0;
    *(_DWORD *)(result + 4 * v2 + 92) = 0;
    *(_DWORD *)(result + 4 * v2++ + 76) = 0;
  }
  while ( v2 != 4 );
  if ( *(_BYTE *)(a1 + 248) )
    *(_DWORD *)(result + 136) = 0;
  return result;
}
