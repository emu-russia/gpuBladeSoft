__int16 __cdecl sub_6F8921D0(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v4; // esi@1
  signed int v5; // ecx@1
  int v6; // eax@3
  int v7; // edx@3
  int v8; // eax@3
  int v9; // edx@3
  int v10; // edx@3
  int v11; // edx@3
  int v12; // ecx@3
  int v13; // eax@3
  int v14; // ecx@4
  int v15; // edx@6
  __int16 v16; // cx@6
  int v17; // ebp@6
  int v18; // edx@6
  int v19; // edx@6

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 5820);
  if ( v5 > 13 )
  {
    v15 = *(_DWORD *)(a1 + 20);
    v16 = *(_WORD *)(a1 + 5816) | (a4 << v5);
    *(_DWORD *)(a1 + 20) = v15 + 1;
    v17 = *(_DWORD *)(a1 + 8);
    *(_WORD *)(a1 + 5816) = v16;
    *(_BYTE *)(v17 + v15) = v16;
    v18 = *(_DWORD *)(a1 + 20);
    LOBYTE(v16) = *(_BYTE *)(a1 + 5817);
    *(_DWORD *)(a1 + 20) = v18 + 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v18) = v16;
    v19 = *(_DWORD *)(a1 + 5820);
    *(_WORD *)(a1 + 5816) = (signed int)a4 >> (16 - v19);
    *(_DWORD *)(a1 + 5820) = v19 - 13;
  }
  else
  {
    *(_WORD *)(a1 + 5816) |= a4 << v5;
    *(_DWORD *)(a1 + 5820) = v5 + 3;
  }
  sub_6F892000(a1);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v6 + 1;
  *(_BYTE *)(v7 + v6) = a3;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v8 + 1;
  *(_BYTE *)(v9 + v8) = BYTE1(a3);
  v13 = *(_DWORD *)(a1 + 20);
  v10 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v13 + 1;
  *(_BYTE *)(v10 + v13) = ~(_BYTE)a3;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v11 + 1;
  LOWORD(v13) = (unsigned __int16)~(_WORD)a3 >> 8;
  *(_BYTE *)(v12 + v11) = v13;
  if ( a3 )
  {
    do
    {
      v13 = *(_DWORD *)(a1 + 20);
      ++v4;
      v14 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 20) = v13 + 1;
      *(_BYTE *)(v14 + v13) = *(_BYTE *)(v4 - 1);
    }
    while ( v4 != a2 + a3 );
  }
  return v13;
}
