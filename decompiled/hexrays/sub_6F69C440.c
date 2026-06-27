unsigned int __usercall sub_6F69C440@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // edx@1
  char v3; // al@1
  int v4; // ecx@1
  int v5; // esi@1
  int v6; // edi@1
  int v7; // edx@1
  int v8; // eax@1
  int v9; // edx@1
  int v10; // ecx@1
  int v11; // esi@1
  int v12; // edi@1
  int v13; // eax@1
  int v14; // edx@1
  int v15; // eax@1
  int v16; // edx@1
  int v17; // ecx@1
  int v18; // edi@1
  float v19; // eax@1
  double v20; // st7@1
  int v21; // esi@1
  unsigned int result; // eax@1
  int v23; // ecx@1
  int v24; // edi@1
  int v25; // ST28_4@1
  int v26; // ST2C_4@1
  int v27; // edx@2
  unsigned int v28; // edi@2
  unsigned int v29; // esi@4
  int v30; // eax@5
  unsigned int v31; // ST00_4@5
  unsigned int v32; // esi@10
  unsigned int v33; // ebx@12
  void (__cdecl *v34)(unsigned int, unsigned int, int); // edi@13
  unsigned __int16 v35; // ax@13
  unsigned int v36; // ST00_4@13
  double v37; // st7@23
  float v38; // [sp+1Ch] [bp-20h]@1
  float v39; // [sp+24h] [bp-18h]@1

  v1 = a1;
  dword_6FD3FFC0[0] = *(_DWORD *)(a1 + 8);
  dword_6FD3FFC4[0] = *(_DWORD *)(a1 + 12);
  dword_6FD3FFC8 = *(_DWORD *)(a1 + 16);
  dword_6FD3FFCC = *(_DWORD *)(a1 + 20);
  dword_6FD3FFD0 = *(_DWORD *)(a1 + 24);
  dword_6FD3FFD4 = *(_DWORD *)(a1 + 28);
  dword_6FD3FFD8 = *(_DWORD *)(a1 + 32);
  dword_6FD3FFDC = *(_DWORD *)(a1 + 36);
  dword_6FD3FFE0 = *(_DWORD *)(a1 + 40);
  dword_6FD3FFE4 = *(_DWORD *)(a1 + 44);
  dword_6FD3FFE8 = *(_DWORD *)(a1 + 48);
  dword_6FD3FFEC = *(_DWORD *)(a1 + 52);
  dword_6FD3FFF0 = *(_DWORD *)(a1 + 56);
  dword_6FD3FFF4 = *(_DWORD *)(a1 + 60);
  dword_6FD3FFF8 = *(_DWORD *)(a1 + 64);
  dword_6FD3FFFC = *(_DWORD *)(a1 + 68);
  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_BYTE *)(a1 + 80);
  v4 = *(_DWORD *)(v1 + 76);
  v5 = *(_DWORD *)(v1 + 81);
  v6 = *(_DWORD *)(v1 + 85);
  dword_6FD40968 = v2;
  v7 = *(_DWORD *)(v1 + 89);
  byte_6FD40960 = v3;
  v8 = *(_DWORD *)(v1 + 97);
  dword_6FD40964 = v4;
  dword_6FBBDB78 = v7;
  v9 = *(_DWORD *)(v1 + 109);
  v10 = *(_DWORD *)(v1 + 93);
  dword_6FBBDB70 = v5;
  dword_6FBBDB74 = v6;
  v11 = *(_DWORD *)(v1 + 101);
  v12 = *(_DWORD *)(v1 + 105);
  dword_6FBBDB80 = v8;
  dword_6FBBDB8C = v9;
  v13 = *(_DWORD *)(v1 + 193);
  v14 = *(_DWORD *)(v1 + 197);
  dword_6FBBDB7C = v10;
  dword_6FBBDB84 = v11;
  dword_6FBBDB88 = v12;
  qmemcpy(&dword_6FBBDB90, (const void *)(v1 + 113), 0x50u);
  dword_6FD40120 = v13;
  dword_6FD40124 = v14;
  v15 = *(_DWORD *)(v1 + 213);
  v16 = *(_DWORD *)(v1 + 217);
  v17 = *(_DWORD *)(v1 + 205);
  v18 = *(_DWORD *)(v1 + 209);
  dword_6FD40128 = *(_DWORD *)(v1 + 201);
  dword_6FD40134 = v15;
  v19 = *(float *)(v1 + 1257);
  dword_6FD40138 = v16;
  v20 = v19;
  v21 = *(_DWORD *)(v1 + 221);
  result = dword_6FBB51E0;
  v39 = *(float *)(v1 + 1261);
  dword_6FD4012C = v17;
  v23 = *(_DWORD *)(v1 + 225);
  dword_6FD40130 = v18;
  v24 = *(_DWORD *)(v1 + 229);
  v38 = v20;
  dword_6FD4013C = v21;
  dword_6FBB97A0 = v23;
  *(_DWORD *)&word_6FBB979C = v24;
  qmemcpy(dword_6FD40160, (const void *)(v1 + 233), 0x400u);
  v25 = *(_DWORD *)(v1 + 1265);
  v26 = *(_DWORD *)(v1 + 1269);
  if ( !dword_6FBB51E0 )
    goto LABEL_16;
  v27 = dword_6FBB51DC;
  v28 = 0;
  do
  {
    if ( v27 )
    {
      v29 = 0;
      do
      {
        v30 = *(_WORD *)(v1 + 2 * (v29 + v28 * v27) + 1273);
        v31 = v29++;
        dword_6FBB51EC(v31, v28, v30);
        v27 = dword_6FBB51DC;
      }
      while ( dword_6FBB51DC > v29 );
      result = dword_6FBB51E0;
      goto LABEL_7;
    }
    if ( ++v28 >= result )
      break;
LABEL_7:
    ++v28;
  }
  while ( v28 < result );
  if ( dword_6FBB52FC && result )
  {
    v32 = 0;
    do
    {
      if ( v27 )
      {
        v33 = 0;
        do
        {
          v34 = (void (__cdecl *)(unsigned int, unsigned int, int))dword_6FD3FFB0;
          v35 = dword_6FBB51E4(v33, v32);
          v36 = v33++;
          v34(v36, v32, dword_6FCFFFB0[v35]);
          v27 = dword_6FBB51DC;
        }
        while ( dword_6FBB51DC > v33 );
        result = dword_6FBB51E0;
      }
      else if ( ++v32 >= result )
      {
        break;
      }
      ++v32;
    }
    while ( v32 < result );
  }
LABEL_16:
  if ( dword_6FBB84D8 )
  {
    result = GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
    if ( v38 > 0.00000011920929 )
    {
      v37 = 0.0;
      if ( 0.0 != v38 )
        v37 = (double)dword_6FD400C4 * 0.0125;
      LODWORD(flt_6FCFFFA4) = 1106247680;
      flt_6FCFFF9C = v37;
    }
    if ( v39 > 0.00000011920929 )
    {
      LODWORD(flt_6FCFFFA8) = 1106247680;
      flt_6FCFFFA0 = v39 * (double)dword_6FD400C4 * 0.000196078431372549;
    }
  }
  return result;
}
