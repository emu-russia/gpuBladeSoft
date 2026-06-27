void *__cdecl sub_6F87DA70(void *a1, int a2, int a3)
{
  char *v3; // eax@1
  int v4; // edx@2
  int v5; // ebx@2
  int v6; // ecx@2
  int v7; // ST28_4@2
  int v8; // esi@2
  int v9; // ST24_4@2
  int v10; // esi@2
  int v11; // ST20_4@2
  int v12; // ST30_4@2
  int v13; // edi@2
  int v14; // ebx@2
  int v15; // edx@2
  int v16; // esi@2
  void *result; // eax@6
  int v18; // ST0C_4@7
  int v19; // esi@7
  int v20; // ebx@7
  int v21; // ST18_4@7
  int v22; // edx@7
  int v23; // edi@7
  int v24; // ST14_4@7
  int v25; // esi@7
  int v26; // ST10_4@7
  int v27; // ebx@7
  int v28; // ST00_4@7
  int v29; // ST2C_4@7
  int v30; // ST28_4@7
  int v31; // edx@7
  int v32; // ST24_4@7
  int v33; // ST30_4@7
  int v34; // ebx@7
  int v35; // edx@7
  char *v36; // [sp+1Ch] [bp-64h]@6
  int v37; // [sp+2Ch] [bp-54h]@1
  char v38; // [sp+34h] [bp-4Ch]@5
  char v39; // [sp+48h] [bp-38h]@7

  memset(a1, 0, 0x100u);
  v3 = (char *)a1;
  v37 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a2 + 4 * v37) + a3;
      v5 = *(_BYTE *)v4;
      v6 = *(_BYTE *)(v4 + 4);
      v7 = *(_BYTE *)(v4 + 1);
      v8 = *(_BYTE *)(v4 + 3);
      v9 = v8;
      v10 = v7 + v8;
      v11 = *(_BYTE *)(v4 + 2);
      v12 = v10 + v6 + v5;
      v13 = v6 + v5 - v10;
      v14 = v5 - v6;
      *(_DWORD *)v3 = 4 * (v11 + v12 - 640);
      v15 = 2896 * (v12 - 4 * v11);
      *((_DWORD *)v3 + 2) = (6476 * v13 + v15 + 1024) >> 11;
      *((_DWORD *)v3 + 4) = (6476 * v13 + 1024 - v15) >> 11;
      v16 = 6810 * (v7 - v9 + v14);
      *((_DWORD *)v3 + 1) = (v16 + 4209 * v14 + 1024) >> 11;
      *((_DWORD *)v3 + 3) = (v16 + -17828 * (v7 - v9) + 1024) >> 11;
      if ( ++v37 != 8 )
        break;
      v3 = &v38;
    }
    if ( v37 == 10 )
      break;
    v3 += 32;
  }
  result = a1;
  v36 = &v38;
  do
  {
    v18 = *((_DWORD *)v36 + 8);
    v19 = v18 + *(_DWORD *)result;
    v20 = *((_DWORD *)result + 8) + *(_DWORD *)v36;
    v21 = *((_DWORD *)result + 16) + *((_DWORD *)result + 56);
    v22 = *((_DWORD *)result + 24) + *((_DWORD *)result + 48);
    v23 = *((_DWORD *)result + 32) + *((_DWORD *)result + 40);
    v24 = v23 + v19;
    v25 = v19 - v23;
    v26 = v22 + v20;
    v27 = v20 - v22;
    v28 = *(_DWORD *)result - v18;
    v29 = *((_DWORD *)result + 8) - *(_DWORD *)v36;
    v30 = *((_DWORD *)result + 16) - *((_DWORD *)result + 56);
    v31 = *((_DWORD *)result + 24) - *((_DWORD *)result + 48);
    v32 = *((_DWORD *)result + 32) - *((_DWORD *)result + 40);
    *(_DWORD *)result = (10486 * (v21 + v26 + v24) + 0x4000) >> 15;
    *((_DWORD *)result + 32) = (11997 * (v24 - 2 * v21) + 4582 * (2 * v21 - v26) + 0x4000) >> 15;
    v33 = 8716 * (v27 + v25);
    *((_DWORD *)result + 16) = (v33 + 5387 * v25 + 0x4000) >> 15;
    *((_DWORD *)result + 48) = (v33 + -22820 * v27 + 0x4000) >> 15;
    *((_DWORD *)result + 40) = (10486 * (v28 + v32 - (v29 - v31) - v30) + 0x4000) >> 15;
    v30 *= 10486;
    *((_DWORD *)result + 8) = (v30 + 14647 * v28 + 0x4000 + 13213 * v29 + 2320 * v32 + 6732 * v31) >> 15;
    v34 = 5243 * (v29 - v31) - v30 + 3240 * (v28 + v32 + v29 - v31);
    v35 = -6163 * (v29 + v31) + 9973 * (v28 - v32) + 0x4000;
    *((_DWORD *)result + 24) = (v35 + v34) >> 15;
    *((_DWORD *)result + 56) = (v35 - v34) >> 15;
    result = (char *)result + 4;
    v36 += 4;
  }
  while ( v36 != &v39 );
  return result;
}
