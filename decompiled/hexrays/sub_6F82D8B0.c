int __usercall sub_6F82D8B0@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // ecx@1
  signed int v3; // ebx@1
  signed int v4; // esi@1
  int v5; // ecx@1
  signed int v6; // ST0C_4@1
  int v7; // ebx@1
  signed int v8; // ST00_4@1
  int v9; // ST10_4@1
  int v10; // ebp@1
  int v11; // ST04_4@1
  int v12; // esi@1
  int v13; // ebx@1
  __int16 v14; // ST14_2@1
  int v15; // edx@1
  int v16; // ecx@1
  __int16 v17; // ST08_2@1
  __int16 v18; // di@1

  v2 = *(_WORD *)(a2 + 4);
  v3 = 25080 * v2;
  v4 = 60547 * v2;
  v5 = *(_WORD *)(a2 + 2);
  v6 = v3 >> 16;
  v7 = *(_WORD *)(a2 + 6);
  v8 = v4 >> 16;
  v9 = 12785 * v5 >> 16;
  v10 = 46341 * *(_WORD *)a2 >> 16;
  v11 = 36410 * v7 >> 16;
  v12 = 54491 * v7 >> 16;
  v13 = 64277 * v5 >> 16;
  v14 = v13 + v12;
  v15 = 46341 * (signed __int16)(v11 + ((unsigned int)(12785 * v5) >> 16)) >> 16;
  v16 = 46341 * (signed __int16)(v13 - v12) >> 16;
  v17 = v10 + v8;
  v18 = v15 + v16;
  LOWORD(v16) = v16 - v15;
  *(_WORD *)result = v10 + v8 + v13 + v12;
  LOWORD(v12) = v6;
  LOWORD(v6) = v10 + v6;
  *(_WORD *)(result + 16) = v18 + v6;
  LOWORD(v13) = v10;
  LOWORD(v10) = v10 - v8;
  LOWORD(v13) = v13 - v12;
  *(_WORD *)(result + 32) = v16 + v13;
  *(_WORD *)(result + 80) = v13 - v16;
  *(_WORD *)(result + 96) = v6 - v18;
  *(_WORD *)(result + 48) = v9 - v11 + v10;
  *(_WORD *)(result + 64) = v10 - (v9 - v11);
  *(_WORD *)(result + 112) = v17 - v14;
  return result;
}
