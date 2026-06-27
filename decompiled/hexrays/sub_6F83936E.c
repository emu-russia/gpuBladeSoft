unsigned int __cdecl sub_6F83936E(int a1, signed int a2, unsigned int a3, int a4)
{
  char v5; // [sp+10h] [bp-20h]@3
  char *v6; // [sp+28h] [bp-8h]@3
  int v7; // [sp+2Ch] [bp-4h]@1

  v7 = a4;
  if ( a4 < 0 )
    v7 = -v7;
  v6 = sub_6F8390DC((unsigned int)&v5, (int)&v6, a3, v7);
  if ( a4 < 0 && v6 > &v5 )
    *--v6 = 45;
  return sub_6F8392E8(a1, a2, v6);
}
