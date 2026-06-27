unsigned int __cdecl sub_6F8584AE(int a1, unsigned int a2)
{
  unsigned int result; // eax@2
  int v3; // ST04_4@7
  unsigned int v4; // [sp+4h] [bp-Ch]@2
  unsigned int v5; // [sp+8h] [bp-8h]@4
  unsigned int v6; // [sp+Ch] [bp-4h]@4

  if ( a2 <= 0x4000 )
  {
    v4 = *(_BYTE *)a1;
    result = v4 & 0xF;
    if ( result == 8 )
    {
      result = v4 & 0xF0;
      if ( result <= 0x70 )
      {
        v6 = v4 >> 4;
        v5 = 1 << ((*(_BYTE *)a1 >> 4) + 7);
        result = a2;
        if ( a2 <= v5 )
        {
          do
          {
            v5 >>= 1;
            --v6;
          }
          while ( v6 && a2 <= v5 );
          v3 = v4 & 0xF | 16 * v6;
          *(_BYTE *)a1 = v3;
          result = (*(_BYTE *)(a1 + 1) & 0xE0) - ((v3 << 8) + (*(_BYTE *)(a1 + 1) & 0xE0u)) % 0x1F + 31;
          *(_BYTE *)(a1 + 1) = result;
        }
      }
    }
  }
  return result;
}
