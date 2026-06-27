char *__cdecl sub_6F792FE0(int a1)
{
  char *v1; // ebp@1
  char *result; // eax@1
  char v3; // dl@2

  v1 = *(char **)(a1 + 8);
  result = *(char **)a1;
  if ( (unsigned int)v1 > *(_DWORD *)a1 )
  {
    do
    {
      v3 = *result;
      if ( (unsigned __int8)(v3 - 12) > 1u && (unsigned __int8)(v3 - 9) > 1u && v3 & 0xDF )
      {
        if ( v3 != 37 )
          break;
        if ( v1 > result )
        {
          while ( v1 != ++result )
          {
            if ( *result == 13 || *result == 10 )
              goto LABEL_11;
          }
          result = *(char **)(a1 + 8);
        }
      }
LABEL_11:
      ++result;
    }
    while ( v1 > result );
  }
  *(_DWORD *)a1 = result;
  return result;
}
