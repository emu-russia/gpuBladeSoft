int __cdecl sub_6F811920(int a1, int a2, int a3)
{
  int result; // eax@1
  int v4; // ecx@2
  int v5; // esi@2
  unsigned int v6; // ebx@2
  int v7; // eax@2
  int v8; // ebx@6
  __int16 v9; // di@6
  int v10; // eax@6
  int v11; // ecx@7
  int v12; // ebx@7
  int v13; // ecx@7
  int v14; // ebx@7
  int v15; // ecx@8
  int v16; // ebx@8
  int v17; // ecx@8
  int v18; // ebx@8
  int v19; // ecx@9
  int v20; // ebx@9
  int v21; // ecx@9
  int v22; // ebx@9
  int v23; // ecx@9
  int v24; // edi@9
  int v25; // ecx@9
  int v26; // ebx@9
  int v27; // ecx@9
  int v28; // edi@9

  result = a2;
  if ( a3 > 0 )
  {
    v4 = a2 + 8 * a3 - 8;
    v5 = a2 - 8;
    v6 = ((unsigned int)(v4 - a2) >> 3) & 3;
    v7 = *(_BYTE *)(v4 + 1) + (*(_BYTE *)v4 << 6);
    *(_WORD *)(a1 + 2 * v7 + 52552) = *(_WORD *)(v4 + 2);
    *(_DWORD *)(a1 + 4 * v7 + 51784) = *(_DWORD *)(v4 + 4);
    result = a2 + 8 * a3 - 16;
    if ( result != a2 - 8 )
    {
      if ( !v6 )
        goto LABEL_12;
      if ( v6 != 1 )
      {
        if ( v6 != 2 )
        {
          v8 = *(_BYTE *)(result + 1) + (*(_BYTE *)result << 6);
          v9 = *(_WORD *)(result + 2);
          v10 = *(_DWORD *)(result + 4);
          *(_WORD *)(a1 + 2 * v8 + 52552) = v9;
          *(_DWORD *)(a1 + 4 * v8 + 51784) = v10;
          result = a2 + 8 * a3 - 24;
        }
        v11 = *(_BYTE *)result;
        v12 = *(_BYTE *)(result + 1);
        result -= 8;
        v13 = v12 + (v11 << 6);
        v14 = *(_DWORD *)(result + 12);
        *(_WORD *)(a1 + 2 * v13 + 52552) = *(_WORD *)(result + 10);
        *(_DWORD *)(a1 + 4 * v13 + 51784) = v14;
      }
      v15 = *(_BYTE *)result;
      v16 = *(_BYTE *)(result + 1);
      result -= 8;
      v17 = v16 + (v15 << 6);
      v18 = *(_DWORD *)(result + 12);
      *(_WORD *)(a1 + 2 * v17 + 52552) = *(_WORD *)(result + 10);
      *(_DWORD *)(a1 + 4 * v17 + 51784) = v18;
      if ( result != v5 )
      {
LABEL_12:
        do
        {
          v19 = *(_BYTE *)result;
          v20 = *(_BYTE *)(result + 1);
          result -= 32;
          v21 = v20 + (v19 << 6);
          v22 = *(_DWORD *)(result + 36);
          *(_WORD *)(a1 + 2 * v21 + 52552) = *(_WORD *)(result + 34);
          *(_DWORD *)(a1 + 4 * v21 + 51784) = v22;
          v23 = *(_BYTE *)(result + 25) + (*(_BYTE *)(result + 24) << 6);
          v24 = *(_DWORD *)(result + 28);
          *(_WORD *)(a1 + 2 * v23 + 52552) = *(_WORD *)(result + 26);
          *(_DWORD *)(a1 + 4 * v23 + 51784) = v24;
          v25 = *(_BYTE *)(result + 17) + (*(_BYTE *)(result + 16) << 6);
          v26 = *(_DWORD *)(result + 20);
          *(_WORD *)(a1 + 2 * v25 + 52552) = *(_WORD *)(result + 18);
          *(_DWORD *)(a1 + 4 * v25 + 51784) = v26;
          v27 = *(_BYTE *)(result + 9) + (*(_BYTE *)(result + 8) << 6);
          v28 = *(_DWORD *)(result + 12);
          *(_WORD *)(a1 + 2 * v27 + 52552) = *(_WORD *)(result + 10);
          *(_DWORD *)(a1 + 4 * v27 + 51784) = v28;
        }
        while ( result != v5 );
      }
    }
  }
  return result;
}
