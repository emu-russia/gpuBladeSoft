char __cdecl sub_6F861624(int a1)
{
  int v1; // eax@1
  int v2; // eax@6
  int v4; // edx@11
  int v5; // eax@13

  v1 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v1 - 205) > 1 )
  {
    if ( v1 == 207 )
    {
      *(_DWORD *)(a1 + 20) = 210;
      goto LABEL_6;
    }
    if ( v1 == 210 )
      goto LABEL_6;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 64) )
  {
LABEL_11:
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 21;
    *(_DWORD *)(v4 + 24) = v1;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 96) )
  {
    v5 = *(_DWORD *)a1;
    *(_DWORD *)(v5 + 20) = 69;
    (*(void (__cdecl **)(int))v5)(a1);
  }
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 400) + 4))(a1);
  *(_DWORD *)(a1 + 20) = 210;
  do
  {
LABEL_6:
    v2 = *(_DWORD *)(a1 + 416);
    if ( *(_BYTE *)(v2 + 17) )
    {
      (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 24) + 24))(a1);
      sub_6F85F3E0(a1);
      return 1;
    }
  }
  while ( (*(int (__cdecl **)(int))v2)(a1) );
  return 0;
}
