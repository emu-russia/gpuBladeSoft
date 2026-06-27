int __cdecl sub_6F885D70(int a1, int a2, int a3, int a4, int a5)
{
  __int16 v5; // dx@2
  __int16 v6; // ax@4
  __int16 v7; // di@4
  int v8; // edx@5
  int v9; // eax@5
  int v10; // esi@5
  int v11; // ecx@5
  int v12; // ST40_4@5
  int v13; // edi@5
  int v14; // eax@5
  int v15; // edx@5
  int v16; // eax@5
  int v17; // ST34_4@5
  int v18; // ST58_4@5
  int v19; // ST48_4@5
  int v20; // ST40_4@5
  int v21; // edx@5
  int v22; // eax@5
  int v23; // ecx@5
  int v24; // ebx@5
  int v25; // ST4C_4@5
  int v26; // ST44_4@5
  int v27; // esi@5
  int v28; // ST38_4@5
  int v29; // esi@5
  int v30; // edx@5
  int v31; // ebx@5
  int v32; // edx@5
  int v33; // esi@7
  __int16 v34; // bx@7
  int result; // eax@10
  int v36; // ebx@10
  int v37; // ecx@11
  int v38; // edx@11
  int v39; // edi@11
  int v40; // ST3C_4@11
  int v41; // ST34_4@11
  int v42; // ST4C_4@11
  int v43; // ST44_4@11
  int v44; // edx@11
  int v45; // ecx@11
  int v46; // esi@11
  int v47; // ST58_4@11
  int v48; // ST54_4@11
  int v49; // edi@11
  int v50; // esi@11
  int v51; // edx@11
  int v52; // ST38_4@11
  int v53; // ST3C_4@11
  int v54; // ST20_4@11
  int v55; // ST4C_4@11
  int v56; // ST1C_4@11
  int v57; // ST44_4@11
  int v58; // ST18_4@11
  int v59; // ST34_4@11
  int v60; // edx@11
  int v61; // ecx@11
  int v62; // ST54_4@11
  int v63; // ST40_4@11
  int v64; // ST28_4@11
  int v65; // esi@11
  int v66; // ST48_4@11
  int v67; // ST30_4@11
  int v68; // ST14_4@11
  int v69; // edx@11
  int v70; // ST0C_4@11
  int v71; // edi@11
  int v72; // ST40_4@11
  int v73; // ST2C_4@11
  int v74; // ST08_4@11
  int v75; // edx@11
  int v76; // ST58_4@11
  int v77; // ST28_4@11
  int v78; // ST24_4@11
  int v79; // ST48_4@11
  int v80; // edx@11
  int v81; // edi@11
  int v82; // ST40_4@11
  int v83; // edx@11
  int v84; // esi@11
  int v85; // ST5C_4@11
  int v86; // edx@11
  int v87; // eax@18
  int v88; // [sp+20h] [bp-14Ch]@1
  __int16 v89; // [sp+38h] [bp-134h]@4
  int v90; // [sp+3Ch] [bp-130h]@1
  __int16 v91; // [sp+44h] [bp-128h]@4
  __int16 v92; // [sp+4Ch] [bp-120h]@3
  int v93; // [sp+50h] [bp-11Ch]@1
  int v94; // [sp+54h] [bp-118h]@1
  int *v95; // [sp+5Ch] [bp-110h]@1
  int v96; // [sp+60h] [bp-10Ch]@1
  int v97; // [sp+64h] [bp-108h]@11
  int v98; // [sp+68h] [bp-104h]@11
  int v99; // [sp+6Ch] [bp-100h]@11
  int v100; // [sp+70h] [bp-FCh]@11
  int v101; // [sp+74h] [bp-F8h]@11
  int v102; // [sp+78h] [bp-F4h]@11
  int v103[60]; // [sp+7Ch] [bp-F0h]@11

  v90 = *(_DWORD *)(a2 + 84);
  v94 = a3;
  v95 = &v96;
  v93 = 0;
  v88 = *(_DWORD *)(a1 + 292) + 128;
  do
  {
    v33 = v94;
    v34 = *(_WORD *)(v94 + 16);
    if ( v34 )
    {
      v33 = v94;
      v5 = *(_WORD *)(v94 + 32);
LABEL_9:
      v6 = *(_WORD *)(v33 + 96);
      v7 = *(_WORD *)(v33 + 64);
      v89 = *(_WORD *)(v33 + 112);
      v91 = *(_WORD *)(v33 + 80);
      v92 = *(_WORD *)(v94 + 48);
LABEL_5:
      v8 = *(_DWORD *)(v90 + v93 + 64) * v5;
      v9 = *(_DWORD *)(v90 + v93 + 192) * v6;
      v10 = 4433 * (v9 + v8);
      v11 = v10 + 6270 * v8;
      v12 = v10 - 15137 * v9;
      v13 = *(_DWORD *)(v90 + v93 + 128) * v7 << 13;
      v14 = (*(_DWORD *)(v90 + v93) * *(_WORD *)v94 << 13) + 1024;
      v15 = v13 + v14;
      v16 = v14 - v13;
      v17 = v11 + v15;
      v18 = v15 - v11;
      v19 = v16 + v12;
      v20 = v16 - v12;
      v21 = *(_DWORD *)(v90 + v93 + 224) * v89;
      v22 = *(_DWORD *)(v90 + v93 + 160) * v91;
      v23 = *(_DWORD *)(v90 + v93 + 96) * v92;
      v24 = *(_DWORD *)(v90 + v93 + 32) * v34;
      v25 = 9633 * (v22 + v24 + v23 + v21) - 16069 * (v23 + v21);
      v26 = 9633 * (v22 + v24 + v23 + v21) + -3196 * (v22 + v24);
      v27 = -7373 * (v21 + v24);
      v28 = v25 + v27 + 2446 * v21;
      v29 = v26 + 12299 * v24 + v27;
      v30 = -20995 * (v23 + v22);
      v31 = v26 + v30 + 16819 * v22;
      v32 = v25 + v30 + 25172 * v23;
      *v95 = (v29 + v17) >> 11;
      v95[56] = (v17 - v29) >> 11;
      v95[8] = (v32 + v19) >> 11;
      v95[48] = (v19 - v32) >> 11;
      v95[16] = (v31 + v20) >> 11;
      v95[40] = (v20 - v31) >> 11;
      v95[24] = (v18 + v28) >> 11;
      v95[32] = (v18 - v28) >> 11;
      goto LABEL_6;
    }
    v5 = *(_WORD *)(v94 + 32);
    if ( v5 )
      goto LABEL_9;
    v92 = *(_WORD *)(v94 + 48);
    if ( v92 )
    {
      v6 = *(_WORD *)(v94 + 96);
      v7 = *(_WORD *)(v94 + 64);
      v89 = *(_WORD *)(v94 + 112);
      v91 = *(_WORD *)(v94 + 80);
      goto LABEL_5;
    }
    v7 = *(_WORD *)(v94 + 64);
    if ( v7 )
    {
      v6 = *(_WORD *)(v94 + 96);
      v89 = *(_WORD *)(v94 + 112);
      v91 = *(_WORD *)(v94 + 80);
      goto LABEL_5;
    }
    v91 = *(_WORD *)(v94 + 80);
    if ( v91 )
    {
      v6 = *(_WORD *)(v94 + 96);
      v89 = *(_WORD *)(v94 + 112);
      goto LABEL_5;
    }
    v6 = *(_WORD *)(v94 + 96);
    if ( v6 )
    {
      v89 = *(_WORD *)(v94 + 112);
      goto LABEL_5;
    }
    v89 = *(_WORD *)(v94 + 112);
    if ( v89 )
      goto LABEL_5;
    v87 = 4 * *(_DWORD *)(v90 + v93) * *(_WORD *)v94;
    *v95 = v87;
    v95[8] = v87;
    v95[16] = v87;
    v95[24] = v87;
    v95[32] = v87;
    v95[40] = v87;
    v95[48] = v87;
    v95[56] = v87;
LABEL_6:
    v94 += 2;
    v93 += 4;
    ++v95;
  }
  while ( v93 != 32 );
  result = v88;
  v36 = 0;
  do
  {
    v37 = (*(&v96 + 2 * v36) + 16) << 13;
    v38 = *(&v100 + 2 * v36);
    v39 = 10703 * v38;
    v38 *= 4433;
    v40 = v37 + v39;
    v41 = v37 - v39;
    v42 = v37 + v38;
    v43 = v37 - v38;
    v44 = *(&v98 + 2 * v36);
    v45 = *(&v102 + 2 * v36);
    v46 = *(&v98 + 2 * v36) - v45;
    v47 = 2260 * v46;
    v48 = 11363 * v46 + 20995 * v45;
    v49 = 2260 * v46 + 7373 * v44;
    v50 = 11363 * v46 + -4926 * v44;
    v51 = v47 - 4176 * v45;
    v52 = v40 + v48;
    v53 = v40 - v48;
    v54 = v49 + v42;
    v55 = v42 - v49;
    v56 = v50 + v43;
    v57 = v43 - v50;
    v58 = v51 + v41;
    v59 = v41 - v51;
    v60 = *(&v97 + 2 * v36);
    v61 = *(&v99 + 2 * v36);
    v62 = v60 + *(&v101 + 2 * v36);
    v63 = 11086 * (v61 + v60);
    v64 = 8956 * (v60 + v103[2 * v36]);
    v65 = 245 * (v60 - v103[2 * v36]);
    v66 = 3363 * (v60 - v61);
    v67 = v64 + 10217 * v62 + v63 - 18730 * v60;
    v68 = v66 + 7350 * (v60 - v103[2 * v36]) + 5461 * v62 + -15038 * v60;
    v69 = 1136 * (v61 + *(&v101 + 2 * v36));
    v70 = v69 + v63 + 589 * v61;
    v71 = *(&v101 + 2 * v36);
    v72 = 10217 * v62 + v69 - 9222 * v71;
    v73 = 11529 * (v71 - v61);
    v74 = v73 + 5461 * v62 + -6278 * v71;
    v75 = v61 + v103[2 * v36];
    v76 = -5461 * v75 + v70;
    v77 = v64 + -5461 * v75 + 8728 * v103[2 * v36];
    v75 *= -10217;
    v78 = 30 * v65 + v75 + 25733 * v103[2 * v36];
    v79 = v73 + v66 + v75 + 16154 * v61;
    v80 = -11086 * (*(&v101 + 2 * v36) + v103[2 * v36]);
    v81 = v80 + v72;
    v82 = v77 + v80;
    v83 = 3363 * (v103[2 * v36] - *(&v101 + 2 * v36));
    v84 = v83 + v78;
    v85 = v74 + v83;
    v86 = *(_DWORD *)(a4 + v36) + a5;
    *(_BYTE *)v86 = *(_BYTE *)(result + (((v52 + v67) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 15) = *(_BYTE *)(result + (((v52 - v67) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 1) = *(_BYTE *)(result + (((v54 + v76) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 14) = *(_BYTE *)(result + (((v54 - v76) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 2) = *(_BYTE *)(result + (((v81 + v56) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 13) = *(_BYTE *)(result + (((v56 - v81) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 3) = *(_BYTE *)(result + (((v58 + v82) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 12) = *(_BYTE *)(result + (((v58 - v82) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 4) = *(_BYTE *)(result + (((v84 + v59) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 11) = *(_BYTE *)(result + (((v59 - v84) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 5) = *(_BYTE *)(result + (((v57 + v85) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 10) = *(_BYTE *)(result + (((v57 - v85) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 6) = *(_BYTE *)(result + (((v55 + v79) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 9) = *(_BYTE *)(result + (((v55 - v79) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 7) = *(_BYTE *)(result + (((v53 + v68) >> 18) & 0x3FF));
    *(_BYTE *)(v86 + 8) = *(_BYTE *)(result + (((v53 - v68) >> 18) & 0x3FF));
    v36 += 4;
  }
  while ( v36 != 32 );
  return result;
}
