int __stdcall sub_6F8D9480(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // edx@1
  int result; // eax@1
  int v4; // ecx@2
  int v5; // eax@2

  v2 = a1;
  result = 0;
  if ( a1 < a2 )
  {
    do
    {
      v4 = *v2;
      v5 = __ROL4__(result, 7);
      ++v2;
      result = v4 + v5;
    }
    while ( a2 != v2 );
  }
  return result;
}
