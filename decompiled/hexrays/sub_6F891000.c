int __usercall sub_6F891000@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // eax@1
  int v4; // ecx@1
  int v5; // ebp@1
  int v6; // edi@1
  int v7; // edx@2
  signed int v8; // eax@2
  signed int v9; // ecx@2
  int v10; // ecx@3
  signed int v11; // esi@6
  signed int v12; // ecx@6
  int v13; // ebp@6
  int v14; // ecx@11
  int v15; // edx@11
  signed int v16; // eax@11
  int v17; // ebp@13
  int v18; // esi@13
  signed int v19; // eax@15
  int v20; // edx@17
  int v21; // eax@17
  int v22; // esi@17
  int v23; // edx@17
  int v24; // eax@17
  int v25; // edx@17
  unsigned __int8 v26; // ST00_1@17
  unsigned __int8 v27; // cl@17
  char v28; // al@17
  int v29; // eax@20
  int v30; // ecx@20
  int v31; // edx@20
  int v32; // ebp@20
  int v33; // eax@20
  int v34; // edi@20
  int v35; // eax@20
  int v36; // edx@22
  int *v37; // edi@23
  int v38; // edx@24
  int v39; // esi@24
  int v40; // ecx@24
  int v41; // eax@24
  int v42; // ebx@27
  int v43; // edx@29
  int v44; // eax@32
  int v45; // ecx@33
  int v46; // edi@33
  int v47; // esi@33
  int v48; // ebp@33
  int v49; // eax@33
  __int16 v50; // cx@34
  int i; // edx@34
  int v52; // ecx@36
  int v53; // eax@37
  signed int v54; // edx@38
  int v55; // esi@40
  int v56; // esi@41
  int v57; // edi@41
  int v58; // ebx@47
  int v59; // edx@47
  signed int v60; // eax@47
  int result; // eax@49
  int v62; // esi@49
  int v63; // edx@50
  unsigned int v64; // ecx@51
  unsigned int v65; // ebx@51
  int v66; // [sp+0h] [bp-5Ch]@6
  int v67; // [sp+0h] [bp-5Ch]@23
  int v68; // [sp+0h] [bp-5Ch]@33
  int v69; // [sp+4h] [bp-58h]@17
  int v70; // [sp+4h] [bp-58h]@20
  int v71; // [sp+8h] [bp-54h]@1
  int v72; // [sp+8h] [bp-54h]@33
  int v73; // [sp+Ch] [bp-50h]@23
  int v74; // [sp+Ch] [bp-50h]@33
  int v75; // [sp+10h] [bp-4Ch]@23
  int v76; // [sp+14h] [bp-48h]@20
  int v77; // [sp+18h] [bp-44h]@23
  int v78; // [sp+1Ch] [bp-40h]@20
  int v79; // [sp+20h] [bp-3Ch]@20
  int v80; // [sp+24h] [bp-38h]@1
  int v81; // [sp+28h] [bp-34h]@13
  __int16 v82[24]; // [sp+2Ch] [bp-30h]@48

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)a2;
  v71 = a2;
  v5 = *(_DWORD *)(v3 + 12);
  v6 = *(_DWORD *)v3;
  v80 = *(_DWORD *)a2;
  *(_DWORD *)(v2 + 5200) = 0;
  *(_DWORD *)(v2 + 5204) = 573;
  if ( v5 <= 0 )
  {
    v66 = v5;
    v12 = 0;
    v11 = -1;
    v13 = v80;
  }
  else
  {
    v7 = v4;
    v8 = 0;
    v9 = -1;
    do
    {
      while ( *(_WORD *)v7 )
      {
        v10 = *(_DWORD *)(v2 + 5200);
        v7 += 4;
        *(_DWORD *)(v2 + 5200) = v10 + 1;
        *(_DWORD *)(v2 + 4 * v10 + 2912) = v8;
        v9 = v8;
        *(_BYTE *)(v2 + v8++ + 5208) = 0;
        if ( v8 == v5 )
          goto LABEL_6;
      }
      ++v8;
      *(_WORD *)(v7 + 2) = 0;
      v7 += 4;
    }
    while ( v8 != v5 );
LABEL_6:
    v11 = v9;
    v12 = *(_DWORD *)(v2 + 5200);
    v66 = v5;
    v13 = v80;
  }
  while ( v12 <= 1 )
  {
    v14 = v12 + 1;
    v15 = 0;
    v16 = 0;
    *(_DWORD *)(v2 + 5200) = v14;
    if ( v11 <= 1 )
    {
      v15 = 4 * ++v11;
      v16 = v11;
    }
    *(_DWORD *)(v2 + 4 * v14 + 2908) = v16;
    *(_WORD *)(v13 + v15) = 1;
    *(_BYTE *)(v2 + v16 + 5208) = 0;
    --*(_DWORD *)(v2 + 5800);
    if ( v6 )
      *(_DWORD *)(v2 + 5804) -= *(_WORD *)(v6 + v15 + 2);
    v12 = *(_DWORD *)(v2 + 5200);
  }
  v17 = v66;
  v81 = v11;
  *(_DWORD *)(v71 + 4) = v11;
  v18 = v12 >> 1;
  do
    sub_6F890EF0(v2, v80, v18--);
  while ( v18 );
  v19 = *(_DWORD *)(v2 + 5200);
  while ( 1 )
  {
    v20 = v19 - 1;
    v21 = *(_DWORD *)(v2 + 4 * v19 + 2908);
    v22 = *(_DWORD *)(v2 + 2912);
    *(_DWORD *)(v2 + 5200) = v20;
    *(_DWORD *)(v2 + 2912) = v21;
    sub_6F890EF0(v2, v80, 1);
    v23 = *(_DWORD *)(v2 + 5204);
    v24 = *(_DWORD *)(v2 + 2912);
    *(_DWORD *)(v2 + 4 * v23 + 2904) = v22;
    *(_DWORD *)(v2 + 5204) = v23 - 2;
    *(_DWORD *)(v2 + 4 * v23 + 2900) = v24;
    v25 = v80 + 4 * v22;
    v69 = v80 + 4 * v24;
    *(_WORD *)(v80 + 4 * v17) = *(_WORD *)v25 + *(_WORD *)v69;
    v26 = *(_BYTE *)(v2 + v22 + 5208);
    v27 = *(_BYTE *)(v2 + v24 + 5208);
    v28 = v26 + 1;
    if ( v26 < v27 )
      v28 = v27 + 1;
    *(_BYTE *)(v2 + v17 + 5208) = v28;
    *(_WORD *)(v69 + 2) = v17;
    *(_WORD *)(v25 + 2) = v17;
    *(_DWORD *)(v2 + 2912) = v17;
    sub_6F890EF0(v2, v80, 1);
    v19 = *(_DWORD *)(v2 + 5200);
    if ( v19 <= 1 )
      break;
    ++v17;
  }
  v29 = *(_DWORD *)(v2 + 5204);
  v30 = *(_DWORD *)(v2 + 2912);
  *(_DWORD *)(v2 + 5204) = v29 - 1;
  v31 = 0;
  *(_DWORD *)(v2 + 4 * v29 + 2904) = v30;
  v32 = *(_DWORD *)(v71 + 4);
  v33 = *(_DWORD *)(v71 + 8);
  v70 = *(_DWORD *)v71;
  v78 = *(_DWORD *)v33;
  v79 = *(_DWORD *)(v33 + 4);
  v34 = *(_DWORD *)(v33 + 8);
  v35 = *(_DWORD *)(v33 + 16);
  v76 = v34;
  do
    *(_WORD *)(v2 + 2 * v31++ + 2876) = 0;
  while ( v31 != 16 );
  *(_WORD *)(v70 + 4 * v30 + 2) = 0;
  v36 = *(_DWORD *)(v2 + 5204);
  if ( v36 + 1 <= 572 )
  {
    v37 = (int *)(v2 + 4 * v36 + 2912);
    v73 = v2 + 5200;
    v77 = 0;
    v67 = v35;
    v75 = v2;
    do
    {
      v38 = *v37;
      v39 = 4 * *v37;
      v40 = v70 + v39;
      v41 = *(_WORD *)(v70 + 4 * *(_WORD *)(v70 + v39 + 2) + 2) + 1;
      if ( v67 < v41 )
      {
        ++v77;
        v41 = v67;
      }
      *(_WORD *)(v40 + 2) = v41;
      if ( v32 >= v38 )
      {
        ++*(_WORD *)(v75 + 2 * v41 + 2876);
        v42 = 0;
        if ( v76 <= v38 )
          v42 = *(_DWORD *)(v79 + 4 * (v38 - v76));
        v43 = *(_WORD *)v40;
        *(_DWORD *)(v75 + 5800) += v43 * (v42 + v41);
        if ( v78 )
          *(_DWORD *)(v75 + 5804) += v43 * (v42 + *(_WORD *)(v78 + v39 + 2));
      }
      ++v37;
    }
    while ( v37 != (int *)v73 );
    v44 = v67;
    v2 = v75;
    if ( v77 )
    {
      v45 = v67 - 1;
      v46 = v67 + 1431;
      v47 = v75 + 2 * v67;
      v68 = v32;
      v48 = v77;
      v74 = v44;
      v49 = v45;
      v72 = v45;
      do
      {
        v50 = *(_WORD *)(v75 + 2 * v46 + 12);
        for ( i = v49; !v50; v50 = *(_WORD *)(v75 + 2 * i + 2876) )
          --i;
        v48 -= 2;
        *(_WORD *)(v75 + 2 * i + 2878) += 2;
        *(_WORD *)(v75 + 2 * i + 2876) = v50 - 1;
        LOWORD(v52) = *(_WORD *)(v47 + 2876) - 1;
        *(_WORD *)(v47 + 2876) = v52;
      }
      while ( v48 > 0 );
      v53 = v74;
      if ( v74 )
      {
        v54 = 573;
        while ( 1 )
        {
          v52 = (unsigned __int16)v52;
          if ( (_WORD)v52 )
          {
            do
            {
              v55 = *(_DWORD *)(v75 + 4 * --v54 + 2908);
              if ( v68 >= v55 )
              {
                v56 = v70 + 4 * v55;
                v57 = *(_WORD *)(v56 + 2);
                if ( v57 != v53 )
                {
                  *(_DWORD *)(v75 + 5800) += *(_WORD *)v56 * (v53 - v57);
                  *(_WORD *)(v56 + 2) = v53;
                }
                --v52;
              }
            }
            while ( v52 );
          }
          v53 = v72;
          if ( !v72 )
            break;
          LOWORD(v52) = *(_WORD *)(v75 + 2 * v72-- + 2876);
        }
      }
    }
  }
  v58 = v2 + 2876;
  v59 = 0;
  v60 = 1;
  do
  {
    LOWORD(v59) = *(_WORD *)(v58 + 2 * v60 - 2) + v59;
    v59 *= 2;
    v82[v60++] = v59;
  }
  while ( v60 != 16 );
  result = v81;
  v62 = v80;
  if ( v81 != -1 )
  {
    do
    {
      v63 = *(_WORD *)(v62 + 2);
      if ( *(_WORD *)(v62 + 2) )
      {
        v64 = (unsigned __int16)v82[v63];
        v65 = 0;
        v82[v63] = v64 + 1;
        do
        {
          result = v65 | v64 & 1;
          v64 >>= 1;
          --v63;
          v65 = 2 * result;
        }
        while ( v63 );
        *(_WORD *)v62 = v65 >> 1;
      }
      v62 += 4;
    }
    while ( v62 != v80 + 4 * v81 + 4 );
  }
  return result;
}
