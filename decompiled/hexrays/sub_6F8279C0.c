unsigned int __usercall sub_6F8279C0@<eax>(int a1@<ebp>, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // eax@1
  int v6; // edx@1
  int v7; // edi@2
  int v8; // esi@2
  int v9; // ebx@2
  __int16 v10; // cx@2
  int v11; // ebx@2
  __int16 v12; // cx@2
  int v13; // esi@2
  __int16 v14; // ST0C_2@2
  __int16 v15; // ST10_2@2
  int v16; // ebx@2
  int v17; // ecx@2
  int v18; // edi@2
  int v19; // ST24_4@2
  int v20; // ebx@2
  __int16 v21; // ST14_2@2
  int v22; // ecx@2
  int v23; // esi@2
  int v24; // ST1C_4@2
  int v25; // ST18_4@2
  int v26; // edi@2
  int v27; // ecx@2
  int v28; // esi@2
  int v29; // ST20_4@2
  int v31; // [sp+8h] [bp-20h]@1
  char v32; // [sp+28h] [bp+0h]@3

  v5 = a2;
  v6 = a3;
  v31 = 0;
  do
  {
    a1 += 2;
    v7 = *(_BYTE *)(v5 + 4);
    v8 = *(_BYTE *)(v6 + 4);
    v9 = *(_BYTE *)v5 - *(_BYTE *)v6;
    v10 = v9 + v7;
    v11 = v8 + v9 - v7;
    v12 = v10 - v8;
    v13 = *(_BYTE *)(v5 + 5);
    v14 = v12;
    v15 = v11;
    v16 = *(_BYTE *)(v6 + 5);
    v17 = *(_BYTE *)(v5 + 1) - *(_BYTE *)(v6 + 1);
    v18 = v17 + v13 - v16;
    v19 = v17 - v13 + v16;
    v20 = *(_BYTE *)(v6 + 6);
    v21 = v18;
    v22 = *(_BYTE *)(v5 + 2) - *(_BYTE *)(v6 + 2);
    v23 = *(_BYTE *)(v5 + 6);
    v24 = v20 + v22 - v23;
    v25 = v22 + v23 - v20;
    v26 = *(_BYTE *)(v5 + 7);
    v27 = *(_BYTE *)(v5 + 3) - *(_BYTE *)(v6 + 3);
    v28 = *(_BYTE *)(v6 + 7);
    LOWORD(v20) = v27 + v26 - v28;
    v29 = v27 - v26 + v28;
    *(_WORD *)(a1 + 14) = v25 + v14 - (v20 + v21);
    *(_WORD *)(a1 - 2) = v20 + v21 + v25 + v14;
    *(_WORD *)(a1 + 46) = v14 - v25 - (v21 - v20);
    *(_WORD *)(a1 + 30) = v21 - v20 + v14 - v25;
    ++v31;
    v5 += a4;
    v6 += a4;
    *(_WORD *)(a1 + 78) = v24 + v15 - (v19 + v29);
    *(_WORD *)(a1 + 62) = v19 + v29 + v24 + v15;
    *(_WORD *)(a1 + 110) = v15 - v24 - (v19 - v29);
    *(_WORD *)(a1 + 94) = v19 - v29 + v15 - v24;
  }
  while ( v31 != 8 );
  return sub_6F827840((int)&v32, a5);
}
