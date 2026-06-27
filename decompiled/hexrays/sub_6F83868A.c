unsigned int __cdecl sub_6F83868A(int a1, int *a2, char a3, signed int a4)
{
  unsigned int result; // eax@12
  unsigned int v5; // [sp+14h] [bp-24h]@5
  int v6; // [sp+1Ch] [bp-1Ch]@1
  unsigned int v7; // [sp+24h] [bp-14h]@1
  unsigned int v8; // [sp+28h] [bp-10h]@4
  unsigned int i; // [sp+2Ch] [bp-Ch]@1
  unsigned int j; // [sp+2Ch] [bp-Ch]@4

  v7 = 1 << (8 - a3);
  *a2 = (int)sub_6F83B307(a1, 4 * (1 << (8 - a3)));
  v6 = *a2;
  for ( i = 0; i < v7; ++i )
    *(_DWORD *)(4 * i + v6) = sub_6F83B4D4(a1, 0x200u);
  v8 = 0;
  for ( j = 0; j <= 0xFE; ++j )
  {
    v5 = (((1 << (16 - a3)) - 1) * (unsigned int)(unsigned __int16)sub_6F8383DF((unsigned __int16)(257 * j) + 128, a4)
        + 0x8000)
       / 0xFFFF
       + 1;
    while ( v8 < v5 )
    {
      *(_WORD *)(2 * (v8 >> (8 - a3)) + *(_DWORD *)(4 * (v8 & (0xFFu >> a3)) + v6)) = 257 * j;
      ++v8;
    }
  }
  while ( 1 )
  {
    result = v7 << 8;
    if ( v7 << 8 <= v8 )
      break;
    *(_WORD *)(*(_DWORD *)(4 * (v8 & (255 >> a3)) + v6) + 2 * (v8 >> (8 - a3))) = -1;
    ++v8;
  }
  return result;
}
