unsigned int __cdecl sub_6F852746(int a1, unsigned int a2, const void *a3, int a4)
{
  unsigned int v5; // [sp+1Ch] [bp-Ch]@1

  v5 = 0;
  while ( v5 < a2 )
  {
    if ( !memcmp((const void *)a1, a3, 4u) )
    {
      *(_BYTE *)(a1 + 4) = a4;
      return a2;
    }
    ++v5;
    a1 += 5;
  }
  if ( a4 )
  {
    ++a2;
    memcpy((void *)a1, a3, 4u);
    *(_BYTE *)(a1 + 4) = a4;
  }
  return a2;
}
