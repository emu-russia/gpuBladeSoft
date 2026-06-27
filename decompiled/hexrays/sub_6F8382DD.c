signed int __cdecl sub_6F8382DD(signed int a1, signed int a2)
{
  signed int result; // eax@3
  double v3; // [sp+18h] [bp-10h]@1

  v3 = sub_6F8A7260(1.0e15 / (double)a1 / (double)a2 + 0.5);
  if ( v3 > 2147483647.0 || v3 < -2147483648.0 )
    result = 0;
  else
    result = (signed int)v3;
  return result;
}
