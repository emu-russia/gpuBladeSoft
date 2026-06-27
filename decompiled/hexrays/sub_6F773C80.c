void *__cdecl sub_6F773C80(int a1, signed int a2, unsigned int a3, unsigned int a4, void *a5, int *a6)
{
  void *v6; // esi@1
  int v7; // edi@5
  int v8; // edx@5
  unsigned int v9; // eax@7
  void *result; // eax@9
  void *v11; // eax@13

  v6 = a5;
  if ( ((unsigned int)a2 >> 31) | (a4 >> 31) || a3 >> 31 )
  {
    *a6 = 6;
    result = a5;
  }
  else
  {
    if ( a4 && a2 )
    {
      v7 = 10;
      v8 = 0x7FFFFFFF % a2;
      if ( (signed int)a4 <= 0x7FFFFFFF / a2 )
      {
        if ( a3 )
        {
          v9 = (*(int (__fastcall **)(unsigned int, int))(a1 + 12))(a3 * a2, v8);
          v7 = v9 < 1 ? 0x40 : 0;
          if ( v9 )
            v6 = (void *)v9;
        }
        else
        {
          v11 = (void *)(*(int (__fastcall **)(signed int, int))(a1 + 4))(a2, v8);
          v6 = v11;
          if ( v11 )
          {
            v7 = 0;
            memset(v11, 0, a2 * a4);
          }
          else
          {
            v7 = 64;
          }
        }
      }
      goto LABEL_9;
    }
    v7 = 0;
    if ( !a5 )
    {
LABEL_9:
      *a6 = v7;
      return v6;
    }
    (*(void (__cdecl **)(int, void *))(a1 + 8))(a1, a5);
    *a6 = 0;
    result = 0;
  }
  return result;
}
