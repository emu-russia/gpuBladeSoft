int __cdecl sub_6F87E43C(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi@1
  int v6; // ecx@1
  char *v7; // edx@1
  int result; // eax@1
  double v9; // st7@6
  double v10; // st6@6
  double v11; // st5@6
  double v12; // st4@6
  double v13; // st3@6
  double v14; // st7@6
  double v15; // st5@6
  double v16; // rt2@6
  double v17; // st3@6
  double v18; // st7@6
  double v19; // rt0@6
  float v20; // ST18_4@6
  double v21; // st6@6
  float v22; // ST14_4@6
  double v23; // st5@6
  double v24; // st4@6
  double v25; // st3@6
  double v26; // st2@6
  double v27; // st1@6
  double v28; // st4@6
  double v29; // st3@6
  double v30; // st1@6
  double v31; // st5@6
  double v32; // st2@6
  double v33; // st1@6
  double v34; // st0@6
  double v35; // st3@6
  double v36; // rt2@6
  double v37; // st0@6
  double v38; // st4@6
  double v39; // rt0@6
  double v40; // rt2@6
  int v41; // edx@13
  double v42; // st7@13
  double v43; // st5@13
  double v44; // st7@13
  double v45; // st6@13
  double v46; // st4@13
  double v47; // st2@13
  double v48; // st7@13
  double v49; // rt0@13
  float v50; // ST18_4@13
  float v51; // ST14_4@13
  float v52; // ST10_4@13
  double v53; // st4@13
  double v54; // st5@13
  double v55; // st2@13
  double v56; // st3@13
  double v57; // st2@13
  double v58; // st0@13
  double v59; // st5@13
  double v60; // rt1@13
  double v61; // rt2@13
  double v62; // st6@13
  double v63; // st3@13
  double v64; // st5@13
  signed int v65; // ST20_4@13
  double v66; // rt2@13
  double v67; // st7@19
  signed __int16 v68; // [sp+2h] [bp-132h]@8
  int v69; // [sp+4h] [bp-130h]@1
  signed __int16 v70; // [sp+Ah] [bp-12Ah]@5
  signed __int16 v71; // [sp+Ch] [bp-128h]@5
  signed __int16 v72; // [sp+Eh] [bp-126h]@5
  signed __int16 v73; // [sp+10h] [bp-124h]@3
  signed __int16 v74; // [sp+14h] [bp-120h]@4
  signed __int16 v75; // [sp+18h] [bp-11Ch]@2
  char v76[268]; // [sp+28h] [bp-10Ch]@1

  v5 = *(_DWORD *)(a2 + 84);
  v6 = a3;
  v7 = v76;
  result = 0;
  v69 = *(_DWORD *)(a1 + 292);
  do
  {
    v68 = *(_WORD *)(v6 + 16);
    if ( v68 )
    {
      v75 = *(_WORD *)(v6 + 32);
LABEL_10:
      v74 = *(_WORD *)(v6 + 64);
      v71 = *(_WORD *)(v6 + 96);
      v73 = *(_WORD *)(v6 + 48);
      v72 = *(_WORD *)(v6 + 80);
LABEL_11:
      v70 = *(_WORD *)(v6 + 112);
LABEL_6:
      v9 = (double)*(signed __int16 *)v6 * *(float *)(v5 + result);
      v10 = (double)v75 * *(float *)(v5 + result + 64);
      v11 = (double)v74 * *(float *)(v5 + result + 128);
      v12 = (double)v71 * *(float *)(v5 + result + 192);
      v13 = v9;
      v14 = v9 + v11;
      v15 = v13 - v11;
      v16 = v10 + v12;
      v17 = v14;
      v18 = v14 + v16;
      v19 = (v10 - v12) * 1.4142135 - v16;
      v20 = v17 - v16;
      v21 = v15 + v19;
      v22 = v15 - v19;
      v23 = (double)v68 * *(float *)(v5 + result + 32);
      v24 = (double)v73 * *(float *)(v5 + result + 96);
      v25 = (double)v72 * *(float *)(v5 + result + 160);
      v26 = (double)v70 * *(float *)(v5 + result + 224);
      v27 = v24;
      v28 = v25 + v24;
      v29 = v25 - v27;
      v30 = v23;
      v31 = v23 + v26;
      v32 = v30 - v26;
      v33 = v31 + v28;
      v34 = v29;
      v35 = (v29 + v32) * 1.847759;
      v36 = v35 - v34 * 2.613126 - (v31 + v28);
      v37 = v28;
      v38 = v36;
      v39 = (v31 - v37) * 1.4142135 - v36;
      *(float *)v7 = v18 + v33;
      v40 = v35 - v32 * 1.0823922 - v39;
      *((float *)v7 + 56) = v18 - v33;
      *((float *)v7 + 8) = v21 + v38;
      *((float *)v7 + 48) = v21 - v38;
      *((float *)v7 + 16) = v22 + v39;
      *((float *)v7 + 40) = v22 - v39;
      *((float *)v7 + 24) = v20 + v40;
      *((float *)v7 + 32) = v20 - v40;
      goto LABEL_7;
    }
    v75 = *(_WORD *)(v6 + 32);
    if ( v75 )
      goto LABEL_10;
    v73 = *(_WORD *)(v6 + 48);
    if ( v73 )
    {
      v74 = *(_WORD *)(v6 + 64);
LABEL_5:
      v71 = *(_WORD *)(v6 + 96);
      v72 = *(_WORD *)(v6 + 80);
      v70 = *(_WORD *)(v6 + 112);
      goto LABEL_6;
    }
    v74 = *(_WORD *)(v6 + 64);
    if ( v74 )
      goto LABEL_5;
    v72 = *(_WORD *)(v6 + 80);
    if ( v72 )
    {
      v71 = *(_WORD *)(v6 + 96);
      v70 = *(_WORD *)(v6 + 112);
      goto LABEL_6;
    }
    v71 = *(_WORD *)(v6 + 96);
    if ( v71 )
      goto LABEL_11;
    v70 = *(_WORD *)(v6 + 112);
    if ( v70 )
      goto LABEL_6;
    v67 = (double)*(signed __int16 *)v6 * *(float *)(v5 + result);
    *(float *)v7 = v67;
    *((float *)v7 + 8) = v67;
    *((float *)v7 + 16) = v67;
    *((float *)v7 + 24) = v67;
    *((float *)v7 + 32) = v67;
    *((float *)v7 + 40) = v67;
    *((float *)v7 + 48) = v67;
    *((float *)v7 + 56) = v67;
LABEL_7:
    v6 += 2;
    result += 4;
    v7 += 4;
  }
  while ( result != 32 );
  LOBYTE(result) = 0;
  do
  {
    v41 = *(_DWORD *)(a4 + result) + a5;
    v42 = *(float *)&v76[8 * result] + 128.5;
    v43 = v42;
    v44 = *(float *)&v76[8 * result + 16] + v42;
    v45 = v43 - *(float *)&v76[8 * result + 16];
    v46 = *(float *)&v76[8 * result + 8] + *(float *)&v76[8 * result + 24];
    v47 = v44;
    v48 = v44 + v46;
    v49 = (*(float *)&v76[8 * result + 8] - *(float *)&v76[8 * result + 24]) * 1.4142135 - v46;
    v50 = v47 - v46;
    v51 = v45 + v49;
    v52 = v45 - v49;
    v53 = *(float *)&v76[8 * result + 20] + *(float *)&v76[8 * result + 12];
    v54 = *(float *)&v76[8 * result + 20] - *(float *)&v76[8 * result + 12];
    v55 = *(float *)&v76[8 * result + 28];
    v56 = *(float *)&v76[8 * result + 4] + v55;
    v57 = *(float *)&v76[8 * result + 4] - v55;
    v58 = v54;
    v59 = (v54 + v57) * 1.847759;
    v60 = v59 - v58 * 2.613126 - (v56 + v53);
    v61 = v56 + v53;
    v62 = 1.4142135 * (v56 - v53) - v60;
    v63 = v59 - v57 * 1.0823922;
    v64 = v61;
    v65 = (signed int)(v48 + v61);
    v66 = v63 - v62;
    *(_BYTE *)v41 = *(_BYTE *)(v69 + (v65 & 0x3FF));
    *(_BYTE *)(v41 + 7) = *(_BYTE *)(v69 + ((signed int)(v48 - v64) & 0x3FF));
    *(_BYTE *)(v41 + 1) = *(_BYTE *)(v69 + ((signed int)(v51 + v60) & 0x3FF));
    *(_BYTE *)(v41 + 6) = *(_BYTE *)(v69 + ((signed int)(v51 - v60) & 0x3FF));
    *(_BYTE *)(v41 + 2) = *(_BYTE *)(v69 + ((signed int)(v52 + v62) & 0x3FF));
    *(_BYTE *)(v41 + 5) = *(_BYTE *)(v69 + ((signed int)(v52 - v62) & 0x3FF));
    *(_BYTE *)(v41 + 3) = *(_BYTE *)(v69 + ((signed int)(v50 + v66) & 0x3FF));
    *(_BYTE *)(v41 + 4) = *(_BYTE *)(v69 + ((signed int)(v50 - v66) & 0x3FF));
    result += 4;
  }
  while ( result != 32 );
  return result;
}
