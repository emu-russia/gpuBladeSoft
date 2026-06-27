signed int __cdecl sub_6F788F10(int a1, _DWORD *a2, unsigned int a3, int a4)
{
  _DWORD *v4; // edx@1
  signed int result; // eax@5

  v4 = a2;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 & 1 )
      {
        v4 = 0;
        return sub_6F787F00(a1, (int)v4, a3, a4);
      }
      result = 35;
      if ( *a2 == *(_DWORD *)(a1 + 4) )
        return sub_6F787F00(a1, (int)v4, a3, a4);
    }
    else
    {
      result = sub_6F787F00(a1, 0, a3, a4 | 3);
    }
  }
  else
  {
    result = 37;
  }
  return result;
}
