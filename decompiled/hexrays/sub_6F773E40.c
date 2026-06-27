void *__cdecl sub_6F773E40(int a1, const char *a2, signed int *a3)
{
  size_t v3; // eax@2
  size_t v4; // ebx@2
  void *v5; // edi@3
  void *result; // eax@4
  signed int v7; // edx@7

  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    if ( (signed int)(v3 + 1) <= 0 )
    {
      if ( v3 == -1 )
      {
        v5 = 0;
        goto LABEL_4;
      }
      v7 = 6;
    }
    else
    {
      v5 = (void *)(*(int (__cdecl **)(int, int))(a1 + 4))(a1, v3 + 1);
      if ( v5 )
      {
LABEL_4:
        memcpy(v5, a2, v4);
        *a3 = 0;
        return v5;
      }
      v7 = 64;
    }
    *a3 = v7;
    result = 0;
  }
  else
  {
    *a3 = 0;
    result = 0;
  }
  return result;
}
