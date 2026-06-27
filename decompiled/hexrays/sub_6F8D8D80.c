signed int __stdcall sub_6F8D8D80(int *a1, __int16 *a2, unsigned int a3, __int16 **a4, CHAR *a5, unsigned int a6, CHAR **a7)
{
  __int16 *v7; // edi@1
  CHAR *v8; // ebx@1
  CHAR *v9; // ST00_4@6
  unsigned int v10; // ebp@8
  signed int result; // eax@9
  int v12; // eax@15
  int v13; // [sp+24h] [bp-28h]@1
  char v14; // [sp+2Bh] [bp-21h]@6

  v7 = a2;
  v8 = a5;
  v13 = *a1;
  if ( (signed int)(___mb_cur_max_func() * ((signed int)(a3 - (_DWORD)a2) >> 1) - (a6 - (_DWORD)a5)) <= 0 )
  {
    if ( a3 <= (unsigned int)a2 )
    {
LABEL_17:
      result = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v12 = sub_6F8A3660(v8, *v7);
      if ( v12 == -1 )
        break;
      v8 += v12;
      ++v7;
      *a1 = v13;
      if ( a3 <= (unsigned int)v7 )
        goto LABEL_17;
    }
  }
  else
  {
    if ( a6 <= (unsigned int)a5 || a3 <= (unsigned int)a2 )
    {
LABEL_11:
      result = a3 <= (unsigned int)v7;
      LOBYTE(result) = a3 > (unsigned int)v7;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v10 = sub_6F8A3660(&v14, *v7);
      if ( v10 == -1 )
        break;
      if ( a6 - (unsigned int)v8 < v10 )
      {
        result = 1;
        goto LABEL_10;
      }
      v9 = v8;
      ++v7;
      v8 += v10;
      memcpy(v9, &v14, v10);
      *a1 = v13;
      if ( a3 <= (unsigned int)v7 || a6 <= (unsigned int)v8 )
        goto LABEL_11;
    }
  }
  result = 2;
LABEL_10:
  *a4 = v7;
  *a7 = v8;
  return result;
}
