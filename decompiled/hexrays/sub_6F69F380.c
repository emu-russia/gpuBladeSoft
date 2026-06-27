int __cdecl sub_6F69F380(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx@1
  unsigned int v3; // eax@1
  int v4; // edi@1
  int v5; // esi@1
  int v6; // eax@2
  int v7; // edx@2

  v2 = (unsigned __int8)dword_6FBBDBA8 + ((a1 >> dword_6FD4098C) & BYTE2(dword_6FBBDBA8));
  v3 = BYTE1(dword_6FBBDBA8) + ((a2 >> dword_6FD4098C) & BYTE3(dword_6FBBDBA8));
  v4 = (v2 >> 6) + 4 * (v3 >> 6);
  v5 = (unsigned __int8)(4 * v3) + ((v2 >> 4) & 3);
  if ( (unsigned __int8)byte_6FD412F0[v5] != v4 )
  {
    v6 = dword_70041C38(v2 & 0xFFFFFFF0, v3);
    dword_70041434[2 * v5] = v7;
    dword_70041430[2 * v5] = v6;
    byte_6FD412F0[v5] = v4;
  }
  return ((signed int)*((_BYTE *)&dword_70041430[2 * v5] + ((v2 >> 1) & 7)) >> (4 * v2 & 4)) & 0xF;
}
