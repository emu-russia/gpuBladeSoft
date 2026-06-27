char *__cdecl sub_6F87E92C(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // ecx@1
  char *v6; // edx@1
  int v7; // eax@1
  int v8; // ST2C_4@6
  int v9; // ST0C_4@6
  int v10; // ST20_4@6
  int v11; // ST28_4@6
  int v12; // ST1C_4@6
  int v13; // ST2C_4@6
  int v14; // ST20_4@6
  int v15; // ebx@6
  int v16; // ST0C_4@6
  int v17; // ST1C_4@6
  int v18; // ST08_4@6
  int v19; // ST2C_4@6
  int v20; // ST20_4@6
  int v21; // ST18_4@6
  int v22; // esi@6
  int v23; // edi@6
  int v24; // ST14_4@6
  int v25; // esi@6
  int v26; // ST10_4@6
  int v27; // ST28_4@6
  int v28; // ST20_4@6
  int v29; // ST00_4@6
  int v30; // ST18_4@6
  int v31; // ebx@6
  int v32; // esi@6
  __int16 v33; // di@8
  int v34; // ebx@12
  char *result; // eax@12
  int v36; // ecx@13
  int v37; // esi@14
  int v38; // ST1C_4@17
  int v39; // ST24_4@17
  int v40; // esi@17
  int v41; // ecx@17
  int v42; // ST08_4@17
  int v43; // ST1C_4@17
  int v44; // ST14_4@17
  int v45; // ST24_4@17
  int v46; // ST10_4@17
  int v47; // ecx@17
  int v48; // ST04_4@17
  int v49; // edi@17
  int v50; // ST28_4@17
  int v51; // ST0C_4@17
  int v52; // ST20_4@17
  int v53; // ST10_4@17
  int v54; // edi@17
  int v55; // edx@19
  int v56; // ebx@28
  char v57; // cl@34
  int v58; // [sp+4h] [bp-138h]@1
  int v59; // [sp+Ch] [bp-130h]@16
  __int16 v60; // [sp+10h] [bp-12Ch]@5
  __int16 v61; // [sp+14h] [bp-128h]@5
  int v62; // [sp+14h] [bp-128h]@15
  __int16 v63; // [sp+18h] [bp-124h]@3
  _DWORD *v64; // [sp+18h] [bp-124h]@12
  __int16 v65; // [sp+1Ch] [bp-120h]@5
  __int16 v66; // [sp+20h] [bp-11Ch]@4
  int v67; // [sp+20h] [bp-11Ch]@15
  int v68; // [sp+24h] [bp-118h]@1
  __int16 v69; // [sp+28h] [bp-114h]@2
  int v70; // [sp+28h] [bp-114h]@15
  int v71; // [sp+2Ch] [bp-110h]@19
  char v72; // [sp+30h] [bp-10Ch]@1
  char v73; // [sp+50h] [bp-ECh]@12

  v68 = *(_DWORD *)(a2 + 84);
  v5 = a3;
  v6 = &v72;
  v7 = 0;
  v58 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v33 = *(_WORD *)(v5 + 16);
    if ( v33 )
    {
      v69 = *(_WORD *)(v5 + 32);
LABEL_10:
      v66 = *(_WORD *)(v5 + 64);
      v65 = *(_WORD *)(v5 + 96);
      v63 = *(_WORD *)(v5 + 48);
      v61 = *(_WORD *)(v5 + 80);
LABEL_11:
      v60 = *(_WORD *)(v5 + 112);
LABEL_6:
      v8 = *(_DWORD *)(v68 + v7) * *(_WORD *)v5;
      v9 = *(_DWORD *)(v68 + v7 + 64) * v69;
      v10 = *(_DWORD *)(v68 + v7 + 128) * v66;
      v11 = *(_DWORD *)(v68 + v7 + 192) * v65;
      v12 = v10 + v8;
      v13 = v8 - v10;
      v14 = v9 + v11;
      v15 = (362 * (v9 - v11) >> 8) - (v9 + v11);
      v16 = v12 + v9 + v11;
      v17 = v12 - v14;
      v18 = v15 + v13;
      v19 = v13 - v15;
      v20 = *(_DWORD *)(v68 + v7 + 32) * v33;
      v21 = *(_DWORD *)(v68 + v7 + 96) * v63;
      v22 = *(_DWORD *)(v68 + v7 + 160) * v61;
      v23 = *(_DWORD *)(v68 + v7 + 224) * v60;
      v24 = v22 + v21;
      v25 = v22 - v21;
      v26 = v20 + v23;
      v27 = v20 - v23;
      v28 = v24 + v20 + v23;
      v29 = 473 * (v25 + v27) >> 8;
      v30 = v29 + (-669 * v25 >> 8) - v28;
      v31 = (362 * (v26 - v24) >> 8) - v30;
      v32 = v31 + (277 * v27 >> 8) - v29;
      *(_DWORD *)v6 = v16 + v28;
      *((_DWORD *)v6 + 56) = v16 - v28;
      *((_DWORD *)v6 + 8) = v30 + v18;
      *((_DWORD *)v6 + 48) = v18 - v30;
      *((_DWORD *)v6 + 16) = v31 + v19;
      *((_DWORD *)v6 + 40) = v19 - v31;
      *((_DWORD *)v6 + 32) = v32 + v17;
      *((_DWORD *)v6 + 24) = v17 - v32;
      goto LABEL_7;
    }
    v69 = *(_WORD *)(v5 + 32);
    if ( v69 )
      goto LABEL_10;
    v63 = *(_WORD *)(v5 + 48);
    if ( v63 )
    {
      v66 = *(_WORD *)(v5 + 64);
LABEL_5:
      v65 = *(_WORD *)(v5 + 96);
      v61 = *(_WORD *)(v5 + 80);
      v60 = *(_WORD *)(v5 + 112);
      goto LABEL_6;
    }
    v66 = *(_WORD *)(v5 + 64);
    if ( v66 )
      goto LABEL_5;
    v61 = *(_WORD *)(v5 + 80);
    if ( v61 )
    {
      v65 = *(_WORD *)(v5 + 96);
      v60 = *(_WORD *)(v5 + 112);
      goto LABEL_6;
    }
    v65 = *(_WORD *)(v5 + 96);
    if ( v65 )
      goto LABEL_11;
    v60 = *(_WORD *)(v5 + 112);
    if ( v60 )
      goto LABEL_6;
    v56 = *(_DWORD *)(v68 + v7) * *(_WORD *)v5;
    *(_DWORD *)v6 = v56;
    *((_DWORD *)v6 + 8) = v56;
    *((_DWORD *)v6 + 16) = v56;
    *((_DWORD *)v6 + 24) = v56;
    *((_DWORD *)v6 + 32) = v56;
    *((_DWORD *)v6 + 40) = v56;
    *((_DWORD *)v6 + 48) = v56;
    *((_DWORD *)v6 + 56) = v56;
LABEL_7:
    v5 += 2;
    v7 += 4;
    v6 += 4;
  }
  while ( v7 != 32 );
  v34 = v58;
  v64 = a4;
  result = &v73;
  do
  {
    v55 = *v64 + a5;
    v71 = *((_DWORD *)result - 7);
    if ( v71 )
    {
      v37 = *((_DWORD *)result - 4);
      v36 = *((_DWORD *)result - 6);
LABEL_15:
      v62 = *((_DWORD *)result - 2);
      v67 = *((_DWORD *)result - 3);
      v70 = *((_DWORD *)result - 5);
LABEL_16:
      v59 = *((_DWORD *)result - 1);
LABEL_17:
      v38 = v37 + *((_DWORD *)result - 8);
      v39 = *((_DWORD *)result - 8) - v37;
      v40 = v36 + v62;
      v41 = (362 * (v36 - v62) >> 8) - (v36 + v62);
      v42 = v40 + v38;
      v43 = v38 - v40;
      v44 = v41 + v39;
      v45 = v39 - v41;
      v46 = v67 + v70;
      v47 = v67 - v70;
      v48 = v71 + v59;
      v49 = v71 - v59;
      v50 = v67 + v70 + v71 + v59;
      v51 = 473 * (v47 + v71 - v59) >> 8;
      v52 = v51 + (-669 * v47 >> 8) - v50;
      v53 = (362 * (v48 - v46) >> 8) - v52;
      v54 = (277 * v49 >> 8) - v51 + v53;
      *(_BYTE *)v55 = *(_BYTE *)(v34 + (((v42 + v50) >> 5) & 0x3FF));
      *(_BYTE *)(v55 + 7) = *(_BYTE *)(v34 + (((v42 - v50) >> 5) & 0x3FF));
      *(_BYTE *)(v55 + 1) = *(_BYTE *)(v34 + (((v44 + v52) >> 5) & 0x3FF));
      *(_BYTE *)(v55 + 6) = *(_BYTE *)(v34 + (((v44 - v52) >> 5) & 0x3FF));
      *(_BYTE *)(v55 + 2) = *(_BYTE *)(v34 + (((v45 + v53) >> 5) & 0x3FF));
      *(_BYTE *)(v55 + 5) = *(_BYTE *)(v34 + (((v45 - v53) >> 5) & 0x3FF));
      *(_BYTE *)(v55 + 4) = *(_BYTE *)(v34 + (((v54 + v43) >> 5) & 0x3FF));
      *(_BYTE *)(v55 + 3) = *(_BYTE *)(v34 + (((v43 - v54) >> 5) & 0x3FF));
      goto LABEL_18;
    }
    v36 = *((_DWORD *)result - 6);
    if ( v36 )
    {
      v37 = *((_DWORD *)result - 4);
      goto LABEL_15;
    }
    v70 = *((_DWORD *)result - 5);
    if ( v70 )
    {
      v37 = *((_DWORD *)result - 4);
LABEL_23:
      v62 = *((_DWORD *)result - 2);
      v67 = *((_DWORD *)result - 3);
      v59 = *((_DWORD *)result - 1);
      goto LABEL_17;
    }
    v37 = *((_DWORD *)result - 4);
    if ( v37 )
      goto LABEL_23;
    v67 = *((_DWORD *)result - 3);
    if ( v67 )
    {
      v62 = *((_DWORD *)result - 2);
      v59 = *((_DWORD *)result - 1);
      goto LABEL_17;
    }
    v62 = *((_DWORD *)result - 2);
    if ( v62 )
      goto LABEL_16;
    v59 = *((_DWORD *)result - 1);
    if ( v59 )
      goto LABEL_17;
    v57 = *(_BYTE *)(v34 + ((*((_DWORD *)result - 8) >> 5) & 0x3FF));
    *(_BYTE *)v55 = v57;
    *(_BYTE *)(v55 + 1) = v57;
    *(_BYTE *)(v55 + 2) = v57;
    *(_BYTE *)(v55 + 3) = v57;
    *(_BYTE *)(v55 + 4) = v57;
    *(_BYTE *)(v55 + 5) = v57;
    *(_BYTE *)(v55 + 6) = v57;
    *(_BYTE *)(v55 + 7) = v57;
LABEL_18:
    ++v64;
    result += 32;
  }
  while ( (_DWORD **)result != &a4 );
  return result;
}
