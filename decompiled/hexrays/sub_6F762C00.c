signed int __cdecl sub_6F762C00(int a1, signed int a2)
{
  signed int result; // eax@2
  int *v3; // edx@3

  if ( a2 > 31 )
  {
    if ( *((_BYTE *)&dword_7036E700[50 * a1] + a2) <= 0x40u )
      return 0;
  }
  else
  {
    result = 0;
    if ( !*((_BYTE *)&dword_7036E700[50 * a1] + a2) )
      return result;
  }
  result = 1;
  v3 = &dword_7036E700[50 * a1];
  if ( v3[48] )
    result = *((_BYTE *)v3 + a2 + 96) == 0;
  return result;
}
