unsigned int __cdecl sub_6F827B60(int a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // edx@1
  char *v6; // ebp@1
  int v7; // eax@1
  int v8; // ebx@2
  int v9; // ecx@2
  int v10; // edi@2
  int v11; // ST0C_4@2
  int v12; // ST10_4@2
  int v13; // ebx@2
  int v14; // ecx@2
  int v15; // esi@2
  int v16; // ST18_4@2
  int v17; // ST14_4@2
  int v18; // ebx@2
  int v19; // ecx@2
  int v20; // esi@2
  int v21; // ST20_4@2
  int v22; // ST1C_4@2
  int v23; // esi@2
  int v24; // ecx@2
  int v25; // edi@2
  int v26; // ecx@2
  int v28; // [sp+8h] [bp-B0h]@1
  char v29; // [sp+28h] [bp-90h]@1

  v5 = a3;
  v28 = 0;
  v6 = &v29;
  v7 = a2;
  do
  {
    v8 = (*(_BYTE *)(v5 + 4) + *(_BYTE *)(v7 + 4)) >> 1;
    v9 = *(_BYTE *)a1 - ((*(_BYTE *)v7 + *(_BYTE *)v5) >> 1);
    v10 = *(_BYTE *)(a1 + 4);
    v11 = v9 + v10 - v8;
    v12 = v8 + v9 - v10;
    v13 = (*(_BYTE *)(v5 + 5) + *(_BYTE *)(v7 + 5)) >> 1;
    v14 = *(_BYTE *)(a1 + 1) - ((*(_BYTE *)(v7 + 1) + *(_BYTE *)(v5 + 1)) >> 1);
    v15 = *(_BYTE *)(a1 + 5);
    v16 = v13 + v14 - v15;
    v17 = v14 + v15 - v13;
    v18 = (*(_BYTE *)(v5 + 6) + *(_BYTE *)(v7 + 6)) >> 1;
    v19 = *(_BYTE *)(a1 + 2) - ((*(_BYTE *)(v7 + 2) + *(_BYTE *)(v5 + 2)) >> 1);
    v20 = *(_BYTE *)(a1 + 6);
    v21 = v18 + v19 - v20;
    v22 = v19 + v20 - v18;
    v23 = (*(_BYTE *)(v7 + 7) + *(_BYTE *)(v5 + 7)) >> 1;
    v24 = *(_BYTE *)(a1 + 3) - ((*(_BYTE *)(v7 + 3) + *(_BYTE *)(v5 + 3)) >> 1);
    v25 = *(_BYTE *)(a1 + 7);
    LOWORD(v18) = v24 + v25;
    v26 = v23 + v24 - v25;
    LOWORD(v18) = v18 - v23;
    *((_WORD *)v6 + 8) = v22 + v11 - (v18 + v17);
    v6 += 2;
    *((_WORD *)v6 - 1) = v18 + v17 + v22 + v11;
    ++v28;
    LOWORD(v18) = v17 - v18;
    *((_WORD *)v6 + 23) = v11 - v22 - v18;
    *((_WORD *)v6 + 15) = v18 + v11 - v22;
    *((_WORD *)v6 + 39) = v21 + v12 - (v26 + v16);
    *((_WORD *)v6 + 31) = v26 + v16 + v21 + v12;
    *((_WORD *)v6 + 55) = v12 - v21 - (v16 - v26);
    *((_WORD *)v6 + 47) = v16 - v26 + v12 - v21;
    a1 += a4;
    v7 += a4;
    v5 += a4;
  }
  while ( v28 != 8 );
  return sub_6F827840((int)&v29, a5);
}
