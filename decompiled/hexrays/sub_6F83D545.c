unsigned int __cdecl sub_6F83D545(signed int a1, int a2, signed int a3, int a4, int a5, signed int a6)
{
  int v6; // ST1C_4@1
  unsigned int v8; // [sp+1Ch] [bp-Ch]@1
  unsigned int v9; // [sp+1Ch] [bp-Ch]@2

  v6 = sub_6F83D491(a1, a2, a3);
  v8 = a4 * v6 + sub_6F83D491(a1, a5, a6) * (255 - a4);
  if ( a6 == 2 )
    v9 = ((257 * v8 >> 16) + 257 * v8 + 0x8000) >> 16;
  else
    v9 = (unsigned __int8)((unsigned __int16)(((v8 & 0x7FFF) * (unsigned __int8)byte_6FB99680[v8 >> 15] >> 12)
                                            + word_6FB99280[v8 >> 15]) >> 8);
  return v9;
}
