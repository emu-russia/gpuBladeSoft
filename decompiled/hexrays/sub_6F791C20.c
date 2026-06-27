int __cdecl sub_6F791C20(int a1, int *a2)
{
  unsigned int v2; // eax@1
  const char *v3; // esi@2
  int v4; // edi@2
  int v5; // ebp@3
  int v6; // ebx@3
  const char *v7; // eax@5
  int v9; // [sp+18h] [bp-24h]@1
  int v10; // [sp+1Ch] [bp-20h]@1

  v2 = *a2 + 1;
  v9 = *a2 + 1;
  v10 = 2 * v2;
  if ( v2 > 0xFF )
  {
LABEL_10:
    v9 = 0;
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v3 = (const char *)(*(int (__cdecl **)(_DWORD))(a1 + 20))(*(_WORD *)(*(_DWORD *)(a1 + 16) + v10));
      v4 = *(_DWORD *)(a1 + 24);
      if ( v4 )
      {
        v5 = *(_DWORD *)(a1 + 28);
        v6 = 0;
        while ( 1 )
        {
          v7 = *(const char **)(v5 + 4 * v6);
          if ( v7 )
          {
            if ( *v7 == *v3 && !strcmp(v7, v3) )
              break;
          }
          if ( v4 == ++v6 )
            goto LABEL_9;
        }
        if ( v6 )
          break;
      }
LABEL_9:
      ++v9;
      v10 += 2;
      if ( v9 == 256 )
        goto LABEL_10;
    }
  }
  *a2 = v9;
  return v6;
}
