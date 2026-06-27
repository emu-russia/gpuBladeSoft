unsigned int __cdecl sub_6F838828(int a1, int *a2, signed int a3)
{
  unsigned int result; // eax@1
  int v4; // [sp+18h] [bp-10h]@1
  unsigned int i; // [sp+1Ch] [bp-Ch]@2
  unsigned int j; // [sp+1Ch] [bp-Ch]@6

  *a2 = (int)sub_6F83B4D4(a1, 0x100u);
  v4 = *a2;
  result = sub_6F83823E(a3);
  if ( result )
  {
    for ( i = 0; i <= 0xFF; ++i )
    {
      result = sub_6F838359(i, a3);
      *(_BYTE *)(v4 + i) = result;
    }
  }
  else
  {
    for ( j = 0; j <= 0xFF; ++j )
    {
      result = j;
      *(_BYTE *)(j + v4) = j;
    }
  }
  return result;
}
