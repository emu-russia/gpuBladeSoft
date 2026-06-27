int __cdecl sub_6F779D90(int a1, unsigned int *a2)
{
  int result; // eax@1
  unsigned int v3; // edx@1
  unsigned int v4; // edx@2
  int v5; // ecx@2

  result = 0;
  v3 = *a2;
  *a2 = 0;
  if ( v3 <= 0xFE )
  {
    v4 = v3 + 1;
    v5 = *(_DWORD *)(a1 + 16);
    while ( 1 )
    {
      result = *(_WORD *)(v5 + 2 * v4);
      if ( *(_WORD *)(v5 + 2 * v4) )
        break;
      if ( ++v4 == 256 )
        return result;
    }
    *a2 = v4;
  }
  return result;
}
