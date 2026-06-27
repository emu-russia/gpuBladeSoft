double __cdecl sub_6F83796C(signed int a1)
{
  double v2; // [sp+8h] [bp-18h]@6
  double v3; // [sp+10h] [bp-10h]@1
  signed int v4; // [sp+1Ch] [bp-4h]@1

  v4 = 0;
  v3 = 1.0;
  if ( a1 < 0 )
  {
    if ( a1 < -307 )
      return 0.0;
    v4 = 1;
    a1 = -a1;
  }
  if ( a1 > 0 )
  {
    v2 = 10.0;
    do
    {
      if ( a1 & 1 )
        v3 = v3 * v2;
      v2 = v2 * v2;
      a1 >>= 1;
    }
    while ( a1 > 0 );
    if ( v4 )
      v3 = 1.0 / v3;
  }
  return v3;
}
