unsigned int __cdecl sub_6F8392E8(int a1, signed int a2, _BYTE *a3)
{
  unsigned int result; // eax@3

  if ( a2 > 0 && a2 <= 8 )
    result = sub_6F839081(a1 + 32 * (a2 + 0x7FFFFFF), 0x20u, 0, a3);
  return result;
}
