BOOL __cdecl sub_6F7CA120(signed int a1, signed int a2, signed int a3, signed int a4)
{
  int v4; // edx@1
  int v5; // ebp@1
  int v6; // ebx@2
  int v7; // ebp@3
  int v8; // edi@3
  int v9; // ecx@4
  int v10; // esi@5
  int v11; // eax@5
  signed int v12; // eax@6

  v4 = ((a1 >> 31) ^ a1) - (a1 >> 31);
  v5 = ((a2 >> 31) ^ a2) - (a2 >> 31);
  if ( v4 <= v5 )
    v6 = (3 * v4 >> 3) + v5;
  else
    v6 = v4 + (3 * v5 >> 3);
  v7 = ((a3 >> 31) ^ a3) - (a3 >> 31);
  v8 = ((a4 >> 31) ^ a4) - (a4 >> 31);
  if ( v7 <= v8 )
    v9 = (3 * v7 >> 3) + v8;
  else
    v9 = (3 * v8 >> 3) + v7;
  v10 = (((a1 + a3) >> 31) ^ (a1 + a3)) - ((a1 + a3) >> 31);
  v11 = abs(a2 + a4);
  if ( v10 > v11 )
    v12 = (3 * v11 >> 3) + v10;
  else
    v12 = (3 * v10 >> 3) + v11;
  return v6 + v9 - v12 < v12 >> 4;
}
