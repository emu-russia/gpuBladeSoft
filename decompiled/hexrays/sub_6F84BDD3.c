signed int __cdecl sub_6F84BDD3(int a1, int a2, unsigned int a3)
{
  signed int result; // eax@4
  int v4; // eax@26
  char *v5; // edx@26
  unsigned int v6; // ebx@26
  _WORD *v7; // edi@30
  char *v8; // edx@30
  signed int v9; // ecx@30
  int v10; // eax@44
  char v11[81]; // [sp+2Bh] [bp-50Dh]@12
  unsigned __int8 v12; // [sp+7Ch] [bp-4BCh]@22
  unsigned __int8 v13; // [sp+7Dh] [bp-4BBh]@23
  unsigned __int8 v14; // [sp+7Eh] [bp-4BAh]@23
  unsigned __int8 v15; // [sp+7Fh] [bp-4B9h]@23
  unsigned __int8 v16; // [sp+FCh] [bp-43Ch]@25
  unsigned __int8 v17; // [sp+FDh] [bp-43Bh]@25
  unsigned __int8 v18; // [sp+FEh] [bp-43Ah]@25
  unsigned __int8 v19; // [sp+FFh] [bp-439h]@25
  char v20; // [sp+100h] [bp-438h]@22
  size_t v21; // [sp+500h] [bp-38h]@22
  int v22; // [sp+504h] [bp-34h]@25
  int v23; // [sp+508h] [bp-30h]@25
  size_t v24; // [sp+50Ch] [bp-2Ch]@23
  unsigned int i; // [sp+510h] [bp-28h]@12
  unsigned int v26; // [sp+514h] [bp-24h]@10
  int v27; // [sp+518h] [bp-20h]@1
  const char *v28; // [sp+51Ch] [bp-1Ch]@1

  v28 = 0;
  v27 = 0;
  if ( !(*(_DWORD *)(a1 + 116) & 1) )
    sub_6F83979A(a1, (int)"missing IHDR");
  if ( *(_DWORD *)(a1 + 116) & 6 )
  {
    sub_6F84A77C(a1, a3);
    return sub_6F839842(a1, "out of place");
  }
  if ( a3 <= 8 )
  {
    sub_6F84A77C(a1, a3);
    return sub_6F839842(a1, "too short");
  }
  if ( *(_WORD *)(a1 + 806) < 0 )
    return sub_6F84A77C(a1, a3);
  if ( *(_WORD *)(a1 + 806) & 4 )
  {
    v28 = "too many profiles";
  }
  else
  {
    v26 = 81;
    if ( a3 < 0x51 )
      v26 = a3;
    sub_6F84A73A(a1, (int)v11, v26);
    a3 -= v26;
    for ( i = 0; i <= 0x4F && i < v26 && v11[i]; ++i )
      ;
    if ( i && i <= 0x4F )
    {
      if ( i + 1 >= v26 || v11[i + 1] )
      {
        v28 = "bad compression method";
      }
      else
      {
        v26 = v26 - i - 2;
        if ( sub_6F84A9E8(a1, 1766015824) )
        {
          v28 = *(const char **)(a1 + 156);
        }
        else
        {
          v21 = 132;
          *(_DWORD *)(a1 + 132) = &v11[i + 2];
          *(_DWORD *)(a1 + 136) = v26;
          sub_6F84B00E(a1, (int)&v20, 0x400u, &a3, (int)&v12, (signed int *)&v21, 0);
          if ( v21 )
          {
            v28 = *(const char **)(a1 + 156);
          }
          else
          {
            v24 = (v14 << 8) + (v13 << 16) + (v12 << 24) + v15;
            if ( sub_6F836607(a1, a1 + 732, (int)v11, v24)
              && sub_6F83667B(a1, a1 + 732, (int)v11, v24, (int)&v12, *(_BYTE *)(a1 + 343)) )
            {
              v23 = (v18 << 8) + (v17 << 16) + (v16 << 24) + v19;
              v22 = (int)sub_6F84A90E(a1, v24, 2);
              if ( v22 )
              {
                v4 = v22;
                v5 = (char *)&v12;
                v6 = 132;
                if ( v22 & 1 )
                {
                  *(_BYTE *)v22 = v12;
                  ++v4;
                  v5 = (char *)&v13;
                  v6 = 131;
                }
                if ( v4 & 2 )
                {
                  *(_WORD *)v4 = *(_WORD *)v5;
                  v4 += 2;
                  v5 += 2;
                  v6 -= 2;
                }
                qmemcpy((void *)v4, v5, 4 * (v6 >> 2));
                v7 = (_WORD *)(v4 + 4 * (v6 >> 2));
                v8 = &v5[4 * (v6 >> 2)];
                v9 = 0;
                if ( v6 & 2 )
                {
                  *v7 = *(_WORD *)v8;
                  v9 = 1;
                }
                if ( v6 & 1 )
                  LOBYTE(v7[v9]) = v8[v9 * 2];
                v21 = 12 * v23;
                sub_6F84B00E(a1, (int)&v20, 0x400u, &a3, v22 + 132, (signed int *)&v21, 0);
                if ( v21 )
                {
                  v28 = *(const char **)(a1 + 156);
                }
                else if ( sub_6F836BC5(a1, a1 + 732, (int)v11, v24, v22) )
                {
                  v21 = v24 - 12 * v23 - 132;
                  sub_6F84B00E(a1, (int)&v20, 0x400u, &a3, v22 + 12 * v23 + 132, (signed int *)&v21, 1);
                  if ( !a3 || *(_DWORD *)(a1 + 120) & 0x100000 )
                  {
                    if ( v21 )
                    {
                      if ( v21 )
                        v28 = "truncated";
                      else
                        v28 = *(const char **)(a1 + 156);
                    }
                    else
                    {
                      if ( a3 )
                        sub_6F8397EC(a1, "extra compressed data");
                      sub_6F84A77C(a1, a3);
                      v27 = 1;
                      sub_6F837123(a1, a1 + 732, v22, *(_DWORD *)(a1 + 180));
                      if ( a2 )
                      {
                        sub_6F8341B7(a1, a2, 16, 0);
                        *(_DWORD *)(a2 + 116) = sub_6F83B347(a1, i + 1);
                        if ( *(_DWORD *)(a2 + 116) )
                        {
                          memcpy(*(void **)(a2 + 116), v11, i + 1);
                          *(_DWORD *)(a2 + 124) = v24;
                          *(_DWORD *)(a2 + 120) = v22;
                          *(_DWORD *)(a1 + 696) = 0;
                          *(_DWORD *)(a2 + 232) |= 0x10u;
                          v10 = *(_DWORD *)(a2 + 8);
                          BYTE1(v10) |= 0x10u;
                          *(_DWORD *)(a2 + 8) = v10;
                        }
                        else
                        {
                          *(_WORD *)(a1 + 806) |= 0x8000u;
                          v28 = "out of memory";
                        }
                      }
                      if ( a2 )
                        sub_6F835096(a1, a2);
                      if ( !v28 )
                      {
                        result = a1;
                        *(_DWORD *)(a1 + 128) = 0;
                        return result;
                      }
                    }
                  }
                  else
                  {
                    v28 = "extra compressed data";
                  }
                }
              }
              else
              {
                v28 = "out of memory";
              }
            }
          }
          *(_DWORD *)(a1 + 128) = 0;
        }
      }
    }
    else
    {
      v28 = "bad keyword";
    }
  }
  if ( !v27 )
    sub_6F84A77C(a1, a3);
  *(_WORD *)(a1 + 806) |= 0x8000u;
  result = sub_6F835096(a1, a2);
  if ( v28 )
    result = sub_6F839842(a1, v28);
  return result;
}
