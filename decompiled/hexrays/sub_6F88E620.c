int __cdecl sub_6F88E620(int a1, int a2)
{
  unsigned int v2; // ebp@1
  int v3; // ebx@3
  int v4; // ecx@3
  int v5; // esi@3
  int v6; // edx@3
  int v7; // eax@3
  _WORD *v8; // eax@3
  int v9; // ecx@3
  unsigned __int64 v10; // rax@3
  unsigned __int8 v11; // al@7
  unsigned int v12; // ebp@7
  int v13; // edx@7
  __int16 v14; // bx@7
  __int16 v15; // si@7
  unsigned __int16 v16; // bx@7
  int v17; // ecx@7
  int v18; // eax@8
  int v19; // esi@9
  int v20; // eax@9
  int v21; // esi@9
  int v22; // ebx@9
  int v23; // eax@9
  int i; // edx@9
  int v25; // eax@11
  int v26; // ecx@12
  int v27; // esi@12
  int v28; // edx@12
  _WORD *v29; // edx@12
  int v30; // eax@14
  int v31; // edx@15
  int v32; // ecx@15
  int v33; // eax@15
  int result; // eax@18
  int v35; // edx@21
  int v36; // eax@21
  int v37; // ecx@21
  int v38; // eax@22
  unsigned int v39; // ebp@22
  int v40; // eax@22
  unsigned int v41; // eax@24
  int v42; // eax@29
  int v43; // edx@31
  int v44; // ecx@31
  unsigned int v45; // eax@34
  unsigned int v46; // edx@45
  signed int v47; // eax@45
  int v48; // eax@49
  int v49; // ecx@49
  int v50; // edx@49
  int v51; // edx@44
  int v52; // eax@44
  int v53; // ecx@44
  int v54; // eax@52
  int v55; // ecx@52
  int v56; // edx@52
  int v57; // [sp+1Ch] [bp-30h]@9
  int v58; // [sp+20h] [bp-2Ch]@9
  int v59; // [sp+24h] [bp-28h]@9
  int v60; // [sp+28h] [bp-24h]@9
  int v61; // [sp+2Ch] [bp-20h]@9

LABEL_1:
  v2 = *(_DWORD *)(a1 + 116);
LABEL_2:
  if ( v2 > 0x105 )
  {
LABEL_3:
    v3 = *(_DWORD *)(a1 + 108);
    v4 = *(_DWORD *)(a1 + 64);
    v5 = v3 & *(_DWORD *)(a1 + 52);
    v6 = *(_DWORD *)(a1 + 68);
    v7 = *(_DWORD *)(a1 + 84) & ((*(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 88)) ^ *(_BYTE *)(*(_DWORD *)(a1 + 56)
                                                                                           + v3
                                                                                           + 2));
    *(_DWORD *)(a1 + 72) = v7;
    v8 = (_WORD *)(v6 + 2 * v7);
    HIDWORD(v10) = *v8;
    *(_WORD *)(v4 + 2 * v5) = WORD2(v10);
    v9 = *(_DWORD *)(a1 + 112);
    *(_WORD *)v10 = v3;
    LODWORD(v10) = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 96) = 2;
    *(_DWORD *)(a1 + 100) = v9;
    *(_DWORD *)(a1 + 120) = v10;
    if ( v10 >= *(_DWORD *)(a1 + 128) || v3 - HIDWORD(v10) > (unsigned int)(*(_DWORD *)(a1 + 44) - 262) )
      goto LABEL_5;
    v45 = sub_6F88E040(a1, HIDWORD(v10));
    *(_DWORD *)(a1 + 96) = v45;
    if ( v45 > 5 )
      goto LABEL_37;
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      v3 = *(_DWORD *)(a1 + 108);
    }
    else
    {
      if ( v45 != 3 )
      {
LABEL_37:
        v3 = *(_DWORD *)(a1 + 108);
LABEL_38:
        LODWORD(v10) = *(_DWORD *)(a1 + 120);
        goto LABEL_5;
      }
      v3 = *(_DWORD *)(a1 + 108);
      if ( (unsigned int)(*(_DWORD *)(a1 + 108) - *(_DWORD *)(a1 + 112)) <= 0x1000 )
        goto LABEL_38;
    }
    *(_DWORD *)(a1 + 96) = 2;
    goto LABEL_38;
  }
  while ( 1 )
  {
    sub_6F88E2C0(a1);
    v41 = *(_DWORD *)(a1 + 116);
    if ( v41 > 0x105 )
      goto LABEL_3;
    if ( !a2 )
      return 0;
    if ( !v41 )
      break;
    if ( v41 > 2 )
      goto LABEL_3;
    LODWORD(v10) = *(_DWORD *)(a1 + 96);
    HIDWORD(v10) = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 96) = 2;
    v3 = *(_DWORD *)(a1 + 108);
    *(_DWORD *)(a1 + 120) = v10;
    *(_DWORD *)(a1 + 100) = HIDWORD(v10);
LABEL_5:
    if ( (unsigned int)v10 > 2 && *(_DWORD *)(a1 + 96) <= (unsigned int)v10 )
    {
      v11 = v10 - 3;
      v12 = v3 + *(_DWORD *)(a1 + 116) - 3;
      v13 = *(_DWORD *)(a1 + 5792);
      v14 = v3 - *(_WORD *)(a1 + 100);
      v15 = v14 - 1;
      v16 = v14 - 2;
      *(_WORD *)(*(_DWORD *)(a1 + 5796) + 2 * v13) = v15;
      v17 = *(_DWORD *)(a1 + 5784);
      *(_DWORD *)(a1 + 5792) = v13 + 1;
      *(_BYTE *)(v17 + v13) = v11;
      ++*(_WORD *)(a1 + 4 * (unsigned __int8)byte_6FBA1380[v11] + 1176);
      if ( v16 > 0xFFu )
        v18 = (unsigned __int8)byte_6FBA1580[v16 >> 7];
      else
        v18 = (unsigned __int8)byte_6FBA1480[v16];
      ++*(_WORD *)(a1 + 4 * v18 + 2440);
      v19 = *(_DWORD *)(a1 + 116);
      v58 = *(_DWORD *)(a1 + 5792);
      v59 = *(_DWORD *)(a1 + 5788) - 1;
      v20 = *(_DWORD *)(a1 + 120);
      v57 = v19 + 1 - v20;
      v21 = v19 + 1 - v20;
      v22 = v20 - 2;
      v60 = *(_DWORD *)(a1 + 120);
      v23 = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 116) = v21;
      *(_DWORD *)(a1 + 120) = v22;
      v61 = v23;
      for ( i = v23; ; i = v25 )
      {
        v25 = i + 1;
        *(_DWORD *)(a1 + 108) = i + 1;
        if ( v12 >= i + 1 )
        {
          v26 = *(_DWORD *)(a1 + 68);
          v27 = *(_DWORD *)(a1 + 52);
          v28 = *(_DWORD *)(a1 + 84) & ((*(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 88)) ^ *(_BYTE *)(*(_DWORD *)(a1 + 56)
                                                                                                  + i
                                                                                                  + 3));
          *(_DWORD *)(a1 + 72) = v28;
          v29 = (_WORD *)(v26 + 2 * v28);
          *(_WORD *)(*(_DWORD *)(a1 + 64) + 2 * (v25 & v27)) = *v29;
          *v29 = v25;
        }
        *(_DWORD *)(a1 + 120) = --v22;
        if ( !v22 )
          break;
      }
      *(_DWORD *)(a1 + 104) = 0;
      v2 = v57;
      *(_DWORD *)(a1 + 96) = 2;
      v30 = v60 + v61 - 1;
      *(_DWORD *)(a1 + 108) = v30;
      if ( v58 != v59 )
        goto LABEL_2;
      v31 = *(_DWORD *)(a1 + 92);
      v32 = 0;
      v33 = v30 - v31;
      if ( v31 >= 0 )
        v32 = v31 + *(_DWORD *)(a1 + 56);
      sub_6F8923F0(a1, v32, v33, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
      if ( !*(_DWORD *)(*(_DWORD *)a1 + 16) )
        return 0;
      goto LABEL_1;
    }
    if ( !*(_DWORD *)(a1 + 104) )
    {
      v42 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 104) = 1;
      *(_DWORD *)(a1 + 108) = v3 + 1;
      v2 = v42 - 1;
      *(_DWORD *)(a1 + 116) = v42 - 1;
      goto LABEL_2;
    }
    v35 = *(_BYTE *)(*(_DWORD *)(a1 + 56) + v3 - 1);
    v36 = *(_DWORD *)(a1 + 5792);
    *(_WORD *)(*(_DWORD *)(a1 + 5796) + 2 * v36) = 0;
    v37 = *(_DWORD *)(a1 + 5784);
    *(_DWORD *)(a1 + 5792) = v36 + 1;
    *(_BYTE *)(v37 + v36) = v35;
    ++*(_WORD *)(a1 + 4 * v35 + 148);
    if ( *(_DWORD *)(a1 + 5792) == *(_DWORD *)(a1 + 5788) - 1 )
    {
      v43 = *(_DWORD *)(a1 + 92);
      v44 = 0;
      if ( v43 >= 0 )
        v44 = v43 + *(_DWORD *)(a1 + 56);
      sub_6F8923F0(a1, v44, *(_DWORD *)(a1 + 108) - v43, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
    }
    v38 = *(_DWORD *)(a1 + 116);
    ++*(_DWORD *)(a1 + 108);
    v39 = v38 - 1;
    v40 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 116) = v39;
    if ( !*(_DWORD *)(v40 + 16) )
      return 0;
    if ( v39 > 0x105 )
      goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 104) )
  {
    v51 = *(_BYTE *)(*(_DWORD *)(a1 + 56) + *(_DWORD *)(a1 + 108) - 1);
    v52 = *(_DWORD *)(a1 + 5792);
    *(_WORD *)(*(_DWORD *)(a1 + 5796) + 2 * v52) = 0;
    v53 = *(_DWORD *)(a1 + 5784);
    *(_DWORD *)(a1 + 5792) = v52 + 1;
    *(_BYTE *)(v53 + v52) = v51;
    ++*(_WORD *)(a1 + 4 * v51 + 148);
    *(_DWORD *)(a1 + 104) = 0;
  }
  v46 = *(_DWORD *)(a1 + 108);
  v47 = 2;
  if ( v46 <= 2 )
    v47 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 5812) = v47;
  if ( a2 == 4 )
  {
    v54 = *(_DWORD *)(a1 + 92);
    v55 = 0;
    v56 = v46 - v54;
    if ( v54 >= 0 )
      v55 = *(_DWORD *)(a1 + 56) + v54;
    sub_6F8923F0(a1, v55, v56, 1);
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
    sub_6F88E5B0(*(_DWORD *)a1);
    result = 3 - (*(_DWORD *)(*(_DWORD *)a1 + 16) < 1u);
  }
  else
  {
    result = 1;
    if ( *(_DWORD *)(a1 + 5792) )
    {
      v48 = *(_DWORD *)(a1 + 92);
      v49 = 0;
      v50 = v46 - v48;
      if ( v48 >= 0 )
        v49 = *(_DWORD *)(a1 + 56) + v48;
      sub_6F8923F0(a1, v49, v50, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
      result = *(_DWORD *)(*(_DWORD *)a1 + 16) != 0;
    }
  }
  return result;
}
