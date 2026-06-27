signed int __cdecl sub_6F78BAB0(int a1, int a2)
{
  int v2; // edi@1
  int v3; // ebx@1
  int v4; // eax@2
  int v5; // edx@2

  v2 = *(_DWORD *)(a2 + 16);
  v3 = *(_DWORD *)a1;
  if ( v2 )
  {
    v4 = *(_DWORD *)a2;
    v5 = ((*(_DWORD *)(a2 + 8) * v2 + 36) / 72 + 32) >> 6;
    if ( *(_DWORD *)a2 )
      goto LABEL_3;
LABEL_7:
    if ( v5 != (*(_DWORD *)(*(_DWORD *)(v3 + 32) + 12) + 32) >> 6 )
      return 23;
LABEL_8:
    sub_6F76C670(*(_DWORD *)a1, 0);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v3 + 204) << 6;
    *(_DWORD *)(a1 + 28) = -64 * *(_DWORD *)(v3 + 208);
    *(_DWORD *)(a1 + 36) = *(_WORD *)(v3 + 236) << 6;
    return 0;
  }
  v4 = *(_DWORD *)a2;
  v5 = (*(_DWORD *)(a2 + 8) + 32) >> 6;
  if ( !*(_DWORD *)a2 )
    goto LABEL_7;
LABEL_3:
  if ( v4 == 1 )
  {
    if ( v5 != *(_DWORD *)(v3 + 204) + *(_DWORD *)(v3 + 208) )
      return 23;
    goto LABEL_8;
  }
  return 7;
}
