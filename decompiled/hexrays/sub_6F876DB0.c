char *__cdecl sub_6F876DB0(char *a1, int a2, int a3)
{
  int v3; // eax@2
  int v4; // ST28_4@2
  int v5; // esi@2
  int v6; // ST30_4@2
  int v7; // ebx@2
  int v8; // ecx@2
  int v9; // ST34_4@2
  int v10; // edx@2
  int v11; // ST2C_4@2
  int v12; // ST24_4@2
  int v13; // ST3C_4@2
  int v14; // ST1C_4@2
  int v15; // ST40_4@2
  int v16; // ST14_4@2
  int v17; // ST10_4@2
  int v18; // edi@2
  int v19; // ST28_4@2
  int v20; // ST20_4@2
  int v21; // ST2C_4@2
  int v22; // ST3C_4@2
  int v23; // eax@2
  int v24; // ebx@2
  int v25; // ST34_4@2
  int v26; // ecx@2
  int v27; // ST40_4@2
  int v28; // esi@2
  int v29; // ST30_4@2
  int v30; // ST24_4@2
  int v31; // ST1C_4@2
  int v32; // ST30_4@2
  int v33; // ST24_4@2
  int v34; // esi@2
  int v35; // ST40_4@2
  int v36; // ST10_4@2
  char *result; // eax@6
  int v38; // esi@7
  int v39; // ecx@7
  int v40; // edx@7
  int v41; // ST20_4@7
  int v42; // ST24_4@7
  int v43; // ST38_4@7
  int v44; // ST3C_4@7
  int v45; // ST28_4@7
  int v46; // ST2C_4@7
  int v47; // ebx@7
  int v48; // ST40_4@7
  int v49; // edx@7
  int v50; // edi@7
  int v51; // ST20_4@7
  int v52; // esi@7
  int v53; // ST38_4@7
  int v54; // ST3C_4@7
  int v55; // ST30_4@7
  int v56; // ST24_4@7
  int v57; // ST1C_4@7
  int v58; // ST38_4@7
  int v59; // ST20_4@7
  int v60; // ST3C_4@7
  int v61; // ST34_4@7
  int v62; // ST1C_4@7
  int v63; // [sp+18h] [bp-98h]@1
  char *v64; // [sp+18h] [bp-98h]@6
  char *v65; // [sp+38h] [bp-78h]@1
  char v66; // [sp+44h] [bp-6Ch]@5
  char v67; // [sp+64h] [bp-4Ch]@7

  v65 = a1;
  v63 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a2 + 4 * v63) + a3;
      v4 = *(_BYTE *)v3;
      v5 = *(_BYTE *)(v3 + 10);
      v6 = v5 + v4;
      v7 = *(_BYTE *)(v3 + 1);
      v8 = *(_BYTE *)(v3 + 9);
      v9 = v8 + v7;
      v10 = *(_BYTE *)(v3 + 2);
      v11 = *(_BYTE *)(v3 + 8);
      v12 = v10 + v11;
      v13 = *(_BYTE *)(v3 + 3);
      v14 = *(_BYTE *)(v3 + 7);
      v15 = v13 + v14;
      v16 = *(_BYTE *)(v3 + 4);
      v17 = *(_BYTE *)(v3 + 6);
      v18 = *(_BYTE *)(v3 + 5);
      v19 = v4 - v5;
      v20 = v7 - v8;
      v21 = v10 - v11;
      v22 = v13 - v14;
      v23 = v16 - v17;
      *(_DWORD *)v65 = 2 * (v16 + v17 + v15 + v12 + v8 + v7 + v6 + v18 - 1408);
      v24 = v6 - 2 * v18;
      v25 = v9 - 2 * v18;
      v26 = v12 - 2 * v18;
      v27 = v15 - 2 * v18;
      v28 = v16 + v17 - 2 * v18;
      v29 = 1649 * (v28 + v26) + 11116 * (v24 + v27);
      v30 = 7587 * (v25 - v27);
      v31 = 9746 * (v24 - v25);
      *((_DWORD *)v65 + 2) = (v30 + v29 + -8342 * v27 - 11395 * v28 + 2048) >> 12;
      *((_DWORD *)v65 + 4) = (v31 + v30 + 511 * v25 + -11116 * v26 + 2048 + 4813 * v28) >> 12;
      *((_DWORD *)v65 + 6) = (v31 + v29 + -13275 * v24 - 6461 * v26 + 2048) >> 12;
      v32 = 8756 * (v19 + v21);
      v33 = 6263 * (v19 + v22);
      v34 = -6263 * (v20 + v21);
      v35 = -11467 * (v20 + v22);
      v36 = 3264 * (v21 + v22);
      *((_DWORD *)v65 + 1) = (v33 + v32 + 10538 * (v19 + v20) + 3264 * v23 - 14090 * v19 + 2048) >> 12;
      *((_DWORD *)v65 + 3) = (v35 + v34 + 10538 * (v19 + v20) + v20 - 8756 * v23 + 10455 * v20 + 2048) >> 12;
      *((_DWORD *)v65 + 5) = (v36 + v34 + v32 + 11467 * v23 - 16294 * v21 + 2048) >> 12;
      *((_DWORD *)v65 + 7) = (v36 + v35 + v33 + 10695 * v22 - 10538 * v23 + 2048) >> 12;
      if ( ++v63 != 8 )
        break;
      v65 = &v66;
    }
    if ( v63 == 11 )
      break;
    v65 += 32;
  }
  result = a1;
  v64 = &v66;
  do
  {
    v38 = *((_DWORD *)v64 + 16);
    v39 = v38 + *(_DWORD *)result;
    v40 = *((_DWORD *)v64 + 8);
    v41 = v40 + *((_DWORD *)result + 8);
    v42 = *((_DWORD *)result + 16) + *(_DWORD *)v64;
    v43 = *((_DWORD *)result + 24) + *((_DWORD *)result + 56);
    v44 = *((_DWORD *)result + 32) + *((_DWORD *)result + 48);
    v45 = *(_DWORD *)result - v38;
    v46 = *((_DWORD *)result + 8) - v40;
    v47 = *((_DWORD *)result + 16) - *(_DWORD *)v64;
    v48 = *((_DWORD *)result + 24) - *((_DWORD *)result + 56);
    v49 = *((_DWORD *)result + 32) - *((_DWORD *)result + 48);
    *(_DWORD *)result = (8666 * (v44 + v43 + v42 + *((_DWORD *)result + 40) + v39 + v41) + 0x4000) >> 15;
    v50 = 2 * *((_DWORD *)result + 40);
    v51 = v41 - v50;
    v52 = v42 - v50;
    v53 = v43 - v50;
    v54 = v44 - v50;
    v55 = 1744 * (v42 - v50 + v54) + 11759 * (v39 - v50 + v53);
    v56 = 8026 * (v51 - v53);
    v57 = 10310 * (v39 - v50 - v51);
    *((_DWORD *)result + 16) = (v56 + v55 + -8825 * v53 + -12054 * v54 + 0x4000) >> 15;
    *((_DWORD *)result + 32) = (v57 + v56 + -11759 * v52 + 540 * v51 + 0x4000 + 5091 * v54) >> 15;
    *((_DWORD *)result + 48) = (v57 + v55 + -14043 * (v39 - v50) - 6835 * v52 + 0x4000) >> 15;
    v58 = 9262 * (v47 + v45);
    v59 = 6626 * (v45 + v48);
    v60 = -6626 * (v47 + v46);
    v61 = -12131 * (v46 + v48);
    v62 = 3453 * (v47 + v48);
    *((_DWORD *)result + 8) = (v59 + v58 + 11148 * (v45 + v46) + 3453 * v49 - 14905 * v45 + 0x4000) >> 15;
    *((_DWORD *)result + 24) = (v61 + v60 + 11148 * (v45 + v46) + 11061 * v46 + -9262 * v49 + 0x4000) >> 15;
    *((_DWORD *)result + 40) = (v62 + v60 + v58 + 12131 * v49 - 17237 * v47 + 0x4000) >> 15;
    *((_DWORD *)result + 56) = (v61 + v59 + 11314 * v48 + -11148 * v49 + 0x4000 + v62) >> 15;
    result += 4;
    v64 += 4;
  }
  while ( v64 != &v67 );
  return result;
}
