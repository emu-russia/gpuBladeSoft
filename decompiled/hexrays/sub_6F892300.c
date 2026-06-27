int __cdecl sub_6F892300(int a1)
{
  signed int v1; // edx@6
  int v2; // edx@8
  int v3; // ebx@8
  int v4; // edx@10
  int v5; // ebx@10
  int v6; // edx@10
  int v7; // ecx@10
  int result; // eax@1
  signed int v9; // ecx@1
  int v10; // edx@2
  int v11; // esi@2
  __int16 v12; // cx@2
  int v13; // edx@2
  int v14; // edi@2
  int v15; // edx@2
  int v16; // ecx@2
  signed int v17; // edx@4
  int v18; // edx@5
  __int16 v19; // cx@5
  int v20; // ebx@5
  int v21; // edx@5
  int v22; // ecx@5

  result = a1;
  v9 = *(_DWORD *)(a1 + 5820);
  if ( v9 <= 13 )
  {
    v17 = 2 << v9;
    v16 = v9 + 3;
    *(_WORD *)(a1 + 5816) |= v17;
    *(_DWORD *)(a1 + 5820) = v16;
    if ( v16 <= 9 )
      goto LABEL_3;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 20);
    v11 = *(_DWORD *)(a1 + 8);
    v12 = *(_WORD *)(a1 + 5816) | (2 << v9);
    *(_DWORD *)(a1 + 20) = v10 + 1;
    *(_WORD *)(a1 + 5816) = v12;
    *(_BYTE *)(v11 + v10) = v12;
    v13 = *(_DWORD *)(a1 + 20);
    LOBYTE(v12) = *(_BYTE *)(a1 + 5817);
    v14 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v13 + 1;
    *(_BYTE *)(v14 + v13) = v12;
    v15 = *(_DWORD *)(a1 + 5820);
    v16 = v15 - 13;
    *(_WORD *)(a1 + 5816) = 2 >> (16 - v15);
    *(_DWORD *)(a1 + 5820) = v15 - 13;
    if ( v15 - 13 <= 9 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 5820) = v16 + 7;
      goto LABEL_6;
    }
  }
  v18 = *(_DWORD *)(a1 + 20);
  v19 = *(_WORD *)(a1 + 5816);
  v20 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v18 + 1;
  *(_BYTE *)(v20 + v18) = v19;
  v21 = *(_DWORD *)(a1 + 20);
  v22 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v21 + 1;
  *(_BYTE *)(v22 + v21) = *(_BYTE *)(a1 + 5817);
  *(_DWORD *)(a1 + 5820) -= 9;
  *(_WORD *)(a1 + 5816) = 0;
LABEL_6:
  v1 = *(_DWORD *)(a1 + 5820);
  if ( v1 == 16 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    v5 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v4 + 1;
    *(_BYTE *)(v5 + v4) = *(_WORD *)(a1 + 5816);
    v6 = *(_DWORD *)(a1 + 20);
    v7 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v6 + 1;
    *(_BYTE *)(v7 + v6) = *(_BYTE *)(a1 + 5817);
    *(_WORD *)(a1 + 5816) = 0;
    *(_DWORD *)(a1 + 5820) = 0;
  }
  else if ( v1 > 7 )
  {
    v2 = *(_DWORD *)(a1 + 20);
    v3 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v2 + 1;
    *(_BYTE *)(v3 + v2) = *(_WORD *)(a1 + 5816);
    *(_WORD *)(a1 + 5816) >>= 8;
    *(_DWORD *)(a1 + 5820) -= 8;
  }
  return result;
}
