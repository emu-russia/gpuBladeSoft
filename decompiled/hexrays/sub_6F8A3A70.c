int __cdecl sub_6F8A3A70(FILE *a1)
{
  int result; // eax@1
  char *v2; // esi@1
  char *v3; // edi@4
  int v4; // eax@5

  result = 0;
  v2 = a1->_base;
  if ( (a1->_flag & 3) == 2 )
  {
    result = a1->_flag & 0x108;
    if ( a1->_flag & 0x108 )
    {
      result = 0;
      v3 = (char *)(a1->_ptr - v2);
      if ( (signed int)v3 > 0 )
      {
        v4 = fileno(a1);
        if ( v3 == (char *)write(v4, (int)v2, (int)v3) )
        {
          v2 = a1->_base;
          result = a1->_flag & 0x80;
          if ( result )
          {
            result = 0;
            a1->_flag &= 0xFFFFFFFD;
          }
        }
        else
        {
          a1->_flag |= 0x20u;
          v2 = a1->_base;
          result = -1;
        }
      }
    }
  }
  a1->_ptr = v2;
  a1->_cnt = 0;
  return result;
}
