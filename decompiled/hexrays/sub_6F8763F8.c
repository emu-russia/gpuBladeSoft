char *__cdecl sub_6F8763F8(char *a1, int a2, int a3)
{
  char *v3; // edx@1
  int v4; // eax@2
  int v5; // ST18_4@2
  int v6; // esi@2
  int v7; // ST10_4@2
  int v8; // ebx@2
  int v9; // ST20_4@2
  int v10; // ST14_4@2
  int v11; // ST28_4@2
  int v12; // ecx@2
  int v13; // ST08_4@2
  int v14; // ecx@2
  int v15; // ST24_4@2
  int v16; // ST04_4@2
  int v17; // ST0C_4@2
  int v18; // eax@2
  int v19; // ST18_4@2
  int v20; // ST20_4@2
  int v21; // ST28_4@2
  int v22; // ST24_4@2
  int v23; // esi@2
  int v24; // ebx@2
  int v25; // esi@2
  int v26; // ecx@2
  int v27; // esi@2
  int v28; // ebx@2
  char *result; // eax@6
  int v30; // ST1C_4@7
  int v31; // ebx@7
  int v32; // ST08_4@7
  int v33; // ecx@7
  int v34; // ST10_4@7
  int v35; // ST0C_4@7
  int v36; // ST20_4@7
  int v37; // edx@7
  int v38; // ST14_4@7
  int v39; // ST28_4@7
  int v40; // edi@7
  int v41; // ebx@7
  int v42; // esi@7
  int v43; // ST18_4@7
  int v44; // ecx@7
  int v45; // esi@7
  int v46; // ST1C_4@7
  int v47; // edx@7
  int v48; // [sp+1Ch] [bp-3Ch]@1
  char *v49; // [sp+24h] [bp-34h]@6
  char v50; // [sp+2Ch] [bp-2Ch]@5
  char v51; // [sp+4Ch] [bp-Ch]@7

  v3 = a1;
  v48 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v48) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 8);
      v7 = v6 + v5;
      v8 = *(_BYTE *)(v4 + 1);
      v9 = *(_BYTE *)(v4 + 7);
      v10 = v8 + v9;
      v11 = *(_BYTE *)(v4 + 2);
      v12 = *(_BYTE *)(v4 + 6);
      v13 = v12;
      v14 = v11 + v12;
      v15 = *(_BYTE *)(v4 + 3);
      v16 = *(_BYTE *)(v4 + 5);
      v17 = v15 + v16;
      v18 = *(_BYTE *)(v4 + 4);
      v19 = v5 - v6;
      v20 = v8 - v9;
      v21 = v11 - v13;
      v22 = v15 - v16;
      v23 = v17 + v14 + v7;
      *(_DWORD *)v3 = 2 * (v23 + v18 + v10 - 1152);
      *((_DWORD *)v3 + 6) = (5793 * (v23 - (v18 + v10) - (v18 + v10)) + 2048) >> 12;
      v24 = 10887 * (v7 - v14);
      v25 = 5793 * (v10 - v18 - v18);
      *((_DWORD *)v3 + 2) = (8875 * (v14 - v17) + v24 + v25 + 2048) >> 12;
      *((_DWORD *)v3 + 4) = (v24 + 2012 * (v17 - v7) + 2048 - v25) >> 12;
      *((_DWORD *)v3 + 3) = (10033 * (v19 - v21 - v22) + 2048) >> 12;
      v26 = 7447 * (v19 + v21);
      v27 = 3962 * (v19 + v22);
      *((_DWORD *)v3 + 1) = (v27 + 10033 * v20 + v26 + 2048) >> 12;
      v28 = 11409 * (v21 - v22);
      *((_DWORD *)v3 + 5) = (v26 + 2048 - 10033 * v20 - v28) >> 12;
      *((_DWORD *)v3 + 7) = (v27 + v28 + 2048 - 10033 * v20) >> 12;
      if ( ++v48 != 8 )
        break;
      v3 = &v50;
    }
    if ( v48 == 9 )
      break;
    v3 += 32;
  }
  result = a1;
  v49 = &v50;
  do
  {
    v30 = *(_DWORD *)v49 + *(_DWORD *)result;
    v31 = *((_DWORD *)result + 56);
    v32 = v31 + *((_DWORD *)result + 8);
    v33 = *((_DWORD *)result + 16);
    v34 = v33 + *((_DWORD *)result + 48);
    v35 = *((_DWORD *)result + 24) + *((_DWORD *)result + 40);
    v36 = *(_DWORD *)result - *(_DWORD *)v49;
    v37 = *((_DWORD *)result + 8) - v31;
    v38 = v33 - *((_DWORD *)result + 48);
    v39 = *((_DWORD *)result + 24) - *((_DWORD *)result + 40);
    v40 = v35 + v30 + v34;
    v41 = *((_DWORD *)result + 32) + v32;
    *(_DWORD *)result = (12945 * (v40 + v41) + 0x4000) >> 15;
    *((_DWORD *)result + 48) = (9154 * (v40 - v41 - v41) + 0x4000) >> 15;
    v42 = 17203 * (v30 - v34);
    v43 = 9154 * (v32 - *((_DWORD *)result + 32) - *((_DWORD *)result + 32));
    *((_DWORD *)result + 16) = (v43 + v42 + 0x4000 + 14024 * (v34 - v35)) >> 15;
    *((_DWORD *)result + 32) = (v42 + 3179 * (v35 - v30) + 0x4000 - v43) >> 15;
    *((_DWORD *)result + 24) = (15855 * (v36 - v38 - v39) + 0x4000) >> 15;
    v44 = 15855 * v37;
    v45 = 11768 * (v36 + v38);
    v46 = 6262 * (v36 + v39);
    *((_DWORD *)result + 8) = (v46 + 15855 * v37 + v45 + 0x4000) >> 15;
    v47 = 18029 * (v38 - v39);
    *((_DWORD *)result + 40) = (v45 + 0x4000 - v44 - v47) >> 15;
    *((_DWORD *)result + 56) = (v46 + v47 + 0x4000 - v44) >> 15;
    result += 4;
    v49 += 4;
  }
  while ( v49 != &v51 );
  return result;
}
