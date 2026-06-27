int __cdecl sub_6F7C0C70(int a1, int a2)
{
  int v2; // ecx@1
  int v3; // esi@1
  int v4; // ebx@1
  int v5; // ecx@1
  int v6; // esi@1
  int v7; // ecx@1
  int v8; // edi@4
  int v9; // edi@4
  bool v10; // zf@8
  int result; // eax@10
  int v12; // [sp+0h] [bp-14h]@1

  v2 = *(_DWORD *)(a2 + 44);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 2988) = a2;
  *(_DWORD *)(a1 + 4) = v2;
  v5 = *(_DWORD *)(a2 + 48);
  v12 = v3;
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 2980) = v4;
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 1616);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1620);
  v7 = (unsigned int)(v6 - 2) <= 1;
  if ( !((v6 - 2) & 0xFFFFFFFD) )
    v7 = ((unsigned int)(v6 - 2) <= 1) | 2;
  if ( v6 == 1 )
    goto LABEL_13;
  v8 = v7;
  v7 |= 0xCu;
  v9 = v8 | 4;
  if ( v6 != 2 )
    v7 = v9;
  if ( *(_BYTE *)(v12 + 12) & 1 )
LABEL_13:
    v4 |= 1u;
  v10 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 36) + 212) + 20) == 0;
  *(_DWORD *)(a1 + 2984) = v7;
  if ( v10 )
    v4 |= 8u;
  result = 0;
  *(_DWORD *)(a1 + 2980) = v4;
  return result;
}
