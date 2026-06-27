void __cdecl sub_6F88C430(int a1, int a2, const char *a3)
{
  const char *v3; // ebp@10
  size_t v4; // esi@10
  size_t v5; // eax@10
  char *v6; // esi@10
  size_t v7; // ebx@11
  size_t v8; // eax@11

  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( *(_DWORD *)(a1 + 76) != -4 )
      free(*(void **)(a1 + 80));
    *(_DWORD *)(a1 + 80) = 0;
  }
  if ( a2 != -5 && a2 )
    *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 76) = a2;
  if ( a3 && a2 != -4 )
  {
    v3 = *(const char **)(a1 + 20);
    v4 = strlen(*(const char **)(a1 + 20));
    v5 = strlen(a3);
    v6 = (char *)malloc(v4 + v5 + 3);
    *(_DWORD *)(a1 + 80) = v6;
    if ( v6 )
    {
      v7 = strlen(v3);
      v8 = strlen(a3);
      sub_6F88C270(v6, v7 + v8 + 3, "%s%s%s", v3, ": ", a3);
    }
    else
    {
      *(_DWORD *)(a1 + 76) = -4;
    }
  }
}
