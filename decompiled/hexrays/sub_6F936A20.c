int __thiscall sub_6F936A20(void *this, int a2, void *a3)
{
  void *v3; // esi@1
  unsigned int v4; // eax@1
  int v5; // eax@2

  v3 = this;
  v4 = sub_6F8C3BF0(a3);
  if ( *(_DWORD *)(a2 + 8) - 1 < v4 || (v5 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4)) == 0 )
    sub_6F95B720("locale::_Impl::_M_replace_facet");
  return sub_6F936510(v3, a3, v5);
}
