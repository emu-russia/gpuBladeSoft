void *__stdcall sub_6F93F180(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // eax@1
  unsigned int v3; // edx@3

  v2 = *a1;
  if ( *a1 > 0x3FFFFFFF )
    sub_6F95B240("basic_string::_M_create");
  if ( v2 > a2 )
  {
    v3 = 2 * a2;
    if ( v2 < 2 * a2 )
    {
      if ( v3 > 0x3FFFFFFF )
      {
        *a1 = 0x3FFFFFFF;
        return sub_6F961B60(0x80000000);
      }
      *a1 = v3;
      v2 = 2 * a2;
    }
  }
  return sub_6F961B60(2 * v2 + 2);
}
