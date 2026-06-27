int __cdecl sub_6F8923F0(int a1, int a2, int a3, int a4)
{
  signed int v4; // eax@3
  int v5; // ecx@6
  int v6; // ecx@7
  int v7; // edx@7
  unsigned int v8; // ecx@7
  unsigned int v9; // edx@7
  int result; // eax@12
  signed int v11; // ecx@22
  int v12; // edx@23
  int v13; // ecx@23
  signed int v14; // esi@23
  int v15; // ebp@24
  signed int v16; // edi@25
  int v17; // edx@25
  __int16 v18; // cx@25
  int v19; // edx@25
  int v20; // esi@25
  int v21; // esi@25
  int v22; // ecx@25
  int v23; // edx@27
  __int16 v24; // cx@27
  int v25; // edx@27
  int v26; // esi@27
  int v27; // esi@27
  int v28; // ecx@27
  signed int v29; // edx@27
  signed int v30; // edi@29
  signed int v31; // eax@29
  int v32; // ecx@29
  __int16 v33; // dx@29
  int v34; // eax@29
  int v35; // eax@29
  int v36; // ecx@29
  int v37; // eax@29
  signed int v38; // edi@29
  int v39; // ecx@29
  int v40; // eax@30
  signed int v41; // edx@31
  signed int v42; // esi@31
  int v43; // ecx@31
  int v44; // edi@31
  int v45; // ecx@31
  int v46; // esi@31
  int v47; // esi@31
  int v48; // edx@33
  signed int v49; // ecx@38
  int v50; // eax@42
  unsigned int v51; // edx@42
  signed int v52; // edx@46
  int v53; // edi@54
  int v54; // ecx@54
  __int16 v55; // si@54
  int v56; // edi@54
  __int16 v57; // si@54
  int v58; // ecx@54
  int v59; // esi@54
  int v60; // edi@54
  int v61; // esi@55
  int v62; // eax@55
  __int16 v63; // cx@55
  int v64; // eax@55
  int v65; // edi@55
  int v66; // eax@55
  int v67; // eax@56
  int v68; // edx@58
  int v69; // [sp+1Ch] [bp-18h]@24
  int v70; // [sp+20h] [bp-14h]@24

  if ( *(_DWORD *)(a1 + 132) <= 0 )
  {
    v8 = a3 + 5;
    v4 = 0;
    v9 = a3 + 5;
  }
  else
  {
    if ( *(_DWORD *)(*(_DWORD *)a1 + 44) == 2 )
    {
      v50 = 0;
      v51 = -201342849;
      do
      {
        if ( v51 & 1 && *(_WORD *)(a1 + 4 * v50 + 148) )
        {
LABEL_59:
          v52 = 0;
          goto LABEL_53;
        }
        ++v50;
        v51 >>= 1;
      }
      while ( v50 != 32 );
      v52 = 1;
      if ( !*(_WORD *)(a1 + 184) && !*(_WORD *)(a1 + 188) && !*(_WORD *)(a1 + 200) )
      {
        while ( !*(_WORD *)(a1 + 4 * v50 + 148) )
        {
          if ( ++v50 == 256 )
            goto LABEL_59;
        }
        v52 = 1;
      }
LABEL_53:
      *(_DWORD *)(*(_DWORD *)a1 + 44) = v52;
    }
    sub_6F891000(a1, a1 + 2840);
    sub_6F891000(a1, a1 + 2852);
    sub_6F891480(a1, a1 + 148, *(_DWORD *)(a1 + 2844));
    sub_6F891480(a1, a1 + 2440, *(_DWORD *)(a1 + 2856));
    sub_6F891000(a1, a1 + 2864);
    v4 = 18;
    while ( !*(_WORD *)(a1 + 4 * (unsigned __int8)byte_6FBA1B80[v4] + 2686) )
    {
      if ( --v4 == 2 )
      {
        v5 = 9;
        goto LABEL_7;
      }
    }
    v5 = 3 * v4 + 3;
LABEL_7:
    v6 = v5 + *(_DWORD *)(a1 + 5800) + 14;
    v7 = *(_DWORD *)(a1 + 5804);
    *(_DWORD *)(a1 + 5800) = v6;
    v8 = (unsigned int)(v6 + 10) >> 3;
    v9 = (unsigned int)(v7 + 10) >> 3;
    if ( v8 > v9 )
      v8 = v9;
  }
  if ( v8 >= a3 + 4 && a2 )
  {
    sub_6F8921D0(a1, a2, a3, a4);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 136) != 4 && v9 != v8 )
    {
      v11 = *(_DWORD *)(a1 + 5820);
      if ( v11 > 13 )
      {
        v53 = (unsigned __int16)(a4 + 4) << v11;
        v54 = *(_DWORD *)(a1 + 20);
        v55 = v53;
        v56 = *(_DWORD *)(a1 + 8);
        v57 = *(_WORD *)(a1 + 5816) | v55;
        *(_WORD *)(a1 + 5816) = v57;
        *(_DWORD *)(a1 + 20) = v54 + 1;
        *(_BYTE *)(v56 + v54) = v57;
        v58 = *(_DWORD *)(a1 + 20);
        v59 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 20) = v58 + 1;
        *(_BYTE *)(v59 + v58) = *(_BYTE *)(a1 + 5817);
        v60 = *(_DWORD *)(a1 + 5820);
        v13 = v60 - 13;
        v14 = (signed int)(unsigned __int16)(a4 + 4) >> (16 - v60);
        *(_WORD *)(a1 + 5816) = v14;
        *(_DWORD *)(a1 + 5820) = v60 - 13;
      }
      else
      {
        v12 = (unsigned __int16)(a4 + 4) << v11;
        v13 = v11 + 3;
        LOWORD(v12) = *(_WORD *)(a1 + 5816) | v12;
        *(_DWORD *)(a1 + 5820) = v13;
        *(_WORD *)(a1 + 5816) = v12;
        LOWORD(v14) = v12;
      }
      v15 = v4 + 1;
      v69 = *(_DWORD *)(a1 + 2856);
      v70 = *(_DWORD *)(a1 + 2844);
      if ( v13 <= 11 )
      {
        v68 = (unsigned __int16)(v70 - 256) << v13;
        v22 = v13 + 5;
        LOWORD(v68) = v14 | v68;
        *(_WORD *)(a1 + 5816) = v68;
        LOWORD(v14) = v68;
        *(_DWORD *)(a1 + 5820) = v22;
      }
      else
      {
        v16 = (unsigned __int16)(*(_DWORD *)(a1 + 2844) - 256);
        v17 = *(_DWORD *)(a1 + 20);
        v18 = v14 | (v16 << v13);
        *(_WORD *)(a1 + 5816) = v18;
        *(_DWORD *)(a1 + 20) = v17 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v17) = v18;
        v19 = *(_DWORD *)(a1 + 20);
        v20 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 20) = v19 + 1;
        *(_BYTE *)(v20 + v19) = *(_BYTE *)(a1 + 5817);
        v21 = *(_DWORD *)(a1 + 5820);
        v22 = v21 - 11;
        v14 = v16 >> (16 - v21);
        *(_WORD *)(a1 + 5816) = v14;
        *(_DWORD *)(a1 + 5820) = v22;
      }
      if ( v22 <= 11 )
      {
        v29 = (unsigned __int16)v69 << v22;
        v28 = v22 + 5;
        LOWORD(v29) = v14 | v29;
        *(_WORD *)(a1 + 5816) = v29;
        *(_DWORD *)(a1 + 5820) = v28;
      }
      else
      {
        v23 = *(_DWORD *)(a1 + 20);
        v24 = v14 | ((unsigned __int16)v69 << v22);
        *(_WORD *)(a1 + 5816) = v24;
        *(_DWORD *)(a1 + 20) = v23 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v23) = v24;
        v25 = *(_DWORD *)(a1 + 20);
        v26 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 20) = v25 + 1;
        *(_BYTE *)(v26 + v25) = *(_BYTE *)(a1 + 5817);
        v27 = *(_DWORD *)(a1 + 5820);
        v28 = v27 - 11;
        v29 = (signed int)(unsigned __int16)v69 >> (16 - v27);
        *(_WORD *)(a1 + 5816) = v29;
        *(_DWORD *)(a1 + 5820) = v27 - 11;
      }
      if ( v28 <= 12 )
      {
        v67 = (unsigned __int16)(v4 - 3) << v28;
        v39 = v28 + 4;
        LOWORD(v67) = v29 | v67;
        *(_WORD *)(a1 + 5816) = v67;
        LOWORD(v38) = v67;
        *(_DWORD *)(a1 + 5820) = v39;
      }
      else
      {
        v30 = (unsigned __int16)(v4 - 3);
        v31 = v30 << v28;
        v32 = *(_DWORD *)(a1 + 8);
        v33 = v31 | v29;
        v34 = *(_DWORD *)(a1 + 20);
        *(_WORD *)(a1 + 5816) = v33;
        *(_DWORD *)(a1 + 20) = v34 + 1;
        *(_BYTE *)(v32 + v34) = v33;
        v35 = *(_DWORD *)(a1 + 20);
        v36 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 20) = v35 + 1;
        *(_BYTE *)(v36 + v35) = *(_BYTE *)(a1 + 5817);
        v37 = *(_DWORD *)(a1 + 5820);
        v38 = v30 >> (16 - v37);
        v39 = v37 - 12;
        *(_WORD *)(a1 + 5816) = v38;
        *(_DWORD *)(a1 + 5820) = v37 - 12;
      }
      v40 = 0;
      while ( 1 )
      {
        v48 = (unsigned __int8)byte_6FBA1B80[v40];
        if ( v39 > 13 )
        {
          v41 = *(_WORD *)(a1 + 4 * v48 + 2686);
          ++v40;
          v42 = v41 << v39;
          v43 = *(_DWORD *)(a1 + 20);
          LOWORD(v42) = v38 | v42;
          v44 = *(_DWORD *)(a1 + 8);
          *(_WORD *)(a1 + 5816) = v42;
          *(_DWORD *)(a1 + 20) = v43 + 1;
          *(_BYTE *)(v44 + v43) = v42;
          v45 = *(_DWORD *)(a1 + 20);
          v46 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 20) = v45 + 1;
          *(_BYTE *)(v46 + v45) = *(_BYTE *)(a1 + 5817);
          v47 = *(_DWORD *)(a1 + 5820);
          *(_WORD *)(a1 + 5816) = v41 >> (16 - v47);
          *(_DWORD *)(a1 + 5820) = v47 - 13;
          if ( v15 <= v40 )
            goto LABEL_35;
        }
        else
        {
          ++v40;
          *(_WORD *)(a1 + 5816) = v38 | (*(_WORD *)(a1 + 4 * v48 + 2686) << v39);
          *(_DWORD *)(a1 + 5820) = v39 + 3;
          if ( v15 <= v40 )
          {
LABEL_35:
            sub_6F891570(a1, a1 + 148, v70);
            sub_6F891570(a1, a1 + 2440, v69);
            sub_6F891B70(a1, a1 + 148, a1 + 2440);
            goto LABEL_12;
          }
        }
        v39 = *(_DWORD *)(a1 + 5820);
        LOWORD(v38) = *(_WORD *)(a1 + 5816);
      }
    }
    v49 = *(_DWORD *)(a1 + 5820);
    if ( v49 > 13 )
    {
      v61 = *(_DWORD *)(a1 + 8);
      v62 = *(_DWORD *)(a1 + 20);
      v63 = *(_WORD *)(a1 + 5816) | ((unsigned __int16)(a4 + 2) << v49);
      *(_DWORD *)(a1 + 20) = v62 + 1;
      *(_WORD *)(a1 + 5816) = v63;
      *(_BYTE *)(v61 + v62) = v63;
      v64 = *(_DWORD *)(a1 + 20);
      LOBYTE(v63) = *(_BYTE *)(a1 + 5817);
      v65 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 20) = v64 + 1;
      *(_BYTE *)(v65 + v64) = v63;
      v66 = *(_DWORD *)(a1 + 5820);
      *(_WORD *)(a1 + 5816) = (signed int)(unsigned __int16)(a4 + 2) >> (16 - v66);
      *(_DWORD *)(a1 + 5820) = v66 - 13;
    }
    else
    {
      *(_WORD *)(a1 + 5816) |= (unsigned __int16)(a4 + 2) << v49;
      *(_DWORD *)(a1 + 5820) = v49 + 3;
    }
    sub_6F891B70(a1, (int)&unk_6FBA1700, (int)&unk_6FBA1680);
  }
LABEL_12:
  result = 0;
  do
    *(_WORD *)(a1 + 4 * result++ + 148) = 0;
  while ( result != 286 );
  LOWORD(result) = 0;
  do
    *(_WORD *)(a1 + 4 * result++ + 2440) = 0;
  while ( result != 30 );
  LOBYTE(result) = 0;
  do
    *(_WORD *)(a1 + 4 * result++ + 2684) = 0;
  while ( result != 19 );
  *(_WORD *)(a1 + 1172) = 1;
  *(_DWORD *)(a1 + 5804) = 0;
  *(_DWORD *)(a1 + 5800) = 0;
  *(_DWORD *)(a1 + 5808) = 0;
  *(_DWORD *)(a1 + 5792) = 0;
  if ( a4 )
    result = sub_6F892000(a1);
  return result;
}
