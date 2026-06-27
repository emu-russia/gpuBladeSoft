_BYTE *__cdecl sub_6F8390DC(unsigned int a1, int a2, unsigned int a3, int a4)
{
  signed int v5; // [sp+Ch] [bp-4h]@1
  _BYTE *v6; // [sp+1Ch] [bp+Ch]@1

  v5 = 0;
  v6 = (_BYTE *)(a2 - 1);
  *v6 = 0;
  while ( (unsigned int)v6 > a1 && (a4 || v5 < 1) )
  {
    if ( a3 <= 5 )
      JUMPOUT(__CS__, *(&off_6FB99960 + a3));
    a4 = 0;
    ++v5;
    if ( a3 == 5 && v5 == 5 && (unsigned int)v6 > a1 )
      *--v6 = 48;
  }
  return v6;
}
