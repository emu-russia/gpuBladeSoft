signed int __cdecl sub_6F772140(int a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int v4; // eax@1
  signed int result; // eax@2
  int (__cdecl *v6)(int, unsigned int, void *, unsigned int); // edx@3
  unsigned int v7; // ebx@4
  size_t v8; // eax@7

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 <= a2 )
    goto LABEL_12;
  v6 = *(int (__cdecl **)(int, unsigned int, void *, unsigned int))(a1 + 20);
  if ( v6 )
  {
    v7 = v6(a1, a2, a3, a4);
  }
  else
  {
    v8 = v4 - a2;
    if ( a4 <= v8 )
      v8 = a4;
    v7 = v8;
    memcpy(a3, (const void *)(a2 + *(_DWORD *)a1), v8);
  }
  result = 0;
  *(_DWORD *)(a1 + 8) = v7 + a2;
  if ( v7 < a4 )
LABEL_12:
    result = 85;
  return result;
}
