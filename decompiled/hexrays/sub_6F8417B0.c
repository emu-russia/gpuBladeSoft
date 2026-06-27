signed int __cdecl sub_6F8417B0(int a1, int a2, int a3, int a4, int a5)
{
  signed int result; // eax@1
  int v6; // eax@6
  int v7; // eax@7
  int v8; // edx@7
  int v9; // eax@8
  int v10; // edx@8

  result = sub_6F84173B(a1, 0);
  if ( result && a2 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a1 + 124) |= 0x40080u;
      *(_DWORD *)(a1 + 124) &= 0xFF7FFFFF;
      v6 = *(_DWORD *)(a1 + 120);
      BYTE1(v6) &= 0xDFu;
      *(_DWORD *)(a1 + 120) = v6;
      *(_DWORD *)(a1 + 360) = *(_DWORD *)a2;
      *(_DWORD *)(a1 + 364) = *(_DWORD *)(a2 + 4);
      *(_WORD *)(a1 + 368) = *(_WORD *)(a2 + 8);
      *(_DWORD *)(a1 + 356) = a5;
      *(_BYTE *)(a1 + 354) = a3;
      if ( a4 )
      {
        v7 = *(_DWORD *)(a1 + 124);
        BYTE1(v7) |= 1u;
        v8 = v7;
        result = a1;
        *(_DWORD *)(a1 + 124) = v8;
      }
      else
      {
        v9 = *(_DWORD *)(a1 + 124);
        BYTE1(v9) &= 0xFEu;
        v10 = v9;
        result = a1;
        *(_DWORD *)(a1 + 124) = v10;
      }
    }
    else
    {
      result = sub_6F839262(a1, "Application must supply a known background gamma");
    }
  }
  return result;
}
