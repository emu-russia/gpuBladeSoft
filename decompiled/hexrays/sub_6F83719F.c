signed int __cdecl sub_6F83719F(int a1, int a2, int a3, unsigned int a4, int a5, char a6)
{
  signed int result; // eax@2

  if ( *(_WORD *)(a2 + 74) >= 0 )
  {
    if ( sub_6F836607(a1, a2, a3, a4) && sub_6F83667B(a1, a2, a3, a4, a5, a6) && sub_6F836BC5(a1, a2, a3, a4, a5) )
    {
      sub_6F837123(a1, a2, a5, 0);
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
