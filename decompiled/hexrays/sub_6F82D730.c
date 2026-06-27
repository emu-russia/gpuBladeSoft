int __usercall sub_6F82D730@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // edi@1
  __int16 v3; // bx@1
  int v4; // ecx@1
  int v5; // esi@1
  int v6; // ST00_4@1
  int v7; // ST10_4@1
  int v8; // ebp@1
  signed int v9; // ebx@1
  int v10; // esi@1
  int v11; // ecx@1
  int v12; // eax@1
  __int16 v13; // ST08_2@1
  int v14; // esi@1
  int v15; // ST04_4@1
  int v16; // ST0C_4@1
  int v17; // ST14_4@1
  int v18; // ebx@1
  int v19; // esi@1
  int v20; // edx@1
  __int16 v21; // ST18_2@1
  int v22; // ecx@1
  int v23; // eax@1
  int result; // eax@1

  v2 = a1;
  v3 = *(_WORD *)(a2 + 8);
  v4 = *(_WORD *)(a2 + 4);
  v5 = *(_WORD *)(a2 + 12);
  v6 = 46341 * (signed __int16)(v3 + *(_WORD *)a2) >> 16;
  v7 = 46341 * (signed __int16)(*(_WORD *)a2 - v3) >> 16;
  v8 = 25080 * v4 >> 16;
  v9 = 60547 * v5;
  v10 = (60547 * v4 >> 16) + (25080 * v5 >> 16);
  v11 = *(_WORD *)(a2 + 2);
  v12 = *(_WORD *)(a2 + 14);
  v13 = v10;
  v14 = *(_WORD *)(a2 + 10);
  v15 = v8 - (v9 >> 16);
  v16 = *(_WORD *)(a2 + 6);
  v17 = (12785 * v11 >> 16) - (64277 * v12 >> 16);
  v18 = (54491 * v14 >> 16) - (36410 * v16 >> 16);
  v19 = (54491 * v16 >> 16) + (36410 * v14 >> 16);
  v20 = v19 + (64277 * v11 >> 16) + (12785 * v12 >> 16);
  LOWORD(v12) = ((unsigned int)(64277 * v11) >> 16) + ((unsigned int)(12785 * v12) >> 16) - v19;
  v21 = v20;
  *(_WORD *)v2 = v13 + v6 + v20;
  v22 = 46341 * (signed __int16)(v17 - v18) >> 16;
  v23 = 46341 * (signed __int16)v12 >> 16;
  LOWORD(v20) = v22 + v23;
  result = v23 - v22;
  *(_WORD *)(v2 + 16) = v7 + v15 + v20;
  *(_WORD *)(v2 + 32) = result + v7 - v15;
  LOWORD(v18) = v17 + v18;
  *(_WORD *)(v2 + 80) = v7 - v15 - result;
  *(_WORD *)(v2 + 96) = v7 + v15 - v20;
  *(_WORD *)(v2 + 48) = v18 + v6 - v13;
  *(_WORD *)(v2 + 64) = v6 - v13 - v18;
  *(_WORD *)(v2 + 112) = v13 + v6 - v21;
  return result;
}
