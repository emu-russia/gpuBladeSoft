signed int __cdecl sub_6F8419E6(int a1, double a2)
{
  double v3; // [sp+18h] [bp-10h]@1
  double v4; // [sp+18h] [bp-10h]@4

  v3 = a2;
  if ( a2 > 0.0 && a2 < 128.0 )
    v3 = a2 * 100000.0;
  v4 = sub_6F8A7260(v3 + 0.5);
  if ( v4 > 2147483647.0 || v4 < -2147483647.0 )
    sub_6F8398FF(a1, (int)"gamma value");
  return (signed int)v4;
}
