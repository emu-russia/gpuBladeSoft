int __cdecl sub_6F71FAC0(unsigned int a1, unsigned int a2)
{
  sub_6F71FA30((unsigned __int8)a1, a2);
  sub_6F71FA30(BYTE1(a1), a2 + 1);
  sub_6F71FA30((unsigned __int8)(a1 >> 16), a2 + 2);
  return sub_6F71FA30((signed int)a1 >> 24, a2 + 3);
}
