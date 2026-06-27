int __usercall sub_6F7B58B0@<eax>(int *a1@<eax>, int a2@<edx>, int a3@<ecx>, signed int a4, char a5)
{
  int *v5; // ebp@1
  int v6; // ebx@1
  int result; // eax@3
  int v8; // edx@4
  bool v9; // al@9
  int v10; // edi@11
  unsigned int v11; // esi@11
  int v12; // ebp@11
  signed __int64 v13; // rax@12
  char v14; // al@16
  int v15; // eax@19
  int v16; // esi@23
  int v17; // edi@29
  unsigned int v18; // esi@29
  int v19; // ebp@29
  signed __int64 v20; // rax@30
  int v21; // eax@33
  int v22; // edx@33
  int v23; // ecx@33
  int v24; // esi@42
  int v25; // eax@42
  int v26; // eax@42
  int v27; // eax@42
  int v28; // edi@42
  int v29; // eax@43
  int v30; // edx@43
  int v31; // ST38_4@43
  int v32; // edx@43
  int v33; // edx@43
  int v34; // edi@44
  int v35; // eax@45
  int v36; // eax@45
  int v37; // eax@45
  int v38; // eax@45
  void *v39; // eax@46
  int v40; // edx@46
  signed int v41; // eax@46
  int v42; // edx@46
  int v43; // edi@47
  int v44; // esi@47
  int v45; // edx@48
  int v46; // ST30_4@48
  int v47; // eax@48
  int v48; // eax@48
  int v49; // eax@49
  int v50; // edi@49
  int v51; // eax@50
  int v52; // eax@50
  int v53; // eax@50
  int v54; // eax@50
  int v55; // eax@51
  char *v56; // eax@54
  int v57; // ecx@54
  char *v58; // eax@55
  int v59; // edx@55
  char *v60; // eax@56
  bool v61; // zf@56
  char *v62; // eax@57
  char *v63; // eax@58
  int v64; // esi@59
  int v65; // eax@60
  int v66; // eax@60
  int v67; // eax@60
  int v68; // eax@60
  unsigned __int16 v69; // ax@62
  int v70; // esi@62
  int v71; // edi@62
  void (__cdecl *v72)(int); // eax@62
  int v73; // edx@64
  int v74; // eax@64
  int v75; // eax@65
  int v76; // edx@65
  int v77; // ecx@67
  int v78; // edx@68
  char *v79; // eax@72
  char *v80; // eax@73
  char *v81; // eax@74
  int v82; // [sp+20h] [bp-4Ch]@1
  int v83; // [sp+24h] [bp-48h]@1
  int v84; // [sp+28h] [bp-44h]@1
  int v85; // [sp+30h] [bp-3Ch]@7
  int *v86; // [sp+30h] [bp-3Ch]@29
  int v87; // [sp+30h] [bp-3Ch]@42
  char v88; // [sp+37h] [bp-35h]@3
  int *v89; // [sp+38h] [bp-34h]@11
  void *v90; // [sp+38h] [bp-34h]@27
  unsigned __int16 v91; // [sp+38h] [bp-34h]@57
  const void *v92; // [sp+3Ch] [bp-30h]@27
  int v93; // [sp+48h] [bp-24h]@46
  int v94; // [sp+4Ch] [bp-20h]@57

  v5 = a1;
  v6 = a2;
  v83 = a3;
  v82 = *(_DWORD *)(a3 + 4);
  v84 = *(_DWORD *)(v82 + 104);
  memset(a1, 0, 0xD0u);
  if ( !(a4 & 2) && !a5 )
  {
    v88 = a4 & 0x80;
    result = *(_DWORD *)(a2 + 296);
    if ( result >= 0 )
    {
      v8 = *(_DWORD *)(a2 + 300);
      if ( v8 >= 0 )
      {
        if ( result )
          return result;
        result = v8;
        if ( v8 )
          return result;
        goto LABEL_7;
      }
      if ( !result )
      {
        v92 = &unk_6FB69920;
        v90 = (void *)(v6 + 172);
        goto LABEL_28;
      }
      goto LABEL_7;
    }
    v24 = *(_DWORD *)(*(_DWORD *)a2 + 100);
    v87 = *(_DWORD *)a2;
    sub_6F773D90(*(_DWORD *)(*(_DWORD *)a2 + 100), *(_DWORD *)(a2 + 124));
    v25 = *(_DWORD *)(v6 + 136);
    *(_DWORD *)(v6 + 124) = 0;
    sub_6F773D90(v24, v25);
    v26 = *(_DWORD *)(v6 + 244);
    *(_DWORD *)(v6 + 136) = 0;
    sub_6F773D90(v24, v26);
    v27 = *(_DWORD *)(v6 + 252);
    *(_DWORD *)(v6 + 244) = 0;
    sub_6F773D90(v24, v27);
    v28 = *(_DWORD *)(v6 + 292);
    *(_DWORD *)(v6 + 252) = 0;
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 + 8);
      *(_WORD *)(v28 + 440) = 0;
      v30 = *(_DWORD *)(v28 + 24);
      *(_WORD *)(v28 + 442) = 0;
      v31 = v29;
      sub_6F773D90(v29, v30);
      v32 = *(_DWORD *)(v28 + 436);
      *(_DWORD *)(v28 + 24) = 0;
      *(_DWORD *)(v28 + 20) = 0;
      sub_6F773D90(v31, v32);
      v33 = *(_DWORD *)(v28 + 392);
      *(_DWORD *)(v28 + 436) = 0;
      *(_DWORD *)(v28 + 432) = 0;
      *(_DWORD *)(v28 + 428) = 0;
      sub_6F773D90(v31, v33);
      *(_DWORD *)(v28 + 392) = 0;
      *(_DWORD *)(v28 + 388) = 0;
      *(_DWORD *)(v28 + 4) = 0;
      *(_DWORD *)v28 = 0;
      sub_6F773D90(v31, v28);
    }
    v34 = *(_DWORD *)(v6 + 256);
    if ( v34 )
    {
      sub_6F773D90(*(_DWORD *)(v6 + 256), *(_DWORD *)(v6 + 284));
      v35 = *(_DWORD *)(v6 + 280);
      *(_DWORD *)(v6 + 284) = 0;
      sub_6F773D90(v34, v35);
      v36 = *(_DWORD *)(v6 + 272);
      *(_DWORD *)(v6 + 280) = 0;
      sub_6F773D90(v34, v36);
      v37 = *(_DWORD *)(v6 + 268);
      *(_DWORD *)(v6 + 272) = 0;
      sub_6F773D90(v34, v37);
      v38 = *(_DWORD *)(v6 + 276);
      *(_DWORD *)(v6 + 268) = 0;
      sub_6F773D90(v34, v38);
      *(_DWORD *)(v6 + 276) = 0;
      *(_DWORD *)(v6 + 256) = 0;
      *(_WORD *)(v6 + 264) = 0;
      *(_WORD *)(v6 + 260) = 0;
      *(_WORD *)(v6 + 266) = 0;
      *(_WORD *)(v6 + 262) = 0;
    }
    *(_DWORD *)(v6 + 296) = -1;
    *(_DWORD *)(v6 + 300) = -1;
    v39 = sub_6F7B5720(*(_DWORD *)(v87 + 96));
    v40 = *(_WORD *)(v87 + 282);
    *(_DWORD *)(v6 + 292) = v39;
    v41 = *(_WORD *)(v87 + 280);
    *(_DWORD *)(v6 + 116) = 0;
    *(_DWORD *)(v6 + 128) = 0;
    *(_DWORD *)(v6 + 140) = 0;
    *(_DWORD *)(v6 + 144) = 0;
    *(_DWORD *)(v6 + 132) = v40;
    v42 = *(_DWORD *)(v87 + 644);
    *(_DWORD *)(v6 + 120) = v41;
    *(_DWORD *)(v6 + 240) = v42;
    LOWORD(v42) = *(_WORD *)(v87 + 278);
    *(_BYTE *)(v6 + 109) = 0;
    *(_BYTE *)(v6 + 110) = 0;
    *(_DWORD *)(v6 + 92) = 0;
    *(_DWORD *)(v6 + 96) = 0;
    *(_DWORD *)(v6 + 100) = 0;
    *(_DWORD *)(v6 + 104) = 0;
    *(_WORD *)(v6 + 248) = v42;
    *(_DWORD *)(v6 + 124) = sub_6F773B30(v24, 24, 0, v41, 0, &v93);
    if ( !v93 )
    {
      v56 = sub_6F773B30(v24, 24, 0, *(_DWORD *)(v6 + 132), 0, &v93);
      v57 = v93;
      *(_DWORD *)(v6 + 136) = v56;
      if ( !v57 )
      {
        v58 = sub_6F773B30(v24, 4, 0, *(_DWORD *)(v6 + 240), 0, &v93);
        v59 = v93;
        *(_DWORD *)(v6 + 244) = v58;
        if ( !v59 )
        {
          v60 = sub_6F773B30(v24, 4, 0, *(_WORD *)(v6 + 248), 0, &v93);
          v61 = v93 == 0;
          *(_DWORD *)(v6 + 252) = v60;
          if ( v61 )
          {
            v91 = *(_WORD *)(v87 + 276) + 4;
            memset((void *)(v6 + 256), 0, 0x24u);
            *(_DWORD *)(v6 + 256) = v24;
            v62 = sub_6F773B30(v24, 8, 0, v91, 0, &v94);
            v61 = v94 == 0;
            *(_DWORD *)(v6 + 268) = v62;
            if ( v61
              && (v63 = sub_6F773B30(v24, 8, 0, v91, 0, &v94), v61 = v94 == 0, *(_DWORD *)(v6 + 272) = v63, v61)
              && (v79 = sub_6F773B30(v24, 8, 0, v91, 0, &v94), v61 = v94 == 0, *(_DWORD *)(v6 + 276) = v79, v61)
              && (v80 = sub_6F773B30(v24, 1, 0, v91, 0, &v94), v61 = v94 == 0, *(_DWORD *)(v6 + 280) = v80, v61)
              && (v81 = sub_6F773B30(v24, 2, 0, 0, 0, &v94), v61 = v94 == 0, *(_DWORD *)(v6 + 284) = v81, v61) )
            {
              *(_WORD *)(v6 + 262) = 0;
              v93 = 0;
              *(_WORD *)(v6 + 260) = v91;
            }
            else
            {
              v64 = *(_DWORD *)(v6 + 256);
              if ( v64 )
              {
                sub_6F773D90(*(_DWORD *)(v6 + 256), *(_DWORD *)(v6 + 284));
                v65 = *(_DWORD *)(v6 + 280);
                *(_DWORD *)(v6 + 284) = 0;
                sub_6F773D90(v64, v65);
                v66 = *(_DWORD *)(v6 + 272);
                *(_DWORD *)(v6 + 280) = 0;
                sub_6F773D90(v64, v66);
                v67 = *(_DWORD *)(v6 + 268);
                *(_DWORD *)(v6 + 272) = 0;
                sub_6F773D90(v64, v67);
                v68 = *(_DWORD *)(v6 + 276);
                *(_DWORD *)(v6 + 268) = 0;
                sub_6F773D90(v64, v68);
                *(_DWORD *)(v6 + 276) = 0;
                *(_WORD *)(v6 + 264) = 0;
                *(_WORD *)(v6 + 260) = 0;
                *(_WORD *)(v6 + 266) = 0;
                *(_WORD *)(v6 + 262) = 0;
                *(_DWORD *)(v6 + 256) = 0;
              }
              v93 = v94;
              if ( v94 )
                goto LABEL_47;
            }
            v69 = v91;
            v92 = &unk_6FB69920;
            v90 = (void *)(v6 + 172);
            *(_WORD *)(v6 + 264) = v69;
            qmemcpy((void *)(v6 + 172), &unk_6FB69920, 0x44u);
            v70 = *(_DWORD *)v6;
            v71 = *(_DWORD *)(v6 + 292);
            v72 = *(void (__cdecl **)(int))(*(_DWORD *)(*(_DWORD *)(v87 + 96) + 4) + 172);
            if ( !v72 )
              v72 = sub_6F7B0B00;
            v73 = *(_DWORD *)v6;
            *(_DWORD *)(v87 + 652) = v72;
            v74 = sub_6F7AF760(v71, v73, v6);
            if ( !v74 )
            {
              *(_BYTE *)(v71 + 488) = 0;
              *(_DWORD *)(v71 + 428) = 0;
              *(_DWORD *)(v71 + 16) = 0;
              *(_DWORD *)(v71 + 476) = 64;
              *(_DWORD *)(v71 + 480) = 0;
              *(_DWORD *)(v71 + 484) = 0;
              *(_DWORD *)(v71 + 564) = 0x4000;
              *(_BYTE *)(v71 + 561) = v88;
              v75 = *(_DWORD *)(v70 + 628);
              v76 = *(_DWORD *)(v70 + 632);
              *(_WORD *)(v71 + 216) = 0;
              *(_WORD *)(v71 + 218) = 0;
              *(_DWORD *)(v71 + 220) = 0;
              *(_DWORD *)(v71 + 224) = 0;
              *(_WORD *)(v71 + 252) = 0;
              *(_DWORD *)(v71 + 260) = 0;
              *(_DWORD *)(v71 + 256) = 0x10000;
              *(_DWORD *)(v71 + 444) = v76;
              *(_DWORD *)(v71 + 448) = v75;
              *(_DWORD *)(v71 + 452) = 0;
              *(_DWORD *)(v71 + 456) = 0;
              *(_DWORD *)(v71 + 460) = 0;
              *(_DWORD *)(v71 + 464) = 0;
              if ( !v75 )
              {
                *(_DWORD *)(v6 + 296) = 0;
LABEL_67:
                v77 = 0;
                *(_DWORD *)(v6 + 116) = *(_DWORD *)(v71 + 396);
                *(_DWORD *)(v6 + 128) = *(_DWORD *)(v71 + 408);
                *(_DWORD *)(v6 + 140) = *(_DWORD *)(v71 + 420);
                *(_DWORD *)(v6 + 144) = *(_DWORD *)(v71 + 424);
                do
                {
                  v78 = *(_DWORD *)(v71 + 8 * v77 + 448);
                  *(_DWORD *)(v6 + 8 * v77 + 148) = *(_DWORD *)(v71 + 8 * v77 + 444);
                  *(_DWORD *)(v6 + 8 * v77++ + 152) = v78;
                }
                while ( v77 != 3 );
                if ( !*(_DWORD *)(v6 + 296) && *(_DWORD *)(v6 + 300) < 0 )
                {
LABEL_28:
                  if ( *(_DWORD *)(v6 + 240) )
                  {
                    v17 = *(_DWORD *)(v6 + 244);
                    v18 = 0;
                    v86 = v5;
                    v19 = *(_DWORD *)(*(_DWORD *)v6 + 648);
                    do
                    {
                      v20 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v6 + 88)
                                                                          * (signed __int64)*(_WORD *)(v19 + 2 * v18)) >> 32) >> 31)
                                         + 0x8000)
                          + *(_DWORD *)(v6 + 88) * (signed __int64)*(_WORD *)(v19 + 2 * v18);
                      *(_DWORD *)(v17 + 4 * v18++) = (HIDWORD(v20) << 16) + ((unsigned int)v20 >> 16);
                    }
                    while ( v18 < *(_DWORD *)(v6 + 240) );
                    v5 = v86;
                  }
                  if ( *(_WORD *)(v6 + 264) )
                  {
                    v21 = *(_DWORD *)(v6 + 268);
                    v22 = *(_DWORD *)(v6 + 272);
                    v23 = v21 + 8 * *(_WORD *)(v6 + 264);
                    do
                    {
                      *(_DWORD *)v21 = 0;
                      *(_DWORD *)(v21 + 4) = 0;
                      v21 += 8;
                      *(_DWORD *)v22 = 0;
                      *(_DWORD *)(v22 + 4) = 0;
                      v22 += 8;
                    }
                    while ( v23 != v21 );
                  }
                  if ( *(_WORD *)(v6 + 248) )
                    memset(*(void **)(v6 + 252), 0, 4 * *(_WORD *)(v6 + 248));
                  qmemcpy(v90, v92, 0x44u);
                  result = sub_6F7AFE90(v6, v88);
                  if ( result )
                    return result;
                }
LABEL_7:
                v85 = *(_DWORD *)(v6 + 292);
                result = 153;
                if ( !v85 )
                  return result;
                result = sub_6F7AF760(v85, v82, v6);
                if ( result )
                  return result;
                v9 = ((a4 >> 16) & 0xF) != 2;
                if ( v9 != *(_BYTE *)(v85 + 608) )
                {
                  *(_BYTE *)(v85 + 608) = v9;
                  if ( *(_DWORD *)(v6 + 240) )
                  {
                    v10 = *(_DWORD *)(v6 + 244);
                    v11 = 0;
                    v89 = v5;
                    v12 = *(_DWORD *)(v82 + 648);
                    do
                    {
                      v13 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v6 + 88)
                                                                          * (signed __int64)*(_WORD *)(v12 + 2 * v11)) >> 32) >> 31)
                                         + 0x8000)
                          + *(_DWORD *)(v6 + 88) * (signed __int64)*(_WORD *)(v12 + 2 * v11);
                      *(_DWORD *)(v10 + 4 * v11++) = (HIDWORD(v13) << 16) + ((unsigned int)v13 >> 16);
                    }
                    while ( *(_DWORD *)(v6 + 240) > v11 );
                    v5 = v89;
                  }
                  result = sub_6F7AFE90(v6, v88);
                  if ( result )
                    return result;
                }
                if ( *(_BYTE *)(v85 + 336) & 1 )
                {
                  a4 |= 2u;
                  v14 = a4 & 0x80;
                }
                else
                {
                  v14 = a4 & 0x80;
                }
                if ( *(_BYTE *)(v85 + 336) & 2 )
                  qmemcpy((void *)(v85 + 284), &unk_6FB69920, 0x44u);
                *(_BYTE *)(v85 + 561) = v14;
                v15 = *(_DWORD *)(v85 + 392);
                v5[40] = v85;
                v5[41] = v15;
                goto LABEL_20;
              }
              *(_DWORD *)(v71 + 356) = v76;
              *(_DWORD *)(v71 + 364) = v75;
              *(_DWORD *)(v71 + 360) = 0;
              *(_DWORD *)(v71 + 352) = 1;
              v74 = (*(int (__cdecl **)(int))(v70 + 652))(v71);
              *(_DWORD *)(v6 + 296) = v74;
              if ( !v74 )
                goto LABEL_67;
            }
            v93 = v74;
          }
        }
      }
    }
LABEL_47:
    v43 = *(_DWORD *)(v6 + 292);
    v44 = *(_DWORD *)(*(_DWORD *)v6 + 100);
    if ( v43 )
    {
      v45 = *(_DWORD *)(v43 + 8);
      *(_WORD *)(v43 + 440) = 0;
      v46 = v45;
      *(_WORD *)(v43 + 442) = 0;
      sub_6F773D90(v45, *(_DWORD *)(v43 + 24));
      v47 = *(_DWORD *)(v43 + 436);
      *(_DWORD *)(v43 + 24) = 0;
      *(_DWORD *)(v43 + 20) = 0;
      sub_6F773D90(v46, v47);
      v48 = *(_DWORD *)(v43 + 392);
      *(_DWORD *)(v43 + 436) = 0;
      *(_DWORD *)(v43 + 432) = 0;
      *(_DWORD *)(v43 + 428) = 0;
      sub_6F773D90(v46, v48);
      *(_DWORD *)(v43 + 392) = 0;
      *(_DWORD *)(v43 + 388) = 0;
      *(_DWORD *)(v43 + 4) = 0;
      *(_DWORD *)v43 = 0;
      sub_6F773D90(v46, v43);
      *(_DWORD *)(v6 + 292) = 0;
    }
    sub_6F773D90(v44, *(_DWORD *)(v6 + 244));
    v49 = *(_DWORD *)(v6 + 252);
    *(_DWORD *)(v6 + 244) = 0;
    *(_DWORD *)(v6 + 240) = 0;
    sub_6F773D90(v44, v49);
    v50 = *(_DWORD *)(v6 + 256);
    *(_DWORD *)(v6 + 252) = 0;
    *(_WORD *)(v6 + 248) = 0;
    if ( v50 )
    {
      sub_6F773D90(v50, *(_DWORD *)(v6 + 284));
      v51 = *(_DWORD *)(v6 + 280);
      *(_DWORD *)(v6 + 284) = 0;
      sub_6F773D90(v50, v51);
      v52 = *(_DWORD *)(v6 + 272);
      *(_DWORD *)(v6 + 280) = 0;
      sub_6F773D90(v50, v52);
      v53 = *(_DWORD *)(v6 + 268);
      *(_DWORD *)(v6 + 272) = 0;
      sub_6F773D90(v50, v53);
      v54 = *(_DWORD *)(v6 + 276);
      *(_DWORD *)(v6 + 268) = 0;
      sub_6F773D90(v50, v54);
      *(_DWORD *)(v6 + 276) = 0;
      *(_WORD *)(v6 + 264) = 0;
      *(_WORD *)(v6 + 260) = 0;
      *(_DWORD *)(v6 + 256) = 0;
      *(_WORD *)(v6 + 266) = 0;
      *(_WORD *)(v6 + 262) = 0;
    }
    sub_6F773D90(v44, *(_DWORD *)(v6 + 124));
    v55 = *(_DWORD *)(v6 + 136);
    *(_DWORD *)(v6 + 124) = 0;
    sub_6F773D90(v44, v55);
    result = v93;
    *(_DWORD *)(v6 + 136) = 0;
    *(_DWORD *)(v6 + 116) = 0;
    *(_DWORD *)(v6 + 120) = 0;
    *(_DWORD *)(v6 + 128) = 0;
    *(_DWORD *)(v6 + 132) = 0;
    *(_DWORD *)(v6 + 140) = 0;
    *(_DWORD *)(v6 + 144) = 0;
    *(_DWORD *)(v6 + 296) = -1;
    *(_DWORD *)(v6 + 300) = -1;
    if ( result )
      return result;
    goto LABEL_7;
  }
LABEL_20:
  if ( *(_DWORD *)(*(_DWORD *)(v82 + 128) + 48)
    || (result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(v82 + 508))(v82, 1735162214, v84, 0),
        (_BYTE)result == -114) )
  {
    v5[21] = 0;
  }
  else
  {
    if ( result )
      return result;
    v5[21] = sub_6F7720A0(v84);
  }
  if ( !a5 )
  {
    v16 = **(_DWORD **)(v83 + 156);
    sub_6F7CA220(v16);
    v5[3] = v16;
  }
  v5[1] = v6;
  v5[4] = a4;
  *v5 = v82;
  v5[2] = v83;
  v5[6] = v84;
  return 0;
}
