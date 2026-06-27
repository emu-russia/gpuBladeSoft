signed int __cdecl sub_6F8A3B00(FILE *a1, __int64 a2, int a3)
{
  const fpos_t *v3; // ebp@4
  signed int result; // eax@5
  int v5; // eax@9
  __int64 v6; // rax@9
  __int64 v7; // [sp+18h] [bp-24h]@4

  if ( a3 == 1 )
  {
    v3 = &v7;
    if ( !fgetpos(a1, &v7) )
    {
      v7 += a2;
      return fsetpos(a1, v3);
    }
    result = -1;
  }
  else
  {
    if ( a3 == 2 )
    {
      v3 = &v7;
      fflush(a1);
      v5 = fileno(a1);
      LODWORD(v6) = filelengthi64(v5);
      v7 = v6 + a2;
      return fsetpos(a1, v3);
    }
    if ( !a3 )
    {
      v7 = a2;
      v3 = &v7;
      return fsetpos(a1, v3);
    }
    *errno() = 22;
    result = -1;
  }
  return result;
}
