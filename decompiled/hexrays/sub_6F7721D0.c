int __cdecl sub_6F7721D0(int a1, void *a2, size_t a3)
{
  int v3; // esi@1
  unsigned int v4; // eax@1
  unsigned int v5; // edx@1
  int (__cdecl *v6)(int, _DWORD, void *, size_t); // ecx@2
  unsigned int v8; // edx@6

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 < v5 )
  {
    v6 = *(int (__cdecl **)(int, _DWORD, void *, size_t))(a1 + 20);
    if ( v6 )
    {
      v3 = v6(a1, *(_DWORD *)(a1 + 8), a2, a3);
    }
    else
    {
      v8 = v5 - v4;
      if ( a3 <= v8 )
        v8 = a3;
      v3 = v8;
      memcpy(a2, (const void *)(*(_DWORD *)a1 + v4), v8);
    }
    *(_DWORD *)(a1 + 8) += v3;
  }
  return v3;
}
