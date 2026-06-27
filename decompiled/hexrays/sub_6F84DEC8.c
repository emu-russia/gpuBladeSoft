int __cdecl sub_6F84DEC8(int a1, int a2, unsigned int a3)
{
  int result; // eax@3
  int v4; // [sp+24h] [bp-34h]@25
  void *v5; // [sp+28h] [bp-30h]@25
  char *v6; // [sp+2Ch] [bp-2Ch]@25
  int v7; // [sp+30h] [bp-28h]@25
  int v8; // [sp+34h] [bp-24h]@25
  int v9; // [sp+38h] [bp-20h]@25
  int v10; // [sp+3Ch] [bp-1Ch]@25
  int v11; // [sp+40h] [bp-18h]@24
  _BYTE *v12; // [sp+44h] [bp-14h]@10
  unsigned int i; // [sp+48h] [bp-10h]@13
  const char *v14; // [sp+4Ch] [bp-Ch]@1

  v14 = 0;
  if ( !*(_DWORD *)(a1 + 664) )
    goto LABEL_33;
  if ( *(_DWORD *)(a1 + 664) == 1 )
    return sub_6F84A77C(a1, a3);
  if ( --*(_DWORD *)(a1 + 664) == 1 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "no space in chunk cache");
  }
  else
  {
LABEL_33:
    if ( !(*(_DWORD *)(a1 + 116) & 1) )
      sub_6F83979A(a1, (int)"missing IHDR");
    if ( *(_DWORD *)(a1 + 116) & 4 )
      *(_DWORD *)(a1 + 116) |= 8u;
    v12 = sub_6F84A90E(a1, a3, 2);
    if ( v12 )
    {
      sub_6F84A73A(a1, (int)v12, a3);
      result = sub_6F84A77C(a1, 0);
      if ( !result )
      {
        for ( i = 0; ; ++i )
        {
          result = i;
          if ( i >= a3 )
            break;
          result = v12[i];
          if ( !(_BYTE)result )
            break;
        }
        if ( i <= 0x4F && i )
        {
          result = i + 3;
          if ( i + 3 <= a3 )
          {
            result = v12[i + 1];
            if ( (_BYTE)result )
            {
              v14 = "unknown compression type";
            }
            else
            {
              v11 = -1;
              if ( sub_6F84AD18(a1, a3, i + 2, &v11, 1) == 1 )
              {
                v12 = *(_BYTE **)(a1 + 696);
                *(&v12[v11 + 2] + i) = 0;
                v4 = 0;
                v5 = v12;
                v6 = &v12[i + 2];
                v7 = v11;
                v8 = 0;
                v9 = 0;
                v10 = 0;
                result = sub_6F851A11(a1, a2, (int)&v4, 1);
                if ( result )
                  v14 = "insufficient memory";
              }
              else
              {
                result = *(_DWORD *)(a1 + 156);
                v14 = *(const char **)(a1 + 156);
              }
            }
          }
          else
          {
            v14 = "truncated";
          }
        }
        else
        {
          v14 = "bad keyword";
        }
        if ( v14 )
          result = sub_6F839842(a1, v14);
      }
    }
    else
    {
      sub_6F84A77C(a1, a3);
      result = sub_6F839842(a1, "out of memory");
    }
  }
  return result;
}
