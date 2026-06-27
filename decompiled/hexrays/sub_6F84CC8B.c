signed int __cdecl sub_6F84CC8B(int a1, int a2, unsigned int a3)
{
  signed int result; // eax@6
  __int16 v4; // dx@27
  unsigned __int8 v5; // [sp+1Ch] [bp-1Ch]@19
  __int16 v6; // [sp+1Eh] [bp-1Ah]@23
  __int16 v7; // [sp+20h] [bp-18h]@23
  __int16 v8; // [sp+22h] [bp-16h]@23
  __int16 v9; // [sp+24h] [bp-14h]@25
  unsigned __int8 v10; // [sp+26h] [bp-12h]@17
  unsigned __int8 v11; // [sp+27h] [bp-11h]@27
  unsigned __int8 v12; // [sp+28h] [bp-10h]@28
  unsigned __int8 v13; // [sp+29h] [bp-Fh]@28
  unsigned __int8 v14; // [sp+2Ah] [bp-Eh]@28
  unsigned __int8 v15; // [sp+2Bh] [bp-Dh]@28
  int v16; // [sp+2Ch] [bp-Ch]@11

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 4 || *(_BYTE *)(a1 + 343) == 3 && !(*(_DWORD *)(a1 + 116) & 2) )
  {
    sub_6F84A77C(a1, a3);
    return sub_6F839842(a1, "out of place");
  }
  if ( a2 && *(_DWORD *)(a2 + 8) & 0x20 )
  {
    sub_6F84A77C(a1, a3);
    return sub_6F839842(a1, "duplicate");
  }
  if ( *(_BYTE *)(a1 + 343) == 3 )
  {
    v16 = 1;
  }
  else if ( *(_BYTE *)(a1 + 343) & 2 )
  {
    v16 = 6;
  }
  else
  {
    v16 = 2;
  }
  if ( a3 != v16 )
  {
    sub_6F84A77C(a1, a3);
    return sub_6F839842(a1, "invalid");
  }
  sub_6F84A73A(a1, (int)&v10, v16);
  result = sub_6F84A77C(a1, 0);
  if ( !result )
  {
    if ( *(_BYTE *)(a1 + 343) == 3 )
    {
      v5 = v10;
      if ( a2 && *(_WORD *)(a2 + 20) )
      {
        if ( (unsigned __int16)v10 >= *(_WORD *)(a2 + 20) )
          return sub_6F839842(a1, "invalid index");
        v6 = *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * v10);
        v7 = *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * v10 + 1);
        v8 = *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * v10 + 2);
      }
      else
      {
        v8 = 0;
        v7 = 0;
        v6 = 0;
      }
      v9 = 0;
    }
    else if ( *(_BYTE *)(a1 + 343) & 2 )
    {
      v5 = 0;
      v6 = (v10 << 8) + v11;
      v7 = (v12 << 8) + v13;
      v8 = (v14 << 8) + v15;
      v9 = 0;
    }
    else
    {
      v5 = 0;
      v4 = v10 << 8;
      v9 = v4 + v11;
      v8 = v4 + v11;
      v7 = v4 + v11;
      v6 = v4 + v11;
    }
    result = sub_6F85064C(a1, a2, (int)&v5);
  }
  return result;
}
