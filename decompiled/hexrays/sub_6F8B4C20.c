int sub_6F8B4C20()
{
  int result; // eax@2
  _DWORD *v1; // eax@3

  if ( dword_70373588 )
  {
    v1 = sub_6F8B3D30();
    if ( v1 && v1[4] <= 0 && *((_BYTE *)v1 + 32) & 3 )
      result = v1[9] & 1;
    else
      result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
