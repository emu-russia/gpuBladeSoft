int __cdecl sub_6F84DBA7(int a1, int a2, unsigned int a3)
{
  int result; // eax@5
  __int16 v4; // [sp+10h] [bp-18h]@11
  char v5; // [sp+12h] [bp-16h]@11
  char v6; // [sp+13h] [bp-15h]@11
  char v7; // [sp+14h] [bp-14h]@11
  char v8; // [sp+15h] [bp-13h]@11
  char v9; // [sp+16h] [bp-12h]@11
  unsigned __int8 v10; // [sp+19h] [bp-Fh]@10
  unsigned __int8 v11; // [sp+1Ah] [bp-Eh]@11
  char v12; // [sp+1Bh] [bp-Dh]@11
  char v13; // [sp+1Ch] [bp-Ch]@11
  char v14; // [sp+1Dh] [bp-Bh]@11
  char v15; // [sp+1Eh] [bp-Ah]@11
  char v16; // [sp+1Fh] [bp-9h]@11

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( a2 && *(_DWORD *)(a2 + 8) & 0x200 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "duplicate");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 116) & 4 )
      *(_DWORD *)(a1 + 116) |= 8u;
    if ( a3 == 7 )
    {
      sub_6F84A73A(a1, (int)&v10, 7);
      result = sub_6F84A77C(a1, 0);
      if ( !result )
      {
        v9 = v16;
        v8 = v15;
        v7 = v14;
        v6 = v13;
        v5 = v12;
        v4 = (v10 << 8) + v11;
        result = sub_6F851FB3(a1, a2, (int)&v4);
      }
    }
    else
    {
      sub_6F84A77C(a1, a3);
      result = sub_6F839842(a1, "invalid");
    }
  }
  return result;
}
