int __cdecl sub_6F8B14A0(_BYTE *a1, unsigned int a2)
{
  _BYTE *v2; // edx@3
  int result; // eax@5

  if ( a2 && *a1 )
  {
    v2 = a1;
    do
      result = ++v2 - a1;
    while ( v2 - a1 < a2 && *v2 );
  }
  else
  {
    result = 0;
  }
  return result;
}
