signed int __cdecl sub_6F7600B0(int a1, signed int a2)
{
  signed int result; // eax@2
  int *v3; // edx@3

  if ( a2 > 31 )
  {
    if ( *((_BYTE *)&dword_7035CC40[34 * a1] + a2) <= 0x40u )
      return 0;
  }
  else
  {
    result = 0;
    if ( !*((_BYTE *)&dword_7035CC40[34 * a1] + a2) )
      return result;
  }
  result = 1;
  v3 = &dword_7035CC40[34 * a1];
  if ( v3[32] )
    result = *((_BYTE *)v3 + a2 + 64) == 0;
  return result;
}
