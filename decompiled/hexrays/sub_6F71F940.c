int __cdecl sub_6F71F940(unsigned int a1)
{
  unsigned __int16 v1; // ax@1

  v1 = dword_6FBB51E4(dword_6FD40988 & (a1 >> 1), (a1 >> 1) / dword_6FBB51DC);
  return ((signed int)(unsigned __int16)dword_6FBB51E4(
                                          dword_6FD40988 & ((a1 + 1) >> 1),
                                          ((a1 + 1) >> 1) / dword_6FBB51DC) >> 8 * ((a1 + 1) & 1) << 8) | (unsigned __int8)((signed int)v1 >> 8 * (a1 & 1));
}
