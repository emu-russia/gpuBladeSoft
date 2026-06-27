__int16 *__usercall sub_6F751AD0@<eax>(__int16 *result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi@2
  __int16 v4; // si@3
  int v5; // ebx@3
  __int16 v6; // bx@4

  if ( a3 )
  {
    v3 = a3 - 1;
    if ( !(a3 & 1)
      || (v4 = *result,
          a2 += 4,
          ++result,
          v5 = (2105 * (v4 & 0x7C00) >> 18) | (2105 * (v4 & 0x1F) >> 8 << 16) | (2105 * (v4 & 0x3E0) >> 13 << 8),
          v3 = a3 - 2,
          *(_DWORD *)(a2 - 4) = v5,
          a3 != 1) )
    {
      do
      {
        v6 = *result;
        v3 -= 2;
        result += 2;
        a2 += 8;
        *(_DWORD *)(a2 - 8) = (2105 * (v6 & 0x7C00) >> 18) | (2105 * (v6 & 0x1F) >> 8 << 16) | (2105 * (v6 & 0x3E0) >> 13 << 8);
        *(_DWORD *)(a2 - 4) = (2105 * (*(result - 1) & 0x7C00) >> 18) | (2105 * (*(result - 1) & 0x1F) >> 8 << 16) | (2105 * (*(result - 1) & 0x3E0) >> 13 << 8);
      }
      while ( v3 != -1 );
    }
  }
  return result;
}
