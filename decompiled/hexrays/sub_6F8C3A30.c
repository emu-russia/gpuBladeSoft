signed int __thiscall sub_6F8C3A30(char *this, unsigned __int16 a2, wint_t a3)
{
  char *v3; // esi@1
  char *v4; // ebx@1

  v3 = this + 686;
  v4 = this + 654;
  do
  {
    if ( a2 & *(_WORD *)v4 && iswctype(a3, *((_WORD *)v4 + 16)) )
      return 1;
    v4 += 2;
  }
  while ( v4 != v3 );
  return 0;
}
