int __cdecl sub_6F85E658(int a1)
{
  int v1; // esi@1
  unsigned int v2; // eax@1
  int v3; // eax@4
  int v4; // ecx@5
  int v5; // edx@5
  int result; // eax@5

  v1 = *(_DWORD *)(a1 + 372);
  v2 = *(_DWORD *)(v1 + 16);
  if ( v2 == 1 )
  {
    sub_6F85E2B4(a1);
    sub_6F85E484(a1);
    if ( *(_DWORD *)(a1 + 344) || !*(_DWORD *)(a1 + 352) )
    {
      (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 404))(a1, 1);
      (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 384))(a1, 2);
      *(_BYTE *)(v1 + 12) = 0;
      goto LABEL_5;
    }
    *(_DWORD *)(v1 + 16) = 2;
    ++*(_DWORD *)(v1 + 20);
    goto LABEL_14;
  }
  if ( v2 >= 1 )
  {
    if ( v2 != 2 )
    {
      v3 = *(_DWORD *)a1;
      *(_DWORD *)(v3 + 20) = 49;
      (*(void (__cdecl **)(int))v3)(a1);
      goto LABEL_5;
    }
LABEL_14:
    if ( !*(_BYTE *)(a1 + 210) )
    {
      sub_6F85E2B4(a1);
      sub_6F85E484(a1);
    }
    (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 404))(a1, 0);
    (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 384))(a1, 2);
    if ( !*(_DWORD *)(v1 + 28) )
      (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 388) + 4))(a1);
    (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 388) + 8))(a1);
    *(_BYTE *)(v1 + 12) = 0;
    goto LABEL_5;
  }
  sub_6F85E2B4(a1);
  sub_6F85E484(a1);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    (**(void (__cdecl ***)(_DWORD))(a1 + 392))(a1);
    (**(void (__cdecl ***)(_DWORD))(a1 + 396))(a1);
    (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 380))(a1, 0);
  }
  (**(void (__cdecl ***)(_DWORD))(a1 + 400))(a1);
  (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 404))(a1, *(_BYTE *)(a1 + 210));
  (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 384))(a1, 3 * (*(_DWORD *)(v1 + 24) >= 2));
  (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 376))(a1, 0);
  *(_BYTE *)(v1 + 12) = *(_BYTE *)(a1 + 210) == 0;
LABEL_5:
  v4 = *(_DWORD *)(v1 + 20);
  v5 = *(_DWORD *)(v1 + 24);
  *(_BYTE *)(v1 + 13) = v4 == v5 - 1;
  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    *(_DWORD *)(result + 12) = v4;
    *(_DWORD *)(result + 16) = v5;
  }
  return result;
}
