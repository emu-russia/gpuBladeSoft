signed int __cdecl sub_6F8381D3(signed int a1)
{
  signed int result; // eax@3
  double v2; // [sp+18h] [bp-10h]@1

  v2 = sub_6F8A7260(1.0e10 / (double)a1 + 0.5);
  if ( v2 > 2147483647.0 || v2 < -2147483648.0 )
    result = 0;
  else
    result = (signed int)v2;
  return result;
}
