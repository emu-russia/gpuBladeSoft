int __cdecl sub_6F693A70(int a1, int a2)
{
  return *(_DWORD *)(dword_6FD40000
                   + 4 * ((((unsigned int)(dword_6F96D010 * a1) >> dword_6FD4098C) - dword_6FD40010) % dword_6FD40008)
                   + 4
                   * dword_6FD40008
                   * ((((unsigned int)(dword_6F96D00C * a2) >> dword_6FD4098C) - dword_6FD4000C) % dword_6FD40004));
}
