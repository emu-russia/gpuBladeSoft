signed int __cdecl sub_6F7BF9E0(int a1, int a2)
{
  int v2; // ebp@1
  int v3; // edi@1
  int v4; // eax@2
  int v5; // edx@2
  int v7; // eax@8

  v2 = *(_DWORD *)(a2 + 16);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 132);
  if ( v2 )
  {
    v4 = *(_DWORD *)a2;
    v5 = ((*(_DWORD *)(a2 + 8) * v2 + 36) / 72 + 32) >> 6;
    if ( *(_DWORD *)a2 )
      goto LABEL_3;
LABEL_7:
    if ( v5 != (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 32) + 12) + 32) >> 6 )
      return 23;
LABEL_8:
    sub_6F76C670(*(_DWORD *)a1, 0);
    v7 = *(_WORD *)(v3 + 80);
    *(_DWORD *)(a1 + 24) = v7 << 6;
    *(_DWORD *)(a1 + 28) = (v7 - *(_WORD *)(v3 + 96)) << 6;
    *(_DWORD *)(a1 + 36) = *(_WORD *)(v3 + 102) << 6;
    return 0;
  }
  v4 = *(_DWORD *)a2;
  v5 = (*(_DWORD *)(a2 + 8) + 32) >> 6;
  if ( !*(_DWORD *)a2 )
    goto LABEL_7;
LABEL_3:
  if ( v4 == 1 )
  {
    if ( v5 != *(_WORD *)(v3 + 96) )
      return 23;
    goto LABEL_8;
  }
  return 7;
}
