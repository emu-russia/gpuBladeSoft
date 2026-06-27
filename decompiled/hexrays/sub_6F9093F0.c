void __thiscall sub_6F9093F0(int *this, unsigned int a2, char a3)
{
  int v3; // edx@1

  v3 = *(_DWORD *)(*this - 12);
  if ( a2 > 0x3FFFFFFC )
    sub_6F95B240("basic_string::resize");
  if ( a2 > v3 )
  {
    sub_6F908D40(this, a2 - v3, a3);
  }
  else if ( a2 < v3 )
  {
    sub_6F909B10((const void **)this, a2, v3 - a2, 0);
  }
}
