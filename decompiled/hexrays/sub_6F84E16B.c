int __cdecl sub_6F84E16B(int a1, int a2, unsigned int a3)
{
  int result; // eax@3
  int v4; // [sp+28h] [bp-40h]@44
  void *v5; // [sp+2Ch] [bp-3Ch]@46
  char *v6; // [sp+30h] [bp-38h]@46
  int v7; // [sp+34h] [bp-34h]@46
  unsigned int v8; // [sp+38h] [bp-30h]@46
  char *v9; // [sp+3Ch] [bp-2Ch]@46
  char *v10; // [sp+40h] [bp-28h]@46
  unsigned int v11; // [sp+44h] [bp-24h]@25
  unsigned int v12; // [sp+48h] [bp-20h]@29
  unsigned int v13; // [sp+4Ch] [bp-1Ch]@25
  int v14; // [sp+50h] [bp-18h]@25
  unsigned int i; // [sp+54h] [bp-14h]@13
  _BYTE *v16; // [sp+58h] [bp-10h]@10
  const char *v17; // [sp+5Ch] [bp-Ch]@1

  v17 = 0;
  if ( !*(_DWORD *)(a1 + 664) )
    goto LABEL_54;
  if ( *(_DWORD *)(a1 + 664) == 1 )
    return sub_6F84A77C(a1, a3);
  if ( --*(_DWORD *)(a1 + 664) == 1 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "no space in chunk cache");
  }
  else
  {
LABEL_54:
    if ( !(*(_DWORD *)(a1 + 116) & 1) )
      sub_6F83979A(a1, (int)"missing IHDR");
    if ( *(_DWORD *)(a1 + 116) & 4 )
      *(_DWORD *)(a1 + 116) |= 8u;
    v16 = sub_6F84A90E(a1, a3 + 1, 1);
    if ( v16 )
    {
      sub_6F84A73A(a1, (int)v16, a3);
      result = sub_6F84A77C(a1, 0);
      if ( !result )
      {
        for ( i = 0; ; ++i )
        {
          result = i;
          if ( i >= a3 )
            break;
          result = v16[i];
          if ( !(_BYTE)result )
            break;
        }
        if ( i <= 0x4F && i )
        {
          result = i + 5;
          if ( i + 5 <= a3 )
          {
            if ( v16[i + 1] && ((result = v16[i + 1], (_BYTE)result != 1) || (result = v16[i + 2], (_BYTE)result)) )
            {
              v17 = "bad compression info";
            }
            else
            {
              v14 = v16[i + 1] != 0;
              v11 = 0;
              i += 3;
              v13 = i;
              while ( i < a3 && v16[i] )
                ++i;
              v12 = ++i;
              while ( 1 )
              {
                result = i;
                if ( i >= a3 )
                  break;
                result = v16[i];
                if ( !(_BYTE)result )
                  break;
                ++i;
              }
              ++i;
              if ( v14 || (result = i, i > a3) )
              {
                if ( v14 && (result = i, i < a3) )
                {
                  v11 = -1;
                  if ( sub_6F84AD18(a1, a3, i, (int *)&v11, 1) == 1 )
                  {
                    result = *(_DWORD *)(a1 + 696);
                    v16 = *(_BYTE **)(a1 + 696);
                  }
                  else
                  {
                    result = *(_DWORD *)(a1 + 156);
                    v17 = *(const char **)(a1 + 156);
                  }
                }
                else
                {
                  v17 = "truncated";
                }
              }
              else
              {
                result = a3 - i;
                v11 = a3 - i;
              }
              if ( !v17 )
              {
                *(&v16[i] + v11) = 0;
                if ( v14 )
                  v4 = 1;
                else
                  v4 = 2;
                v5 = v16;
                v9 = &v16[v13];
                v10 = &v16[v12];
                v6 = &v16[i];
                v7 = 0;
                v8 = v11;
                result = sub_6F851A11(a1, a2, (int)&v4, 1);
                if ( result )
                  v17 = "insufficient memory";
              }
            }
          }
          else
          {
            v17 = "truncated";
          }
        }
        else
        {
          v17 = "bad keyword";
        }
        if ( v17 )
          result = sub_6F839842(a1, v17);
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
