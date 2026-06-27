int __cdecl sub_6F69F1E0(unsigned int a1, unsigned int a2)
{
  return *(_WORD *)(dword_6FBBDBD4
                  + 2
                  * dword_6FBB52F4
                  * (dword_6FBB52F8
                   * dword_6FBB51DC
                   * (dword_6FD40984 & (((a2 >> dword_6FD4098C) & BYTE3(dword_6FBBDBA8)) + BYTE1(dword_6FBBDBA8)))
                   + (dword_6FD40988 & ((unsigned __int8)dword_6FBBDBA8
                                      + ((a1 >> dword_6FD4098C) & BYTE2(dword_6FBBDBA8))))));
}
