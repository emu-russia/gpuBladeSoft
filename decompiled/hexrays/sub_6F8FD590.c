_DWORD *__thiscall sub_6F8FD590(_DWORD *this, int a2, int a3, const void *a4, int a5)
{
  _DWORD *v5; // esi@1

  v5 = this;
  sub_6F8FEC30((const void **)this, a2, a3, a5);
  if ( !a5 )
    return v5;
  if ( a5 != 1 )
  {
    memcpy((void *)(*v5 + 2 * a2), a4, 2 * a5);
    return v5;
  }
  *(_WORD *)(*v5 + 2 * a2) = *(_WORD *)a4;
  return v5;
}
