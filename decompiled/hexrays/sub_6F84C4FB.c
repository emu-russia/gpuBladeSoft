void __cdecl sub_6F84C4FB(int a1, int a2, unsigned int a3)
{
  char *v3; // eax@18
  unsigned int v4; // eax@19
  char *v5; // eax@29
  char *v6; // eax@29
  char *v7; // eax@29
  char *v8; // eax@29
  char *v9; // [sp+1Ch] [bp-3Ch]@33
  char v10; // [sp+20h] [bp-38h]@18
  char *v11; // [sp+24h] [bp-34h]@25
  int v12; // [sp+28h] [bp-30h]@25
  char *v13; // [sp+2Ch] [bp-2Ch]@28
  int v14; // [sp+30h] [bp-28h]@23
  unsigned int v15; // [sp+34h] [bp-24h]@23
  unsigned int v16; // [sp+38h] [bp-20h]@21
  unsigned int v17; // [sp+3Ch] [bp-1Ch]@21
  char *v18; // [sp+40h] [bp-18h]@10
  unsigned int v19; // [sp+44h] [bp-14h]@1
  int j; // [sp+48h] [bp-10h]@27
  char *i; // [sp+4Ch] [bp-Ch]@13

  v19 = 0;
  if ( !*(_DWORD *)(a1 + 664) )
    goto LABEL_36;
  if ( *(_DWORD *)(a1 + 664) == 1 )
  {
    sub_6F84A77C(a1, a3);
    return;
  }
  if ( --*(_DWORD *)(a1 + 664) == 1 )
  {
    sub_6F839262(a1, "No space in chunk cache for sPLT");
    sub_6F84A77C(a1, a3);
  }
  else
  {
LABEL_36:
    if ( !(*(_DWORD *)(a1 + 116) & 1) )
      sub_6F83979A(a1, (int)"missing IHDR");
    if ( *(_DWORD *)(a1 + 116) & 4 )
    {
      sub_6F84A77C(a1, a3);
      sub_6F839842(a1, "out of place");
    }
    else
    {
      v18 = (char *)sub_6F84A90E(a1, a3 + 1, 2);
      if ( v18 )
      {
        sub_6F84A73A(a1, (int)v18, a3);
        if ( !sub_6F84A77C(a1, v19) )
        {
          v18[a3] = 0;
          for ( i = v18; *i; ++i )
            ;
          if ( &v18[a3 - 2] >= ++i )
          {
            v3 = i++;
            v10 = *v3;
            if ( v10 == 8 )
              v4 = 6;
            else
              v4 = 10;
            v17 = v4;
            v16 = v18 - i + a3;
            if ( v16 % v4 )
            {
              sub_6F839262(a1, "sPLT chunk has bad length");
            }
            else
            {
              v15 = v16 / v17;
              v14 = 429496729;
              if ( v16 / v17 <= 0x19999999 )
              {
                v12 = v16 / v17;
                v11 = (char *)sub_6F83B561(a1, 10 * (v16 / v17));
                if ( v11 )
                {
                  for ( j = 0; v12 > j; ++j )
                  {
                    v13 = &v11[10 * j];
                    if ( v10 == 8 )
                    {
                      v5 = i++;
                      *(_WORD *)v13 = (unsigned __int8)*v5;
                      v6 = i++;
                      *((_WORD *)v13 + 1) = (unsigned __int8)*v6;
                      v7 = i++;
                      *((_WORD *)v13 + 2) = (unsigned __int8)*v7;
                      v8 = i++;
                      *((_WORD *)v13 + 3) = (unsigned __int8)*v8;
                    }
                    else
                    {
                      *(_WORD *)v13 = (unsigned __int8)i[1] + ((unsigned __int8)*i << 8);
                      i += 2;
                      *((_WORD *)v13 + 1) = (unsigned __int8)i[1] + ((unsigned __int8)*i << 8);
                      i += 2;
                      *((_WORD *)v13 + 2) = (unsigned __int8)i[1] + ((unsigned __int8)*i << 8);
                      i += 2;
                      *((_WORD *)v13 + 3) = (unsigned __int8)i[1] + ((unsigned __int8)*i << 8);
                      i += 2;
                    }
                    *((_WORD *)v13 + 4) = (unsigned __int8)i[1] + ((unsigned __int8)*i << 8);
                    i += 2;
                  }
                  v9 = v18;
                  sub_6F8521FE(a1, a2, (int)&v9, 1);
                  sub_6F83B5A7(a1, (int)v11);
                }
                else
                {
                  sub_6F839262(a1, "sPLT chunk requires too much memory");
                }
              }
              else
              {
                sub_6F839262(a1, "sPLT chunk too long");
              }
            }
          }
          else
          {
            sub_6F839262(a1, "malformed sPLT chunk");
          }
        }
      }
      else
      {
        sub_6F84A77C(a1, a3);
        sub_6F839842(a1, "out of memory");
      }
    }
  }
}
