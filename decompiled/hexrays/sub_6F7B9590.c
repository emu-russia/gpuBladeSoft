int __cdecl sub_6F7B9590(const char *a1, size_t a2, int a3)
{
  int result; // eax@1
  const char *v4; // edx@1
  int v5; // ebp@2
  int v6; // edi@3
  int v7; // ebx@3
  const char *v8; // esi@5
  size_t v9; // eax@7
  int v10; // eax@8
  const char *v11; // [sp+1Ch] [bp-20h]@7

  result = 0;
  v4 = a1;
  if ( a2 <= 0xFFFF )
  {
    v5 = *(_DWORD *)(a3 + 284);
    if ( v5 > 0 )
    {
      v6 = *(_DWORD *)(a3 + 288);
      v7 = 0;
      do
      {
        v8 = *(const char **)(v6 + 4 * v7);
        if ( v8 )
        {
          if ( *v8 == *v4 )
          {
            v11 = v4;
            v9 = strlen(*(const char **)(v6 + 4 * v7));
            v4 = v11;
            if ( a2 == v9 )
            {
              v10 = strncmp(v8, v11, a2);
              v4 = v11;
              if ( !v10 )
                return v7;
            }
          }
        }
        ++v7;
      }
      while ( v7 != v5 );
      result = 0;
    }
  }
  return result;
}
