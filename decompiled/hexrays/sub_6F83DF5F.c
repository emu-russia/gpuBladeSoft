unsigned int __cdecl sub_6F83DF5F(signed int a1)
{
  unsigned int v1; // eax@4
  unsigned int j; // [sp+20h] [bp-18h]@3
  unsigned int i; // [sp+24h] [bp-14h]@2
  unsigned int v5; // [sp+28h] [bp-10h]@1
  unsigned int v6; // [sp+2Ch] [bp-Ch]@1

  v5 = 0;
  v6 = 0;
  while ( v5 <= 5 )
  {
    for ( i = 0; i <= 5; ++i )
    {
      for ( j = 0; j <= 5; ++j )
      {
        v1 = v6++;
        sub_6F83D60B(a1, v1, 51 * v5, 51 * i, 51 * j, 0xFFu, 1);
      }
    }
    ++v5;
  }
  return v6;
}
