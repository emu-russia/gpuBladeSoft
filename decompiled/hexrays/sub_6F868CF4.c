int __cdecl sub_6F868CF4(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // eax@2
  int v8; // [sp+0h] [bp-10h]@0

  if ( a5 > 0 )
  {
    v8 = a5;
    v6 = 0;
    do
    {
      qmemcpy(*(void **)(a3 + 4 * a4 + v6), *(const void **)(a1 + 4 * a2 + v6), a6);
      --v8;
      v6 += 4;
    }
    while ( v8 > 0 );
  }
  return v8;
}
