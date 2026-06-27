void *__cdecl sub_6F87CD80(void *a1, int a2, int a3)
{
  char *v3; // eax@1
  int v4; // edx@2
  int v5; // ST28_4@2
  int v6; // esi@2
  int v7; // ST40_4@2
  int v8; // ebx@2
  int v9; // ecx@2
  int v10; // ST34_4@2
  int v11; // ST3C_4@2
  int v12; // edi@2
  int v13; // ST20_4@2
  int v14; // ST28_4@2
  int v15; // ST24_4@2
  int v16; // edx@2
  int v17; // ecx@2
  int v18; // ecx@2
  int v19; // esi@2
  int v20; // ebx@2
  int v21; // ebx@2
  int v22; // esi@2
  int v23; // ecx@2
  int v24; // edi@2
  void *result; // eax@6
  char *v26; // edx@6
  int v27; // edi@7
  int v28; // ST40_4@7
  int v29; // ST18_4@7
  int v30; // ST14_4@7
  int v31; // ST10_4@7
  int v32; // ecx@7
  int v33; // esi@7
  int v34; // ST0C_4@7
  int v35; // edi@7
  int v36; // ST08_4@7
  int v37; // ST30_4@7
  int v38; // ST40_4@7
  int v39; // ST28_4@7
  int v40; // ST24_4@7
  int v41; // ST3C_4@7
  int v42; // ST38_4@7
  int v43; // ST2C_4@7
  int v44; // ST34_4@7
  int v45; // esi@7
  int v46; // ST30_4@7
  int v47; // esi@7
  int v48; // ST3C_4@7
  int v49; // ST38_4@7
  int v50; // [sp+38h] [bp-D8h]@1
  char v51; // [sp+44h] [bp-CCh]@5
  char v52; // [sp+60h] [bp-B0h]@7

  memset(a1, 0, 0x100u);
  v3 = (char *)a1;
  v50 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v50) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 6);
      v7 = v6 + v5;
      v8 = *(_BYTE *)(v4 + 1);
      v9 = *(_BYTE *)(v4 + 5);
      v10 = v9 + v8;
      v11 = *(_BYTE *)(v4 + 2);
      v12 = *(_BYTE *)(v4 + 4);
      v13 = *(_BYTE *)(v4 + 3);
      v14 = v5 - v6;
      v15 = v8 - v9;
      v16 = v11 - v12;
      v17 = v11 + v12 + v7;
      *(_DWORD *)v3 = 4 * (v17 + v10 + v13 - 896);
      v18 = 2896 * (v17 - 2 * v13 - 2 * v13);
      v19 = 2578 * (v10 - (v11 + v12));
      *((_DWORD *)v3 + 2) = (v18 + 7542 * (v7 - (v11 + v12)) + v19 + 1024) >> 11;
      v20 = 7223 * (v7 - v10);
      *((_DWORD *)v3 + 4) = (v19 + v20 + 1024 + 5793 * (2 * v13 - v10)) >> 11;
      *((_DWORD *)v3 + 6) = (v18 + v20 + 1024 - 7542 * (v7 - (v11 + v12))) >> 11;
      v21 = 7663 * (v14 + v15);
      v22 = 1395 * (v14 - v15);
      v23 = 5027 * (v11 - v12 + v14);
      *((_DWORD *)v3 + 1) = (v21 + v23 + 1024 - v22) >> 11;
      v24 = -11295 * (v11 - v12 + v15);
      *((_DWORD *)v3 + 3) = (v24 + v21 + 1024 + v22) >> 11;
      *((_DWORD *)v3 + 5) = (v23 + v24 + 15326 * v16 + 1024) >> 11;
      if ( ++v50 != 8 )
        break;
      v3 = &v51;
    }
    if ( v50 == 14 )
      break;
    v3 += 32;
  }
  result = a1;
  v26 = &v51;
  do
  {
    v27 = *(_DWORD *)result + *((_DWORD *)v26 + 40);
    v28 = *((_DWORD *)result + 8) + *((_DWORD *)v26 + 32);
    v29 = *((_DWORD *)result + 16) + *((_DWORD *)v26 + 24);
    v30 = *((_DWORD *)result + 24) + *((_DWORD *)v26 + 16);
    v31 = *((_DWORD *)result + 32) + *((_DWORD *)v26 + 8);
    v32 = *((_DWORD *)result + 40) + *(_DWORD *)v26;
    v33 = *((_DWORD *)result + 48) + *((_DWORD *)result + 56);
    v34 = v33 + v27;
    v35 = v27 - v33;
    v36 = v32 + v28;
    v37 = v28 - v32;
    v38 = *(_DWORD *)result - *((_DWORD *)v26 + 40);
    v39 = *((_DWORD *)result + 8) - *((_DWORD *)v26 + 32);
    v40 = *((_DWORD *)result + 16) - *((_DWORD *)v26 + 24);
    v41 = *((_DWORD *)result + 24) - *((_DWORD *)v26 + 16);
    v42 = *((_DWORD *)result + 32) - *((_DWORD *)v26 + 8);
    v43 = *((_DWORD *)result + 40) - *(_DWORD *)v26;
    v44 = *((_DWORD *)result + 48) - *((_DWORD *)result + 56);
    *(_DWORD *)result = (5350 * (v29 + v31 + v30 + v36 + v34) + 0x4000) >> 15;
    *((_DWORD *)result + 32) = (6817 * (v34 - 2 * v30) + 1684 * (v36 - 2 * v30) + 0x4000 + 4717
                                                                                         * (2 * v30 - (v29 + v31))) >> 15;
    v45 = 5915 * (v35 + v37);
    *((_DWORD *)result + 16) = (v45 + 1461 * v35 + 3283 * (v29 - v31) + 0x4000) >> 15;
    *((_DWORD *)result + 48) = (v45 + -9198 * v37 - 7376 * (v29 - v31) + 0x4000) >> 15;
    *((_DWORD *)result + 56) = (5350 * (v38 + v41 - v44 - (v39 + v40) - (v43 - v42)) + 0x4000) >> 15;
    v46 = 5350 * v41;
    v47 = -847 * (v39 + v40) - 5350 * v41 + 7518 * (v43 - v42);
    v48 = 4025 * (v42 + v44) + 6406 * (v38 + v40);
    *((_DWORD *)result + 40) = (v47 + v48 + -12700 * v40 + 5992 * v42 + 0x4000) >> 15;
    v49 = 2499 * (v43 - v44) + 7141 * (v38 + v39);
    *((_DWORD *)result + 24) = (v49 + v47 + -16423 * v43 - 2269 * v39 + 0x4000) >> 15;
    *((_DWORD *)result + 8) = (v49 + v48 + v46 + -679 * v44 + 0x4000 - 6029 * v38) >> 15;
    result = (char *)result + 4;
    v26 += 4;
  }
  while ( v26 != &v52 );
  return result;
}
