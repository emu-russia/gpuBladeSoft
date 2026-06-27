_DWORD *__thiscall sub_6F908550(_DWORD *this, int a2, int a3, size_t a4, char a5)
{
  _DWORD *v5; // esi@1
  void *v6; // edi@3

  v5 = this;
  if ( a4 > a3 + 1073741820 - *(_DWORD *)(*this - 12) )
    sub_6F95B240("basic_string::_M_replace_aux");
  sub_6F909B10((const void **)this, a2, a3, a4);
  if ( !a4 )
    return v5;
  v6 = (void *)(*v5 + a2);
  if ( a4 != 1 )
  {
    memset(v6, a5, a4);
    return v5;
  }
  *(_BYTE *)v6 = a5;
  return v5;
}
