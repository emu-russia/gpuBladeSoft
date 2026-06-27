int __cdecl sub_6F88A394(int a1, int a2, int a3, int a4, int a5)
{
  __int16 v5; // dx@3
  __int16 v6; // bx@4
  int v7; // edx@5
  int v8; // eax@5
  int v9; // ebx@5
  int v10; // ST28_4@5
  int v11; // ebx@5
  int v12; // esi@5
  int v13; // eax@5
  int v14; // ecx@5
  int v15; // eax@5
  int v16; // ST1C_4@5
  int v17; // ST18_4@5
  int v18; // ST14_4@5
  int v19; // ST10_4@5
  int v20; // edx@5
  int v21; // eax@5
  int v22; // ST00_4@5
  int v23; // ST2C_4@5
  int v24; // ST28_4@5
  int v25; // ST24_4@5
  int v26; // ebx@5
  int v27; // ST20_4@5
  int v28; // ST2C_4@5
  int v29; // edx@5
  int v30; // ebx@5
  int v31; // edx@5
  int result; // eax@7
  int v33; // ecx@8
  int v34; // ebx@8
  int v35; // ST34_4@8
  int v36; // ST30_4@8
  int v37; // edx@8
  int v38; // ST38_4@8
  int v39; // ST3C_4@8
  int v40; // ecx@8
  int v41; // ebx@8
  int v42; // eax@20
  __int16 v43; // [sp+6h] [bp-C6h]@2
  int v44; // [sp+8h] [bp-C4h]@1
  __int16 v45; // [sp+Eh] [bp-BEh]@4
  __int16 v46; // [sp+1Ch] [bp-B0h]@4
  __int16 v47; // [sp+20h] [bp-ACh]@4
  __int16 v48; // [sp+24h] [bp-A8h]@4
  char *v49; // [sp+30h] [bp-9Ch]@1
  int v50; // [sp+34h] [bp-98h]@1
  int v51; // [sp+38h] [bp-94h]@1
  int v52; // [sp+3Ch] [bp-90h]@1
  char v53[140]; // [sp+40h] [bp-8Ch]@1

  v44 = *(_DWORD *)(a1 + 292) + 128;
  v51 = *(_DWORD *)(a2 + 84);
  v52 = a3;
  v49 = v53;
  v50 = 0;
  do
  {
    v43 = *(_WORD *)(v52 + 16);
    if ( v43 )
    {
      v5 = *(_WORD *)(v52 + 32);
      v6 = *(_WORD *)(v52 + 96);
      v46 = *(_WORD *)(v52 + 64);
      v45 = *(_WORD *)(v52 + 112);
      v47 = *(_WORD *)(v52 + 80);
      v48 = *(_WORD *)(v52 + 48);
      goto LABEL_5;
    }
    v5 = *(_WORD *)(v52 + 32);
    if ( v5 )
    {
      v6 = *(_WORD *)(v52 + 96);
      v46 = *(_WORD *)(v52 + 64);
      v45 = *(_WORD *)(v52 + 112);
      v47 = *(_WORD *)(v52 + 80);
      v48 = *(_WORD *)(v52 + 48);
LABEL_5:
      v7 = *(_DWORD *)(v51 + v50 + 64) * v5;
      v8 = *(_DWORD *)(v51 + v50 + 192) * v6;
      v9 = 4433 * (v8 + v7);
      v10 = v9 + 6270 * v7;
      v11 = v9 - 15137 * v8;
      v12 = *(_DWORD *)(v51 + v50 + 128) * v46 << 13;
      v13 = (*(_DWORD *)(v51 + v50) * *(_WORD *)v52 << 13) + 1024;
      v14 = v12 + v13;
      v15 = v13 - v12;
      v16 = v14 + v10;
      v17 = v14 - v10;
      v18 = v11 + v15;
      v19 = v15 - v11;
      v20 = *(_DWORD *)(v51 + v50 + 224) * v45;
      v21 = *(_DWORD *)(v51 + v50 + 160) * v47;
      v22 = *(_DWORD *)(v51 + v50 + 96) * v48;
      v23 = *(_DWORD *)(v51 + v50 + 32) * v43;
      v24 = 9633 * (v20 + v22 + v21 + v23) - 16069 * (v20 + v22);
      v25 = 9633 * (v20 + v22 + v21 + v23) + -3196 * (v21 + v23);
      v26 = -7373 * (v20 + v23);
      v27 = v24 + v26 + 2446 * v20;
      v28 = v25 + 12299 * v23 + v26;
      v29 = -20995 * (v21 + v22);
      v30 = v25 + v29 + 16819 * v21;
      v31 = v24 + v29 + 25172 * v22;
      *(_DWORD *)v49 = (v16 + v28) >> 11;
      *((_DWORD *)v49 + 28) = (v16 - v28) >> 11;
      *((_DWORD *)v49 + 4) = (v31 + v18) >> 11;
      *((_DWORD *)v49 + 24) = (v18 - v31) >> 11;
      *((_DWORD *)v49 + 8) = (v30 + v19) >> 11;
      *((_DWORD *)v49 + 20) = (v19 - v30) >> 11;
      *((_DWORD *)v49 + 12) = (v17 + v27) >> 11;
      *((_DWORD *)v49 + 16) = (v17 - v27) >> 11;
      goto LABEL_6;
    }
    v48 = *(_WORD *)(v52 + 48);
    if ( v48 )
    {
      v6 = *(_WORD *)(v52 + 96);
      v46 = *(_WORD *)(v52 + 64);
      v45 = *(_WORD *)(v52 + 112);
      v47 = *(_WORD *)(v52 + 80);
      goto LABEL_5;
    }
    v46 = *(_WORD *)(v52 + 64);
    if ( v46 )
    {
      v6 = *(_WORD *)(v52 + 96);
      v45 = *(_WORD *)(v52 + 112);
      v47 = *(_WORD *)(v52 + 80);
      goto LABEL_5;
    }
    v47 = *(_WORD *)(v52 + 80);
    if ( v47 )
    {
      v6 = *(_WORD *)(v52 + 96);
      v45 = *(_WORD *)(v52 + 112);
      goto LABEL_5;
    }
    v6 = *(_WORD *)(v52 + 96);
    if ( v6 )
    {
      v45 = *(_WORD *)(v52 + 112);
      goto LABEL_5;
    }
    v45 = *(_WORD *)(v52 + 112);
    if ( v45 )
      goto LABEL_5;
    v42 = 4 * *(_DWORD *)(v51 + v50) * *(_WORD *)v52;
    *(_DWORD *)v49 = v42;
    *((_DWORD *)v49 + 4) = v42;
    *((_DWORD *)v49 + 8) = v42;
    *((_DWORD *)v49 + 12) = v42;
    *((_DWORD *)v49 + 16) = v42;
    *((_DWORD *)v49 + 20) = v42;
    *((_DWORD *)v49 + 24) = v42;
    *((_DWORD *)v49 + 28) = v42;
LABEL_6:
    v52 += 2;
    v50 += 4;
    v49 += 4;
  }
  while ( v50 != 16 );
  result = 0;
  do
  {
    v33 = *(_DWORD *)&v53[4 * result] + 16;
    v34 = *(_DWORD *)&v53[4 * result + 8];
    v35 = (v34 + v33) << 13;
    v36 = (v33 - v34) << 13;
    v37 = *(_DWORD *)&v53[4 * result + 12];
    v38 = 4433 * (v37 + *(_DWORD *)&v53[4 * result + 4]);
    v39 = v38 + 6270 * *(_DWORD *)&v53[4 * result + 4];
    v40 = v38 - 15137 * v37;
    v41 = *(_DWORD *)(a4 + result) + a5;
    *(_BYTE *)v41 = *(_BYTE *)(v44 + (((v35 + v39) >> 18) & 0x3FF));
    *(_BYTE *)(v41 + 3) = *(_BYTE *)(v44 + (((v35 - v39) >> 18) & 0x3FF));
    *(_BYTE *)(v41 + 1) = *(_BYTE *)(v44 + (((v40 + v36) >> 18) & 0x3FF));
    *(_BYTE *)(v41 + 2) = *(_BYTE *)(v44 + (((v36 - v40) >> 18) & 0x3FF));
    result += 4;
  }
  while ( result != 32 );
  return result;
}
