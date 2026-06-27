const char *sub_6F8A9F60(const char *a1, ...)
{
  const char *result; // eax@1
  __int16 v2; // dx@1
  int v3; // edx@2
  const char *v4; // edx@10
  int v5; // edx@14
  va_list va; // [sp+10h] [bp+8h]@1

  va_start(va, a1);
  *(_WORD *)*(int *)va = *((_WORD *)a1 + 5) >> 15;
  result = a1 + 8;
  v2 = *((_WORD *)a1 + 5) & 0x7FFF;
  *(_WORD *)(*(int *)va + 2) = v2;
  if ( v2 == 0x7FFF )
  {
    if ( (*((_WORD *)a1 + 5) & 0x7FFF) == 0x7FFF )
    {
      v4 = a1;
      while ( 1 )
      {
        v4 += 2;
        if ( *((_WORD *)v4 - 1) )
          break;
        if ( a1 + 10 == v4 )
          goto LABEL_7;
      }
      v5 = *(int *)va + 6;
      *(_WORD *)(*(int *)va + 4) = 0;
      do
      {
        result -= 2;
        v5 += 2;
        *(_WORD *)(v5 - 2) = *((_WORD *)result + 1);
      }
      while ( a1 - 4 != result );
    }
    else
    {
LABEL_7:
      result = (const char *)(*(int *)va + 4);
      do
      {
        result += 2;
        *((_WORD *)result - 1) = 0;
      }
      while ( (const char *)(*(int *)va + 18) != result );
    }
  }
  else
  {
    v3 = *(int *)va + 6;
    *(_WORD *)(*(int *)va + 4) = 0;
    do
    {
      result -= 2;
      v3 += 2;
      *(_WORD *)(v3 - 2) = *((_WORD *)result + 1);
    }
    while ( result != a1 - 2 );
    result = 0;
    *(_WORD *)(*(int *)va + 16) = 0;
  }
  return result;
}
