signed int __cdecl sub_6F7720B0(int a1, void *a2, size_t a3)
{
  unsigned int v3; // edi@1
  unsigned int v4; // eax@1
  signed int result; // eax@2
  int (__cdecl *v6)(int, _DWORD, void *, size_t); // edx@3
  size_t v7; // esi@4
  unsigned int v8; // eax@7

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v3 >= v4 )
    goto LABEL_12;
  v6 = *(int (__cdecl **)(int, _DWORD, void *, size_t))(a1 + 20);
  if ( v6 )
  {
    v7 = v6(a1, *(_DWORD *)(a1 + 8), a2, a3);
  }
  else
  {
    v8 = v4 - v3;
    if ( a3 <= v8 )
      v8 = a3;
    v7 = v8;
    memcpy(a2, (const void *)(v3 + *(_DWORD *)a1), v8);
  }
  result = 0;
  *(_DWORD *)(a1 + 8) = v7 + v3;
  if ( a3 > v7 )
LABEL_12:
    result = 85;
  return result;
}
