int __cdecl sub_6F84B9D3(int a1, int a2, unsigned int a3)
{
  int result; // eax@4
  int v4; // [sp+10h] [bp-48h]@8
  int v5; // [sp+14h] [bp-44h]@8
  int v6; // [sp+18h] [bp-40h]@8
  int v7; // [sp+1Ch] [bp-3Ch]@8
  int v8; // [sp+20h] [bp-38h]@8
  int v9; // [sp+24h] [bp-34h]@8
  int v10; // [sp+28h] [bp-30h]@8
  int v11; // [sp+2Ch] [bp-2Ch]@8
  char v12; // [sp+30h] [bp-28h]@7
  int v13; // [sp+34h] [bp-24h]@8
  int v14; // [sp+38h] [bp-20h]@8
  int v15; // [sp+3Ch] [bp-1Ch]@8
  int v16; // [sp+40h] [bp-18h]@8
  int v17; // [sp+44h] [bp-14h]@8
  int v18; // [sp+48h] [bp-10h]@8
  int v19; // [sp+4Ch] [bp-Ch]@8

  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 6 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "out of place");
  }
  else if ( a3 == 32 )
  {
    sub_6F84A73A(a1, (int)&v12, 32);
    result = sub_6F84A77C(a1, 0);
    if ( !result )
    {
      v10 = sub_6F84A436(0, (int)&v12);
      v11 = sub_6F84A436(0, (int)&v13);
      v4 = sub_6F84A436(0, (int)&v14);
      v5 = sub_6F84A436(0, (int)&v15);
      v6 = sub_6F84A436(0, (int)&v16);
      v7 = sub_6F84A436(0, (int)&v17);
      v8 = sub_6F84A436(0, (int)&v18);
      v9 = sub_6F84A436(0, (int)&v19);
      if ( v10 != -1 && v11 != -1 && v4 != -1 && v5 != -1 && v6 != -1 && v7 != -1 && v8 != -1 && v9 != -1 )
      {
        result = *(_WORD *)(a1 + 806);
        if ( (signed __int16)result >= 0 )
        {
          if ( *(_WORD *)(a1 + 806) & 0x10 )
          {
            *(_WORD *)(a1 + 806) |= 0x8000u;
            sub_6F835096(a1, a2);
            result = sub_6F839842(a1, "duplicate");
          }
          else
          {
            *(_WORD *)(a1 + 806) |= 0x10u;
            sub_6F835F47(a1, a1 + 732, (int)&v4, 1);
            result = sub_6F835096(a1, a2);
          }
        }
      }
      else
      {
        result = sub_6F839842(a1, "invalid values");
      }
    }
  }
  else
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "invalid");
  }
  return result;
}
