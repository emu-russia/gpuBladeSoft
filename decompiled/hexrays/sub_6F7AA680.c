int __usercall sub_6F7AA680@<eax>(int a1@<eax>, char a2@<dl>)
{
  int v2; // ebx@1
  int v3; // eax@3
  int v4; // edx@4
  int v5; // ecx@4
  int v6; // edx@4
  int v7; // ebp@5
  int v8; // edi@5
  int v9; // esi@5
  int v10; // eax@6
  int v11; // edx@6
  int v12; // ebp@6
  int v13; // eax@6
  int v14; // edi@6
  int v15; // ST1C_4@6
  int v16; // edi@6
  int v17; // ecx@6
  int v18; // ST20_4@6
  int v19; // edx@6
  int v20; // esi@6
  int v21; // edi@6
  int v22; // ST24_4@6
  int v23; // edi@6
  int v24; // ST28_4@6
  int v25; // edi@6
  int v26; // edi@6
  int v27; // edi@6
  int v28; // edi@6
  int v29; // edx@6
  int v30; // edx@6
  int result; // eax@6
  int v32; // edx@6
  int v33; // edx@9
  int v34; // edx@9
  int v35; // edi@9
  int v36; // esi@9
  int v37; // eax@9
  char v38; // [sp+1Ch] [bp-30h]@1
  int v39; // [sp+20h] [bp-2Ch]@5
  int v40; // [sp+24h] [bp-28h]@1
  _BYTE *v41; // [sp+2Ch] [bp-20h]@6

  v2 = a1;
  v38 = a2;
  v40 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 140);
  if ( v40 > 0 )
    memcpy(*(void **)(a1 + 136), *(const void **)(a1 + 140), 8 * *(_WORD *)(a1 + 132));
  qmemcpy((void *)(*(_DWORD *)(v2 + 160) + 284), (const void *)(*(_DWORD *)(v2 + 4) + 172), 0x44u);
  v3 = *(_DWORD *)(v2 + 160);
  if ( v38 )
  {
    *(_DWORD *)(v3 + 220) = 0x10000;
    *(_DWORD *)(v3 + 224) = 0x10000;
    memcpy(*(void **)(v2 + 144), *(const void **)(v2 + 140), 8 * *(_WORD *)(v2 + 132));
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = *(_DWORD *)(v4 + 48);
    v6 = *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v3 + 220) = v5;
    *(_DWORD *)(v3 + 224) = v6;
  }
  v7 = *(_DWORD *)(v2 + 140) + 8 * *(_WORD *)(v2 + 132) - 32;
  v8 = v7 + 8;
  v9 = v7 + 16;
  *(_DWORD *)v7 = (*(_DWORD *)v7 + 32) & 0xFFFFFFC0;
  *(_DWORD *)v8 = (*(_DWORD *)v8 + 32) & 0xFFFFFFC0;
  *(_DWORD *)(v7 + 20) = (*(_DWORD *)(v7 + 20) + 32) & 0xFFFFFFC0;
  v39 = v7 + 24;
  *(_DWORD *)(v7 + 28) = (*(_DWORD *)(v7 + 28) + 32) & 0xFFFFFFC0;
  if ( v40 <= 0 )
    goto LABEL_9;
  v41 = *(_BYTE **)(*(_DWORD *)(v2 + 12) + 64);
  v10 = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v10 + 464) = v40;
  v11 = *(_DWORD *)(v10 + 392);
  *(_BYTE *)(v10 + 560) = v38;
  *(_DWORD *)(v10 + 460) = v11;
  v12 = *(_DWORD *)(v2 + 124);
  v13 = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v13 + 144) = v12;
  v14 = *(_DWORD *)(v2 + 128);
  *(_DWORD *)(v13 + 148) = v14;
  v15 = v14;
  v16 = *(_DWORD *)(v2 + 132);
  *(_DWORD *)(v13 + 152) = v16;
  v17 = *(_DWORD *)(v2 + 136);
  v18 = v16;
  *(_DWORD *)(v13 + 156) = v17;
  v19 = *(_DWORD *)(v2 + 140);
  *(_DWORD *)(v13 + 160) = v19;
  v20 = *(_DWORD *)(v2 + 144);
  *(_DWORD *)(v13 + 164) = v20;
  v21 = *(_DWORD *)(v2 + 148);
  *(_DWORD *)(v13 + 168) = v21;
  v22 = v21;
  v23 = *(_DWORD *)(v2 + 152);
  *(_DWORD *)(v13 + 172) = v23;
  v24 = v23;
  v25 = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v13 + 140) = v25;
  *(_DWORD *)(v13 + 176) = v25;
  v26 = *(_DWORD *)(v13 + 460);
  *(_DWORD *)(v13 + 36) = v12;
  *(_DWORD *)(v13 + 48) = v17;
  *(_DWORD *)(v13 + 52) = v19;
  *(_DWORD *)(v13 + 56) = v20;
  *(_DWORD *)(v13 + 72) = v12;
  *(_DWORD *)(v13 + 356) = v26;
  v27 = *(_DWORD *)(v13 + 464);
  *(_DWORD *)(v13 + 84) = v17;
  *(_DWORD *)(v13 + 88) = v19;
  *(_DWORD *)(v13 + 92) = v20;
  *(_DWORD *)(v13 + 360) = 0;
  *(_DWORD *)(v13 + 364) = v27;
  *(_DWORD *)(v13 + 352) = 3;
  *(_DWORD *)(v13 + 40) = v15;
  *(_DWORD *)(v13 + 44) = v18;
  *(_DWORD *)(v13 + 60) = v22;
  *(_DWORD *)(v13 + 64) = v24;
  *(_DWORD *)(v13 + 68) = *(_DWORD *)(v13 + 140);
  *(_DWORD *)(v13 + 76) = v15;
  *(_DWORD *)(v13 + 80) = v18;
  *(_DWORD *)(v13 + 96) = v22;
  *(_DWORD *)(v13 + 100) = v24;
  v28 = *(_DWORD *)(v13 + 140);
  *(_DWORD *)(v13 + 108) = v12;
  *(_DWORD *)(v13 + 124) = v19;
  *(_DWORD *)(v13 + 128) = v20;
  *(_DWORD *)(v13 + 104) = v28;
  *(_DWORD *)(v13 + 112) = v15;
  *(_WORD *)(v13 + 344) = 1;
  *(_DWORD *)(v13 + 136) = v24;
  *(_DWORD *)(v13 + 120) = v17;
  *(_DWORD *)(v13 + 116) = v18;
  *(_WORD *)(v13 + 294) = 0x4000;
  *(_WORD *)(v13 + 296) = 0;
  v29 = *(_DWORD *)(v13 + 294);
  *(_DWORD *)(v13 + 132) = v22;
  *(_WORD *)(v13 + 346) = 1;
  *(_WORD *)(v13 + 348) = 1;
  *(_DWORD *)(v13 + 312) = 1;
  *(_DWORD *)(v13 + 298) = v29;
  *(_DWORD *)(v13 + 290) = v29;
  v30 = *(_DWORD *)v13;
  *(_DWORD *)(v13 + 304) = 1;
  *(_DWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 428) = 0;
  result = (*(int (__cdecl **)(int))(v30 + 652))(v13);
  v32 = *(_DWORD *)(v2 + 160);
  if ( !result || !*(_BYTE *)(v32 + 561) )
  {
    *v41 |= (unsigned __int8)(32 * *(_BYTE *)(v32 + 340)) | 4;
    v7 = *(_DWORD *)(v2 + 140) + 8 * *(_WORD *)(v2 + 132) - 32;
    v8 = v7 + 8;
    v9 = v7 + 16;
    v39 = v7 + 24;
LABEL_9:
    v33 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v2 + 68) = *(_DWORD *)v7;
    *(_DWORD *)(v2 + 72) = v33;
    v34 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v2 + 76) = *(_DWORD *)v8;
    *(_DWORD *)(v2 + 80) = v34;
    v35 = *(_DWORD *)(v9 + 4);
    v36 = *(_DWORD *)v9;
    *(_DWORD *)(v2 + 188) = v35;
    *(_DWORD *)(v2 + 184) = v36;
    v37 = *(_DWORD *)v39;
    *(_DWORD *)(v2 + 196) = *(_DWORD *)(v39 + 4);
    *(_DWORD *)(v2 + 192) = v37;
    result = 0;
  }
  return result;
}
