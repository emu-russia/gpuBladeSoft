int __cdecl sub_6F69F800(int a1, int a2)
{
  int v2; // edi@1
  int v3; // edx@1

  v2 = (dword_6FD40984 & a2) * dword_6FBB52F8 * dword_6FBB51DC;
  v3 = *(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & (a1 + 2)))) | (*(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & (a1 + 3)))) << 16);
  return (*(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & (a1 + 1)))) << 16) | *(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (a1 & dword_6FD40988)));
}
