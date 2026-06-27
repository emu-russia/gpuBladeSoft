int __cdecl sub_6F69F440(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx@1
  unsigned int v3; // edi@1
  int v4; // esi@1
  int v5; // edx@2

  v2 = (unsigned __int8)dword_6FBBDBA8 + ((a1 >> dword_6FD4098C) & BYTE2(dword_6FBBDBA8));
  v3 = (v2 >> 6) + 4 * ((BYTE1(dword_6FBBDBA8) + ((a2 >> dword_6FD4098C) & BYTE3(dword_6FBBDBA8))) >> 5);
  v4 = (unsigned __int8)(8 * (BYTE1(dword_6FBBDBA8) + ((a2 >> dword_6FD4098C) & BYTE3(dword_6FBBDBA8))))
     + ((v2 >> 3) & 7);
  if ( (unsigned __int8)byte_6FD412F0[v4] != v3 )
  {
    dword_70041430[2 * v4] = dword_70041C34(
                               v2 & 0xFFFFFFF8,
                               BYTE1(dword_6FBBDBA8) + ((a2 >> dword_6FD4098C) & BYTE3(dword_6FBBDBA8)));
    dword_70041434[2 * v4] = v5;
    byte_6FD412F0[v4] = v3;
  }
  return *((_BYTE *)&dword_70041430[2 * v4] + (v2 & 7));
}
