int __stdcall sub_6F8EFAD0(int a1, int a2, __int16 a3, const void *a4, int a5, int a6, _DWORD *a7)
{
  int v7; // ebx@2
  _WORD *v8; // eax@2
  int v9; // edx@2
  int v10; // ebp@2
  int result; // eax@4

  if ( a4 )
  {
    v7 = ((signed int)a4 - a6) >> 1;
    v8 = sub_6F9598C0((_WORD *)a5, a3, (char *)a1, a2, (char *)a6, (char *)a4);
    v9 = 0;
    v10 = ((signed int)v8 - a5) >> 1;
    if ( *a7 != v7 )
    {
      memcpy(v8, a4, 2 * (*a7 - v7));
      v9 = *a7 - v7;
    }
    result = v9 + v10;
    *a7 = v9 + v10;
  }
  else
  {
    result = ((signed int)sub_6F9598C0((_WORD *)a5, a3, (char *)a1, a2, (char *)a6, (char *)(a6 + 2 * *a7)) - a5) >> 1;
    *a7 = result;
  }
  return result;
}
