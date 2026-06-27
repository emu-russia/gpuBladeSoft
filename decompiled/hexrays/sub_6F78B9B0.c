const char **__usercall sub_6F78B9B0@<eax>(int a1@<eax>, const char **a2@<edx>, const char *a3@<ecx>)
{
  const char **v3; // ebp@2
  const char *v4; // edi@2
  int v5; // esi@2
  int v6; // ebx@2
  int v7; // eax@4
  const char **result; // eax@6
  const char **v9; // [sp+1Ch] [bp-20h]@2

  if ( a1 <= 0 )
  {
    result = 0;
  }
  else
  {
    v3 = a2;
    v4 = a3;
    v5 = a1;
    v6 = 0;
    v9 = a2;
    while ( 1 )
    {
      ++v6;
      v7 = strcmp(*v3, v4);
      if ( v6 == v5 )
        break;
      v3 += 3;
      if ( !v7 )
        return &v9[3 * v6 - 3];
    }
    if ( !v7 )
      return &v9[3 * v6 - 3];
    result = 0;
  }
  return result;
}
