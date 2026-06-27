int __cdecl sub_6F7C4C30(int a1, int a2)
{
  int v2; // ecx@1
  int v3; // ebx@1
  int v4; // esi@1
  int v5; // ecx@1
  int v6; // ecx@1
  int v7; // edi@4
  int v8; // edi@4
  int v9; // edx@6
  int v10; // ebx@6
  int v11; // edx@6
  bool v12; // zf@6

  v2 = *(_DWORD *)(a2 + 44);
  v3 = *(_DWORD *)(a2 + 28);
  v4 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 2988) = a2;
  *(_DWORD *)(a1 + 4) = v2;
  v5 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 2980) = v3;
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 1616);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1620);
  v6 = (unsigned int)(v4 - 2) <= 1;
  if ( !((v4 - 2) & 0xFFFFFFFD) )
    v6 = ((unsigned int)(v4 - 2) <= 1) | 2;
  if ( v4 != 1 )
  {
    v7 = v6;
    v6 |= 0xCu;
    v8 = v7 | 4;
    if ( v4 != 2 )
      v6 = v8;
  }
  v9 = v3;
  v10 = v3 | 0xC;
  v11 = v9 | 4;
  v12 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 36) + 212) + 20) == 0;
  *(_DWORD *)(a1 + 2984) = v6;
  if ( !v12 )
    v10 = v11;
  *(_DWORD *)(a1 + 2980) = v10;
  return 0;
}
