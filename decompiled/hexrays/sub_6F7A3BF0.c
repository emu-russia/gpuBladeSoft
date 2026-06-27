signed int __cdecl sub_6F7A3BF0(int a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v7; // eax@1
  unsigned int v8; // edi@4
  signed int v9; // ebp@4
  int v11; // esi@7
  int v12; // eax@8
  int v13; // eax@8
  int v14; // ecx@8
  unsigned int v15; // edx@8
  int v16; // eax@10
  signed int v17; // eax@14
  unsigned __int32 v18; // ebp@16
  unsigned __int32 v19; // eax@22
  int v20; // ecx@37
  unsigned __int32 v21; // eax@37
  unsigned int v22; // esi@37
  int *v23; // edi@42
  int v24; // [sp+14h] [bp-58h]@13
  unsigned __int32 v25; // [sp+18h] [bp-54h]@16
  signed int v26; // [sp+1Ch] [bp-50h]@13
  int v27; // [sp+20h] [bp-4Ch]@7
  unsigned int v28; // [sp+24h] [bp-48h]@4
  int v29; // [sp+28h] [bp-44h]@8
  int v30; // [sp+2Ch] [bp-40h]@8
  int v31; // [sp+30h] [bp-3Ch]@8
  __int16 v32; // [sp+34h] [bp-38h]@8
  char v33; // [sp+36h] [bp-36h]@37
  int v34; // [sp+38h] [bp-34h]@8
  int v35; // [sp+3Ch] [bp-30h]@8
  unsigned __int32 v36; // [sp+40h] [bp-2Ch]@37
  unsigned int v37; // [sp+44h] [bp-28h]@37
  int v38; // [sp+48h] [bp-24h]@8
  unsigned int v39; // [sp+4Ch] [bp-20h]@8

  v7 = *(_DWORD *)(a1 + 732);
  if ( v7 < 1 )
    return 2;
  if ( v7 > 2 )
  {
    if ( v7 == 3 )
    {
      *(_WORD *)(a7 + 2) = 0;
      *(_WORD *)a7 = 0;
      v8 = _byteswap_ulong(*(_DWORD *)(*(_DWORD *)(a1 + 724) + 4 * a2 + 8));
      v9 = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1935829368, a5, (int *)&v28);
      if ( v9 )
        return v9;
      v16 = sub_6F7720A0(a5);
      if ( a3 > *(_DWORD *)(a1 + 16) )
        return 6;
      if ( v8 < v28 && 4 * a3 + 12 <= v28 - v8 )
      {
        v26 = 5;
        v24 = v8 + v16;
        while ( 1 )
        {
          v17 = sub_6F771FF0(a5, v24 + 4 * a3 + 4);
          if ( v17 )
            return v17;
          v17 = sub_6F772380(a5, 8u);
          if ( v17 )
            return v17;
          v18 = sub_6F772560(a5);
          v25 = sub_6F772560(a5);
          sub_6F772460(a5);
          if ( v18 == v25 )
            return 6;
          if ( v18 > v25 || v25 - v18 <= 7 || v25 > v28 - v8 )
            return 3;
          v17 = sub_6F771FF0(a5, v24 + v18);
          if ( v17 )
            return v17;
          v17 = sub_6F772380(a5, v25 - v18);
          if ( v17 )
            return v17;
          sub_6F7724C0(a5);
          sub_6F7724C0(a5);
          v19 = sub_6F772560(a5);
          if ( v19 == 1785751328 )
            goto LABEL_44;
          if ( v19 > 0x6A706720 )
          {
            if ( v19 == 1919378028 || v19 == 1953064550 )
LABEL_44:
              v9 = 2;
            else
LABEL_35:
              v9 = 7;
LABEL_36:
            sub_6F772460(a5);
            return v9;
          }
          if ( v19 != 1685418085 )
            goto LABEL_35;
          if ( !--v26 )
          {
            v9 = 3;
            goto LABEL_36;
          }
          a3 = (unsigned __int16)sub_6F7724C0(a5);
          sub_6F772460(a5);
          if ( *(_DWORD *)(a1 + 16) < a3 )
            return 6;
          if ( v8 >= v28 || v28 - v8 < 4 * a3 + 12 )
            return 3;
        }
      }
      return 3;
    }
    return 2;
  }
  v11 = *(_DWORD *)(a1 + 104);
  if ( (*(int (__cdecl **)(int, signed int, _DWORD, int *))(a1 + 508))(a1, 1128416340, *(_DWORD *)(a1 + 104), &v27) )
  {
    if ( (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1161970772, v11, &v27) )
    {
      v9 = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1650745716, v11, &v27);
      if ( v9 )
        return v9;
    }
  }
  v12 = *(_DWORD *)(a1 + 84);
  v29 = v11;
  v28 = a1;
  v32 = 0;
  v30 = v12 + 76;
  v31 = a7;
  v13 = sub_6F7720A0(v11);
  v14 = *(_DWORD *)(a1 + 724);
  v15 = *(_DWORD *)(a1 + 728);
  v34 = v13;
  v38 = v14;
  v35 = v27;
  v39 = v14 + v15;
  if ( v15 >= 48 * a2 + 55 )
  {
    v20 = v14 + 48 * a2 + 8;
    v21 = _byteswap_ulong(*(_DWORD *)v20);
    v36 = v21;
    v22 = _byteswap_ulong(*(_DWORD *)(v20 + 8));
    v37 = v22;
    v33 = *(_BYTE *)(v20 + 46);
    if ( v15 >= v21 && v22 <= (v15 - v21) >> 3 )
    {
      v9 = sub_6F7A1860((int)&v28, a3, 0, 0);
      if ( !v9 && !(a4 & 0x100000) && *(_BYTE *)(a6 + 18) == 7 )
      {
        v23 = **(int ***)(a1 + 84);
        sub_6F7C8020((int)&v28);
        v9 = sub_6F7C8240(v23, a6, (int)&v28, 1);
        if ( v9 )
        {
          sub_6F7C91D0(v23, (int)&v28);
        }
        else
        {
          *(_BYTE *)(a6 + 18) = v33;
          *(_DWORD *)(a6 + 8) = v30;
          *(_WORD *)(a6 + 16) = v32;
          sub_6F769300(*(_DWORD *)(a1 + 84), v31);
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 84) + 156) + 4) |= 1u;
        }
      }
      return v9;
    }
  }
  return 3;
}
