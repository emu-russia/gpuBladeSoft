_DWORD *__cdecl sub_6F8FD810(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx@1
  size_t v3; // edx@5
  unsigned int v4; // ecx@5
  _DWORD *result; // eax@11

  v2 = a1;
  if ( a1 > 0x1FFFFFFE )
    sub_6F95B240("basic_string::_S_create");
  if ( a1 <= a2 )
  {
    v3 = 2 * a1 + 14;
  }
  else
  {
    if ( a1 < 2 * a2 )
      v2 = 2 * a2;
    v3 = 2 * v2 + 14;
    v4 = 2 * v2 + 30;
    if ( v4 > 0x1000 && a2 < v2 )
    {
      v2 += (4096 - (v4 & 0xFFF)) >> 1;
      if ( v2 > 0x1FFFFFFE )
        v2 = 536870910;
      v3 = 2 * v2 + 14;
    }
  }
  result = sub_6F961B60(v3);
  result[1] = v2;
  result[2] = 0;
  return result;
}
