signed int __cdecl sub_6F774360(int a1, int a2, unsigned int a3)
{
  int v3; // esi@1
  signed int result; // eax@1
  unsigned int v5; // eax@2
  int v6; // edx@4
  unsigned __int16 v7; // bp@4
  int v8; // eax@4
  int v9; // edx@4
  unsigned __int16 v10; // ST1C_2@4
  int v11; // edi@4
  int v12; // ecx@4
  int v13; // eax@4
  int v14; // ebx@9
  int v15; // eax@9
  unsigned __int16 v16; // [sp+1Ah] [bp-22h]@4
  __int16 v17; // [sp+1Eh] [bp-1Eh]@4

  v3 = *(_DWORD *)a2;
  result = 6;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 16) > a3 )
  {
    v5 = a3 - 1;
    if ( !a3 )
      v5 = *(_DWORD *)(v3 + 164);
    v6 = *(_DWORD *)(v3 + 140);
    v7 = *(_WORD *)(v6 + 278662);
    v8 = *(_DWORD *)(v6 + 56) + 36 * v5;
    v9 = *(_DWORD *)(v8 + 28);
    v16 = *(_WORD *)(v8 + 10);
    v10 = *(_WORD *)(v8 + 12);
    v11 = *(_WORD *)(v8 + 16);
    v17 = *(_WORD *)(v8 + 20);
    v12 = *(_DWORD *)(v8 + 24);
    v13 = *(_WORD *)(v8 + 14);
    *(_DWORD *)(a1 + 84) = v9;
    *(_DWORD *)(a1 + 76) = v13;
    *(_DWORD *)(a1 + 80) = v10;
    sub_6F769300(a1, v12);
    if ( v7 == 2 )
    {
      *(_BYTE *)(a1 + 94) = 3;
    }
    else if ( v7 <= 2u )
    {
      if ( v7 == 1 )
        *(_BYTE *)(a1 + 94) = 1;
    }
    else if ( v7 == 4 )
    {
      *(_BYTE *)(a1 + 94) = 4;
    }
    else if ( v7 == 8 )
    {
      *(_BYTE *)(a1 + 94) = 2;
      *(_WORD *)(a1 + 92) = 256;
    }
    v14 = a1 + 24;
    *(_DWORD *)(v14 + 76) = v11;
    *(_DWORD *)(v14 + 48) = 1651078259;
    *(_DWORD *)(v14 + 8) = v11 << 6;
    *(_DWORD *)(v14 + 80) = v17;
    *(_DWORD *)(v14 + 16) = v16 << 6;
    v15 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(v14 + 12) = v17 << 6;
    *(_DWORD *)v14 = v15 << 6;
    *(_DWORD *)(v14 + 4) = *(_DWORD *)(v14 + 52) << 6;
    sub_6F76C600(a1 + 24, *(_WORD *)(*(_DWORD *)(v3 + 140) + 6) << 6);
    result = 0;
  }
  return result;
}
