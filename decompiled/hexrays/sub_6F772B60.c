size_t __cdecl sub_6F772B60(int a1, unsigned int a2, void *a3, size_t a4)
{
  FILE *v4; // esi@3
  size_t result; // eax@5

  if ( a4 || *(_DWORD *)(a1 + 4) >= a2 )
  {
    v4 = *(FILE **)(a1 + 12);
    if ( a2 != *(_DWORD *)(a1 + 8) )
      fseek(v4, a2, 0);
    result = fread(a3, 1u, a4, v4);
  }
  else
  {
    result = 1;
  }
  return result;
}
