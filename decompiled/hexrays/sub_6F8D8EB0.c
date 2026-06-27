int __stdcall sub_6F8D8EB0(int *a1, const CHAR *a2, unsigned int a3, int a4)
{
  int v4; // esi@1
  int v5; // edi@1
  const CHAR *v6; // ebp@1
  signed int v7; // eax@5
  int v9; // [sp+1Ch] [bp-20h]@1

  v4 = 0;
  v5 = a4;
  v6 = a2;
  v9 = *a1;
  if ( a4 && (unsigned int)a2 < a3 )
  {
    do
    {
      v7 = sub_6F8A29A0(0, v6, a3 - (_DWORD)v6, &v9);
      if ( (unsigned int)(v7 + 2) <= 1 )
        break;
      if ( !v7 )
        v7 = 1;
      --v5;
      v6 += v7;
      *a1 = v9;
      v4 += v7;
      if ( a3 <= (unsigned int)v6 )
        break;
    }
    while ( v5 );
  }
  return v4;
}
