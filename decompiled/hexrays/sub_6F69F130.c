int __cdecl sub_6F69F130(unsigned int a1, unsigned int a2)
{
  return ((signed int)*(_WORD *)(dword_6FBBDBD4
                               + 2
                               * (dword_6FBB52F4
                                * (dword_6FBB51DC
                                 * (((((1 << dword_6FD4098C) - 1) & a2) * dword_6FBB52F8 >> dword_6FD4098C)
                                  + dword_6FBB52F8
                                  * (dword_6FD40984 & ((BYTE3(dword_6FBBDBA8) & (a2 >> dword_6FD4098C))
                                                     + BYTE1(dword_6FBBDBA8))))
                                 + (dword_6FD40988 & (((unsigned __int8)dword_6FBBDBA8
                                                     + (BYTE2(dword_6FBBDBA8) & (a1 >> dword_6FD4098C))) >> 2)))
                                + (dword_6FBB52F4 * (a1 & ((1 << dword_6FD4098C) - 1)) >> dword_6FD4098C))) >> (4 * (dword_6FBBDBA8 + (BYTE2(dword_6FBBDBA8) & (a1 >> dword_6FD4098C))) & 0xC)) & 0xF;
}
