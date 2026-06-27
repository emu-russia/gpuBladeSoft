unsigned int __cdecl sub_6F7CA010(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int result; // eax@1
  unsigned int v5; // ebp@17
  unsigned int v6; // esi@17
  unsigned __int8 v7; // cf@17
  unsigned int v8; // ebp@17
  __int64 v9; // rcx@17
  __int64 v10; // kr00_8@17
  unsigned int v11; // esi@17
  unsigned __int64 v12; // kr08_8@17

  result = a3;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( a4 )
      {
        if ( a3 )
        {
          v5 = (a4 >> 16) * (unsigned __int16)a1;
          v6 = (a1 >> 16) * (unsigned __int16)a4;
          v7 = __CFADD__(v6, v5);
          v8 = v6 + v5;
          LODWORD(v9) = v8 << 16;
          HIDWORD(v9) = (v8 >> 16) + (a4 >> 16) * (a1 >> 16);
          v10 = v9 + (unsigned __int16)a4 * (unsigned int)(unsigned __int16)a1;
          v11 = HIDWORD(v10) + (-v7 & 0x10000);
          v12 = __PAIR__(
                  (((a2 >> 16) * (unsigned __int16)a3 + (a3 >> 16) * (unsigned __int16)a2) >> 16)
                + (a2 >> 16) * (a3 >> 16),
                  ((a2 >> 16) * (unsigned __int16)a3 + (a3 >> 16) * (unsigned __int16)a2) << 16)
              + __PAIR__(
                  -__CFADD__((a2 >> 16) * (unsigned __int16)a3, (a3 >> 16) * (unsigned __int16)a2) & 0x10000,
                  (unsigned __int16)a3 * (unsigned int)(unsigned __int16)a2);
          result = 1;
          if ( (__PAIR__(
                  (((a2 >> 16) * (unsigned __int16)a3 + (a3 >> 16) * (unsigned __int16)a2) >> 16)
                + (a2 >> 16) * (a3 >> 16),
                  ((a2 >> 16) * (unsigned __int16)a3 + (a3 >> 16) * (unsigned __int16)a2) << 16)
              + __PAIR__(
                  -__CFADD__((a2 >> 16) * (unsigned __int16)a3, (a3 >> 16) * (unsigned __int16)a2) & 0x10000,
                  (unsigned __int16)a3 * (unsigned int)(unsigned __int16)a2)) >> 32 >= v11 )
          {
            result = -1;
            if ( HIDWORD(v12) <= v11 )
            {
              result = 1;
              if ( (unsigned int)v12 >= (unsigned int)v10 )
                result = -((unsigned int)v12 > (unsigned int)v10);
            }
          }
        }
        else
        {
          result = -a1;
          if ( (a4 & 0x80000000) != 0 )
            result = a1;
        }
      }
      else
      {
        result = a2;
        if ( (a3 & 0x80000000) != 0 )
          result = -a2;
      }
    }
    else if ( (a2 & 0x80000000) == 0 )
    {
      result = -a3;
    }
  }
  else
  {
    result = -a4;
    if ( (a1 & 0x80000000) == 0 )
      result = a4;
  }
  return result;
}
