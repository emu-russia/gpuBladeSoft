int __cdecl sub_6F7724A0(int a1)
{
  int result; // eax@1
  _BYTE *v2; // ecx@1

  result = 0;
  v2 = *(_BYTE **)(a1 + 32);
  if ( (unsigned int)v2 < *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 32) = v2 + 1;
    result = *v2;
  }
  return result;
}
