signed int __cdecl sub_6F8B33A0(int *a1, _DWORD *a2)
{
  signed int result; // eax@2
  int v3; // edx@3
  int v4; // eax@3

  if ( a2 )
  {
    result = 40;
    if ( *a2 & 4 )
      return result;
    v3 = *a2 & 3;
    v4 = -2;
    if ( v3 != 1 )
      v4 = 2 * (v3 != 2) - 3;
  }
  else
  {
    v4 = -1;
  }
  *a1 = v4;
  return 0;
}
