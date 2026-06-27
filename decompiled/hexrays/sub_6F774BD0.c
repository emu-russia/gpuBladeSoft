signed int __cdecl sub_6F774BD0(int a1, int a2)
{
  int v2; // ebp@1
  int v3; // edi@1
  int v4; // esi@1
  int v5; // eax@2
  int v6; // edx@2

  v2 = *(_DWORD *)(a2 + 16);
  v3 = *(_DWORD *)a1;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 140);
  if ( v2 )
  {
    v5 = *(_DWORD *)a2;
    v6 = ((*(_DWORD *)(a2 + 8) * v2 + 36) / 72 + 32) >> 6;
    if ( *(_DWORD *)a2 )
      goto LABEL_3;
LABEL_7:
    if ( v6 != (*(_DWORD *)(*(_DWORD *)(v3 + 32) + 12) + 32) >> 6 )
      return 23;
LABEL_8:
    sub_6F76C670(v3, 0);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v4 + 40) << 6;
    *(_DWORD *)(a1 + 28) = -64 * *(_DWORD *)(v4 + 44);
    *(_DWORD *)(a1 + 36) = *(_WORD *)(v4 + 4) << 6;
    return 0;
  }
  v5 = *(_DWORD *)a2;
  v6 = (*(_DWORD *)(a2 + 8) + 32) >> 6;
  if ( !*(_DWORD *)a2 )
    goto LABEL_7;
LABEL_3:
  if ( v5 == 1 )
  {
    if ( v6 != *(_DWORD *)(v4 + 40) + *(_DWORD *)(v4 + 44) )
      return 23;
    goto LABEL_8;
  }
  return 7;
}
