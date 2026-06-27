int __cdecl sub_6F76C600(int a1, int a2)
{
  int v2; // edx@1
  int v3; // eax@1
  int v4; // ebx@1
  signed int v5; // eax@4
  int result; // eax@4

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 4) - v3;
  if ( v3 < 0 )
  {
    if ( *(_DWORD *)(a1 + 4) >= v3 )
      v3 = *(_DWORD *)(a1 + 4);
    v4 = v3;
  }
  if ( !a2 )
    v2 = 12 * v4 / 10;
  v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 28) = v2;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 8) - v5 / 2;
  result = (v2 - v4) / 2;
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
