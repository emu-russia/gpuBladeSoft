int __thiscall sub_6F8BB240(void *this, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  void *v8; // esi@1
  int result; // eax@4

  v8 = this;
  if ( a4 == a6 && sub_6F8FD070((int)this, a5) )
  {
    *(_DWORD *)(a7 + 8) = a2;
    result = 0;
  }
  else
  {
    if ( sub_6F8FD070((int)v8, a3) )
    {
      *(_DWORD *)a7 = a4;
      *(_DWORD *)(a7 + 12) = 1;
      *(_DWORD *)(a7 + 4) = a2;
    }
    result = 0;
  }
  return result;
}
