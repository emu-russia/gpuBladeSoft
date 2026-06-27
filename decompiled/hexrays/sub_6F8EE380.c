char *__stdcall sub_6F8EE380(int a1, int a2, char a3, char *a4, int a5, int a6, char **a7)
{
  char *v7; // ebp@2
  _BYTE *v8; // eax@2
  char *v9; // edx@2
  int v10; // edi@2
  char *result; // eax@4

  if ( a4 )
  {
    v7 = &a4[-a6];
    v8 = sub_6F959760((_BYTE *)a5, a3, (char *)a1, a2, (_BYTE *)a6, a4);
    v9 = 0;
    v10 = (int)&v8[-a5];
    if ( *a7 != &a4[-a6] )
    {
      memcpy(v8, a4, *a7 - v7);
      v9 = (char *)(*a7 - v7);
    }
    result = &v9[v10];
    *a7 = &v9[v10];
  }
  else
  {
    result = &sub_6F959760((_BYTE *)a5, a3, (char *)a1, a2, (_BYTE *)a6, &(*a7)[a6])[-a5];
    *a7 = result;
  }
  return result;
}
