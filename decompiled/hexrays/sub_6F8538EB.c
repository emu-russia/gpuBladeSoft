void __cdecl sub_6F8538EB(int a1, const void *a2, size_t a3)
{
  if ( a1 )
  {
    if ( fwrite(a2, 1u, a3, *(FILE **)(a1 + 96)) != a3 )
      sub_6F839044(a1, (int)"Write Error");
  }
}
