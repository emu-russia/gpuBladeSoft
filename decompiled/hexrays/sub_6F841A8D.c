signed int __cdecl sub_6F841A8D(int a1, signed int a2, signed int a3)
{
  signed int result; // eax@1
  int v4; // eax@12
  int v5; // eax@13
  int v6; // eax@14
  int v7; // eax@15
  int v8; // eax@20
  int v9; // eax@22
  int v10; // edx@22
  signed int v11; // [sp+18h] [bp-10h]@5
  signed int v12; // [sp+1Ch] [bp-Ch]@1
  signed int v13; // [sp+38h] [bp+10h]@2

  v12 = 0;
  result = sub_6F84173B(a1, 0);
  if ( result )
  {
    v13 = sub_6F841981(a1, a3, 1);
    if ( v13 <= 69999 || v13 > 300000 )
      sub_6F839044(a1, (int)"output gamma out of expected range");
    v11 = sub_6F8381D3(v13);
    if ( a2 == 1 )
    {
      v12 = 1;
      *(_DWORD *)(a1 + 124) &= 0xFF7FFFFF;
      v5 = *(_DWORD *)(a1 + 120);
      BYTE1(v5) &= 0xDFu;
      *(_DWORD *)(a1 + 120) = v5;
      v13 = 100000;
    }
    else if ( a2 > 1 )
    {
      if ( a2 == 2 )
      {
        v12 = 1;
        *(_DWORD *)(a1 + 124) &= 0xFF7FFFFF;
        v6 = *(_DWORD *)(a1 + 120);
        BYTE1(v6) |= 0x20u;
        *(_DWORD *)(a1 + 120) = v6;
      }
      else
      {
        if ( a2 != 3 )
LABEL_16:
          sub_6F839044(a1, (int)"invalid alpha mode");
        v12 = 1;
        *(_DWORD *)(a1 + 124) |= 0x800000u;
        v7 = *(_DWORD *)(a1 + 120);
        BYTE1(v7) &= 0xDFu;
        *(_DWORD *)(a1 + 120) = v7;
      }
    }
    else
    {
      if ( a2 )
        goto LABEL_16;
      *(_DWORD *)(a1 + 124) &= 0xFF7FFFFF;
      v4 = *(_DWORD *)(a1 + 120);
      BYTE1(v4) &= 0xDFu;
      *(_DWORD *)(a1 + 120) = v4;
    }
    if ( !*(_DWORD *)(a1 + 732) )
    {
      *(_DWORD *)(a1 + 732) = v11;
      *(_WORD *)(a1 + 806) |= 1u;
    }
    result = a1;
    *(_DWORD *)(a1 + 396) = v13;
    if ( v12 )
    {
      memset((void *)(a1 + 360), 0, 0xAu);
      *(_DWORD *)(a1 + 356) = *(_DWORD *)(a1 + 732);
      *(_BYTE *)(a1 + 354) = 2;
      v8 = *(_DWORD *)(a1 + 124);
      BYTE1(v8) &= 0xFEu;
      *(_DWORD *)(a1 + 124) = v8;
      if ( *(_DWORD *)(a1 + 124) & 0x80 )
        sub_6F839044(a1, (int)"conflicting calls to set alpha mode and background");
      v9 = *(_DWORD *)(a1 + 124);
      LOBYTE(v9) = v9 | 0x80;
      v10 = v9;
      result = a1;
      *(_DWORD *)(a1 + 124) = v10;
    }
  }
  return result;
}
