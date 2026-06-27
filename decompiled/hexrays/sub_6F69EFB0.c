int __cdecl sub_6F69EFB0(unsigned int a1, unsigned int a2)
{
  return *(_DWORD *)(dword_6FBBDB5C
                   + (((a2 >> (dword_6FD4098C - 4)) & 0xFFF) << 14)
                   + 4 * ((a1 >> (dword_6FD4098C - 4)) & 0xFFF));
}
