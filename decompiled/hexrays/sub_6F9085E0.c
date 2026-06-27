_DWORD *__thiscall sub_6F9085E0(_DWORD *this, int a2, int a3, const void *a4, size_t a5)
{
  _DWORD *v5; // esi@1
  void *v6; // edi@2

  v5 = this;
  sub_6F909B10((const void **)this, a2, a3, a5);
  if ( !a5 )
    return v5;
  v6 = (void *)(*v5 + a2);
  if ( a5 != 1 )
  {
    memcpy(v6, a4, a5);
    return v5;
  }
  *(_BYTE *)v6 = *(_BYTE *)a4;
  return v5;
}
