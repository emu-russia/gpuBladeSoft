void *__cdecl sub_6F87D4A0(void *a1, int a2, int a3)
{
  char *v3; // eax@1
  int v4; // edx@2
  int v5; // ST20_4@2
  int v6; // esi@2
  int v7; // ebx@2
  int v8; // ecx@2
  int v9; // ST30_4@2
  int v10; // ST28_4@2
  int v11; // edx@2
  int v12; // ST24_4@2
  int v13; // ebx@2
  int v14; // ecx@2
  int v15; // edx@2
  void *result; // eax@6
  char *v17; // ebx@6
  int v18; // ST38_4@7
  int v19; // ST18_4@7
  int v20; // ecx@7
  int v21; // edx@7
  int v22; // ST14_4@7
  int v23; // esi@7
  int v24; // ST10_4@7
  int v25; // ST0C_4@7
  int v26; // ST04_4@7
  int v27; // ST2C_4@7
  int v28; // ST30_4@7
  int v29; // ST34_4@7
  int v30; // ST38_4@7
  int v31; // ecx@7
  int v32; // ST28_4@7
  int v33; // edx@7
  int v34; // ST2C_4@7
  int v35; // ST24_4@7
  int v36; // ST2C_4@7
  int v37; // ST34_4@7
  int v38; // [sp+38h] [bp-90h]@1
  char v39; // [sp+3Ch] [bp-8Ch]@5
  char v40; // [sp+54h] [bp-74h]@7

  memset(a1, 0, 0x100u);
  v3 = (char *)a1;
  v38 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v38) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 5);
      v7 = *(_BYTE *)(v4 + 1);
      v8 = *(_BYTE *)(v4 + 4);
      v9 = v8 + v7;
      v10 = *(_BYTE *)(v4 + 2);
      v11 = *(_BYTE *)(v4 + 3);
      v12 = v6 + v5 + v11 + v10;
      v13 = v7 - v8;
      v14 = v10 - v11;
      *(_DWORD *)v3 = 4 * (v9 + v12 - 768);
      *((_DWORD *)v3 + 2) = (10033 * (v6 + v5 - (v11 + v10)) + 1024) >> 11;
      *((_DWORD *)v3 + 4) = (5793 * (v12 - v9 - v9) + 1024) >> 11;
      v15 = (2998 * (v10 - v11 + v5 - v6) + 1024) >> 11;
      *((_DWORD *)v3 + 1) = v15 + 4 * (v13 + v5 - v6);
      *((_DWORD *)v3 + 3) = 4 * (v5 - v6 - v13 - v14);
      *((_DWORD *)v3 + 5) = v15 + 4 * (v14 - v13);
      if ( ++v38 != 8 )
        break;
      v3 = &v39;
    }
    if ( v38 == 12 )
      break;
    v3 += 32;
  }
  result = a1;
  v17 = &v39;
  do
  {
    v18 = *(_DWORD *)result + *((_DWORD *)v17 + 24);
    v19 = *((_DWORD *)result + 8) + *((_DWORD *)v17 + 16);
    v20 = *((_DWORD *)result + 16) + *((_DWORD *)v17 + 8);
    v21 = *((_DWORD *)result + 24) + *(_DWORD *)v17;
    v22 = *((_DWORD *)result + 32) + *((_DWORD *)result + 56);
    v23 = *((_DWORD *)result + 40) + *((_DWORD *)result + 48);
    v24 = v23 + v18;
    v25 = v18 - v23;
    v26 = v21 + v20;
    v27 = v20 - v21;
    v28 = *(_DWORD *)result - *((_DWORD *)v17 + 24);
    v29 = *((_DWORD *)result + 8) - *((_DWORD *)v17 + 16);
    v30 = *((_DWORD *)result + 16) - *((_DWORD *)v17 + 8);
    v31 = *((_DWORD *)result + 24) - *(_DWORD *)v17;
    v32 = *((_DWORD *)result + 32) - *((_DWORD *)result + 56);
    v33 = *((_DWORD *)result + 40) - *((_DWORD *)result + 48);
    *(_DWORD *)result = (7282 * (v26 + v24 + v19 + v22) + 0x4000) >> 15;
    *((_DWORD *)result + 48) = (7282 * (v25 - (v19 - v22) - v27) + 0x4000) >> 15;
    *((_DWORD *)result + 32) = (8918 * (v24 - v26) + 0x4000) >> 15;
    *((_DWORD *)result + 16) = (9947 * (v25 + v27) + 7282 * (v19 - v22 - v27) + 0x4000) >> 15;
    v34 = 3941 * (v29 + v32);
    v35 = v34 + 5573 * v29;
    v36 = v34 - 13455 * v32;
    v37 = -1344 * (v31 + v30);
    *((_DWORD *)result + 8) = (v35 + 8170 * (v28 + v30) + 1344 * v33 - 4229 * v28 + 0x4000 + 6269 * (v31 + v28)) >> 15;
    *((_DWORD *)result + 24) = (v36 - 3941 * (v33 + v30) + 0x4000 + 9514 * (v28 - v31)) >> 15;
    *((_DWORD *)result + 40) = (v37 + 8170 * (v28 + v30) + 6269 * v33 + -17036 * v30 + 0x4000 - v36) >> 15;
    *((_DWORD *)result + 56) = (v37 + 6269 * (v31 + v28) + 5285 * v31 - 8170 * v33 + 0x4000 - v35) >> 15;
    result = (char *)result + 4;
    v17 += 4;
  }
  while ( v17 != &v40 );
  return result;
}
