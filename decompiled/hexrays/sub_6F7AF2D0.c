int __cdecl sub_6F7AF2D0(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // esi@3
  int v7; // esi@7
  int v8; // ebp@8
  int v9; // edi@8
  unsigned __int16 v10; // cx@8
  int v11; // ebp@13
  int v12; // edi@13
  char v13; // [sp+3Ch] [bp-20h]@4
  unsigned __int16 v14; // [sp+3Eh] [bp-1Eh]@4

  if ( a4 & 0x10 )
  {
    if ( a3 )
    {
      v7 = a2;
      do
      {
        if ( *(_BYTE *)(a1 + 292) )
        {
          (*(void (__cdecl **)(int, signed int, int, char *, __int16 *))(*(_DWORD *)(a1 + 532) + 112))(
            a1,
            1,
            v7,
            &v13,
            (__int16 *)&v14);
          v10 = v14;
        }
        else if ( *(_WORD *)(a1 + 364) == -1 )
        {
          v11 = *(_WORD *)(a1 + 220);
          v12 = *(_WORD *)(a1 + 222);
          v10 = v11 - v12;
          if ( v11 - v12 < 0 )
            v10 = *(_WORD *)(a1 + 222) - v11;
        }
        else
        {
          v8 = *(_WORD *)(a1 + 434);
          v9 = *(_WORD *)(a1 + 436);
          v10 = *(_WORD *)(a1 + 436) - v8;
          if ( v8 - v9 >= 0 )
            v10 = v8 - v9;
        }
        *(_DWORD *)(a5 - 4 * a2 + 4 * v7++) = v10;
      }
      while ( a3 + a2 != v7 );
    }
  }
  else if ( a3 )
  {
    v5 = a2;
    do
    {
      (*(void (__cdecl **)(int, _DWORD, int, char *, unsigned __int16 *))(*(_DWORD *)(a1 + 532) + 112))(
        a1,
        0,
        v5,
        &v13,
        &v14);
      *(_DWORD *)(a5 - 4 * a2 + 4 * v5++) = v14;
    }
    while ( v5 != a3 + a2 );
  }
  return 0;
}
