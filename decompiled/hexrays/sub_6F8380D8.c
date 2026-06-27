signed int __cdecl sub_6F8380D8(_DWORD *a1, signed int a2, signed int a3, signed int a4)
{
  signed int result; // eax@4
  double v5; // [sp+18h] [bp-10h]@5

  if ( !a4 )
    goto LABEL_11;
  if ( !a2 || !a3 )
  {
    *a1 = 0;
    return 1;
  }
  v5 = sub_6F8A7260((double)a3 * (double)a2 / (double)a4 + 0.5);
  if ( v5 <= 2147483647.0 && v5 >= -2147483648.0 )
  {
    *a1 = (signed int)v5;
    result = 1;
  }
  else
  {
LABEL_11:
    result = 0;
  }
  return result;
}
