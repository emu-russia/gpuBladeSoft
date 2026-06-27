int __usercall sub_6F8289C0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  int v5; // esi@1
  int v6; // edi@1
  int v7; // ecx@2
  int v8; // edx@2
  int v9; // edx@3
  int v10; // edx@4
  int v11; // eax@5
  signed int v12; // ebp@5
  int v13; // ecx@8
  int v14; // edx@8
  int v15; // edx@8
  int v16; // edx@8
  int v17; // edx@8
  int v18; // edx@8
  int v19; // ST04_4@8
  int v20; // ST24_4@8
  int v21; // ST28_4@8
  int v22; // ST2C_4@8
  int v23; // ebx@8
  int v24; // ebx@8
  int v25; // eax@8
  int v26; // ebp@8
  int v27; // edx@8
  int v28; // ST04_4@8
  int v29; // eax@8
  _DWORD *v30; // ebx@8
  int v31; // edx@9
  int v32; // eax@9
  int v33; // ST04_4@9
  int v34; // ecx@9
  int v35; // eax@9
  int v36; // ecx@9
  int v37; // edx@9
  int v38; // edx@9
  int v39; // eax@9
  int v40; // ebp@9
  int v41; // ecx@9
  int v42; // eax@9
  int v43; // ecx@9
  int v44; // edx@9
  int v45; // ebx@10
  unsigned int v46; // edx@10
  int v47; // esi@10
  int v48; // eax@10
  int v49; // ebp@14
  signed int v50; // esi@15
  signed int v51; // ecx@15
  signed int v52; // ebp@16
  signed int v53; // edi@16
  signed int v54; // esi@17
  signed int v55; // ebp@17
  int v56; // ecx@17
  signed int v57; // kr00_4@17
  int v58; // edi@17
  int v59; // ebp@17
  signed int v60; // esi@17
  signed int v61; // edi@17
  signed int v62; // ebp@17
  signed int v63; // kr04_4@17
  signed int v64; // edi@17
  signed int v65; // ecx@17
  int result; // eax@18
  int v67; // [sp+0h] [bp-4Ch]@6
  int v68; // [sp+4h] [bp-48h]@6
  int v69; // [sp+8h] [bp-44h]@8
  int v70; // [sp+Ch] [bp-40h]@6
  int v71; // [sp+Ch] [bp-40h]@8
  int v72; // [sp+10h] [bp-3Ch]@1

  v5 = a3;
  v72 = a2;
  v6 = a1 + 96 * a4;
  if ( *(_BYTE *)(v6 + 32) )
  {
    v7 = a5 + 16;
    v8 = a1 + 96 * *(_DWORD *)v6;
    *(_DWORD *)(v72 + 8) = *(_BYTE *)(v8 + 2 * (a5 + 16) + 3);
    *(_DWORD *)(v72 + 12) = *(_BYTE *)(v8 + 2 * a5 + 36);
    if ( (signed int)*(_BYTE *)(v6 + 32) <= 1 )
    {
      v12 = 2;
    }
    else
    {
      v9 = a1 + 96 * *(_DWORD *)(v6 + 4);
      *(_DWORD *)(v72 + 16) = *(_BYTE *)(v9 + 2 * v7 + 3);
      *(_DWORD *)(v72 + 20) = *(_BYTE *)(v9 + 2 * a5 + 36);
      if ( (signed int)*(_BYTE *)(v6 + 32) <= 2 )
      {
        v12 = 3;
      }
      else
      {
        v10 = a1 + 96 * *(_DWORD *)(v6 + 8);
        *(_DWORD *)(v72 + 24) = *(_BYTE *)(v10 + 2 * v7 + 3);
        *(_DWORD *)(v72 + 28) = *(_BYTE *)(v10 + 2 * a5 + 36);
        if ( (signed int)*(_BYTE *)(v6 + 32) <= 3 )
        {
          v12 = 4;
        }
        else
        {
          v11 = 96 * *(_DWORD *)(v6 + 12) + a1;
          *(_DWORD *)(v72 + 32) = *(_BYTE *)(v11 + 2 * v7 + 3);
          *(_DWORD *)(v72 + 36) = *(_BYTE *)(v11 + 2 * a5 + 36);
          v12 = 5;
        }
      }
    }
    v68 = v12 + 1;
    v70 = v12 + 2;
    v67 = v12 + 3;
  }
  else
  {
    v67 = 4;
    v70 = 3;
    v12 = 1;
    v68 = 2;
  }
  v13 = (*(_DWORD *)v5 > 31 ? 31 - *(_DWORD *)v5 : 0) + *(_DWORD *)v5;
  *(_DWORD *)(v72 + 8 * v12) = v13 >= -30 ? -31 - v13 + -31 : 31;
  v14 = (*(_DWORD *)(v5 + 4) > 31 ? 31 - *(_DWORD *)(v5 + 4) : 0) + *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v72 + 8 * v12 + 4) = v14 >= -30 ? -31 - v14 + -31 : 31;
  v15 = *(_BYTE *)(v6 + 2 * a5 + 39);
  v69 = v6 + 2 * a5;
  v16 = (*(_DWORD *)v5 + v15 > 31 ? 31 - (*(_DWORD *)v5 + v15) : 0) + *(_DWORD *)v5 + v15;
  *(_DWORD *)(v72 + 8 * v68) = v16 >= -30 ? -31 - v16 + -31 : 31;
  v17 = *(_DWORD *)(v5 + 4) + *(_BYTE *)(v6 + 2 * a5 + 40);
  v18 = (v17 > 31 ? 31 - v17 : 0) + v17;
  *(_DWORD *)(v72 + 8 * v68 + 4) = v18 >= -30 ? -31 - v18 + -31 : 31;
  *(_DWORD *)(v72 + 8 * v70) = 0;
  *(_DWORD *)(v72 + 8 * v70 + 4) = 0;
  v19 = *(_DWORD *)(v72 + 20);
  v20 = *(_DWORD *)(v72 + 8);
  v21 = *(_DWORD *)(v72 + 12);
  v22 = *(_DWORD *)(v72 + 16);
  v23 = v20 < v22;
  LOBYTE(v23) = v20 > v22;
  v24 = (v20 ^ v22) & -v23;
  v25 = v21 > v19 ? v21 ^ v19 : 0;
  v26 = v25 ^ v21;
  v27 = v25 ^ v19;
  v28 = v22 ^ v24 ^ ((v22 ^ v24) > *(_DWORD *)(v72 + 24) ? v22 ^ v24 ^ *(_DWORD *)(v72 + 24) : 0);
  v29 = v27 ^ (v27 > *(_DWORD *)(v72 + 28) ? v27 ^ *(_DWORD *)(v72 + 28) : 0);
  *(_DWORD *)v72 = v28 ^ ((v24 ^ v20) > v28 ? v28 ^ v24 ^ v20 : 0);
  *(_DWORD *)(v72 + 4) = v29 ^ (v26 > v29 ? v29 ^ v26 : 0);
  v30 = (_DWORD *)(v72 + 8 * v67);
  *(_DWORD *)(v72 + 104) = v67;
  v71 = v67;
  do
  {
    v31 = *(_BYTE *)(v69 + 39);
    v32 = *(_BYTE *)(v69 + 43);
    v33 = v67 - v71;
    v34 = v32 + -2 * v31;
    v35 = *(_DWORD *)v5 + 2 * v31 - v32;
    v36 = v34 - *(_DWORD *)v5;
    v37 = v35 > 31 ? v36 + 31 : 0;
    *v30 = v37 + v35 >= -30 ? v36 - v37 - 31 + -31 : 31;
    v38 = *(_BYTE *)(v6 + 2 * a5 + 40);
    v39 = *(_BYTE *)(v6 + 2 * a5 + 44);
    v40 = *(_DWORD *)(v5 + 4);
    v41 = v39 + -2 * v38;
    v42 = v40 + 2 * v38 - v39;
    v43 = v41 - v40;
    v44 = v42 > 31 ? v43 + 31 : 0;
    ++v67;
    v30 += 2;
    *(v30 - 1) = v44 + v42 >= -30 ? v43 - v44 - 31 + -31 : 31;
  }
  while ( *(_BYTE *)(v6 + 33) > v33 );
  v45 = v72 + 8 * v67;
  v46 = ((unsigned int)(8 * v67 - 8) >> 3) & 3;
  v47 = *(_DWORD *)(v72 + 4) / 2;
  *(_DWORD *)v72 /= 2;
  v48 = v72 + 8;
  *(_DWORD *)(v72 + 4) = v47;
  if ( v72 + 8 != v45 )
  {
    if ( !v46 )
      goto LABEL_24;
    if ( v46 != 1 )
    {
      if ( v46 != 2 )
      {
        v49 = *(_DWORD *)(v72 + 12) / 2;
        *(_DWORD *)v48 /= 2;
        *(_DWORD *)(v72 + 12) = v49;
        v48 = v72 + 16;
      }
      v50 = *(_DWORD *)v48;
      v51 = *(_DWORD *)(v48 + 4);
      v48 += 8;
      *(_DWORD *)(v48 - 8) = v50 / 2;
      *(_DWORD *)(v48 - 4) = v51 / 2;
    }
    v52 = *(_DWORD *)v48;
    v53 = *(_DWORD *)(v48 + 4);
    v48 += 8;
    *(_DWORD *)(v48 - 8) = v52 / 2;
    *(_DWORD *)(v48 - 4) = v53 / 2;
    if ( v48 != v45 )
    {
LABEL_24:
      do
      {
        v54 = *(_DWORD *)(v48 + 4);
        v55 = *(_DWORD *)v48;
        v48 += 32;
        v56 = *(_DWORD *)(v48 - 24);
        v57 = v55;
        v58 = v54 / 2;
        v59 = *(_DWORD *)(v48 - 24) >> 31;
        v60 = *(_DWORD *)(v48 - 20);
        *(_DWORD *)(v48 - 28) = v58;
        v61 = *(_DWORD *)(v48 - 16);
        *(_DWORD *)(v48 - 24) = (v56 + v59) >> 1;
        v62 = *(_DWORD *)(v48 - 12);
        *(_DWORD *)(v48 - 32) = v57 / 2;
        v63 = v61;
        v64 = *(_DWORD *)(v48 - 8);
        *(_DWORD *)(v48 - 16) = v63 / 2;
        v65 = *(_DWORD *)(v48 - 4);
        *(_DWORD *)(v48 - 20) = v60 / 2;
        *(_DWORD *)(v48 - 12) = v62 / 2;
        *(_DWORD *)(v48 - 8) = v64 / 2;
        *(_DWORD *)(v48 - 4) = v65 / 2;
      }
      while ( v48 != v45 );
    }
  }
  result = v67;
  *(_DWORD *)(v72 + 108) = v67;
  return result;
}
