int *__cdecl sub_6F8B11E0(int a1, signed int a2, signed int a3, int a4, int a5)
{
  signed int v5; // edi@1
  int v6; // eax@2
  signed int v7; // ecx@2
  int *result; // eax@4
  int v9; // ebp@5
  int v10; // ebx@7
  int v11; // esi@9

  v5 = a2;
  if ( a3 <= 9 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 1;
    v7 = 0;
    do
    {
      v6 *= 2;
      ++v7;
    }
    while ( (a3 + 8) / 9 > v6 );
  }
  result = sub_6F8B0700(v7);
  result[4] = 1;
  result[5] = a4;
  if ( a2 <= 9 )
  {
    v10 = a1 + a5 + 9;
    v5 = 9;
  }
  else
  {
    v9 = a1 + 9;
    do
      result = sub_6F8B0850((int)result, 10, *(_BYTE *)(++v9 - 1) - 48);
    while ( v9 != a1 + a2 );
    v10 = a1 + a2 + a5;
  }
  if ( a3 > v5 )
  {
    v11 = v10 + a3 - v5;
    do
      result = sub_6F8B0850((int)result, 10, *(_BYTE *)(++v10 - 1) - 48);
    while ( v11 != v10 );
  }
  return result;
}
