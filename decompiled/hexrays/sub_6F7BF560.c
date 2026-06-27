unsigned int __cdecl sub_6F7BF560(int a1, int a2)
{
  unsigned int v2; // edx@1
  unsigned int result; // eax@1

  v2 = a2 - *(_DWORD *)(a1 + 16);
  result = v2 + 1;
  if ( v2 >= *(_DWORD *)(a1 + 20) )
    result = 0;
  return result;
}
