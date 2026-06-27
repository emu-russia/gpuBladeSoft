int __cdecl sub_6F88EAC0(int a1, int a2)
{
  int v2; // ebx@2
  int v3; // ecx@2
  int v4; // esi@2
  int v5; // edx@2
  int v6; // eax@2
  _WORD *v7; // eax@2
  unsigned int v8; // edx@2
  unsigned int v9; // eax@4
  int v10; // edx@6
  unsigned __int8 v11; // al@6
  __int16 v12; // bx@6
  int v13; // ecx@6
  unsigned __int16 v14; // bx@6
  int v15; // eax@7
  unsigned int v16; // esi@8
  unsigned int v17; // eax@8
  bool v18; // cf@8
  bool v19; // zf@8
  int v20; // ecx@10
  int v21; // eax@10
  int v22; // edx@10
  int v23; // ebp@10
  int v24; // edx@10
  int v25; // eax@12
  __int16 *v26; // esi@12
  __int16 v27; // bx@12
  int v28; // edx@15
  int v29; // ecx@15
  int result; // eax@18
  int v31; // edx@19
  int v32; // eax@19
  int v33; // ecx@19
  int v34; // eax@20
  int v35; // ecx@20
  int v36; // eax@20
  int v37; // edx@20
  unsigned int v38; // eax@21
  unsigned int v39; // edx@28
  signed int v40; // eax@28
  int v41; // eax@32
  int v42; // ecx@32
  int v43; // edx@32
  int v44; // eax@36
  int v45; // ecx@36
  int v46; // edx@36
  int v47; // [sp+18h] [bp-44h]@10
  int v48; // [sp+1Ch] [bp-40h]@8
  int v49; // [sp+24h] [bp-38h]@10
  int v50; // [sp+28h] [bp-34h]@10
  int v51; // [sp+2Ch] [bp-30h]@10
  int v52; // [sp+30h] [bp-2Ch]@10
  int v53; // [sp+34h] [bp-28h]@10
  int v54; // [sp+38h] [bp-24h]@10
  unsigned int v55; // [sp+3Ch] [bp-20h]@10

  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 116) > 0x105u )
      goto LABEL_2;
    sub_6F88E2C0(a1);
    v38 = *(_DWORD *)(a1 + 116);
    if ( v38 > 0x105 )
      goto LABEL_2;
    if ( !a2 )
      return 0;
    if ( !v38 )
      break;
    if ( v38 <= 2 )
    {
      v2 = *(_DWORD *)(a1 + 108);
      goto LABEL_4;
    }
LABEL_2:
    v2 = *(_DWORD *)(a1 + 108);
    v3 = *(_DWORD *)(a1 + 64);
    v4 = v2 & *(_DWORD *)(a1 + 52);
    v5 = *(_DWORD *)(a1 + 68);
    v6 = *(_DWORD *)(a1 + 84) & ((*(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 88)) ^ *(_BYTE *)(*(_DWORD *)(a1 + 56)
                                                                                           + v2
                                                                                           + 2));
    *(_DWORD *)(a1 + 72) = v6;
    v7 = (_WORD *)(v5 + 2 * v6);
    v8 = *v7;
    *(_WORD *)(v3 + 2 * v4) = v8;
    *v7 = v2;
    if ( v8 && v2 - v8 <= *(_DWORD *)(a1 + 44) - 262 )
    {
      v9 = sub_6F88E040(a1, v8);
      v2 = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 96) = v9;
      goto LABEL_5;
    }
LABEL_4:
    v9 = *(_DWORD *)(a1 + 96);
LABEL_5:
    if ( v9 <= 2 )
    {
      v31 = *(_BYTE *)(*(_DWORD *)(a1 + 56) + v2);
      v32 = *(_DWORD *)(a1 + 5792);
      *(_WORD *)(*(_DWORD *)(a1 + 5796) + 2 * v32) = 0;
      v33 = *(_DWORD *)(a1 + 5784);
      *(_DWORD *)(a1 + 5792) = v32 + 1;
      *(_BYTE *)(v33 + v32) = v31;
      ++*(_WORD *)(a1 + 4 * v31 + 148);
      v48 = *(_DWORD *)(a1 + 5792) == *(_DWORD *)(a1 + 5788) - 1;
      --*(_DWORD *)(a1 + 116);
      ++*(_DWORD *)(a1 + 108);
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 5792);
      v11 = v9 - 3;
      v12 = v2 - *(_WORD *)(a1 + 112);
      *(_WORD *)(*(_DWORD *)(a1 + 5796) + 2 * v10) = v12;
      v13 = *(_DWORD *)(a1 + 5784);
      v14 = v12 - 1;
      *(_DWORD *)(a1 + 5792) = v10 + 1;
      *(_BYTE *)(v13 + v10) = v11;
      ++*(_WORD *)(a1 + 4 * (unsigned __int8)byte_6FBA1380[v11] + 1176);
      if ( v14 > 0xFFu )
        v15 = (unsigned __int8)byte_6FBA1580[v14 >> 7];
      else
        v15 = (unsigned __int8)byte_6FBA1480[v14];
      ++*(_WORD *)(a1 + 4 * v15 + 2440);
      v16 = *(_DWORD *)(a1 + 96);
      v48 = *(_DWORD *)(a1 + 5792) == *(_DWORD *)(a1 + 5788) - 1;
      v17 = *(_DWORD *)(a1 + 116) - v16;
      v18 = v16 < *(_DWORD *)(a1 + 128);
      v19 = v16 == *(_DWORD *)(a1 + 128);
      *(_DWORD *)(a1 + 116) = v17;
      if ( (v18 || v19) && v17 > 2 )
      {
        v20 = *(_DWORD *)(a1 + 64);
        v21 = *(_DWORD *)(a1 + 108);
        v22 = *(_DWORD *)(a1 + 84);
        *(_DWORD *)(a1 + 96) = v16 - 1;
        v23 = *(_DWORD *)(a1 + 72);
        v54 = v21;
        v52 = v22;
        v24 = v21 + 1;
        v55 = v16;
        v49 = *(_DWORD *)(a1 + 52);
        v47 = v16 - 1;
        v50 = *(_DWORD *)(a1 + 68);
        v51 = *(_DWORD *)(a1 + 56);
        v53 = *(_DWORD *)(a1 + 88);
        while ( 1 )
        {
          *(_DWORD *)(a1 + 108) = v24;
          v25 = v52 & ((v23 << v53) ^ *(_BYTE *)(v51 + v24 + 2));
          v26 = (__int16 *)(v50 + 2 * v25);
          v27 = *v26;
          *(_DWORD *)(a1 + 72) = v25;
          *(_WORD *)(v20 + 2 * (v24 & v49)) = v27;
          *v26 = v24++;
          *(_DWORD *)(a1 + 96) = v47 - 1;
          if ( v47 == 1 )
            break;
          --v47;
          v23 = v25;
        }
        *(_DWORD *)(a1 + 108) = v55 + v54;
      }
      else
      {
        v34 = *(_DWORD *)(a1 + 108);
        v35 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 96) = 0;
        v36 = v16 + v34;
        *(_DWORD *)(a1 + 108) = v36;
        v37 = *(_BYTE *)(v35 + v36);
        *(_DWORD *)(a1 + 72) = v37;
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 84) & ((v37 << *(_DWORD *)(a1 + 88)) ^ *(_BYTE *)(v35 + v36 + 1));
      }
    }
    if ( v48 )
    {
      v28 = *(_DWORD *)(a1 + 92);
      v29 = 0;
      if ( v28 >= 0 )
        v29 = v28 + *(_DWORD *)(a1 + 56);
      sub_6F8923F0(a1, v29, *(_DWORD *)(a1 + 108) - v28, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
      if ( !*(_DWORD *)(*(_DWORD *)a1 + 16) )
        return 0;
    }
  }
  v39 = *(_DWORD *)(a1 + 108);
  v40 = 2;
  if ( v39 <= 2 )
    v40 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 5812) = v40;
  if ( a2 == 4 )
  {
    v44 = *(_DWORD *)(a1 + 92);
    v45 = 0;
    v46 = v39 - v44;
    if ( v44 >= 0 )
      v45 = *(_DWORD *)(a1 + 56) + v44;
    sub_6F8923F0(a1, v45, v46, 1);
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
    sub_6F88E5B0(*(_DWORD *)a1);
    result = 3 - (*(_DWORD *)(*(_DWORD *)a1 + 16) < 1u);
  }
  else
  {
    result = 1;
    if ( *(_DWORD *)(a1 + 5792) )
    {
      v41 = *(_DWORD *)(a1 + 92);
      v42 = 0;
      v43 = v39 - v41;
      if ( v41 >= 0 )
        v42 = *(_DWORD *)(a1 + 56) + v41;
      sub_6F8923F0(a1, v42, v43, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
      result = *(_DWORD *)(*(_DWORD *)a1 + 16) != 0;
    }
  }
  return result;
}
