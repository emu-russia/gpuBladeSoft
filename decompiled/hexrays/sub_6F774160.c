signed int __cdecl sub_6F774160(int a1, int a2)
{
  int v2; // eax@1
  bool v3; // sf@1
  unsigned __int8 v4; // of@1
  signed int result; // eax@1

  v2 = *(_DWORD *)(a2 + 4);
  v4 = __OFSUB__(*(_DWORD *)(a1 + 4), v2);
  v3 = *(_DWORD *)(a1 + 4) - v2 < 0;
  result = *(_DWORD *)(a1 + 4) > v2;
  if ( v3 ^ v4 )
    result = -1;
  return result;
}
