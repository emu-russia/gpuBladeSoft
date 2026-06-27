signed int __cdecl sub_6F838056(int a1, double a2, int a3)
{
  double v4; // [sp+28h] [bp-10h]@1

  v4 = sub_6F8A7260(a2 * 100000.0 + 0.5);
  if ( v4 > 2147483647.0 || v4 < -2147483648.0 )
    sub_6F8398FF(a1, a3);
  return (signed int)v4;
}
