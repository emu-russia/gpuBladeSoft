int __cdecl sub_6F833A20(int a1)
{
  int v1; // eax@1
  int v2; // edx@1
  signed int v3; // eax@1

  v1 = *(_DWORD *)(a1 + 4);
  v2 = v1 + 14;
  v3 = v1 + 7;
  if ( v3 < 0 )
    v3 = v2;
  return *(_DWORD *)a1 + (v3 >> 3);
}
