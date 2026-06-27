signed int __stdcall sub_6F8D8CA0(int *a1, const CHAR *a2, unsigned int a3, const CHAR **a4, WCHAR *a5, unsigned int a6, WCHAR **a7)
{
  const CHAR *v7; // esi@1
  WCHAR *v8; // edi@1
  const CHAR *v9; // edi@3
  WCHAR *v10; // esi@3
  signed int v11; // eax@6
  signed int result; // eax@10
  int v13; // [sp+1Ch] [bp-20h]@1
  WCHAR *v14; // [sp+50h] [bp+14h]@10
  WCHAR *v15; // [sp+50h] [bp+14h]@12
  WCHAR *v16; // [sp+50h] [bp+14h]@14

  v7 = a2;
  v8 = a5;
  v13 = *a1;
  if ( (unsigned int)a5 >= a6 || (unsigned int)a2 >= a3 )
  {
LABEL_13:
    result = a3 <= (unsigned int)v7;
    LOBYTE(result) = a3 > (unsigned int)v7;
  }
  else
  {
    v9 = a2;
    v10 = a5;
    while ( 1 )
    {
      v11 = sub_6F8A29A0(v10, v9, a3 - (_DWORD)v9, &v13);
      if ( v11 == -1 )
      {
        v14 = v10;
        v7 = v9;
        v8 = v14;
        result = 2;
        goto LABEL_11;
      }
      if ( v11 == -2 )
        break;
      if ( !v11 )
      {
        *v10 = 0;
        v11 = 1;
      }
      v9 += v11;
      ++v10;
      *a1 = v13;
      if ( a3 <= (unsigned int)v9 || a6 <= (unsigned int)v10 )
      {
        v15 = v10;
        v7 = v9;
        v8 = v15;
        goto LABEL_13;
      }
    }
    v16 = v10;
    result = 1;
    v7 = v9;
    v8 = v16;
  }
LABEL_11:
  *a4 = v7;
  *a7 = v8;
  return result;
}
