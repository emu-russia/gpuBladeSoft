int __usercall sub_6F7AF760@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  int v4; // ebx@1
  int v5; // edx@2
  int v6; // esi@2
  int v7; // edi@2
  int v8; // eax@2
  int v9; // esi@2
  int v10; // edi@2
  int v11; // edi@2
  int v12; // ecx@2
  int v13; // edx@2
  int v14; // edi@2
  int v15; // esi@2
  int v16; // eax@2
  int v17; // edi@2
  int v18; // ecx@2
  int v19; // edx@2
  int v20; // eax@2
  int v21; // edi@2
  int v22; // esi@2
  int v23; // eax@2
  int v24; // edi@2
  int v25; // eax@2
  int v26; // eax@2
  unsigned int v27; // edi@3
  int v28; // eax@3
  unsigned int v29; // esi@3
  unsigned int v30; // edi@4
  unsigned int v31; // esi@4
  int v32; // eax@5
  int v33; // ebp@5
  int v34; // edi@5
  int v35; // ecx@5
  int v36; // eax@5
  int v37; // edx@5
  int v38; // esi@5
  int v39; // eax@5
  int v40; // eax@5
  int v41; // ST2C_4@5
  int v42; // eax@5
  int result; // eax@5
  int v44; // [sp+3Ch] [bp-20h]@7

  v3 = a2;
  v4 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  if ( a3 )
  {
    v5 = a3;
    *(_DWORD *)(a1 + 396) = *(_DWORD *)(a3 + 116);
    *(_DWORD *)(a1 + 400) = *(_DWORD *)(a3 + 120);
    *(_DWORD *)(a1 + 408) = *(_DWORD *)(a3 + 128);
    *(_DWORD *)(a1 + 412) = *(_DWORD *)(a3 + 132);
    *(_DWORD *)(a1 + 404) = *(_DWORD *)(a3 + 124);
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(a3 + 136);
    *(_DWORD *)(a1 + 244) = *(_DWORD *)(a3 + 72);
    *(_DWORD *)(a1 + 248) = *(_DWORD *)(a3 + 76);
    *(_DWORD *)(a1 + 252) = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(a1 + 256) = *(_DWORD *)(a3 + 84);
    *(_DWORD *)(a1 + 260) = *(_DWORD *)(a3 + 88);
    *(_DWORD *)(a1 + 264) = *(_DWORD *)(a3 + 92);
    *(_DWORD *)(a1 + 268) = *(_DWORD *)(a3 + 96);
    *(_DWORD *)(a1 + 272) = *(_DWORD *)(a3 + 100);
    *(_DWORD *)(a1 + 276) = *(_DWORD *)(a3 + 104);
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(a3 + 108);
    v6 = *(_DWORD *)(a3 + 148);
    v7 = *(_DWORD *)(a3 + 152);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a3 + 44);
    *(_DWORD *)(a1 + 220) = *(_DWORD *)(a3 + 48);
    *(_DWORD *)(a1 + 224) = *(_DWORD *)(a3 + 52);
    *(_DWORD *)(a1 + 228) = *(_DWORD *)(a3 + 56);
    *(_DWORD *)(a1 + 232) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(a1 + 236) = *(_DWORD *)(a3 + 64);
    *(_DWORD *)(a1 + 240) = *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a1 + 420) = *(_DWORD *)(a3 + 140);
    v8 = *(_DWORD *)(a3 + 144);
    *(_DWORD *)(v4 + 444) = v6;
    *(_DWORD *)(v4 + 448) = v7;
    v9 = *(_DWORD *)(a3 + 156);
    v10 = *(_DWORD *)(a3 + 160);
    *(_DWORD *)(v4 + 424) = v8;
    *(_DWORD *)(v4 + 452) = v9;
    *(_DWORD *)(v4 + 456) = v10;
    v11 = *(_DWORD *)(a3 + 168);
    *(_DWORD *)(v4 + 460) = *(_DWORD *)(a3 + 164);
    *(_DWORD *)(v4 + 464) = v11;
    qmemcpy((void *)(v4 + 284), (const void *)(a3 + 172), 0x44u);
    *(_DWORD *)(v4 + 380) = *(_DWORD *)(a3 + 240);
    *(_DWORD *)(v4 + 384) = *(_DWORD *)(a3 + 244);
    *(_WORD *)(v4 + 468) = *(_WORD *)(a3 + 248);
    *(_DWORD *)(v4 + 472) = *(_DWORD *)(a3 + 252);
    *(_DWORD *)(v4 + 180) = *(_DWORD *)(a3 + 256);
    *(_DWORD *)(v4 + 184) = *(_DWORD *)(a3 + 260);
    *(_DWORD *)(v4 + 188) = *(_DWORD *)(a3 + 264);
    *(_DWORD *)(v4 + 192) = *(_DWORD *)(a3 + 268);
    *(_DWORD *)(v4 + 196) = *(_DWORD *)(a3 + 272);
    *(_DWORD *)(v4 + 200) = *(_DWORD *)(a3 + 276);
    *(_DWORD *)(v4 + 204) = *(_DWORD *)(a3 + 280);
    v12 = *(_DWORD *)(a3 + 284);
    v13 = *(_DWORD *)(v5 + 288);
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(v4 + 68) = 0;
    *(_DWORD *)(v4 + 208) = v12;
    *(_DWORD *)(v4 + 212) = v13;
    memset((void *)((v4 + 40) & 0xFFFFFFFC), 0, 4 * ((v4 + 36 - ((v4 + 40) & 0xFFFFFFFC) + 36) >> 2));
    v14 = *(_DWORD *)(v4 + 36);
    v15 = *(_DWORD *)(v4 + 40);
    *(_DWORD *)(v4 + 72) = v14;
    *(_DWORD *)(v4 + 76) = v15;
    v16 = *(_DWORD *)(v4 + 44);
    *(_DWORD *)(v4 + 108) = v14;
    v17 = *(_DWORD *)(v4 + 44);
    v18 = *(_DWORD *)(v4 + 60);
    v19 = *(_DWORD *)(v4 + 64);
    *(_DWORD *)(v4 + 112) = v15;
    *(_DWORD *)(v4 + 80) = v16;
    v20 = *(_DWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 116) = v17;
    v21 = *(_DWORD *)(v4 + 48);
    v22 = *(_DWORD *)(v4 + 56);
    *(_DWORD *)(v4 + 96) = v18;
    *(_DWORD *)(v4 + 84) = v20;
    v23 = *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v4 + 120) = v21;
    v24 = *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v4 + 100) = v19;
    *(_DWORD *)(v4 + 128) = v22;
    *(_DWORD *)(v4 + 88) = v23;
    v25 = *(_DWORD *)(v4 + 56);
    *(_DWORD *)(v4 + 124) = v24;
    *(_DWORD *)(v4 + 132) = v18;
    *(_DWORD *)(v4 + 136) = v19;
    *(_DWORD *)(v4 + 92) = v25;
    v26 = *(_DWORD *)(v4 + 68);
    *(_DWORD *)(v4 + 104) = v26;
    *(_DWORD *)(v4 + 140) = v26;
  }
  v27 = *(_DWORD *)(v4 + 20);
  v28 = *(_DWORD *)(v4 + 8);
  v29 = *(_WORD *)(v3 + 284) + 32;
  if ( v27 < v29 )
  {
    *(_DWORD *)(v4 + 24) = sub_6F773B30(v28, 1, 4 * v27, 4 * v29, *(char **)(v4 + 24), &v44);
    result = v44;
    if ( v44 )
    {
      *(_DWORD *)(v4 + 20) = v27;
      return result;
    }
    v28 = *(_DWORD *)(v4 + 8);
    v27 = v29;
  }
  *(_DWORD *)(v4 + 20) = v27;
  v30 = *(_WORD *)(v3 + 286);
  v31 = *(_DWORD *)(v4 + 388);
  if ( v31 >= v30 )
    goto LABEL_5;
  *(_DWORD *)(v4 + 392) = sub_6F773B30(v28, 1, v31, *(_WORD *)(v3 + 286), *(char **)(v4 + 392), &v44);
  result = v44;
  if ( !v44 )
  {
    LOWORD(v31) = v30;
LABEL_5:
    *(_WORD *)(v4 + 152) = 0;
    v32 = *(_DWORD *)(v4 + 160);
    v33 = *(_DWORD *)(v4 + 144);
    v34 = *(_DWORD *)(v4 + 148);
    v35 = *(_DWORD *)(v4 + 156);
    *(_WORD *)(v4 + 154) = 0;
    *(_DWORD *)(v4 + 88) = v32;
    v36 = *(_DWORD *)(v4 + 164);
    v37 = *(_DWORD *)(v4 + 172);
    *(_DWORD *)(v4 + 388) = (unsigned __int16)v31;
    v38 = *(_DWORD *)(v4 + 152);
    *(_DWORD *)(v4 + 72) = v33;
    *(_DWORD *)(v4 + 92) = v36;
    v39 = *(_DWORD *)(v4 + 168);
    *(_DWORD *)(v4 + 76) = v34;
    *(_DWORD *)(v4 + 84) = v35;
    *(_DWORD *)(v4 + 80) = v38;
    *(_DWORD *)(v4 + 100) = v37;
    *(_DWORD *)(v4 + 96) = v39;
    v40 = *(_DWORD *)(v4 + 176);
    *(_DWORD *)(v4 + 108) = v33;
    *(_DWORD *)(v4 + 112) = v34;
    *(_DWORD *)(v4 + 116) = v38;
    *(_DWORD *)(v4 + 120) = v35;
    v41 = v40;
    *(_DWORD *)(v4 + 104) = v40;
    *(_DWORD *)(v4 + 124) = *(_DWORD *)(v4 + 160);
    *(_DWORD *)(v4 + 128) = *(_DWORD *)(v4 + 164);
    *(_DWORD *)(v4 + 132) = *(_DWORD *)(v4 + 168);
    *(_DWORD *)(v4 + 136) = v37;
    *(_DWORD *)(v4 + 36) = v33;
    *(_DWORD *)(v4 + 40) = v34;
    *(_DWORD *)(v4 + 44) = v38;
    *(_DWORD *)(v4 + 48) = v35;
    *(_DWORD *)(v4 + 64) = v37;
    *(_DWORD *)(v4 + 140) = v40;
    v42 = *(_DWORD *)(v4 + 160);
    *(_BYTE *)(v4 + 488) = 0;
    *(_DWORD *)(v4 + 52) = v42;
    *(_DWORD *)(v4 + 56) = *(_DWORD *)(v4 + 164);
    *(_DWORD *)(v4 + 60) = *(_DWORD *)(v4 + 168);
    *(_DWORD *)(v4 + 68) = v41;
    return 0;
  }
  *(_DWORD *)(v4 + 388) = v31;
  return result;
}
