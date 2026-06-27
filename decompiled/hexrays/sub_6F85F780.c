int __cdecl sub_6F85F780(int a1, signed int a2, char a3)
{
  int v3; // eax@3

  if ( a2 <= 0 )
  {
    v3 = 5000;
  }
  else if ( a2 <= 100 )
  {
    if ( a2 > 49 )
      v3 = 2 * (100 - a2);
    else
      v3 = 5000 / a2;
  }
  else
  {
    v3 = 0;
  }
  return sub_6F85F6EC(a1, v3, a3);
}
