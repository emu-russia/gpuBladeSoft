char *__cdecl sub_6F773B30(int a1, signed int a2, unsigned int a3, signed int a4, char *a5, signed int *a6)
{
  char *v6; // ebp@1
  signed int v7; // ecx@5
  int v8; // eax@7
  char *v10; // eax@14

  v6 = a5;
  if ( !(((unsigned int)a4 >> 31) | (a3 >> 31)) && !((unsigned int)a2 >> 31) )
  {
    if ( a4 && a2 )
    {
      v7 = 10;
      if ( a4 > 0x7FFFFFFF / a2 )
        goto LABEL_10;
      if ( a3 )
      {
        v8 = (*(int (__fastcall **)(signed int, int))(a1 + 12))(10, 0x7FFFFFFF % a2);
        v7 = 64;
        if ( v8 )
        {
          v6 = (char *)v8;
          goto LABEL_9;
        }
LABEL_10:
        *a6 = v7;
        return v6;
      }
      v10 = (char *)(*(int (__thiscall **)(signed int))(a1 + 4))(10);
      v6 = v10;
      if ( !v10 )
      {
        v7 = 64;
        goto LABEL_10;
      }
      memset(v10, 0, a4 * a2);
    }
    else
    {
      if ( !a5 )
      {
LABEL_9:
        v7 = 0;
        if ( (signed int)a3 >= a4 )
          goto LABEL_10;
        goto LABEL_16;
      }
      v6 = 0;
      (*(void (__thiscall **)(unsigned int))(a1 + 8))(a3 >> 31);
      v7 = 0;
      if ( (signed int)a3 >= a4 )
        goto LABEL_10;
    }
LABEL_16:
    memset(&v6[a2 * a3], 0, a2 * (a4 - a3));
    *a6 = 0;
    return v6;
  }
  *a6 = 6;
  return a5;
}
