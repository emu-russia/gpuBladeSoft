signed int __cdecl sub_6F8B1430(int a1, signed int a2)
{
  unsigned int v2; // ebx@1
  signed int v3; // edx@1
  unsigned int *v4; // esi@2
  signed int result; // eax@4
  unsigned int *v6; // edx@4

  v2 = a1 + 20;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 >= a2 >> 5 )
  {
    v4 = (unsigned int *)(v2 + 4 * (a2 >> 5));
    if ( v3 > a2 >> 5 )
    {
      if ( a2 & 0x1F )
      {
        result = 1;
        if ( *v4 != *v4 >> (a2 & 0x1F) << (a2 & 0x1F) )
          return result;
      }
    }
  }
  else
  {
    v4 = (unsigned int *)(v2 + 4 * v3);
  }
  if ( v2 >= (unsigned int)v4 )
  {
    result = 0;
  }
  else
  {
    result = *(v4 - 1);
    v6 = v4 - 1;
    if ( result )
    {
LABEL_13:
      result = 1;
    }
    else
    {
      while ( v2 < (unsigned int)v6 )
      {
        --v6;
        if ( *v6 )
          goto LABEL_13;
      }
    }
  }
  return result;
}
