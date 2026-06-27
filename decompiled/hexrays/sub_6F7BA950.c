signed int __cdecl sub_6F7BA950(int a1, unsigned int a2, int a3)
{
  signed int v3; // esi@1
  int v4; // ebx@4
  signed int v5; // eax@5
  char v7[44]; // [sp+10h] [bp-2Ch]@5

  v3 = 4;
  if ( a2 <= 4 )
    v3 = a2;
  if ( v3 )
  {
    v4 = 0;
    do
    {
      LOWORD(v5) = sub_6F7C9390(*(_DWORD *)(a3 + 4 * v4));
      *(_DWORD *)&v7[4 * v4++] = v5 >> 16;
    }
    while ( v4 != v3 );
  }
  return sub_6F7BA710(a1, v3, (int)v7);
}
