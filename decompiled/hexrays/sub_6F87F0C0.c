char *__cdecl sub_6F87F0C0(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // eax@1
  int v6; // ebx@2
  __int16 v7; // cx@2
  __int16 v8; // dx@4
  int v9; // ecx@5
  int v10; // edx@5
  int v11; // edi@5
  int v12; // ST34_4@5
  int v13; // ecx@5
  int v14; // edi@5
  int v15; // edx@5
  int v16; // ebx@5
  int v17; // edx@5
  int v18; // ST18_4@5
  int v19; // ST14_4@5
  int v20; // ST10_4@5
  int v21; // ST0C_4@5
  int v22; // ecx@5
  int v23; // edx@5
  int v24; // ebx@5
  int v25; // ST2C_4@5
  int v26; // ST34_4@5
  int v27; // ST1C_4@5
  int v28; // esi@5
  int v29; // ST20_4@5
  int v30; // edi@5
  int v31; // ecx@5
  int v32; // esi@5
  int v33; // ecx@5
  __int16 v34; // si@7
  char *result; // eax@10
  int v36; // edx@12
  int v37; // ST30_4@13
  int v38; // ST34_4@13
  int v39; // ST30_4@13
  int v40; // esi@13
  int v41; // edi@13
  int v42; // ST20_4@13
  int v43; // ST18_4@13
  int v44; // ST14_4@13
  int v45; // ST10_4@13
  int v46; // ST0C_4@13
  int v47; // ST30_4@13
  int v48; // ST34_4@13
  int v49; // ST00_4@13
  int v50; // ST28_4@13
  int v51; // ST2C_4@13
  int v52; // esi@13
  int v53; // ST34_4@13
  int v54; // esi@13
  int v55; // ecx@15
  int v56; // edx@27
  char v57; // dl@31
  int v58; // [sp+4h] [bp-140h]@1
  __int16 v59; // [sp+8h] [bp-13Ch]@4
  int v60; // [sp+14h] [bp-130h]@12
  __int16 v61; // [sp+18h] [bp-12Ch]@4
  int v62; // [sp+18h] [bp-12Ch]@12
  __int16 v63; // [sp+1Ch] [bp-128h]@3
  _DWORD *v64; // [sp+1Ch] [bp-128h]@10
  __int16 v65; // [sp+20h] [bp-124h]@4
  int v66; // [sp+24h] [bp-120h]@1
  int v67; // [sp+24h] [bp-120h]@12
  char *v68; // [sp+28h] [bp-11Ch]@1
  int v69; // [sp+28h] [bp-11Ch]@12
  int v70; // [sp+2Ch] [bp-118h]@15
  int v71; // [sp+30h] [bp-114h]@1
  int v72; // [sp+34h] [bp-110h]@11
  char v73; // [sp+38h] [bp-10Ch]@1
  char v74; // [sp+58h] [bp-ECh]@10

  v58 = *(_DWORD *)(a1 + 292) + 128;
  v66 = *(_DWORD *)(a2 + 84);
  v71 = a3;
  v68 = &v73;
  v5 = 0;
  do
  {
    v34 = *(_WORD *)(v71 + 16);
    if ( v34 )
    {
      v6 = v71;
      v7 = *(_WORD *)(v71 + 32);
LABEL_9:
      v8 = *(_WORD *)(v6 + 96);
      v61 = *(_WORD *)(v6 + 64);
      v59 = *(_WORD *)(v6 + 112);
      v65 = *(_WORD *)(v71 + 80);
      v63 = *(_WORD *)(v71 + 48);
LABEL_5:
      v9 = *(_DWORD *)(v66 + v5 + 64) * v7;
      v10 = *(_DWORD *)(v66 + v5 + 192) * v8;
      v11 = 4433 * (v10 + v9);
      v12 = v11 + 6270 * v9;
      v13 = v11 - 15137 * v10;
      v14 = *(_DWORD *)(v66 + v5 + 128) * v61 << 13;
      v15 = (*(_DWORD *)(v66 + v5) * *(_WORD *)v71 << 13) + 1024;
      v16 = v14 + v15;
      v17 = v15 - v14;
      v18 = v16 + v12;
      v19 = v16 - v12;
      v20 = v13 + v17;
      v21 = v17 - v13;
      v22 = *(_DWORD *)(v66 + v5 + 224) * v59;
      v23 = *(_DWORD *)(v66 + v5 + 160) * v65;
      v24 = *(_DWORD *)(v66 + v5 + 96) * v63;
      v25 = *(_DWORD *)(v66 + v5 + 32) * v34;
      v26 = 9633 * (v23 + v25 + v24 + v22) - 16069 * (v24 + v22);
      v27 = 9633 * (v23 + v25 + v24 + v22) + -3196 * (v23 + v25);
      v28 = -7373 * (v22 + v25);
      v29 = v26 + v28 + 2446 * v22;
      v30 = 12299 * v25 + v28 + v27;
      v31 = -20995 * (v24 + v23);
      v32 = v27 + v31 + 16819 * v23;
      v33 = v26 + v31 + 25172 * v24;
      *(_DWORD *)v68 = (v30 + v18) >> 11;
      *((_DWORD *)v68 + 56) = (v18 - v30) >> 11;
      *((_DWORD *)v68 + 8) = (v33 + v20) >> 11;
      *((_DWORD *)v68 + 48) = (v20 - v33) >> 11;
      *((_DWORD *)v68 + 16) = (v32 + v21) >> 11;
      *((_DWORD *)v68 + 40) = (v21 - v32) >> 11;
      *((_DWORD *)v68 + 24) = (v19 + v29) >> 11;
      *((_DWORD *)v68 + 32) = (v19 - v29) >> 11;
      goto LABEL_6;
    }
    v6 = v71;
    v7 = *(_WORD *)(v71 + 32);
    if ( v7 )
      goto LABEL_9;
    v63 = *(_WORD *)(v71 + 48);
    if ( v63 )
    {
      v8 = *(_WORD *)(v71 + 96);
      v61 = *(_WORD *)(v71 + 64);
      v59 = *(_WORD *)(v71 + 112);
      v65 = *(_WORD *)(v71 + 80);
      goto LABEL_5;
    }
    v61 = *(_WORD *)(v71 + 64);
    if ( v61 )
    {
      v8 = *(_WORD *)(v71 + 96);
      v59 = *(_WORD *)(v71 + 112);
      v65 = *(_WORD *)(v71 + 80);
      goto LABEL_5;
    }
    v65 = *(_WORD *)(v71 + 80);
    if ( v65 )
    {
      v8 = *(_WORD *)(v71 + 96);
      v59 = *(_WORD *)(v71 + 112);
      goto LABEL_5;
    }
    v8 = *(_WORD *)(v71 + 96);
    if ( v8 )
    {
      v59 = *(_WORD *)(v71 + 112);
      goto LABEL_5;
    }
    v59 = *(_WORD *)(v71 + 112);
    if ( v59 )
      goto LABEL_5;
    v56 = 4 * *(_DWORD *)(v66 + v5) * *(_WORD *)v71;
    *(_DWORD *)v68 = v56;
    *((_DWORD *)v68 + 8) = v56;
    *((_DWORD *)v68 + 16) = v56;
    *((_DWORD *)v68 + 24) = v56;
    *((_DWORD *)v68 + 32) = v56;
    *((_DWORD *)v68 + 40) = v56;
    *((_DWORD *)v68 + 48) = v56;
    *((_DWORD *)v68 + 56) = v56;
LABEL_6:
    v71 += 2;
    v5 += 4;
    v68 += 4;
  }
  while ( v5 != 32 );
  v64 = a4;
  result = &v74;
  do
  {
    v55 = *v64 + a5;
    v70 = *((_DWORD *)result - 7);
    if ( v70 )
    {
      v72 = *((_DWORD *)result - 6);
      v60 = *((_DWORD *)result - 2);
      v62 = *((_DWORD *)result - 4);
      v69 = *((_DWORD *)result - 1);
      v36 = *((_DWORD *)result - 3);
      v67 = *((_DWORD *)result - 5);
      goto LABEL_13;
    }
    v72 = *((_DWORD *)result - 6);
    if ( v72 )
    {
      v60 = *((_DWORD *)result - 2);
      v62 = *((_DWORD *)result - 4);
      v69 = *((_DWORD *)result - 1);
      v36 = *((_DWORD *)result - 3);
      v67 = *((_DWORD *)result - 5);
LABEL_13:
      v37 = 4433 * (v60 + v72);
      v38 = 4433 * (v60 + v72) + 6270 * v72;
      v39 = v37 - 15137 * v60;
      v40 = *((_DWORD *)result - 8) + 16;
      v41 = (v40 + v62) << 13;
      v42 = (v40 - v62) << 13;
      v43 = v41 + v38;
      v44 = v41 - v38;
      v45 = v42 + v39;
      v46 = v42 - v39;
      v47 = 9633 * (v69 + v67 + v36 + v70) - 16069 * (v69 + v67);
      v48 = 9633 * (v69 + v67 + v36 + v70) + -3196 * (v36 + v70);
      v49 = -7373 * (v70 + v69);
      v50 = v47 + -7373 * (v70 + v69) + 2446 * v69;
      v51 = v48 + 12299 * v70 + v49;
      v52 = -20995 * (v36 + v67);
      v53 = v48 + v52 + 16819 * v36;
      v54 = v47 + v52 + 25172 * v67;
      *(_BYTE *)v55 = *(_BYTE *)(v58 + (((v43 + v51) >> 18) & 0x3FF));
      *(_BYTE *)(v55 + 7) = *(_BYTE *)(v58 + (((v43 - v51) >> 18) & 0x3FF));
      *(_BYTE *)(v55 + 1) = *(_BYTE *)(v58 + (((v54 + v45) >> 18) & 0x3FF));
      *(_BYTE *)(v55 + 6) = *(_BYTE *)(v58 + (((v45 - v54) >> 18) & 0x3FF));
      *(_BYTE *)(v55 + 2) = *(_BYTE *)(v58 + (((v46 + v53) >> 18) & 0x3FF));
      *(_BYTE *)(v55 + 5) = *(_BYTE *)(v58 + (((v46 - v53) >> 18) & 0x3FF));
      *(_BYTE *)(v55 + 3) = *(_BYTE *)(v58 + (((v44 + v50) >> 18) & 0x3FF));
      *(_BYTE *)(v55 + 4) = *(_BYTE *)(v58 + (((v44 - v50) >> 18) & 0x3FF));
      goto LABEL_14;
    }
    v67 = *((_DWORD *)result - 5);
    if ( v67 )
    {
      v60 = *((_DWORD *)result - 2);
      v62 = *((_DWORD *)result - 4);
      v69 = *((_DWORD *)result - 1);
      v36 = *((_DWORD *)result - 3);
      goto LABEL_13;
    }
    v62 = *((_DWORD *)result - 4);
    if ( v62 )
    {
      v60 = *((_DWORD *)result - 2);
      v69 = *((_DWORD *)result - 1);
      v36 = *((_DWORD *)result - 3);
      goto LABEL_13;
    }
    v36 = *((_DWORD *)result - 3);
    if ( v36 )
    {
      v60 = *((_DWORD *)result - 2);
      v69 = *((_DWORD *)result - 1);
      goto LABEL_13;
    }
    v60 = *((_DWORD *)result - 2);
    if ( v60 )
    {
      v69 = *((_DWORD *)result - 1);
      goto LABEL_13;
    }
    v69 = *((_DWORD *)result - 1);
    if ( v69 )
      goto LABEL_13;
    v57 = *(_BYTE *)(v58 + (((*((_DWORD *)result - 8) + 16) >> 5) & 0x3FF));
    *(_BYTE *)v55 = v57;
    *(_BYTE *)(v55 + 1) = v57;
    *(_BYTE *)(v55 + 2) = v57;
    *(_BYTE *)(v55 + 3) = v57;
    *(_BYTE *)(v55 + 4) = v57;
    *(_BYTE *)(v55 + 5) = v57;
    *(_BYTE *)(v55 + 6) = v57;
    *(_BYTE *)(v55 + 7) = v57;
LABEL_14:
    ++v64;
    result += 32;
  }
  while ( (_DWORD **)result != &a4 );
  return result;
}
