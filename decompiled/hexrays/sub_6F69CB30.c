int __usercall sub_6F69CB30@<eax>(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edi@1
  size_t v2; // esi@1
  _DWORD *v3; // eax@1
  int v4; // edx@2
  _DWORD *v5; // ebx@2
  int v6; // ecx@2
  int v7; // ebp@2
  int v8; // edi@2
  int v9; // esi@2
  int v10; // edx@2
  int v11; // ecx@2
  int v12; // ebp@2
  int v13; // eax@2
  int v14; // edi@2
  int v15; // esi@2
  int v16; // edx@2
  int v17; // eax@2
  int v18; // ecx@2
  int v19; // ebp@2
  int v20; // eax@2
  int v21; // esi@2
  int v22; // ecx@2
  int v23; // ebp@2
  int v24; // edi@2
  int v25; // eax@2
  int v26; // esi@2
  int v27; // edx@2
  int v28; // ecx@2
  int v29; // ebp@2
  int v30; // edx@2
  int v31; // esi@2
  int v32; // ecx@2
  int v33; // edi@2
  int v34; // ebp@2
  int v35; // edx@2
  int v36; // esi@2
  int v37; // eax@2
  unsigned int v38; // edi@2
  float v39; // edx@2
  float v40; // ebp@2
  float v41; // esi@2
  unsigned int v42; // eax@2
  unsigned int v43; // ecx@2
  unsigned int v44; // esi@4
  unsigned int Code; // ST00_4@5
  int v46; // ecx@5
  _WORD *v47; // ebp@5
  __int16 v48; // ax@5

  v1 = a1;
  v2 = 2 * dword_6FBB51E0 * dword_6FBB51DC + 1273;
  v3 = malloc(v2);
  if ( !v3 )
  {
    nullsub_10();
    exit(1);
  }
  *v1 = v3;
  v4 = dword_6FD3FFC0[0];
  v5 = v3;
  v6 = dword_6FD3FFC4[0];
  v7 = dword_6FD3FFC8;
  *v3 = v2;
  v8 = dword_6FD3FFCC;
  v3[2] = v4;
  v3[3] = v6;
  v9 = dword_6FD3FFD4;
  v3[4] = v7;
  v10 = dword_6FD3FFD8;
  v3[5] = v8;
  v11 = dword_6FD3FFDC;
  v3[1] = 1;
  v12 = dword_6FD3FFE0;
  v13 = dword_6FD3FFD0;
  v14 = dword_6FD3FFE4;
  v5[7] = v9;
  v5[8] = v10;
  v15 = dword_6FD3FFEC;
  v16 = dword_6FD3FFF0;
  v5[6] = v13;
  v5[9] = v11;
  v17 = dword_6FD3FFE8;
  v18 = dword_6FD3FFF4;
  v5[10] = v12;
  v19 = dword_6FD3FFF8;
  v5[11] = v14;
  v5[12] = v17;
  v5[13] = v15;
  v5[14] = v16;
  v5[15] = v18;
  v5[16] = v19;
  v20 = dword_6FD40968;
  v21 = dword_6FD40964;
  LOBYTE(v16) = byte_6FD40960;
  v22 = dword_6FBBDB70;
  v5[17] = dword_6FD3FFFC;
  v23 = dword_6FBBDB74;
  v24 = dword_6FBBDB78;
  v5[18] = v20;
  v5[19] = v21;
  v25 = dword_6FBBDB7C;
  v26 = dword_6FBBDB80;
  *((_BYTE *)v5 + 80) = v16;
  *(_DWORD *)((char *)v5 + 81) = v22;
  v27 = dword_6FBBDB84;
  v28 = dword_6FBBDB88;
  *(_DWORD *)((char *)v5 + 85) = v23;
  v29 = dword_6FBBDB8C;
  *(_DWORD *)((char *)v5 + 89) = v24;
  *(_DWORD *)((char *)v5 + 101) = v27;
  *(_DWORD *)((char *)v5 + 105) = v28;
  *(_DWORD *)((char *)v5 + 109) = v29;
  *(_DWORD *)((char *)v5 + 93) = v25;
  *(_DWORD *)((char *)v5 + 97) = v26;
  *(_DWORD *)((char *)v5 + 113) = dword_6FBBDB90;
  *(_DWORD *)((char *)v5 + 189) = dword_6FBBDBDC;
  qmemcpy(
    (void *)(((unsigned int)v5 + 117) & 0xFFFFFFFC),
    (const void *)((char *)&dword_6FBBDB90 - ((char *)v5 + -(((unsigned int)v5 + 117) & 0xFFFFFFFC) + 113)),
    4 * (((unsigned int)v5 + -(((unsigned int)v5 + 117) & 0xFFFFFFFC) + 193) >> 2));
  *(_DWORD *)((char *)v5 + 193) = dword_6FD40120;
  v30 = dword_6FD40128;
  v31 = dword_6FD4012C;
  v32 = dword_6FD40130;
  v33 = dword_6FD40134;
  *(_DWORD *)((char *)v5 + 197) = dword_6FD40124;
  v34 = dword_6FD40138;
  *(_DWORD *)((char *)v5 + 201) = v30;
  *(_DWORD *)((char *)v5 + 205) = v31;
  v35 = dword_6FBB97A0;
  v36 = *(_DWORD *)&word_6FBB979C;
  v37 = dword_6FD4013C;
  *(_DWORD *)((char *)v5 + 209) = v32;
  *(_DWORD *)((char *)v5 + 225) = v35;
  *(_DWORD *)((char *)v5 + 229) = v36;
  *(_DWORD *)((char *)v5 + 213) = v33;
  *(_DWORD *)((char *)v5 + 217) = v34;
  *(_DWORD *)((char *)v5 + 221) = v37;
  *(_DWORD *)((char *)v5 + 233) = dword_6FD40160[0];
  *(_DWORD *)((char *)v5 + 1253) = dword_6FD4055C;
  qmemcpy(
    (void *)(((unsigned int)v5 + 237) & 0xFFFFFFFC),
    (const void *)((char *)dword_6FD40160 - ((char *)v5 + -(((unsigned int)v5 + 237) & 0xFFFFFFFC) + 233)),
    4 * (((unsigned int)v5 + -(((unsigned int)v5 + 237) & 0xFFFFFFFC) + 1257) >> 2));
  v38 = 0;
  v39 = flt_6FCFFFA0;
  v40 = flt_6FCFFFA4;
  v41 = flt_6FCFFFA8;
  *(float *)((char *)v5 + 1257) = flt_6FCFFF9C;
  v42 = dword_6FBB51E0;
  *(float *)((char *)v5 + 1261) = v39;
  v43 = dword_6FBB51DC;
  *(float *)((char *)v5 + 1265) = v40;
  *(float *)((char *)v5 + 1269) = v41;
  if ( v42 )
  {
    do
    {
      if ( v43 )
      {
        v44 = 0;
        do
        {
          Code = v44;
          v46 = v44++ + v38 * v43;
          v47 = (_DWORD *)((char *)v5 + 2 * v46 + 1273);
          v48 = dword_6FBB51E4(Code, v38);
          v43 = dword_6FBB51DC;
          *v47 = v48;
        }
        while ( v43 > v44 );
        v42 = dword_6FBB51E0;
      }
      else if ( ++v38 >= v42 )
      {
        return 0;
      }
      ++v38;
    }
    while ( v38 < v42 );
  }
  return 0;
}
