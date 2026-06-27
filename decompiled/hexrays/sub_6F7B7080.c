int __cdecl sub_6F7B7080(int a1, int a2)
{
  unsigned int v2; // ecx@1
  unsigned int v3; // edx@1
  int result; // eax@1

  v2 = *(_DWORD *)(a1 + 4) | (*(_DWORD *)a1 << 16);
  v3 = *(_DWORD *)(a2 + 4) | (*(_DWORD *)a2 << 16);
  result = -(v2 < v3);
  if ( v2 > v3 )
    result = 1;
  return result;
}
