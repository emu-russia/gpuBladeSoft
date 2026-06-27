_DWORD *__thiscall sub_6F8FD500(_DWORD *this, int a2, int a3, unsigned int a4, __int16 a5)
{
  _DWORD *v5; // esi@1
  unsigned int v6; // ebx@1
  __int16 *v7; // eax@3

  v5 = this;
  v6 = a4;
  if ( a4 > a3 + 536870910 - *(_DWORD *)(*this - 12) )
    sub_6F95B240("basic_string::_M_replace_aux");
  sub_6F8FEC30((const void **)this, a2, a3, a4);
  if ( !a4 )
    return v5;
  v7 = (__int16 *)(*v5 + 2 * a2);
  if ( a4 != 1 )
  {
    do
    {
      *v7 = a5;
      ++v7;
      --v6;
    }
    while ( v6 );
    return v5;
  }
  *v7 = a5;
  return v5;
}
