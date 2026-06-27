int __cdecl sub_6F82D9E0(int a1, signed int a2)
{
  int v2; // ebp@1
  __int16 *v3; // ebx@3
  int v4; // esi@3
  int v5; // eax@4
  int v6; // ecx@6
  int v7; // eax@6
  int v8; // ebx@6
  int v9; // edi@6
  int v10; // esi@6
  int v11; // ecx@6
  int v12; // eax@6
  int v13; // esi@6
  int result; // eax@6
  int v15; // edi@8
  int v16; // edx@8
  int v17; // eax@8
  int v18; // ST08_4@8
  __int16 v19; // ST0C_2@8
  int v20; // ebx@8
  int v21; // ST04_4@8
  int v22; // ecx@8
  __int16 v23; // ST00_2@8
  int v24; // edx@8
  __int16 v25; // ST10_2@8
  int v26; // ecx@8
  __int16 v27; // si@8
  int v28; // edi@8
  int v29; // esi@8
  int v30; // ebx@8
  int v31; // edx@8
  int v32; // esi@8
  int v33; // ST00_4@8
  int v34; // eax@8
  int v35; // esi@9
  int v36; // ecx@9
  int v37; // edx@9
  int v38; // eax@9
  int v39; // ebx@9
  int v40; // esi@9
  int v41; // ecx@9
  int v42; // ebx@9
  int v43; // edi@11
  int v44; // ebx@11
  int v45; // edx@11
  int v46; // eax@11
  int v47; // esi@11
  int v48; // ecx@11
  int v49; // edx@11
  int v50; // eax@11
  int v51; // edx@11
  int v52; // ecx@12
  int v53; // ebx@12
  __int16 v54; // ST04_2@12
  int v55; // ecx@12
  int v56; // esi@12
  int v57; // eax@12
  __int16 v58; // di@12
  __int16 *v59; // ebp@12
  int v60; // edi@12
  int v61; // ST08_4@12
  int v62; // esi@12
  int v63; // ebx@12
  int v64; // ecx@12
  int v65; // ecx@13
  int v66; // eax@14
  int v67; // esi@14
  int v68; // ebx@14
  int v69; // edi@14
  int v70; // ebp@14
  int v71; // eax@14
  int v72; // esi@14
  int v73; // ebp@14
  __int16 *v74; // [sp+0h] [bp-A4h]@11
  __int16 v75; // [sp+14h] [bp-90h]@3
  __int16 v76; // [sp+16h] [bp-8Eh]@8
  __int16 v77; // [sp+18h] [bp-8Ch]@8
  __int16 v78; // [sp+1Ah] [bp-8Ah]@8
  __int16 v79; // [sp+24h] [bp-80h]@4
  __int16 v80; // [sp+26h] [bp-7Eh]@8
  __int16 v81; // [sp+28h] [bp-7Ch]@8
  __int16 v82; // [sp+2Ah] [bp-7Ah]@8
  __int16 v83; // [sp+34h] [bp-70h]@5
  __int16 v84; // [sp+36h] [bp-6Eh]@8
  __int16 v85; // [sp+38h] [bp-6Ch]@8
  __int16 v86; // [sp+3Ah] [bp-6Ah]@8
  __int16 v87; // [sp+44h] [bp-60h]@5
  __int16 v88; // [sp+46h] [bp-5Eh]@8
  __int16 v89; // [sp+48h] [bp-5Ch]@8
  __int16 v90; // [sp+4Ah] [bp-5Ah]@8
  __int16 v91; // [sp+54h] [bp-50h]@5
  __int16 v92; // [sp+56h] [bp-4Eh]@8
  __int16 v93; // [sp+58h] [bp-4Ch]@8
  __int16 v94; // [sp+5Ah] [bp-4Ah]@8
  __int16 v95; // [sp+64h] [bp-40h]@5
  __int16 v96; // [sp+66h] [bp-3Eh]@8
  __int16 v97; // [sp+68h] [bp-3Ch]@8
  __int16 v98; // [sp+6Ah] [bp-3Ah]@8
  __int16 v99; // [sp+74h] [bp-30h]@5
  __int16 v100; // [sp+76h] [bp-2Eh]@8
  __int16 v101; // [sp+78h] [bp-2Ch]@8
  __int16 v102; // [sp+7Ah] [bp-2Ah]@8
  __int16 v103; // [sp+84h] [bp-20h]@5
  __int16 v104; // [sp+86h] [bp-1Eh]@8
  __int16 v105; // [sp+88h] [bp-1Ch]@8
  __int16 v106; // [sp+8Ah] [bp-1Ah]@8

  v2 = a1;
  if ( a2 <= 2 )
  {
    v43 = *(_WORD *)(a1 + 2);
    v44 = 12785 * v43 >> 16;
    v45 = 64277 * v43 >> 16;
    v46 = 46341 * *(_WORD *)a1 >> 16;
    v47 = 46341 * v44 >> 16;
    v75 = v45 + v46;
    LOWORD(v43) = v47 + ((unsigned int)(46341 * v45) >> 16);
    v79 = v43 + v46;
    v48 = (46341 * v45 >> 16) - v47;
    v83 = v48 + v46;
    v87 = v44 + v46;
    LOWORD(v47) = v46 - v44;
    LOWORD(v44) = v46;
    v91 = v47;
    LOWORD(v47) = v46;
    LOWORD(v46) = v46 - v45;
    v49 = *(_WORD *)(a1 + 16);
    v103 = v46;
    v99 = v44 - v43;
    v95 = v47 - v48;
    v50 = 46341 * v49;
    v51 = a1;
    v74 = &v75;
    v104 = HIWORD(v50);
    v100 = HIWORD(v50);
    v96 = HIWORD(v50);
    v92 = HIWORD(v50);
    v88 = HIWORD(v50);
    v84 = HIWORD(v50);
    v80 = HIWORD(v50);
    v76 = HIWORD(v50);
    do
    {
      v52 = v74[1];
      v53 = 12785 * v52 >> 16;
      v54 = (unsigned int)(64277 * v52) >> 16;
      v55 = 46341 * (64277 * v52 >> 16) >> 16;
      v56 = 46341 * v53 >> 16;
      v57 = 46341 * *v74 >> 16;
      *(_WORD *)v51 = v57 + v54;
      v58 = v56 + v55;
      LOWORD(v55) = v55 - v56;
      *(_WORD *)(v51 + 32) = v55 + v57;
      *(_WORD *)(v51 + 16) = v58 + v57;
      *(_WORD *)(v51 + 64) = v57 - v53;
      *(_WORD *)(v51 + 48) = v53 + v57;
      *(_WORD *)(v51 + 96) = v57 - v58;
      *(_WORD *)(v51 + 80) = v57 - v55;
      v59 = v74;
      v74 += 16;
      v60 = v59[9];
      *(_WORD *)(v51 + 112) = v57 - v54;
      v61 = 64277 * v60 >> 16;
      v62 = 46341 * (12785 * v60 >> 16) >> 16;
      v63 = 46341 * v61 >> 16;
      LOWORD(v57) = v62 + v63;
      LOWORD(v63) = v63 - v62;
      v64 = 46341 * v59[8] >> 16;
      *(_WORD *)(v51 + 2) = v61 + v64;
      *(_WORD *)(v51 + 18) = v57 + v64;
      *(_WORD *)(v51 + 34) = v63 + v64;
      *(_WORD *)(v51 + 66) = v64 - ((unsigned int)(12785 * v60) >> 16);
      *(_WORD *)(v51 + 50) = v64 + ((unsigned int)(12785 * v60) >> 16);
      *(_WORD *)(v51 + 82) = v64 - v63;
      v51 += 4;
      *(_WORD *)(v51 + 94) = v64 - v57;
      *(_WORD *)(v51 + 110) = v64 - v61;
    }
    while ( v51 != a1 + 16 );
    v65 = a1;
    do
    {
      v66 = *(_WORD *)v65;
      v67 = *(_WORD *)(v65 + 2);
      v65 += 16;
      v68 = *(_WORD *)(v65 - 10);
      v69 = *(_WORD *)(v65 - 8);
      v70 = (*(_WORD *)(v65 - 12) + 8) >> 4;
      *(_WORD *)(v65 - 16) = (v66 + 8) >> 4;
      *(_WORD *)(v65 - 14) = (v67 + 8) >> 4;
      v71 = *(_WORD *)(v65 - 6);
      v72 = *(_WORD *)(v65 - 4);
      *(_WORD *)(v65 - 12) = v70;
      v73 = *(_WORD *)(v65 - 2);
      *(_WORD *)(v65 - 10) = (v68 + 8) >> 4;
      *(_WORD *)(v65 - 8) = (v69 + 8) >> 4;
      result = (v71 + 8) >> 4;
      *(_WORD *)(v65 - 6) = result;
      *(_WORD *)(v65 - 4) = (v72 + 8) >> 4;
      *(_WORD *)(v65 - 2) = (v73 + 8) >> 4;
    }
    while ( v65 != a1 + 128 );
  }
  else if ( a2 <= 9 )
  {
    sub_6F82D8B0((int)&v75, a1);
    v15 = *(_WORD *)(a1 + 20);
    v16 = *(_WORD *)(a1 + 18);
    v17 = 46341 * *(_WORD *)(a1 + 16) >> 16;
    v18 = 60547 * v15 >> 16;
    v19 = v17 + v18;
    v20 = 25080 * v15 >> 16;
    v21 = 64277 * v16 >> 16;
    v22 = 12785 * v16 >> 16;
    v23 = (unsigned int)(12785 * v16) >> 16;
    v76 = v17 + v18 + v21;
    v24 = 46341 * v21 >> 16;
    v25 = v17 + v20;
    v26 = 46341 * v22 >> 16;
    v27 = v26 + v24;
    LOWORD(v24) = v24 - v26;
    v80 = v27 + v17 + v20;
    LOWORD(v15) = v17;
    LOWORD(v17) = v17 - v18;
    LOWORD(v15) = v15 - v20;
    v84 = v24 + v15;
    v96 = v15 - v24;
    v28 = *(_WORD *)(a1 + 32);
    v92 = v17 - v23;
    v104 = v19 - v21;
    v88 = v23 + v17;
    LOWORD(v17) = v25 - v27;
    v29 = *(_WORD *)(a1 + 34);
    v100 = v17;
    v30 = 12785 * v29 >> 16;
    v31 = 64277 * v29 >> 16;
    v32 = 46341 * v30 >> 16;
    v33 = 46341 * v31 >> 16;
    v34 = 46341 * v28 >> 16;
    v77 = v31 + v34;
    v81 = v32 + v33 + v34;
    v85 = v33 - v32 + v34;
    v89 = v30 + v34;
    v93 = v34 - v30;
    v101 = v34 - (v32 + v33);
    v97 = v34 - (v33 - v32);
    v105 = v34 - v31;
    v106 = (unsigned int)(46341 * *(_WORD *)(a1 + 48)) >> 16;
    v102 = v106;
    v98 = v106;
    v94 = v106;
    v90 = v106;
    v86 = v106;
    v82 = v106;
    v78 = v106;
    sub_6F82D8B0(a1, (int)&v75);
    sub_6F82D8B0(a1 + 2, (int)&v79);
    sub_6F82D8B0(a1 + 4, (int)&v83);
    sub_6F82D8B0(a1 + 6, (int)&v87);
    sub_6F82D8B0(a1 + 8, (int)&v91);
    sub_6F82D8B0(a1 + 10, (int)&v95);
    sub_6F82D8B0(a1 + 12, (int)&v99);
    sub_6F82D8B0(a1 + 14, (int)&v103);
    do
    {
      v35 = *(_WORD *)v2;
      v36 = *(_WORD *)(v2 + 2);
      v2 += 16;
      v37 = *(_WORD *)(v2 - 10);
      v38 = *(_WORD *)(v2 - 8);
      v39 = (*(_WORD *)(v2 - 12) + 8) >> 4;
      *(_WORD *)(v2 - 16) = (v35 + 8) >> 4;
      *(_WORD *)(v2 - 14) = (v36 + 8) >> 4;
      v40 = *(_WORD *)(v2 - 6);
      v41 = *(_WORD *)(v2 - 4);
      *(_WORD *)(v2 - 12) = v39;
      v42 = *(_WORD *)(v2 - 2);
      result = (v38 + 8) >> 4;
      *(_WORD *)(v2 - 10) = (v37 + 8) >> 4;
      *(_WORD *)(v2 - 8) = result;
      *(_WORD *)(v2 - 6) = (v40 + 8) >> 4;
      *(_WORD *)(v2 - 4) = (v41 + 8) >> 4;
      *(_WORD *)(v2 - 2) = (v42 + 8) >> 4;
    }
    while ( v2 != a1 + 128 );
  }
  else
  {
    v3 = &v75;
    v4 = a1;
    do
    {
      v5 = (int)v3;
      ++v3;
      sub_6F82D730(v5, v4);
      v4 += 16;
    }
    while ( v3 < &v79 );
    sub_6F82D730(a1, (int)&v75);
    sub_6F82D730(a1 + 2, (int)&v79);
    sub_6F82D730(a1 + 4, (int)&v83);
    sub_6F82D730(a1 + 6, (int)&v87);
    sub_6F82D730(a1 + 8, (int)&v91);
    sub_6F82D730(a1 + 10, (int)&v95);
    sub_6F82D730(a1 + 12, (int)&v99);
    sub_6F82D730(a1 + 14, (int)&v103);
    do
    {
      v6 = *(_WORD *)v2;
      v7 = *(_WORD *)(v2 + 2);
      v2 += 16;
      v8 = *(_WORD *)(v2 - 10);
      v9 = *(_WORD *)(v2 - 8);
      v10 = (*(_WORD *)(v2 - 12) + 8) >> 4;
      *(_WORD *)(v2 - 16) = (v6 + 8) >> 4;
      *(_WORD *)(v2 - 14) = (v7 + 8) >> 4;
      v11 = *(_WORD *)(v2 - 6);
      v12 = *(_WORD *)(v2 - 4);
      *(_WORD *)(v2 - 12) = v10;
      v13 = *(_WORD *)(v2 - 2);
      *(_WORD *)(v2 - 10) = (v8 + 8) >> 4;
      *(_WORD *)(v2 - 8) = (v9 + 8) >> 4;
      result = (v12 + 8) >> 4;
      *(_WORD *)(v2 - 6) = (v11 + 8) >> 4;
      *(_WORD *)(v2 - 4) = result;
      *(_WORD *)(v2 - 2) = (v13 + 8) >> 4;
    }
    while ( v2 != a1 + 128 );
  }
  return result;
}
