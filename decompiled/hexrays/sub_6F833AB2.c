int __cdecl sub_6F833AB2(int a1, unsigned int a2, size_t a3)
{
  int result; // eax@4
  char v4; // [sp+18h] [bp-10h]@1
  char v5; // [sp+19h] [bp-Fh]@1
  char v6; // [sp+1Ah] [bp-Eh]@1
  char v7; // [sp+1Bh] [bp-Dh]@1
  char v8; // [sp+1Ch] [bp-Ch]@1
  char v9; // [sp+1Dh] [bp-Bh]@1
  char v10; // [sp+1Eh] [bp-Ah]@1
  char v11; // [sp+1Fh] [bp-9h]@1

  v4 = -119;
  v5 = 80;
  v6 = 78;
  v7 = 71;
  v8 = 13;
  v9 = 10;
  v10 = 26;
  v11 = 10;
  if ( a3 <= 8 )
  {
    if ( !a3 )
      return -1;
  }
  else
  {
    a3 = 8;
  }
  if ( a2 <= 7 )
  {
    if ( a2 + a3 > 8 )
      a3 = 8 - a2;
    result = memcmp((const void *)(a2 + a1), &v4 + a2, a3);
  }
  else
  {
    result = -1;
  }
  return result;
}
