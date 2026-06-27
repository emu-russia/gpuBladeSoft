void *__cdecl sub_6F83B411(int a1, const void *a2, int a3, int a4, unsigned int a5)
{
  void *result; // eax@11
  void *v6; // [sp+1Ch] [bp-Ch]@8

  if ( a4 <= 0 || !a5 || a3 < 0 || !a2 && a3 > 0 )
    sub_6F839044(a1, (int)"internal error: array realloc");
  if ( 0x7FFFFFFF - a3 >= a4 && (v6 = sub_6F83B394(a1, a4 + a3, a5)) != 0 )
  {
    if ( a3 > 0 )
      memcpy(v6, a2, a5 * a3);
    memset((char *)v6 + a5 * a3, 0, a5 * a4);
    result = v6;
  }
  else
  {
    result = 0;
  }
  return result;
}
