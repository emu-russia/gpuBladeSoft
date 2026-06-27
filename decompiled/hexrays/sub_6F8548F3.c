void __cdecl sub_6F8548F3(int a1, _DWORD *a2)
{
  signed int v2; // [sp+10h] [bp-18h]@2
  const void **v3; // [sp+14h] [bp-14h]@3
  signed int i; // [sp+18h] [bp-10h]@2
  unsigned int v5; // [sp+1Ch] [bp-Ch]@3

  if ( a1 )
  {
    v2 = sub_6F852D60(a1);
    for ( i = 0; i < v2; ++i )
    {
      v5 = 0;
      v3 = (const void **)a2;
      while ( *(_DWORD *)(a1 + 260) > v5 )
      {
        sub_6F85495F(a1, *v3);
        ++v5;
        ++v3;
      }
    }
  }
}
