int __cdecl sub_6F76F030(int a1, const char *a2)
{
  unsigned int v2; // ebx@3
  unsigned int v3; // ebp@3
  int v4; // esi@6
  int result; // eax@7

  if ( a1 && a2 && (v2 = a1 + 20, v3 = a1 + 20 + 4 * *(_DWORD *)(a1 + 16), a1 + 20 < v3) )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)v2;
      if ( !strcmp(*(const char **)(**(_DWORD **)v2 + 8), a2) )
        break;
      v2 += 4;
      if ( v3 <= v2 )
        goto LABEL_8;
    }
    result = v4;
  }
  else
  {
LABEL_8:
    result = 0;
  }
  return result;
}
