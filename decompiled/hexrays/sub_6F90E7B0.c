int __thiscall sub_6F90E7B0(FILE **this, int a2, int a3, int a4, int a5)
{
  FILE **v5; // esi@1
  FILE **v6; // eax@1
  int result; // eax@2

  v5 = this;
  v6 = sub_6F90E350(this);
  if ( !a3 )
    goto LABEL_2;
  result = sub_6F8B9100((int)v6, a2, a3);
  if ( a3 == result )
  {
    v6 = sub_6F90E350(v5);
LABEL_2:
    result = a3 + sub_6F8B9100((int)v6, a4, a5);
  }
  return result;
}
