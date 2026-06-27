signed int __cdecl sub_6F8074C0(int a1, int a2, int a3)
{
  const char *v3; // eax@2
  signed int result; // eax@2

  if ( a1 )
  {
    v3 = sub_6F8152B0();
    result = sub_6F828000(a1, (int *)(a1 + 51588), a1 + 51552, a1 + 73648, a1 + 53168, v3, a2, a3);
  }
  else
  {
    result = -1;
  }
  return result;
}
