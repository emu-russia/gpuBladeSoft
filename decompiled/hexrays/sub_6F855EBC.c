unsigned int __cdecl sub_6F855EBC(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int result; // eax@3
  unsigned int v4; // [sp+8h] [bp+8h]@6

  if ( a1 < a2 && a2 > 0x7F )
  {
    if ( a1 )
    {
      if ( a2 > 0xFF7E )
        v4 = 255 * a1;
      else
        v4 = (a3 * a1 + 64) >> 7;
      result = (((v4 & 0x7FFF) * (unsigned __int8)byte_6FB99680[v4 >> 15] >> 12)
              + (unsigned __int16)word_6FB99280[v4 >> 15]) >> 8;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = -1;
  }
  return result;
}
