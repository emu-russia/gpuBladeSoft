int __cdecl sub_6F959F20(int a1, int a2, int a3, int a4, char a5)
{
  const char *v5; // edi@1
  bool v6; // cf@1
  bool v7; // zf@1
  const char *v8; // eax@1
  signed int v9; // ecx@1
  const char *v10; // esi@1
  const char *v11; // ebx@1
  int result; // eax@5
  size_t v13; // edi@6
  void *v14; // esi@6
  int v15; // ebx@6

  v5 = "C";
  v8 = (const char *)setlocale();
  v9 = 2;
  v10 = v8;
  v11 = v8;
  do
  {
    if ( !v9 )
      break;
    v6 = (const unsigned __int8)*v10 < *v5;
    v7 = *v10++ == *v5++;
    --v9;
  }
  while ( v7 );
  if ( (!v6 && !v7) == v6 )
  {
    result = sub_6F8A7190(a2, a3, a4, (int)&a5);
  }
  else
  {
    v13 = strlen(v8) + 1;
    v14 = sub_6F961B40(v13);
    memcpy(v14, v11, v13);
    setlocale();
    v15 = sub_6F8A7190(a2, a3, a4, (int)&a5);
    setlocale();
    j_j_free_1(v14);
    result = v15;
  }
  return result;
}
