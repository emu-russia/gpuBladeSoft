int __fastcall sub_6F6841C0(int a1, int a2, int a3, int a4)
{
  int result; // eax@1
  double v5; // st6@1
  double v6; // st7@1
  float v7; // ST10_4@1
  float v8; // ST14_4@1
  float v9; // ST18_4@1
  double v10; // rt2@1
  float v11; // ST1C_4@1
  float v12; // ST00_4@1
  float v13; // ST04_4@1
  float v14; // ST20_4@1
  float v15; // ST24_4@1
  float v16; // ST08_4@1
  float v17; // ST0C_4@1
  float v18; // ST28_4@1
  float v19; // ST2C_4@1
  double v20; // st5@1
  double v21; // st6@1
  float v22; // ST30_4@1
  double v23; // rt0@1
  float v24; // ST34_4@1
  float v25; // ST38_4@1
  double v26; // st5@1
  double v27; // st4@1
  double v28; // st3@1
  double v29; // st2@1

  result = a1;
  v5 = *(float *)(a4 + 48);
  v6 = *(float *)(a4 + 56);
  v7 = *(float *)(a3 + 12);
  v8 = *(float *)(a3 + 28);
  v9 = *(float *)(a3 + 44);
  v10 = *(float *)(a4 + 52);
  v11 = v7 * v5 + v8 * v10 + v9 * v6 + *(float *)(a3 + 60);
  v12 = *(float *)(a3 + 8);
  v13 = *(float *)(a3 + 24);
  v14 = *(float *)(a3 + 40);
  v15 = v12 * v5 + v13 * v10 + v14 * v6 + *(float *)(a3 + 56);
  v16 = *(float *)(a3 + 4);
  v17 = *(float *)(a3 + 20);
  v18 = *(float *)(a3 + 36);
  v19 = v16 * v5 + v17 * v10 + v18 * v6 + *(float *)(a3 + 52);
  v20 = v5 * *(float *)a3 + v10 * *(float *)(a3 + 16);
  v21 = *(float *)(a3 + 16);
  v22 = *(float *)(a3 + 32);
  v23 = *(float *)a3;
  v24 = v20 + v6 * v22 + *(float *)(a3 + 48);
  v25 = *(float *)(a4 + 40);
  v26 = *(float *)(a4 + 16);
  v27 = *(float *)(a4 + 20);
  v28 = *(float *)a4;
  v29 = *(float *)(a4 + 4);
  *(float *)a1 = v23 * v28 + v21 * v29;
  *(float *)(a1 + 4) = v16 * v28 + v17 * v29;
  *(float *)(a1 + 8) = v12 * v28 + v13 * v29;
  *(float *)(a1 + 12) = v29 * v8 + v28 * v7;
  *(float *)(a1 + 16) = v23 * v26 + v21 * v27;
  *(float *)(a1 + 20) = v16 * v26 + v17 * v27;
  *(float *)(a1 + 24) = v12 * v26 + v13 * v27;
  *(float *)(a1 + 28) = v7 * v26 + v8 * v27;
  *(float *)(a1 + 32) = v22 * v25;
  *(float *)(a1 + 36) = v18 * v25;
  *(float *)(a1 + 40) = v14 * v25;
  *(float *)(a1 + 44) = v25 * v9;
  *(float *)(a1 + 48) = v24;
  *(float *)(a1 + 52) = v19;
  *(float *)(a1 + 56) = v15;
  *(float *)(a1 + 60) = v11;
  return result;
}
