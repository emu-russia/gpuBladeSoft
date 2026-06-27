int __cdecl sub_6F83DE2E(signed int a1)
{
  unsigned int v1; // ST20_4@2
  unsigned int v2; // eax@2
  unsigned int v3; // eax@4
  unsigned int v4; // eax@6
  unsigned int j; // [sp+24h] [bp-24h]@5
  unsigned int i; // [sp+28h] [bp-20h]@4
  unsigned int v8; // [sp+2Ch] [bp-1Ch]@1
  int v9; // [sp+2Ch] [bp-1Ch]@4

  v8 = 0;
  while ( v8 <= 0xE6 )
  {
    v1 = ((v8 << 8) + 115) / 0xE7;
    v2 = v8++;
    sub_6F83D60B(a1, v2, v1, v1, v1, 0xFFu, 1);
  }
  v3 = v8;
  v9 = v8 + 1;
  sub_6F83D60B(a1, v3, 0xFFu, 0xFFu, 0xFFu, 0, 1);
  for ( i = 1; i <= 4; ++i )
  {
    for ( j = 0; j <= 5; ++j )
    {
      v4 = v9++;
      sub_6F83D60B(a1, v4, 51 * j, 51 * j, 51 * j, 51 * i, 1);
    }
  }
  return v9;
}
