unsigned __int32 __cdecl sub_6F772560(int a1)
{
  unsigned __int32 result; // eax@1
  unsigned int *v2; // edx@1
  unsigned int v3; // eax@2

  result = 0;
  v2 = *(unsigned int **)(a1 + 32);
  if ( *(_DWORD *)(a1 + 36) > (unsigned int)v2 + 3 )
  {
    v3 = *v2;
    ++v2;
    result = _byteswap_ulong(v3);
  }
  *(_DWORD *)(a1 + 32) = v2;
  return result;
}
