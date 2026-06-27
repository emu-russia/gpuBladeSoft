char __cdecl sub_6F818550(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp@1
  int v6; // ebx@2
  char v7; // di@3
  int v8; // ecx@3
  signed int v9; // eax@4
  int v10; // eax@6
  int v11; // ebx@6
  int v12; // edx@6
  char result; // al@6
  int v14; // ecx@6
  int v15; // [sp+0h] [bp-14h]@3

  v5 = *(_DWORD *)(a1 + 4 * a3 + 496);
  if ( a3 )
  {
    v6 = *(_DWORD *)(a1 + 48);
    if ( v6 & 2 )
    {
      v7 = byte_6FB8E9DF[a5];
      v8 = byte_6FB8EA5F[a5];
      v15 = byte_6FB8E9DF[a5];
    }
    else
    {
      v7 = byte_6FB8EA1F[a5];
      v8 = byte_6FB8EA9F[a5];
      v15 = byte_6FB8EA1F[a5];
    }
    v9 = 1;
    if ( !(v6 & 1) )
      goto LABEL_6;
  }
  else
  {
    v7 = byte_6FB8E9DF[a5];
    v8 = byte_6FB8EA5F[a5];
    v15 = byte_6FB8E9DF[a5];
  }
  v9 = 0;
LABEL_6:
  v10 = a4 + (v9 << 6) + 31;
  v11 = byte_6FB8EA40[v10];
  v12 = byte_6FB8E9C0[v10];
  result = 1;
  v14 = v11 + v5 * v8;
  if ( (unsigned __int8)v12 | (unsigned __int8)v7 )
  {
    result = 2;
    *(_DWORD *)(a2 + 4) = v14 + v5 * v15 + v12;
  }
  *(_DWORD *)a2 = v14;
  return result;
}
