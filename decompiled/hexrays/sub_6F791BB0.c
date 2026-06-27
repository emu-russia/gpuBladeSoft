int __cdecl sub_6F791BB0(int a1, unsigned int a2)
{
  int v2; // ebx@2
  int v4; // eax@4
  int v5; // edi@4
  const char *v6; // esi@4
  int v7; // ebp@5
  const char *v8; // eax@7

  if ( a2 <= 0xFF
    && (v4 = (*(int (__cdecl **)(_DWORD))(a1 + 20))(*(_WORD *)(*(_DWORD *)(a1 + 16) + 2 * a2)),
        v5 = *(_DWORD *)(a1 + 24),
        v6 = (const char *)v4,
        v5) )
  {
    v7 = *(_DWORD *)(a1 + 28);
    v2 = 0;
    while ( 1 )
    {
      v8 = *(const char **)(v7 + 4 * v2);
      if ( v8 )
      {
        if ( *v8 == *v6 && !strcmp(v8, v6) )
          break;
      }
      if ( v5 == ++v2 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v2 = 0;
  }
  return v2;
}
