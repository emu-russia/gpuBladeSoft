int __cdecl sub_6F8609F0(int a1, int a2, int a3, int a4)
{
  int result; // eax@1
  int v5; // ecx@3
  int v6; // ebx@3
  unsigned int v7; // eax@4
  signed int v8; // [sp+4h] [bp-1Ch]@4
  int v9; // [sp+8h] [bp-18h]@2
  int v10; // [sp+Ch] [bp-14h]@3
  unsigned int v11; // [sp+10h] [bp-10h]@1

  v11 = *(_DWORD *)(a2 + 28) * *(_DWORD *)(a2 + 36);
  sub_6F860764(a3, *(_DWORD *)(a1 + 256), *(_DWORD *)(a1 + 28), 2 * v11);
  result = *(_DWORD *)(a1 + 256);
  if ( result > 0 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(a4 + 2 * v9);
      v5 = *(_DWORD *)(a3 + 4 * v9);
      v6 = *(_DWORD *)(a3 + 4 * v9 + 4);
      if ( v11 )
      {
        v7 = 0;
        v8 = 1;
        do
        {
          *(_BYTE *)(v10 + v7) = (v8
                                + *(_BYTE *)(v6 + 2 * v7)
                                + *(_BYTE *)(v5 + 2 * v7)
                                + *(_BYTE *)(v5 + 2 * v7 + 1)
                                + *(_BYTE *)(v6 + 2 * v7 + 1)) >> 2;
          v8 ^= 3u;
          ++v7;
        }
        while ( v11 > v7 );
      }
      v9 += 2;
      result = a1;
    }
    while ( *(_DWORD *)(a1 + 256) > v9 );
  }
  return result;
}
