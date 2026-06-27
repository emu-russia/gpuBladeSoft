int __cdecl sub_6F874F6C(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ecx@1
  int v5; // edx@2
  int v6; // esi@2
  int v7; // ebx@2
  double v8; // st7@2
  double v9; // st6@2
  int v10; // esi@2
  int v11; // ebx@2
  double v12; // st5@2
  float v13; // ST08_4@2
  int v14; // esi@2
  int v15; // ebx@2
  double v16; // st4@2
  double v17; // st3@2
  int v18; // ebx@2
  int v19; // edx@2
  double v20; // st2@2
  double v21; // st1@2
  double v22; // st2@2
  double v23; // st7@2
  double v24; // st4@2
  double v25; // st5@2
  double v26; // st4@2
  double v27; // st4@2
  double v28; // st3@2
  double v29; // st2@2
  double v30; // st4@2
  double v31; // rtt@2
  double v32; // st2@2
  double v33; // st7@2
  double v34; // st3@2
  double v35; // st7@2
  double v36; // st6@2
  double v37; // rt2@2
  int result; // eax@3
  signed int v39; // edx@3
  double v40; // st6@4
  double v41; // st7@4
  double v42; // st4@4
  double v43; // st5@4
  float v44; // ST08_4@4
  double v45; // st3@4
  double v46; // st4@4
  float v47; // ST04_4@4
  double v48; // st3@4
  double v49; // st2@4
  double v50; // st1@4
  double v51; // st2@4
  double v52; // st6@4
  double v53; // st4@4
  double v54; // st6@4
  double v55; // st5@4
  double v56; // st4@4
  double v57; // st6@4
  double v58; // rtt@4
  double v59; // st6@4
  double v60; // st4@4
  double v61; // st3@4
  double v62; // st7@4
  double v63; // st4@4

  v3 = a1;
  v4 = 0;
  do
  {
    v5 = *(_DWORD *)(a2 + 4 * v4) + a3;
    v6 = *(_BYTE *)v5;
    v7 = *(_BYTE *)(v5 + 7);
    v8 = (double)(v7 + v6);
    v9 = (double)(v6 - v7);
    v10 = *(_BYTE *)(v5 + 1);
    v11 = *(_BYTE *)(v5 + 6);
    v12 = (double)(v11 + v10);
    v13 = (double)(v10 - v11);
    v14 = *(_BYTE *)(v5 + 2);
    v15 = *(_BYTE *)(v5 + 5);
    v16 = (double)(v15 + v14);
    v17 = (double)(v14 - v15);
    v18 = *(_BYTE *)(v5 + 3);
    v19 = *(_BYTE *)(v5 + 4);
    v20 = (double)(v19 + v18);
    v21 = v20;
    v22 = v8 + v20;
    v23 = v8 - v21;
    *(float *)v3 = v22 + v12 + v16 - 1024.0;
    *(float *)(v3 + 16) = v22 - (v12 + v16);
    v24 = v12 - v16;
    v25 = v17;
    v26 = (v24 + v23) * 0.70710677;
    *(float *)(v3 + 8) = v23 + v26;
    *(float *)(v3 + 24) = v23 - v26;
    v27 = v17 + (double)(v18 - v19);
    v28 = v13 + v9;
    v29 = v27;
    v30 = (v27 - v28) * 0.38268343;
    v31 = v29 * 0.54119611 + v30;
    v32 = v28 * 1.306563;
    v33 = 0.70710677 * (v25 + v13);
    v34 = v33;
    v35 = v9 + v33;
    v36 = v9 - v34;
    *(float *)(v3 + 20) = v36 + v31;
    v37 = v30 + v32;
    *(float *)(v3 + 12) = v36 - v31;
    *(float *)(v3 + 4) = v35 + v37;
    *(float *)(v3 + 28) = v35 - v37;
    v3 += 32;
    ++v4;
  }
  while ( v4 != 8 );
  result = a1;
  v39 = 7;
  do
  {
    v40 = *(float *)result + *(float *)(result + 224);
    v41 = *(float *)result - *(float *)(result + 224);
    v42 = *(float *)(result + 192);
    v43 = *(float *)(result + 32) + v42;
    v44 = *(float *)(result + 32) - v42;
    v45 = *(float *)(result + 160);
    v46 = *(float *)(result + 64) + v45;
    v47 = *(float *)(result + 64) - v45;
    v48 = *(float *)(result + 128);
    v49 = *(float *)(result + 96) + v48;
    v50 = v49;
    v51 = v40 + v49;
    v52 = v40 - v50;
    *(float *)result = v51 + v43 + v46;
    *(float *)(result + 128) = v51 - (v43 + v46);
    v53 = (v43 - v46 + v52) * 0.70710677;
    *(float *)(result + 64) = v52 + v53;
    *(float *)(result + 192) = v52 - v53;
    v54 = *(float *)(result + 96) - v48 + v47;
    v55 = v44 + v41;
    v56 = v54;
    v57 = (v54 - v55) * 0.38268343;
    v58 = v56 * 0.54119611 + v57;
    v59 = v57 + v55 * 1.306563;
    v60 = (v47 + v44) * 0.70710677;
    v61 = v41;
    v62 = v41 + v60;
    v63 = v61 - v60;
    *(float *)(result + 160) = v63 + v58;
    *(float *)(result + 96) = v63 - v58;
    *(float *)(result + 32) = v62 + v59;
    *(float *)(result + 224) = v62 - v59;
    result += 4;
    --v39;
  }
  while ( v39 != -1 );
  return result;
}
