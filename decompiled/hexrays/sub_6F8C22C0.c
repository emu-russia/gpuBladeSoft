char __thiscall sub_6F8C22C0(void *this, int a2, int *a3)
{
  void *v3; // edi@1
  char result; // al@1

  v3 = this;
  result = sub_6F95BA30(a2);
  if ( result )
    *a3 += 16;
  else
    result = sub_6F8BB1D0(v3, a2, a3);
  return result;
}
