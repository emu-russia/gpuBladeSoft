int __cdecl sub_6F791420(unsigned int a1, int a2, int a3)
{
  _BYTE *v3; // edx@1
  int result; // eax@1
  __int16 v5; // si@4

  v3 = (_BYTE *)a1;
  result = a3;
  if ( a1 + a2 > a1 && a2 )
  {
    LOWORD(result) = a3;
    do
    {
      v5 = *v3++;
      *(v3 - 1) = v5 ^ BYTE1(result);
      result = (unsigned __int16)(-12691 * (v5 + result) + 22719);
    }
    while ( (_BYTE *)(a1 + a2) != v3 );
  }
  return result;
}
