signed int __cdecl sub_6F7A4050(int a1, int a2)
{
  signed int result; // eax@1
  unsigned __int32 v3; // edx@4
  unsigned __int16 v4; // si@7
  int v5; // eax@8
  unsigned int v6; // eax@12
  bool v7; // zf@18
  signed int v8; // eax@18
  signed int v9; // eax@21
  signed int v10; // edi@25
  int v11; // esi@25
  unsigned __int32 v12; // eax@30
  unsigned int v13; // ecx@30
  unsigned int v14; // edx@30
  unsigned int v15; // edx@31
  int v16; // [sp+28h] [bp-64h]@1
  unsigned __int16 v17; // [sp+2Eh] [bp-5Eh]@7
  signed int v18; // [sp+30h] [bp-5Ch]@7
  int v19; // [sp+34h] [bp-58h]@5
  signed int v20; // [sp+38h] [bp-54h]@7
  signed int v21; // [sp+3Ch] [bp-50h]@7
  int v22; // [sp+48h] [bp-44h]@1
  int v23; // [sp+4Ch] [bp-40h]@5
  unsigned __int32 v24; // [sp+50h] [bp-3Ch]@1
  unsigned __int16 v25; // [sp+54h] [bp-38h]@6
  int v26; // [sp+5Ch] [bp-30h]@1
  int v27; // [sp+60h] [bp-2Ch]@8
  unsigned int v28; // [sp+68h] [bp-24h]@12
  unsigned int v29; // [sp+6Ch] [bp-20h]@13

  v16 = *(_DWORD *)(a2 + 28);
  v26 = sub_6F7720A0(a2);
  v24 = sub_6F7727E0(a2, &v22);
  result = v22;
  if ( v22 )
    return result;
  result = sub_6F7728E0(a2, (int)&unk_6FB68BEC, (int)&v24);
  v22 = result;
  if ( result )
    return result;
  v3 = v24;
  if ( v24 == 1330926671 )
  {
    v9 = v25;
LABEL_22:
    *(_WORD *)(a1 + 152) = v9;
    *(_DWORD *)(a1 + 148) = v3;
    *(_DWORD *)(a1 + 156) = sub_6F773B30(v16, 16, 0, v9, 0, &v22);
    result = v22;
    if ( !v22 )
    {
      result = sub_6F771FF0(a2, v26 + 12);
      v22 = result;
      if ( !result )
      {
        result = sub_6F772380(a2, 16 * *(_WORD *)(a1 + 152));
        v22 = result;
        if ( !result )
        {
          v10 = 0;
          v11 = *(_DWORD *)(a1 + 156);
          if ( v25 )
          {
            do
            {
              *(_DWORD *)v11 = sub_6F772560(a2);
              *(_DWORD *)(v11 + 4) = sub_6F772560(a2);
              *(_DWORD *)(v11 + 8) = sub_6F772560(a2);
              v12 = sub_6F772560(a2);
              v13 = *(_DWORD *)(v11 + 8);
              v14 = *(_DWORD *)(a2 + 4);
              *(_DWORD *)(v11 + 12) = v12;
              if ( v13 <= v14 )
              {
                v15 = v14 - v13;
                if ( v12 > v15 )
                {
                  if ( *(_DWORD *)v11 == 1752003704 || *(_DWORD *)v11 == 1986884728 )
                  {
                    v11 += 16;
                    *(_DWORD *)(v11 - 4) = v15 & 0xFFFFFFFC;
                  }
                }
                else
                {
                  v11 += 16;
                }
              }
              ++v10;
            }
            while ( v25 > v10 );
          }
          sub_6F772460(a2);
          result = v22;
        }
      }
    }
    return result;
  }
  v19 = v26 + 12;
  result = sub_6F771FF0(a2, v26 + 12);
  v23 = result;
  if ( result )
    return result;
  if ( !v25 )
    return 2;
  v18 = 0;
  v21 = 0;
  v17 = 0;
  v20 = 0;
  v4 = 0;
  do
  {
    v23 = sub_6F7728E0(a2, (int)&unk_6FB68BD4, (int)&v27);
    if ( v23 )
      break;
    v6 = *(_DWORD *)(a2 + 4);
    if ( v28 <= v6 )
    {
      if ( v29 <= v6 - v28 )
      {
        ++v17;
        v5 = v27;
LABEL_15:
        if ( v5 == 1751474532 || v5 == 1651008868 )
        {
          if ( v29 <= 0x35 )
            return 142;
          result = sub_6F771FF0(a2, v28 + 12);
          v23 = result;
          if ( result )
            return result;
          sub_6F7727E0(a2, &v23);
          result = v23;
          if ( v23 )
            return result;
          result = sub_6F771FF0(a2, v19 + 16 * (v4 + 1));
          v23 = result;
          if ( result )
            return result;
          v20 = 1;
        }
        else if ( v5 == 1397313095 )
        {
          v21 = 1;
        }
        else
        {
          v7 = v5 == 1296389185;
          v8 = 1;
          if ( !v7 )
            v8 = v18;
          v18 = v8;
        }
        goto LABEL_10;
      }
      v5 = v27;
      if ( v27 == 1752003704 || v27 == 1986884728 )
      {
        ++v17;
        goto LABEL_15;
      }
    }
LABEL_10:
    ++v4;
  }
  while ( v4 < v25 );
  v9 = v17;
  v25 = v17;
  if ( !v17 )
    return 2;
  if ( v20 || v21 && v18 )
  {
    v22 = 0;
    v3 = v24;
    goto LABEL_22;
  }
  return 142;
}
