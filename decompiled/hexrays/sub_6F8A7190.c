int __cdecl sub_6F8A7190(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@2
  int result; // eax@2

  if ( a2 )
  {
    v4 = a2 - 1;
    result = sub_6F8AD210(0, a1, a2 - 1, (_BYTE *)a3, (const char **)a4);
    if ( a2 - 1 > result )
      v4 = result;
    *(_BYTE *)(a1 + v4) = 0;
  }
  else
  {
    result = sub_6F8AD210(0, a1, 0, (_BYTE *)a3, (const char **)a4);
  }
  return result;
}
