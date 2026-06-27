signed int __cdecl sub_6F8552B6(int a1, int a2, signed int a3)
{
  signed int result; // eax@2
  _WORD *v4; // edx@9
  _WORD *v5; // eax@9
  _WORD *v6; // edx@15
  _WORD *v7; // eax@15
  signed int i; // [sp+1Ch] [bp-Ch]@5
  signed int j; // [sp+1Ch] [bp-Ch]@8
  signed int k; // [sp+1Ch] [bp-Ch]@14

  if ( a1 )
  {
    sub_6F8551F2(a1);
    if ( a2 == 2 )
    {
      if ( a3 > 0 )
      {
        *(_DWORD *)(a1 + 532) = sub_6F83B4D4(a1, a3);
        for ( i = 0; i < a3; ++i )
          *(_BYTE *)(*(_DWORD *)(a1 + 532) + i) = -1;
        *(_DWORD *)(a1 + 536) = sub_6F83B4D4(a1, 2 * a3);
        *(_DWORD *)(a1 + 540) = sub_6F83B4D4(a1, 2 * a3);
        for ( j = 0; j < a3; ++j )
        {
          v4 = (_WORD *)(*(_DWORD *)(a1 + 540) + 2 * j);
          v5 = (_WORD *)(2 * j + *(_DWORD *)(a1 + 536));
          *v5 = 256;
          *v4 = *v5;
        }
        *(_BYTE *)(a1 + 529) = a3;
      }
      if ( !*(_DWORD *)(a1 + 544) )
      {
        *(_DWORD *)(a1 + 544) = sub_6F83B4D4(a1, 0xAu);
        *(_DWORD *)(a1 + 548) = sub_6F83B4D4(a1, 0xAu);
      }
      for ( k = 0; k <= 4; ++k )
      {
        v6 = (_WORD *)(*(_DWORD *)(a1 + 548) + 2 * k);
        v7 = (_WORD *)(2 * k + *(_DWORD *)(a1 + 544));
        *v7 = 8;
        *v6 = *v7;
      }
      *(_BYTE *)(a1 + 528) = 2;
      result = 1;
    }
    else if ( a2 && a2 != 1 )
    {
      sub_6F839262(a1, "Unknown filter heuristic method");
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
