BOOL __cdecl sub_6F836195(unsigned int a1)
{
  return sub_6F83615A(a1 >> 24)
      && sub_6F83615A((unsigned __int8)(a1 >> 16))
      && sub_6F83615A(BYTE1(a1))
      && sub_6F83615A((unsigned __int8)a1);
}
