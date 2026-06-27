signed int __cdecl sub_6F95B860(int a1, int a2, _BYTE *a3, int a4)
{
  _BYTE *v4; // ecx@1
  int v5; // edx@1
  unsigned int v6; // ebp@1
  unsigned int v7; // eax@4
  signed int v8; // ebx@5
  char v9; // cl@5
  bool v10; // cl@5
  bool v11; // di@5
  signed int v12; // eax@7
  signed int v13; // esi@7
  int v14; // ebx@8
  signed int v15; // eax@10
  bool v16; // dl@14
  char v18; // [sp+3h] [bp-11h]@5

  v4 = a3;
  v5 = a4 - 1;
  v6 = a2 - 1;
  if ( a2 - 1 > (unsigned int)(a4 - 1) )
    v6 = a4 - 1;
  if ( v6 )
  {
    v7 = 0;
    do
    {
      v8 = a3[v5--];
      v9 = *(_BYTE *)(a1 + v7++);
      v18 = v9;
      v10 = (_BYTE)v8 != v9;
      v11 = v10;
    }
    while ( v7 < v6 && !v10 );
    v12 = v8;
    v4 = a3;
    LOBYTE(v12) = (_BYTE)v8 == v18;
    v13 = v12;
  }
  else
  {
    v11 = 0;
    v13 = 1;
  }
  v14 = *(_BYTE *)(a1 + v6);
  if ( v5 && !v11 )
  {
    do
      v15 = v4[v5--];
    while ( v5 && (_BYTE)v15 == (_BYTE)v14 );
    LOBYTE(v15) = (_BYTE)v15 == (_BYTE)v14;
    v13 = v15;
  }
  if ( (unsigned __int8)(v14 - 1) <= 0x7Du )
  {
    v16 = *v4 <= (char)v14;
    v13 &= v14 - 1;
  }
  return v13;
}
