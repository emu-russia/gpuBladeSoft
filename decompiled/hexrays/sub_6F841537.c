void __cdecl sub_6F841537(int a1, void *a2, size_t a3)
{
  if ( a1 )
  {
    if ( fread(a2, 1u, a3, *(FILE **)(a1 + 96)) != a3 )
      sub_6F839044(a1, (int)"Read Error");
  }
}
