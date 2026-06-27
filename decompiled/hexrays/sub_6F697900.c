int __usercall sub_6F697900@<eax>(int ebp0@<ebp>, unsigned int a1, int a2)
{
  int result; // eax@8
  size_t v4; // ebx@10
  _DWORD *v5; // eax@10
  _DWORD *v6; // ebx@10
  int v7; // esi@11
  int v8; // edi@11
  int v9; // edx@11
  int v10; // ebp@11
  int v11; // ecx@11
  int v12; // esi@11
  int v13; // eax@11
  int v14; // edi@11
  int v15; // edx@11
  int v16; // ebp@11
  int v17; // ecx@11
  int v18; // eax@11
  int v19; // esi@11
  int v20; // edi@11
  int v21; // edx@11
  int v22; // ebp@11
  int v23; // ecx@11
  int v24; // esi@11
  int v25; // edi@11
  int v26; // eax@11
  int v27; // ebp@11
  int v28; // ecx@11
  int v29; // edx@11
  int v30; // esi@11
  int v31; // edi@11
  int v32; // eax@11
  int v33; // ebp@11
  int v34; // esi@11
  int v35; // edi@11
  int v36; // ecx@11
  int v37; // eax@11
  int v38; // edx@11
  int v39; // ebp@11
  float v40; // eax@11
  float v41; // ebp@11
  float v42; // ecx@11
  unsigned int v43; // edx@11
  int v44; // eax@12
  int v45; // edi@12
  unsigned int v46; // esi@14
  unsigned int Code; // ST00_4@15
  int v48; // eax@15
  int v49; // edi@18
  int v50; // ebx@21
  int v51; // esi@22
  char v52; // dl@22
  int v53; // ecx@22
  int v54; // edi@22
  int v55; // ebp@22
  int v56; // eax@22
  int v57; // esi@22
  int v58; // edx@22
  int v59; // ecx@22
  int v60; // edi@22
  int v61; // ebp@22
  int v62; // eax@22
  int v63; // edx@22
  int v64; // esi@22
  int v65; // ebp@22
  int v66; // eax@22
  int v67; // edi@22
  int v68; // edx@22
  float v69; // ebp@22
  float v70; // eax@22
  double v71; // st7@22
  int v72; // esi@22
  unsigned int v73; // ebp@22
  double v74; // st7@22
  int v75; // eax@22
  int v76; // edx@22
  int v77; // ST2C_4@22
  int v78; // edi@23
  unsigned int v79; // ebp@25
  int v80; // ecx@26
  unsigned int v81; // ST00_4@26
  unsigned int v82; // esi@31
  unsigned int v83; // edi@33
  void (__cdecl *v84)(unsigned int, unsigned int, int); // ebp@34
  unsigned __int16 v85; // ax@34
  unsigned int v86; // ST00_4@34
  double v87; // st7@39
  float v88; // [sp+18h] [bp-34h]@22
  float v89; // [sp+1Ch] [bp-30h]@22

  if ( a1 == 2 )
  {
    v50 = *(_DWORD *)a2;
    if ( **(_DWORD **)a2 != 1 )
      return 0;
    dword_6FD3FFC0[0] = *(_DWORD *)(v50 + 4);
    dword_6FD3FFC4[0] = *(_DWORD *)(v50 + 8);
    dword_6FD3FFC8 = *(_DWORD *)(v50 + 12);
    dword_6FD3FFCC = *(_DWORD *)(v50 + 16);
    dword_6FD3FFD0 = *(_DWORD *)(v50 + 20);
    dword_6FD3FFD4 = *(_DWORD *)(v50 + 24);
    dword_6FD3FFD8 = *(_DWORD *)(v50 + 28);
    dword_6FD3FFDC = *(_DWORD *)(v50 + 32);
    dword_6FD3FFE0 = *(_DWORD *)(v50 + 36);
    dword_6FD3FFE4 = *(_DWORD *)(v50 + 40);
    dword_6FD3FFE8 = *(_DWORD *)(v50 + 44);
    dword_6FD3FFEC = *(_DWORD *)(v50 + 48);
    dword_6FD3FFF0 = *(_DWORD *)(v50 + 52);
    dword_6FD3FFF4 = *(_DWORD *)(v50 + 56);
    dword_6FD3FFF8 = *(_DWORD *)(v50 + 60);
    dword_6FD3FFFC = *(_DWORD *)(v50 + 64);
    v51 = *(_DWORD *)(v50 + 72);
    v52 = *(_BYTE *)(v50 + 76);
    v53 = *(_DWORD *)(v50 + 77);
    v54 = *(_DWORD *)(v50 + 81);
    dword_6FD40968 = *(_DWORD *)(v50 + 68);
    v55 = *(_DWORD *)(v50 + 85);
    v56 = *(_DWORD *)(v50 + 89);
    dword_6FD40964 = v51;
    byte_6FD40960 = v52;
    v57 = *(_DWORD *)(v50 + 93);
    v58 = *(_DWORD *)(v50 + 97);
    dword_6FBBDB70 = v53;
    dword_6FBBDB74 = v54;
    v59 = *(_DWORD *)(v50 + 101);
    v60 = *(_DWORD *)(v50 + 105);
    dword_6FBBDB78 = v55;
    dword_6FBBDB7C = v56;
    v61 = *(_DWORD *)(v50 + 189);
    v62 = *(_DWORD *)(v50 + 193);
    dword_6FBBDB80 = v57;
    dword_6FBBDB84 = v58;
    v63 = *(_DWORD *)(v50 + 197);
    dword_6FBBDB88 = v59;
    dword_6FBBDB8C = v60;
    qmemcpy(&dword_6FBBDB90, (const void *)(v50 + 109), 0x50u);
    v64 = *(_DWORD *)(v50 + 201);
    dword_6FD40120 = v61;
    dword_6FD40124 = v62;
    dword_6FD40128 = v63;
    dword_6FD4012C = v64;
    v65 = *(_DWORD *)(v50 + 213);
    v66 = *(_DWORD *)(v50 + 217);
    v67 = *(_DWORD *)(v50 + 209);
    v68 = *(_DWORD *)(v50 + 221);
    dword_6FD40130 = *(_DWORD *)(v50 + 205);
    dword_6FD40138 = v65;
    v69 = *(float *)(v50 + 1253);
    dword_6FD4013C = v66;
    v70 = *(float *)(v50 + 1257);
    v71 = v69;
    v72 = *(_DWORD *)(v50 + 225);
    dword_6FD40134 = v67;
    v73 = dword_6FBB51E0;
    v89 = v71;
    v74 = v70;
    v75 = dword_6FBB51DC;
    dword_6FBB97A0 = v68;
    v76 = *(_DWORD *)(v50 + 1261);
    *(_DWORD *)&word_6FBB979C = v72;
    qmemcpy(dword_6FD40160, (const void *)(v50 + 229), 0x400u);
    v88 = v74;
    v77 = *(_DWORD *)(v50 + 1265);
    if ( !dword_6FBB51E0 )
      goto LABEL_37;
    v78 = 0;
    while ( 1 )
    {
      if ( v75 )
      {
        v79 = 0;
        do
        {
          v80 = *(_WORD *)(v50 + 2 * (v79 + v78 * v75) + 1269);
          v81 = v79++;
          dword_6FBB51EC(v81, v78, v80);
          v75 = dword_6FBB51DC;
        }
        while ( dword_6FBB51DC > v79 );
        v73 = dword_6FBB51E0;
      }
      else if ( ++v78 >= v73 )
      {
LABEL_29:
        if ( dword_6FBB52FC && v73 )
        {
          v82 = 0;
          do
          {
            if ( v75 )
            {
              v83 = 0;
              do
              {
                v84 = (void (__cdecl *)(unsigned int, unsigned int, int))dword_6FD3FFB0;
                v85 = dword_6FBB51E4(v83, v82);
                v86 = v83++;
                v84(v86, v82, dword_6FCFFFB0[v85]);
                v75 = dword_6FBB51DC;
              }
              while ( dword_6FBB51DC > v83 );
              v73 = dword_6FBB51E0;
            }
            else if ( ++v82 >= v73 )
            {
              break;
            }
            ++v82;
          }
          while ( v82 < v73 );
        }
LABEL_37:
        dword_6FCFFF70(*(_DWORD *)(v50 + 2 * v73 * v75 + 1269), dword_6FCFFF74);
        if ( dword_6FBB84D8 )
        {
          GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
          if ( v89 > 0.00000011920929 )
          {
            v87 = 0.0;
            if ( 0.0 != v89 )
              v87 = (double)dword_6FD400C4 * 0.0125;
            LODWORD(flt_6FCFFFA4) = 1106247680;
            flt_6FCFFF9C = v87;
          }
          if ( v88 > 0.00000011920929 )
          {
            LODWORD(flt_6FCFFFA8) = 1106247680;
            flt_6FCFFFA0 = v88 * (double)dword_6FD400C4 * 0.000196078431372549;
          }
        }
        return 0;
      }
      if ( ++v78 >= v73 )
        goto LABEL_29;
    }
  }
  if ( a1 <= 2 )
  {
    if ( a1 )
      return 0;
    v4 = 2 * dword_6FBB51E0 * dword_6FBB51DC + 1273;
    *(_DWORD *)(a2 + 4) = v4;
    v5 = malloc(v4);
    v6 = v5;
    if ( !v5 )
    {
      nullsub_10();
      exit(1);
    }
    *(_DWORD *)a2 = v5;
    v7 = dword_6FD3FFC0[0];
    v8 = dword_6FD3FFC4[0];
    v9 = dword_6FD3FFC8;
    *v5 = 1;
    v5[1] = v7;
    v10 = dword_6FD3FFD0;
    v5[2] = v8;
    v11 = dword_6FD3FFD4;
    v5[3] = v9;
    v12 = dword_6FD3FFD8;
    v13 = dword_6FD3FFCC;
    v14 = dword_6FD3FFDC;
    v6[5] = v10;
    v15 = dword_6FD3FFE0;
    v16 = dword_6FD3FFE8;
    v6[6] = v11;
    v6[4] = v13;
    v17 = dword_6FD3FFEC;
    v6[7] = v12;
    v18 = dword_6FD3FFE4;
    v19 = dword_6FD3FFF0;
    v6[8] = v14;
    v6[9] = v15;
    v20 = dword_6FD3FFF4;
    v21 = dword_6FD3FFF8;
    v6[11] = v16;
    v6[12] = v17;
    v6[13] = v19;
    v6[14] = v20;
    v6[15] = v21;
    v6[10] = v18;
    v22 = dword_6FD40968;
    v23 = dword_6FD40964;
    LOBYTE(v21) = byte_6FD40960;
    v24 = dword_6FBBDB70;
    v6[16] = dword_6FD3FFFC;
    v25 = dword_6FBBDB74;
    v26 = dword_6FBBDB78;
    v6[17] = v22;
    v6[18] = v23;
    v27 = dword_6FBBDB7C;
    v28 = dword_6FBBDB80;
    *((_BYTE *)v6 + 76) = v21;
    *(_DWORD *)((char *)v6 + 77) = v24;
    v29 = dword_6FBBDB84;
    v30 = dword_6FBBDB88;
    *(_DWORD *)((char *)v6 + 81) = v25;
    v31 = dword_6FBBDB8C;
    *(_DWORD *)((char *)v6 + 93) = v28;
    *(_DWORD *)((char *)v6 + 97) = v29;
    *(_DWORD *)((char *)v6 + 101) = v30;
    *(_DWORD *)((char *)v6 + 105) = v31;
    *(_DWORD *)((char *)v6 + 85) = v26;
    *(_DWORD *)((char *)v6 + 89) = v27;
    *(_DWORD *)((char *)v6 + 109) = dword_6FBBDB90;
    *(_DWORD *)((char *)v6 + 185) = dword_6FBBDBDC;
    qmemcpy(
      (void *)(((unsigned int)v6 + 113) & 0xFFFFFFFC),
      (const void *)((char *)&dword_6FBBDB90 - ((char *)v6 + -(((unsigned int)v6 + 113) & 0xFFFFFFFC) + 109)),
      4 * (((unsigned int)v6 + -(((unsigned int)v6 + 113) & 0xFFFFFFFC) + 189) >> 2));
    *(_DWORD *)((char *)v6 + 189) = dword_6FD40120;
    v32 = dword_6FD40128;
    v33 = dword_6FD4012C;
    v34 = dword_6FD40130;
    v35 = dword_6FD40134;
    *(_DWORD *)((char *)v6 + 193) = dword_6FD40124;
    *(_DWORD *)((char *)v6 + 197) = v32;
    v36 = dword_6FD4013C;
    v37 = dword_6FBB97A0;
    *(_DWORD *)((char *)v6 + 201) = v33;
    v38 = dword_6FD40138;
    v39 = *(_DWORD *)&word_6FBB979C;
    *(_DWORD *)((char *)v6 + 217) = v36;
    *(_DWORD *)((char *)v6 + 221) = v37;
    *(_DWORD *)((char *)v6 + 225) = v39;
    *(_DWORD *)((char *)v6 + 205) = v34;
    *(_DWORD *)((char *)v6 + 209) = v35;
    *(_DWORD *)((char *)v6 + 213) = v38;
    *(_DWORD *)((char *)v6 + 229) = dword_6FD40160[0];
    *(_DWORD *)((char *)v6 + 1249) = dword_6FD4055C;
    qmemcpy(
      (void *)(((unsigned int)v6 + 233) & 0xFFFFFFFC),
      (const void *)((char *)dword_6FD40160 - ((char *)v6 + -(((unsigned int)v6 + 233) & 0xFFFFFFFC) + 229)),
      4 * (((unsigned int)v6 + -(((unsigned int)v6 + 233) & 0xFFFFFFFC) + 1253) >> 2));
    v40 = flt_6FCFFFA0;
    v41 = flt_6FCFFFA4;
    v42 = flt_6FCFFFA8;
    *(float *)((char *)v6 + 1253) = flt_6FCFFF9C;
    v43 = dword_6FBB51E0;
    *(float *)((char *)v6 + 1257) = v40;
    *(float *)((char *)v6 + 1261) = v41;
    *(float *)((char *)v6 + 1265) = v42;
    if ( v43 )
    {
      v44 = dword_6FBB51DC;
      v45 = 0;
      while ( 1 )
      {
        if ( v44 )
        {
          v46 = 0;
          do
          {
            Code = v46;
            v48 = v46++ + v45 * v44;
            *(_WORD *)((char *)v6 + 2 * v48 + 1269) = dword_6FBB51E4(Code, v45);
            v44 = dword_6FBB51DC;
          }
          while ( dword_6FBB51DC > v46 );
          v43 = dword_6FBB51E0;
        }
        else if ( ++v45 >= v43 )
        {
LABEL_18:
          v49 = 2 * v43 * v44 + 1269;
          goto LABEL_19;
        }
        if ( ++v45 >= v43 )
          goto LABEL_18;
      }
    }
    v49 = 1269;
LABEL_19:
    *(_DWORD *)((char *)v6 + v49) = dword_6FCFFF6C(dword_6FCFFF74);
    result = 0;
  }
  else
  {
    if ( a1 != 4 )
    {
      if ( a1 == 5 )
      {
        sub_6F733910();
        if ( dword_6FBBDB6C )
        {
          free((void *)dword_6FBBDB5C);
          dword_6FBBDB5C = 0;
          dword_6FBBDB6C = 0;
        }
        sub_6F697000();
        sub_6F6A8120();
        sub_6F733910();
        dword_6FCFFF84(sub_6F724020, sub_6F71EB20, 528488464);
        dword_6FCFFF84(sub_6F729150, sub_6F728FF0, 528488468);
        dword_6FCFFF7C = dword_6FCFFF80(sub_6F723B10, sub_6F729160, sub_6F723AE0, 2);
        dword_6FCFFF74 = dword_6FCFFF78(sub_6F6A0F60);
      }
      return 0;
    }
    result = sub_6F6976C0(ebp0);
  }
  return result;
}
