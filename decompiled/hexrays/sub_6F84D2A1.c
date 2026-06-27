int __cdecl sub_6F84D2A1(int a1, int a2, unsigned int a3)
{
  int result; // eax@4
  unsigned __int8 v4; // [sp+2Bh] [bp-1Dh]@10
  unsigned __int8 v5; // [sp+2Ch] [bp-1Ch]@11
  unsigned __int8 v6; // [sp+2Dh] [bp-1Bh]@11
  unsigned __int8 v7; // [sp+2Eh] [bp-1Ah]@11
  unsigned __int8 v8; // [sp+2Fh] [bp-19h]@11
  unsigned __int8 v9; // [sp+30h] [bp-18h]@11
  unsigned __int8 v10; // [sp+31h] [bp-17h]@11
  unsigned __int8 v11; // [sp+32h] [bp-16h]@11
  char v12; // [sp+33h] [bp-15h]@11
  int v13; // [sp+34h] [bp-14h]@11
  int v14; // [sp+38h] [bp-10h]@11
  int v15; // [sp+3Ch] [bp-Ch]@11

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 4 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "out of place");
  }
  else if ( a2 && *(_DWORD *)(a2 + 8) & 0x100 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "duplicate");
  }
  else if ( a3 == 9 )
  {
    sub_6F84A73A(a1, (int)&v4, 9);
    result = sub_6F84A77C(a1, 0);
    if ( !result )
    {
      v15 = (v6 << 8) + (v5 << 16) + (v4 << 24) + v7;
      v14 = (v10 << 8) + (v9 << 16) + (v8 << 24) + v11;
      v13 = (unsigned __int8)v12;
      result = sub_6F850E42(a1, a2, v15, v14, v12);
    }
  }
  else
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "invalid");
  }
  return result;
}
