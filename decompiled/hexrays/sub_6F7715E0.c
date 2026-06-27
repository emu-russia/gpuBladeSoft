signed int __cdecl sub_6F7715E0(int *a1, int a2, const char *a3, char **a4, _DWORD *a5)
{
  const char *v5; // esi@1
  int v6; // ebx@1
  size_t v7; // eax@1
  char *v8; // eax@1
  int v9; // edi@1
  char *v10; // ebx@2
  char *v11; // eax@2
  int v12; // ST1C_4@3
  size_t v13; // edx@4
  signed int result; // eax@4
  int v15; // [sp+2Ch] [bp-20h]@1

  v5 = a3;
  v15 = 0;
  v6 = *a1;
  v7 = strlen(a3);
  v8 = (char *)sub_6F773A50(v6, v7 + 11, &v15);
  v9 = v15;
  if ( v15 )
  {
    result = 64;
  }
  else
  {
    v10 = v8;
    v11 = strrchr(a3, 47);
    if ( v11 )
    {
      v5 = v11 + 1;
      v12 = v11 - a3;
      strncpy(v10, a3, v11 - a3 + 1);
      v10[v12 + 1] = 0;
    }
    else
    {
      *v10 = 0;
    }
    v13 = (size_t)&v10[strlen(v10)];
    *(_DWORD *)v13 = 1936028206;
    *(_DWORD *)(v13 + 4) = 1668445551;
    *(_WORD *)(v13 + 8) = 12133;
    strcpy((char *)(v13 + 10), v5);
    *a4 = v10;
    *a5 = 0;
    result = v9;
  }
  return result;
}
