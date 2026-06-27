void __cdecl sub_6F7CA8C0(int a1)
{
  int v1; // edi@2
  __int16 v2; // cx@2
  int v3; // esi@2
  __int16 v4; // ax@2
  __int16 v5; // bx@2
  _WORD *v6; // eax@3
  int v7; // ebx@3
  int v8; // ecx@6
  int v9; // eax@6
  int v10; // edi@6
  int v11; // eax@6
  bool v12; // zf@6
  int v13; // eax@7
  int v14; // ecx@7

  if ( a1 )
  {
    v1 = *(_WORD *)(a1 + 56);
    v2 = *(_WORD *)(a1 + 22);
    v3 = *(_DWORD *)(a1 + 48) + *(_DWORD *)(a1 + 84);
    v4 = *(_WORD *)(a1 + 58) + *(_WORD *)(a1 + 22);
    v5 = *(_WORD *)(a1 + 20) + *(_WORD *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v3;
    *(_WORD *)(a1 + 22) = v4;
    *(_WORD *)(a1 + 20) = v5;
    if ( (signed __int16)v1 > 0 )
    {
      v6 = *(_WORD **)(a1 + 68);
      v7 = (int)&v6[v1];
      do
      {
        *v6 += v2;
        ++v6;
      }
      while ( (_WORD *)v7 != v6 );
      v4 = *(_WORD *)(a1 + 22);
      v5 = *(_WORD *)(a1 + 20);
    }
    *(_WORD *)(a1 + 58) = 0;
    v8 = 8 * v4;
    v9 = *(_DWORD *)(a1 + 28) + v4;
    *(_WORD *)(a1 + 56) = 0;
    v10 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 84) = 0;
    *(_DWORD *)(a1 + 64) = v9;
    v11 = *(_DWORD *)(a1 + 32);
    v12 = *(_BYTE *)(a1 + 16) == 0;
    *(_DWORD *)(a1 + 60) = v8 + v10;
    *(_DWORD *)(a1 + 68) = v11 + 2 * v5;
    if ( !v12 )
    {
      v13 = v8 + *(_DWORD *)(a1 + 40);
      v14 = *(_DWORD *)(a1 + 44) + v8;
      *(_DWORD *)(a1 + 76) = v13;
      *(_DWORD *)(a1 + 80) = v14;
    }
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 52) + 32 * v3;
  }
}
