int __thiscall sub_6F8FE470(int *this, unsigned int a2, __int16 a3)
{
  int result; // eax@1
  int v4; // edx@1

  result = a2;
  v4 = *(_DWORD *)(*this - 12);
  if ( a2 > 0x1FFFFFFE )
    sub_6F95B240("basic_string::resize");
  if ( a2 > v4 )
  {
    result = sub_6F8FDD70(this, a2 - v4, a3);
  }
  else if ( a2 < v4 )
  {
    result = sub_6F8FEC30((const void **)this, a2, v4 - a2, 0);
  }
  return result;
}
