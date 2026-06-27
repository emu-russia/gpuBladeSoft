void __fastcall sub_6F684050(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  int v5; // esi@1
  float *v6; // eax@1
  int v7; // ecx@1
  double v8; // st7@2
  double v9; // st6@2
  double v10; // st5@2
  double v11; // st4@2
  double v12; // st7@3
  double v13; // st6@3
  double v14; // st5@3
  double v15; // st7@3
  double v16; // st4@3
  double v17; // rtt@4
  double v18; // st4@4
  double v19; // st7@4
  double v20; // rt0@5

  v4 = a1;
  v5 = a3;
  v6 = (float *)sub_6F961B40(16);
  v7 = a3 + 16 * a4;
  if ( 16 * a4 & 0x10
    && (v8 = *(float *)a3,
        v9 = *(float *)(a3 + 4),
        v5 = a3 + 16,
        v10 = *(float *)(a3 + 8),
        v11 = *(float *)(a3 + 12),
        *(float *)(v5 - 8) = *(float *)(v4 + 8) * v8
                           + *(float *)(v4 + 24) * v9
                           + *(float *)(v4 + 40) * v10
                           + *(float *)(v4 + 56),
        *(float *)(v5 - 12) = *(float *)(v4 + 4) * v8
                            + *(float *)(v4 + 20) * v9
                            + *(float *)(v4 + 36) * v10
                            + *(float *)(v4 + 52),
        *(float *)(v5 - 16) = *(float *)v4 * v8
                            + *(float *)(v4 + 16) * v9
                            + *(float *)(v4 + 32) * v10
                            + *(float *)(v4 + 48),
        a3 + 16 == v7) )
  {
    v20 = v11;
    v18 = v8;
    v19 = v20;
  }
  else
  {
    do
    {
      v12 = *(float *)v5;
      v13 = *(float *)(v5 + 4);
      v5 += 32;
      v14 = *(float *)(v5 - 24);
      *(float *)(v5 - 24) = *(float *)(v4 + 8) * v12
                          + *(float *)(v4 + 24) * v13
                          + *(float *)(v4 + 40) * v14
                          + *(float *)(v4 + 56);
      *(float *)(v5 - 28) = *(float *)(v4 + 4) * v12
                          + *(float *)(v4 + 20) * v13
                          + *(float *)(v4 + 36) * v14
                          + *(float *)(v4 + 52);
      *(float *)(v5 - 32) = v12 * *(float *)v4
                          + v13 * *(float *)(v4 + 16)
                          + v14 * *(float *)(v4 + 32)
                          + *(float *)(v4 + 48);
      v15 = *(float *)(v5 - 16);
      v9 = *(float *)(v5 - 12);
      v10 = *(float *)(v5 - 8);
      v16 = *(float *)(v5 - 4);
      *(float *)(v5 - 8) = *(float *)(v4 + 8) * v15
                         + *(float *)(v4 + 24) * v9
                         + *(float *)(v4 + 40) * v10
                         + *(float *)(v4 + 56);
      *(float *)(v5 - 12) = *(float *)(v4 + 4) * v15
                          + *(float *)(v4 + 20) * v9
                          + *(float *)(v4 + 36) * v10
                          + *(float *)(v4 + 52);
      *(float *)(v5 - 16) = *(float *)v4 * v15
                          + *(float *)(v4 + 16) * v9
                          + *(float *)(v4 + 32) * v10
                          + *(float *)(v4 + 48);
    }
    while ( v5 != v7 );
    v17 = v16;
    v18 = v15;
    v19 = v17;
  }
  *v6 = v18;
  v6[1] = v9;
  v6[2] = v10;
  v6[3] = v19;
  j_j_free_1(v6);
}
