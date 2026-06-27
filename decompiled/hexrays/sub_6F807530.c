signed int __cdecl sub_6F807530(int a1, int a2)
{
  unsigned int v2; // edi@6
  char v3; // si@7
  unsigned __int8 v4; // cl@7
  unsigned int v5; // edi@7
  int v6; // ebp@7
  int v7; // edx@9
  int v8; // ST28_4@11
  int v9; // edi@11
  size_t v10; // ebp@11
  unsigned int v11; // esi@11
  int v12; // edx@11
  bool v13; // zf@12
  unsigned int v14; // esi@12
  unsigned int v15; // edi@12
  int v16; // ebp@13
  int i; // eax@14
  __int64 v18; // rdi@18
  unsigned __int64 v19; // kr08_8@20
  signed int v20; // esi@22
  int v21; // edx@24
  int v22; // ebp@25
  int v23; // eax@25
  char v24; // al@27
  char v25; // al@30
  int v26; // esi@31
  signed int result; // eax@34
  char v28; // al@39
  int v29; // ebp@45
  int v30; // ST24_4@45
  int v31; // eax@45
  int v32; // esi@46
  int v33; // ecx@47
  int v34; // edi@48
  int v35; // eax@48
  char v36; // al@49
  int v37; // [sp+24h] [bp-58h]@7
  int v38; // [sp+2Ch] [bp-50h]@7
  char v39; // [sp+30h] [bp-4Ch]@11
  char v40; // [sp+38h] [bp-44h]@11
  char v41; // [sp+3Ch] [bp-40h]@11
  char v42; // [sp+48h] [bp-34h]@11
  char v43; // [sp+4Ch] [bp-30h]@11
  char v44; // [sp+58h] [bp-24h]@11
  char v45; // [sp+5Ch] [bp-20h]@11

  if ( a1 && a2 )
  {
    if ( *(_DWORD *)(a1 + 51588) != 0x7FFFFFFF
      && (!*(_DWORD *)(a1 + 175112) || *(_DWORD *)(a1 + 175164))
      && *(_DWORD *)a2 == *(_DWORD *)(a1 + 4) )
    {
      v2 = *(_DWORD *)(a2 + 4);
      if ( v2 == *(_DWORD *)(a1 + 8) )
      {
        v3 = ((*(_DWORD *)(a1 + 48) >> 1) ^ 1) & 1;
        v4 = ((*(_DWORD *)(a1 + 48) >> 1) ^ 1) & 1;
        v37 = *(_DWORD *)(a1 + 48) & 1 ^ 1;
        v5 = v2 >> v4;
        v38 = v4;
        v6 = *(_DWORD *)(a2 + 16);
        if ( v6 == *(_DWORD *)a2 >> v37 && v6 == *(_DWORD *)(a2 + 32) )
        {
          v7 = *(_DWORD *)(a2 + 20);
          if ( v7 == v5 && v7 == *(_DWORD *)(a2 + 36) )
          {
            sub_6F815230((int)&v39, a2);
            sub_6F801320(
              (void *)(a1 + 432),
              (int *)&v40,
              &v41,
              *(_DWORD *)(a1 + 20),
              *(_DWORD *)(a1 + 24),
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 16));
            v8 = *(_DWORD *)(a1 + 20) >> v37;
            v9 = *(_DWORD *)(a1 + 24) >> v3;
            v10 = ((unsigned int)(v37 + *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 12)) >> v37) - v8;
            v11 = ((unsigned int)(v38 + *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 24)) >> v3) - v9;
            sub_6F801320((void *)(a1 + 448), (int *)&v42, &v43, v8, v9, v10, v11);
            sub_6F801320((void *)(a1 + 464), (int *)&v44, &v45, v8, v9, v10, v11);
            v12 = *(_DWORD *)(a1 + 280);
            if ( v12 < 0 )
            {
              v14 = *(_DWORD *)(a1 + 776);
              v15 = *(_DWORD *)(a1 + 780);
              v16 = *(_DWORD *)(a1 + 272);
              v12 = *(_DWORD *)(a1 + 276);
            }
            else
            {
              v13 = *(_BYTE *)(a1 + 792) == 0;
              *(_DWORD *)(a1 + 276) = v12;
              v14 = *(_DWORD *)(a1 + 776);
              v15 = *(_DWORD *)(a1 + 780);
              if ( v13 )
              {
                *(_DWORD *)(a1 + 768) = v14;
                *(_DWORD *)(a1 + 772) = v15;
                v16 = v12;
                *(_DWORD *)(a1 + 272) = v12;
              }
              else
              {
                v16 = *(_DWORD *)(a1 + 272);
              }
            }
            for ( i = 0; i == v16 || i == v12; ++i )
              ;
            *(_DWORD *)(a1 + 280) = i;
            LODWORD(v18) = ((unsigned int)(*(_DWORD *)(a1 + 51604) + 1) + __PAIR__(v15, v14)) >> 32;
            HIDWORD(v18) = *(_DWORD *)(a1 + 51604) + 1 + v14;
            *(_QWORD *)(a1 + 776) = __PAIR__(v18, HIDWORD(v18));
            if ( v18
              && !*(_BYTE *)(a1 + 175172)
              && (v19 = *(_DWORD *)(a1 + 51596) + __PAIR__(v18, HIDWORD(v18)) - *(_QWORD *)(a1 + 768), SHIDWORD(v19) <= 0)
              && (SHIDWORD(v19) < 0 || (unsigned int)v19 < *(_DWORD *)(a1 + 51592)) )
            {
              v20 = 0;
LABEL_26:
              if ( *(_DWORD *)(a1 + 52) > 0 )
              {
                v24 = sub_6F80DD90(a1, 1, 1);
                *(_BYTE *)(a1 + 794) = 1;
                *(_BYTE *)(a1 + 795) = v24;
              }
              while ( 1 )
              {
                sub_6F80C660(a1, 1);
                if ( sub_6F821210(a1, *(_DWORD *)(a1 + 175112) != 2, v20) )
                  break;
                sub_6F8031E0(a1);
                if ( *(_BYTE *)(a1 + 51613) )
                {
                  v26 = 1;
                  goto LABEL_44;
                }
                v21 = *(_DWORD *)(a1 + 52);
                *(_BYTE *)(a1 + 51613) = 1;
                v20 = 1;
                if ( v21 > 0 )
                {
                  v22 = *(_BYTE *)(a1 + 795);
                  v23 = sub_6F833A20(a1 + 51552);
                  sub_6F80F790(a1, 8 * v23, 1, v22, 1, 0);
                  goto LABEL_26;
                }
              }
              if ( *(_DWORD *)(a1 + 52) > 0 )
              {
                v25 = sub_6F80DD90(
                        a1,
                        0,
                        (unsigned int)((__PAIR__(*(_DWORD *)(a1 + 780) >> 31, *(_DWORD *)(a1 + 780) >> 31)
                                      - *(_QWORD *)(a1 + 776)) >> 32) >> 31);
                *(_BYTE *)(a1 + 794) = 1;
                *(_BYTE *)(a1 + 795) = v25;
              }
              v26 = 1;
              sub_6F80C660(a1, 0);
              sub_6F81FE50(a1, 1);
              sub_6F8031E0(a1);
              sub_6F814E70(a1);
              if ( *(_DWORD *)(a1 + 52) <= 0 )
                goto LABEL_32;
            }
            else
            {
              if ( *(_DWORD *)(a1 + 52) > 0 )
              {
                v28 = sub_6F80DD90(
                        a1,
                        0,
                        (unsigned int)((__PAIR__(*(_DWORD *)(a1 + 780) >> 31, *(_DWORD *)(a1 + 780) >> 31)
                                      - *(_QWORD *)(a1 + 776)) >> 32) >> 31);
                *(_BYTE *)(a1 + 794) = 1;
                *(_BYTE *)(a1 + 795) = v28;
              }
              sub_6F80C660(a1, 0);
              sub_6F81FE50(a1, 0);
              sub_6F8031E0(a1);
              if ( !*(_QWORD *)(a1 + 776) )
              {
                if ( *(_DWORD *)(a1 + 52) > 0 )
                {
                  v34 = *(_BYTE *)(a1 + 795);
                  v35 = sub_6F833A20(a1 + 51552);
                  sub_6F80F790(a1, 8 * v35, 0, v34, 1, 0);
                  if ( *(_DWORD *)(a1 + 52) > 0 )
                  {
                    v36 = sub_6F80DD90(
                            a1,
                            0,
                            (unsigned int)((__PAIR__(*(_DWORD *)(a1 + 780) >> 31, *(_DWORD *)(a1 + 780) >> 31)
                                          - *(_QWORD *)(a1 + 776)) >> 32) >> 31);
                    *(_BYTE *)(a1 + 794) = 1;
                    *(_BYTE *)(a1 + 795) = v36;
                  }
                }
                sub_6F80C660(a1, 0);
                sub_6F81FE50(a1, 1);
                sub_6F8031E0(a1);
              }
              v26 = 0;
LABEL_44:
              sub_6F814E70(a1);
              if ( *(_DWORD *)(a1 + 52) <= 0 )
                goto LABEL_32;
            }
            v29 = *(_BYTE *)(a1 + 792);
            v30 = *(_BYTE *)(a1 + 795);
            v31 = sub_6F833A20(a1 + 51552);
            if ( sub_6F80F790(a1, 8 * v31, v29, v30, 0, v26) )
            {
              v32 = *(_DWORD *)(a1 + 276);
              *(_BYTE *)(a1 + 51614) = 1;
              *(_DWORD *)(a1 + 280) = v32;
              sub_6F8332B0(a1 + 51552);
              goto LABEL_47;
            }
LABEL_32:
            *(_BYTE *)(a1 + 51614) = 0;
LABEL_47:
            v33 = *(_DWORD *)(a1 + 51596);
            *(_DWORD *)(a1 + 51588) = 1;
            result = 0;
            *(_DWORD *)(a1 + 51596) = 0;
            *(_DWORD *)(a1 + 51600) = v33;
            *(_DWORD *)(a1 + 51604) = v33;
            return result;
          }
        }
      }
    }
    result = -10;
  }
  else
  {
    result = -1;
  }
  return result;
}
