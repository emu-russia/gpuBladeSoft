int __cdecl sub_6F770380(int a1, int a2)
{
  int result; // eax@1
  int v3; // edx@3
  int v4; // eax@4
  unsigned int v5; // ebp@4
  int v6; // ebx@4
  int v7; // ecx@4
  unsigned int v8; // eax@4
  int v9; // esi@5
  int v10; // edi@5
  int v11; // edx@10
  int v12; // edi@17
  int v13; // esi@17

  result = a1;
  if ( !a1 || !a2 )
    return result;
  v3 = *(_WORD *)(a1 + 2);
  if ( !(_WORD)v3 )
  {
    v7 = 0;
    v12 = 0;
    v13 = 0;
    v6 = 0;
LABEL_18:
    result = a2;
    *(_DWORD *)a2 = v6;
    *(_DWORD *)(a2 + 8) = v12;
    *(_DWORD *)(a2 + 4) = v13;
    *(_DWORD *)(a2 + 12) = v7;
    return result;
  }
  v4 = *(_DWORD *)(a1 + 4);
  v5 = v4 + 8 * v3;
  v6 = *(_DWORD *)v4;
  v7 = *(_DWORD *)(v4 + 4);
  v8 = v4 + 8;
  if ( v5 <= v8 )
  {
    v12 = v6;
    v13 = v7;
    goto LABEL_18;
  }
  v9 = v7;
  v10 = v6;
  do
  {
    if ( v6 > *(_DWORD *)v8 )
      v6 = *(_DWORD *)v8;
    if ( v10 < *(_DWORD *)v8 )
      v10 = *(_DWORD *)v8;
    v11 = *(_DWORD *)(v8 + 4);
    if ( v9 > v11 )
      v9 = *(_DWORD *)(v8 + 4);
    if ( v7 < v11 )
      v7 = *(_DWORD *)(v8 + 4);
    v8 += 8;
  }
  while ( v5 > v8 );
  result = a2;
  *(_DWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = v10;
  *(_DWORD *)(a2 + 4) = v9;
  *(_DWORD *)(a2 + 12) = v7;
  return result;
}
