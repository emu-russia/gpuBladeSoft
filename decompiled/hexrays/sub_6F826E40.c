int __usercall sub_6F826E40@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebp@1
  int v3; // eax@1
  int v4; // ecx@1
  int v5; // edi@1
  int v6; // esi@1
  int v7; // ST00_4@1
  int v8; // ecx@1
  int v9; // eax@1
  int v10; // ebx@1
  int v11; // edi@1
  int v12; // ST04_4@1
  int v13; // eax@1
  int v14; // ecx@1
  int v15; // eax@1
  int v16; // edi@1
  int v17; // ST08_4@1
  int v18; // eax@1
  int v19; // edx@1
  int v20; // ST0C_4@1
  int v21; // edi@1
  int v22; // esi@1
  int v23; // edx@1
  int v24; // ST10_4@1
  int v25; // ST14_4@1
  int v26; // ecx@1
  int v27; // eax@1
  int v28; // esi@1
  int v29; // ebx@1
  int v30; // eax@1
  int v31; // ST04_4@1
  int v32; // eax@1
  int v33; // ecx@1
  int v34; // ST00_4@1
  int v35; // edi@1
  int v36; // esi@1
  int v37; // edx@1
  int v38; // edi@1
  int v39; // esi@1
  int result; // eax@1

  v2 = a1;
  v3 = *(_WORD *)(a2 + 112);
  v4 = *(_WORD *)a2;
  v5 = *(_WORD *)(a2 + 16);
  v6 = v4 + v3;
  v7 = v4 - v3;
  v8 = *(_WORD *)(a2 + 96);
  v9 = v5 - v8;
  v10 = v5 + v8;
  v11 = *(_WORD *)(a2 + 80);
  v12 = v9;
  v13 = *(_WORD *)(a2 + 32);
  v14 = v13 + v11;
  v15 = v13 - v11;
  v16 = *(_WORD *)(a2 + 64);
  v17 = v15;
  v18 = *(_WORD *)(a2 + 48);
  v19 = v18 + v16;
  v20 = v18 - v16;
  v21 = v6 + v18 + v16;
  v22 = v6 - v19;
  v23 = v10 + v14;
  v24 = v22;
  v25 = v10 - v14;
  v26 = v17 + v12;
  v27 = ((v12 != v17) + v12 - v17 + ((27146 * (v12 - v17) + 46336) >> 16)) >> 1;
  v28 = v20 + v27;
  v29 = v20 - v27;
  v30 = 27146 * (v17 + v12);
  v31 = v28;
  v32 = ((v26 != 0) + v26 + ((v30 + 46336) >> 16)) >> 1;
  v33 = v32 + v7;
  v34 = v7 - v32;
  v35 = (v21 != 0) + v21 + ((27146 * v21 + 0x4000) >> 16);
  v36 = (v35 + (v23 != 0) + v23 + ((27146 * v23 + 46336) >> 16)) >> 1;
  *(_WORD *)v2 = v36;
  *(_WORD *)(v2 + 8) = v35 - v36;
  v37 = (v24 != 0) + ((25080 * v25 + 60547 * v24 + 27831) >> 16);
  *(_WORD *)(v2 + 4) = v37;
  *(_WORD *)(v2 + 12) = (25080 * v37 >> 16 != v25)
                      + ((unsigned int)(25080 * v37) >> 16)
                      - v25
                      + ((21600 * ((25080 * v37 >> 16) - v25) + 10240) >> 18);
  v38 = (v29 != 0) + ((36410 * v34 + 54491 * v29 + 3645) >> 16);
  *(_WORD *)(v2 + 10) = v38;
  *(_WORD *)(v2 + 6) = (v34 != 36410 * v38 >> 16)
                     + v34
                     - ((unsigned int)(36410 * v38) >> 16)
                     + ((26568 * (v34 - (36410 * v38 >> 16)) + 13312) >> 17);
  v39 = (v33 != 0) + ((12785 * v31 + 64277 * v33 + 31515) >> 16);
  *(_WORD *)(v2 + 2) = v39;
  result = 12785 * v39 >> 16 != v31;
  *(_WORD *)(v2 + 14) = result
                      + ((unsigned int)(12785 * v39) >> 16)
                      - v31
                      + ((20539 * ((12785 * v39 >> 16) - v31) + 12288) >> 20);
  return result;
}
