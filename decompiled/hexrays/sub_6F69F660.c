int __cdecl sub_6F69F660(unsigned int a1, int a2)
{
  int v2; // ebx@1
  int result; // eax@1
  int v4; // edx@1

  v2 = (dword_6FD40984 & a2) * dword_6FBB52F8 * dword_6FBB51DC;
  result = (unsigned __int16)((signed int)*(_WORD *)(dword_6FBBDBD4
                                                   + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & (a1 >> 2)))) >> (4 * a1 & 0xC)) | ((signed int)*(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & ((a1 + 4) >> 2)))) >> (4 * (a1 + 4) & 0xC) << 16);
  v4 = ((signed int)*(_WORD *)(dword_6FBBDBD4 + ((dword_6FD40988 & ((a1 + 12) >> 2)) + v2) * 2 * dword_6FBB52F4) >> (4 * (a1 + 12) & 0xC) << 16) | (unsigned __int16)((signed int)*(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & ((a1 + 8) >> 2)))) >> (4 * (a1 + 8) & 0xC));
  return result;
}
