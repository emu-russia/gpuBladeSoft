char *__cdecl sub_6F878BA8(char *a1, int a2, int a3)
{
  char *v3; // edx@1
  int v4; // ecx@2
  int v5; // ST40_4@2
  int v6; // ST54_4@2
  int v7; // ST4C_4@2
  int v8; // ST3C_4@2
  int v9; // ST2C_4@2
  int v10; // eax@2
  int v11; // ST28_4@2
  int v12; // eax@2
  int v13; // ST34_4@2
  int v14; // ST24_4@2
  int v15; // ST20_4@2
  int v16; // ST48_4@2
  int v17; // ST1C_4@2
  int v18; // ST50_4@2
  int v19; // esi@2
  int v20; // ST14_4@2
  int v21; // esi@2
  int v22; // ST44_4@2
  int v23; // ecx@2
  int v24; // ST10_4@2
  int v25; // ecx@2
  int v26; // ST0C_4@2
  int v27; // ebx@2
  int v28; // ST08_4@2
  int v29; // ST38_4@2
  int v30; // ST04_4@2
  int v31; // eax@2
  int v32; // ST40_4@2
  int v33; // ST4C_4@2
  int v34; // ST34_4@2
  int v35; // ST48_4@2
  int v36; // ST50_4@2
  int v37; // ST44_4@2
  int v38; // ST54_4@2
  int v39; // eax@2
  int v40; // ST3C_4@2
  int v41; // ebx@2
  char *result; // eax@6
  char *v43; // edx@6
  int v44; // edi@7
  int v45; // ST54_4@7
  int v46; // ST28_4@7
  int v47; // ST20_4@7
  int v48; // ST18_4@7
  int v49; // ecx@7
  int v50; // esi@7
  int v51; // ST0C_4@7
  int v52; // edi@7
  int v53; // ST08_4@7
  int v54; // ST34_4@7
  int v55; // ST4C_4@7
  int v56; // ST40_4@7
  int v57; // ST54_4@7
  int v58; // ST38_4@7
  int v59; // ST50_4@7
  int v60; // ST44_4@7
  int v61; // ST48_4@7
  int v62; // esi@7
  int v63; // ST34_4@7
  int v64; // esi@7
  int v65; // ST38_4@7
  int v66; // ST50_4@7
  int v67; // [sp+30h] [bp-F4h]@1
  char v68; // [sp+58h] [bp-CCh]@5
  char v69; // [sp+78h] [bp-ACh]@7

  v3 = a1;
  v67 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v67) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 13);
      v7 = *(_BYTE *)(v4 + 1);
      v8 = *(_BYTE *)(v4 + 12);
      v9 = *(_BYTE *)(v4 + 2);
      v10 = *(_BYTE *)(v4 + 11);
      v11 = v10;
      v12 = v9 + v10;
      v13 = *(_BYTE *)(v4 + 3);
      v14 = *(_BYTE *)(v4 + 10);
      v15 = v13 + v14;
      v16 = *(_BYTE *)(v4 + 4);
      v17 = *(_BYTE *)(v4 + 9);
      v18 = *(_BYTE *)(v4 + 5);
      v19 = *(_BYTE *)(v4 + 8);
      v20 = v19;
      v21 = v18 + v19;
      v22 = *(_BYTE *)(v4 + 6);
      v23 = *(_BYTE *)(v4 + 7);
      v24 = v23;
      v25 = v22 + v23;
      v26 = v25 + v5 + v6;
      v27 = v5 + v6 - v25;
      v28 = v21 + v7 + v8;
      v29 = v7 + v8 - v21;
      v30 = v12 + v16 + v17;
      v31 = v12 - (v16 + v17);
      v32 = v5 - v6;
      v33 = v7 - v8;
      v34 = v13 - v14;
      v35 = v16 - v17;
      v36 = v18 - v20;
      v37 = v22 - v24;
      *(_DWORD *)v3 = v30 + v28 + v15 + v26 - 1792;
      *((_DWORD *)v3 + 4) = (7223 * (2 * v15 - v30) + 2 * (5219 * (v26 - 2 * v15) + 1289 * (v28 - 2 * v15)) + 4096) >> 13;
      v38 = 9058 * (v27 + v29);
      *((_DWORD *)v3 + 2) = (v38 + 2237 * v27 + 5027 * v31 + 4096) >> 13;
      *((_DWORD *)v3 + 6) = (v38 + -11295 * v31 - 14084 * v29 + 4096) >> 13;
      *((_DWORD *)v3 + 7) = v32 + v34 - v37 - (v36 - v35) - (v9 - v11 + v33);
      v39 = 11512 * (v36 - v35) - 1297 * (v9 - v11 + v33) - (v34 << 13);
      v40 = 9810 * (v9 - v11 + v32) + 6164 * (v35 + v37);
      *((_DWORD *)v3 + 5) = (v39 + v40 + 9175 * v35 + -19447 * (v9 - v11) + 4096) >> 13;
      v41 = 10935 * (v32 + v33) + 3826 * (v36 - v37);
      *((_DWORD *)v3 + 3) = (v41 + v39 + -3474 * v33 - 25148 * v36 + 4096) >> 13;
      *((_DWORD *)v3 + 1) = (v41 + v40 + v37 + (v34 << 13) + 4096 - 9232 * (v32 + v37)) >> 13;
      if ( ++v67 != 8 )
        break;
      v3 = &v68;
    }
    if ( v67 == 14 )
      break;
    v3 += 32;
  }
  result = a1;
  v43 = &v68;
  do
  {
    v44 = *(_DWORD *)result + *((_DWORD *)v43 + 40);
    v45 = *((_DWORD *)result + 8) + *((_DWORD *)v43 + 32);
    v46 = *((_DWORD *)result + 16) + *((_DWORD *)v43 + 24);
    v47 = *((_DWORD *)result + 24) + *((_DWORD *)v43 + 16);
    v48 = *((_DWORD *)result + 32) + *((_DWORD *)v43 + 8);
    v49 = *((_DWORD *)result + 40) + *(_DWORD *)v43;
    v50 = *((_DWORD *)result + 48) + *((_DWORD *)result + 56);
    v51 = v50 + v44;
    v52 = v44 - v50;
    v53 = v49 + v45;
    v54 = v45 - v49;
    v55 = *(_DWORD *)result - *((_DWORD *)v43 + 40);
    v56 = *((_DWORD *)result + 8) - *((_DWORD *)v43 + 32);
    v57 = *((_DWORD *)result + 16) - *((_DWORD *)v43 + 24);
    v58 = *((_DWORD *)result + 24) - *((_DWORD *)v43 + 16);
    v59 = *((_DWORD *)result + 32) - *((_DWORD *)v43 + 8);
    v60 = *((_DWORD *)result + 40) - *(_DWORD *)v43;
    v61 = *((_DWORD *)result + 48) - *((_DWORD *)result + 56);
    *(_DWORD *)result = (5350 * (v46 + v48 + v47 + v53 + v51) + 0x2000) >> 14;
    *((_DWORD *)result + 32) = (6817 * (v51 - 2 * v47) + 1684 * (v53 - 2 * v47) + 0x2000 + 4717
                                                                                         * (2 * v47 - (v46 + v48))) >> 14;
    v62 = 5915 * (v52 + v54);
    *((_DWORD *)result + 16) = (v62 + 1461 * v52 + 3283 * (v46 - v48) + 0x2000) >> 14;
    *((_DWORD *)result + 48) = (v62 + -9198 * v54 - 7376 * (v46 - v48) + 0x2000) >> 14;
    *((_DWORD *)result + 56) = (5350 * (v55 + v58 - v61 - (v56 + v57) - (v60 - v59)) + 0x2000) >> 14;
    v63 = 5350 * v58;
    v64 = -847 * (v56 + v57) - 5350 * v58 + 7518 * (v60 - v59);
    v65 = 4025 * (v59 + v61) + 6406 * (v55 + v57);
    *((_DWORD *)result + 40) = (v64 + v65 + -12700 * v57 + 5992 * v59 + 0x2000) >> 14;
    v66 = 2499 * (v60 - v61) + 7141 * (v55 + v56);
    *((_DWORD *)result + 24) = (v66 + v64 + -16423 * v60 - 2269 * v56 + 0x2000) >> 14;
    *((_DWORD *)result + 8) = (v66 + v65 + v63 + -679 * v61 + 0x2000 - 6029 * v55) >> 14;
    result += 4;
    v43 += 4;
  }
  while ( v43 != &v69 );
  return result;
}
