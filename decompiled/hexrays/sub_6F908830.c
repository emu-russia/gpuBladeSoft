_DWORD *__cdecl sub_6F908830(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx@1
  size_t v3; // edx@2
  _DWORD *result; // eax@10

  v2 = a1;
  if ( a1 > 0x3FFFFFFC )
    sub_6F95B240("basic_string::_S_create");
  v3 = a1 + 13;
  if ( a1 > a2 )
  {
    if ( a1 < 2 * a2 )
      v2 = 2 * a2;
    if ( v2 + 29 > 0x1000 && a2 < v2 )
    {
      v2 = v2 + 4096 - (((_WORD)v2 + 29) & 0xFFF);
      if ( v2 > 0x3FFFFFFC )
        v2 = 1073741820;
    }
    v3 = v2 + 13;
  }
  result = sub_6F961B60(v3);
  result[1] = v2;
  result[2] = 0;
  return result;
}
