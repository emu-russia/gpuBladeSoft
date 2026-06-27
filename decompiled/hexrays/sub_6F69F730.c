int __cdecl sub_6F69F730(unsigned int a1, int a2)
{
  int v2; // ebx@1
  int result; // eax@1
  int v4; // edx@1

  v2 = (dword_6FD40984 & a2) * dword_6FBB52F8 * dword_6FBB51DC;
  result = (unsigned __int16)((signed int)*(_WORD *)(dword_6FBBDBD4
                                                   + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & (a1 >> 1)))) >> (8 * a1 & 8)) | ((signed int)*(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & ((a1 + 2) >> 1)))) >> (8 * (a1 + 2) & 8) << 16);
  v4 = ((signed int)*(_WORD *)(dword_6FBBDBD4 + ((dword_6FD40988 & ((a1 + 6) >> 1)) + v2) * 2 * dword_6FBB52F4) >> (8 * (a1 + 6) & 8) << 16) | (unsigned __int16)((signed int)*(_WORD *)(dword_6FBBDBD4 + 2 * dword_6FBB52F4 * (v2 + (dword_6FD40988 & ((a1 + 4) >> 1)))) >> (8 * (a1 + 4) & 8));
  return result;
}
