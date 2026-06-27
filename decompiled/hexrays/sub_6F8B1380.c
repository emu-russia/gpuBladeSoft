signed int __cdecl sub_6F8B1380(_BYTE **a1, int a2)
{
  int v2; // ecx@1
  _BYTE *v3; // edx@1
  int v4; // eax@2

  v2 = a2;
  v3 = *a1;
  do
  {
    ++v2;
    ++v3;
    if ( !*(_BYTE *)(v2 - 1) )
    {
      *a1 = v3;
      return 1;
    }
    v4 = *v3;
    if ( (unsigned int)(v4 - 65) < 0x1A )
      v4 += 32;
  }
  while ( v4 == *(_BYTE *)(v2 - 1) );
  return 0;
}
