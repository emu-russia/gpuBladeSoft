unsigned int __cdecl sub_6F860954(unsigned int a1, int a2, int a3, int a4)
{
  unsigned int result; // eax@1
  int v5; // edi@3
  int v6; // ecx@3
  int v7; // edx@4
  int v8; // [sp+4h] [bp-14h]@2
  unsigned int v9; // [sp+8h] [bp-10h]@1

  v9 = *(_DWORD *)(a2 + 28) * *(_DWORD *)(a2 + 36);
  sub_6F860764(a3, *(_DWORD *)(a1 + 256), *(_DWORD *)(a1 + 28), 2 * v9);
  result = a1;
  if ( *(_DWORD *)(a1 + 256) > 0 )
  {
    v8 = 0;
    do
    {
      v5 = *(_DWORD *)(a4 + 4 * v8);
      result = a3;
      v6 = *(_DWORD *)(a3 + 4 * v8);
      if ( v9 )
      {
        v7 = 0;
        result = 0;
        do
        {
          *(_BYTE *)(v5 + result) = (v7 + *(_BYTE *)(v6 + 2 * result + 1) + *(_BYTE *)(v6 + 2 * result)) >> 1;
          v7 ^= 1u;
          ++result;
        }
        while ( v9 > result );
      }
      ++v8;
    }
    while ( *(_DWORD *)(a1 + 256) > v8 );
  }
  return result;
}
