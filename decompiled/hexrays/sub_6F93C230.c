void *__stdcall sub_6F93C230(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // eax@1
  unsigned int v3; // edx@3
  void *result; // eax@5

  v2 = *a1;
  if ( (*a1 & 0x80000000) != 0 )
    sub_6F95B240("basic_string::_M_create");
  if ( v2 <= a2 || (v3 = 2 * a2, v2 >= 2 * a2) )
  {
    result = sub_6F961B60(v2 + 1);
  }
  else if ( a2 & 0x40000000 )
  {
    *a1 = 0x7FFFFFFF;
    result = sub_6F961B60(0x80000000);
  }
  else
  {
    *a1 = v3;
    result = sub_6F961B60(v3 + 1);
  }
  return result;
}
