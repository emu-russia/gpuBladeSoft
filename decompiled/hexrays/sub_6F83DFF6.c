void __cdecl sub_6F83DFF6(int *a1)
{
  signed int v1; // eax@2
  signed int v2; // eax@31
  signed int v3; // eax@54
  unsigned int v4; // eax@75
  unsigned int v5; // edx@78
  unsigned int v6; // eax@80
  unsigned int v7; // ebx@84
  unsigned int v8; // ecx@84
  unsigned int v9; // edx@84
  unsigned int v10; // eax@84
  int v11; // eax@119
  unsigned int v12; // eax@122
  int v13; // eax@135
  unsigned int v14; // esi@138
  unsigned int v15; // ebx@138
  unsigned int v16; // edx@138
  unsigned int v17; // eax@138
  int v18; // eax@152
  int v19; // eax@156
  unsigned int v20; // ebx@171
  unsigned int v21; // edi@173
  unsigned int v22; // esi@173
  unsigned int v23; // eax@173
  unsigned int v24; // edx@175
  char v25; // [sp+2Ch] [bp-ECh]@145
  __int16 v26; // [sp+2Eh] [bp-EAh]@145
  __int16 v27; // [sp+30h] [bp-E8h]@145
  __int16 v28; // [sp+32h] [bp-E6h]@145
  __int16 v29; // [sp+34h] [bp-E4h]@145
  char v30; // [sp+36h] [bp-E2h]@112
  __int16 v31; // [sp+38h] [bp-E0h]@112
  __int16 v32; // [sp+3Ah] [bp-DEh]@112
  __int16 v33; // [sp+3Ch] [bp-DCh]@112
  __int16 v34; // [sp+3Eh] [bp-DAh]@112
  char v35; // [sp+40h] [bp-D8h]@71
  __int16 v36; // [sp+42h] [bp-D6h]@71
  __int16 v37; // [sp+44h] [bp-D4h]@71
  __int16 v38; // [sp+46h] [bp-D2h]@71
  __int16 v39; // [sp+48h] [bp-D0h]@71
  char v40; // [sp+4Ah] [bp-CEh]@52
  __int16 v41; // [sp+4Ch] [bp-CCh]@52
  __int16 v42; // [sp+4Eh] [bp-CAh]@52
  __int16 v43; // [sp+50h] [bp-C8h]@52
  __int16 v44; // [sp+52h] [bp-C6h]@52
  int v45; // [sp+54h] [bp-C4h]@158
  int v46; // [sp+58h] [bp-C0h]@154
  int v47; // [sp+5Ch] [bp-BCh]@154
  size_t v48; // [sp+60h] [bp-B8h]@129
  unsigned int v49; // [sp+64h] [bp-B4h]@84
  unsigned int v50; // [sp+68h] [bp-B0h]@83
  unsigned int v51; // [sp+6Ch] [bp-ACh]@83
  unsigned int v52; // [sp+70h] [bp-A8h]@83
  unsigned int v53; // [sp+74h] [bp-A4h]@83
  unsigned int v54; // [sp+78h] [bp-A0h]@75
  unsigned int v55; // [sp+7Ch] [bp-9Ch]@28
  int v56; // [sp+80h] [bp-98h]@4
  int v57; // [sp+84h] [bp-94h]@1
  int v58; // [sp+88h] [bp-90h]@1
  int v59; // [sp+8Ch] [bp-8Ch]@1
  int *v60; // [sp+90h] [bp-88h]@1
  unsigned int kk; // [sp+94h] [bp-84h]@164
  unsigned int v62; // [sp+98h] [bp-80h]@151
  unsigned int jj; // [sp+9Ch] [bp-7Ch]@132
  unsigned int ii; // [sp+A0h] [bp-78h]@132
  unsigned int n; // [sp+A4h] [bp-74h]@132
  int m; // [sp+A8h] [bp-70h]@121
  int l; // [sp+ACh] [bp-6Ch]@120
  int k; // [sp+B0h] [bp-68h]@119
  int v69; // [sp+B4h] [bp-64h]@106
  unsigned int j; // [sp+B8h] [bp-60h]@83
  unsigned int i; // [sp+BCh] [bp-5Ch]@82
  unsigned int v72; // [sp+C0h] [bp-58h]@74
  unsigned int v73; // [sp+C4h] [bp-54h]@67
  unsigned int v74; // [sp+C8h] [bp-50h]@50
  unsigned int v75; // [sp+CCh] [bp-4Ch]@47
  unsigned int v76; // [sp+D0h] [bp-48h]@26
  int v77; // [sp+D4h] [bp-44h]@26
  unsigned int v78; // [sp+D8h] [bp-40h]@34
  unsigned int v79; // [sp+DCh] [bp-3Ch]@34
  int v80; // [sp+E0h] [bp-38h]@4
  int v81; // [sp+E4h] [bp-34h]@8
  int v82; // [sp+E8h] [bp-30h]@8
  int v83; // [sp+ECh] [bp-2Ch]@8
  int v84; // [sp+F0h] [bp-28h]@4
  int v85; // [sp+F4h] [bp-24h]@4
  unsigned int v86; // [sp+F8h] [bp-20h]@28
  unsigned int v87; // [sp+FCh] [bp-1Ch]@26

  v60 = a1;
  v59 = *a1;
  v58 = **(_DWORD **)v59;
  v57 = *(_DWORD *)(v59 + 16);
  if ( v57 & 4 )
    v1 = 2;
  else
    v1 = 1;
  v56 = v1;
  v85 = 0;
  v84 = 256;
  v80 = 0;
  if ( (*(_BYTE *)(v58 + 343) & 4 || *(_WORD *)(v58 + 336)) && !(v57 & 1) )
  {
    if ( v56 == 2 )
    {
      v83 = 0;
      v82 = 0;
      v81 = 0;
    }
    else
    {
      if ( !v60[4] )
        sub_6F839044(v58, (int)"a background color must be supplied to remove alpha/transparency");
      v82 = *(_BYTE *)(v60[4] + 1);
      if ( v57 & 2 )
      {
        v83 = *(_BYTE *)v60[4];
        v81 = *(_BYTE *)(v60[4] + 2);
      }
      else
      {
        v83 = v82;
        v81 = v82;
      }
    }
  }
  else if ( v56 == 2 )
  {
    v82 = 0xFFFF;
    v83 = 0xFFFF;
    v81 = 0xFFFF;
  }
  else
  {
    v82 = 255;
    v83 = 255;
    v81 = 255;
  }
  if ( !(*(_WORD *)(v58 + 806) & 1) )
  {
    if ( *(_BYTE *)(v58 + 344) != 16 || *(_DWORD *)(v59 + 20) & 4 )
      *(_DWORD *)(v58 + 732) = 45455;
    else
      *(_DWORD *)(v58 + 732) = 100000;
    *(_WORD *)(v58 + 806) |= 1u;
  }
  switch ( *(_BYTE *)(v58 + 343) )
  {
    case 0:
      if ( *(_BYTE *)(v58 + 344) <= 8u )
      {
        v77 = 256;
        v76 = 0;
        v87 = 1 << *(_BYTE *)(v58 + 344);
        if ( *(_DWORD *)(v59 + 24) < v87 )
          sub_6F839044(v58, (int)"gray[8] color-map: too few entries");
        v55 = 0xFF / (v87 - 1);
        v86 = 0;
        if ( *(_WORD *)(v58 + 336) )
        {
          v77 = *(_WORD *)(v58 + 448);
          if ( !(v57 & 1) )
          {
            if ( v56 == 2 )
              v2 = 0xFFFF;
            else
              v2 = 255;
            v76 = v2;
          }
        }
        v78 = 0;
        v79 = 0;
        while ( v79 < v87 )
        {
          if ( v79 == v77 )
            sub_6F83D60B((signed int)v60, v79, v83, v82, v81, v76, v56);
          else
            sub_6F83D60B((signed int)v60, v79, v78, v78, v78, 0xFFu, 3);
          ++v79;
          v78 += v55;
        }
        v85 = 3;
        if ( *(_BYTE *)(v58 + 344) <= 7u )
          sub_6F852CC6(v58);
        goto LABEL_184;
      }
      v85 = 1;
      if ( *(_DWORD *)(v59 + 24) <= 0xFFu )
        sub_6F839044(v58, (int)"gray[16] color-map: too few entries");
      v87 = sub_6F83DDD6((signed int)v60);
      if ( !*(_WORD *)(v58 + 336) )
      {
        v86 = 0;
        goto LABEL_184;
      }
      if ( v57 & 1 )
      {
        v75 = 0;
      }
      else
      {
        if ( v83 == v82 && v82 == v81 )
        {
          v74 = v82;
          if ( v56 == 2 )
          {
            v74 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * v74 >> 15]
                                   + ((255 * (_WORD)v74 & 0x7FFF)
                                    * (unsigned int)(unsigned __int8)byte_6FB99680[255 * v74 >> 15] >> 12)) >> 8);
            sub_6F83D60B((signed int)v60, v74, v82, v82, v82, 0xFFFFu, 2);
          }
          v40 = 0;
          v43 = v74;
          v42 = v74;
          v41 = v74;
          v44 = v74;
          sub_6F8417B0(v58, (int)&v40, 1, 0, 0);
          v86 = 0;
LABEL_184:
          if ( v80 && *(_WORD *)(v58 + 336) && !(*(_BYTE *)(v58 + 343) & 4) )
            sub_6F842C41(v58);
          if ( v85 == 1 )
          {
            sub_6F841A8D(v58, 0, 220000);
          }
          else if ( v85 != 3 )
          {
            sub_6F839044(v58, (int)"bad data option (internal error)");
          }
          if ( *(_BYTE *)(v58 + 344) > 8u )
            sub_6F8418E7(v58);
          if ( v87 > 0x100 || *(_DWORD *)(v59 + 24) < v87 )
            sub_6F839044(v58, (int)"color map overflow (BAD internal error)");
          *(_DWORD *)(v59 + 24) = v87;
          if ( v86 <= 4 )
            JUMPOUT(__CS__, *(&off_6FB9A1B0 + v86));
          sub_6F839044(v58, (int)"bad processing option (internal error)");
        }
        if ( v56 == 2 )
          v3 = 0xFFFF;
        else
          v3 = 255;
        v75 = v3;
      }
      v80 = 1;
      v86 = 2;
      v84 = 254;
      sub_6F83D60B((signed int)v60, 0xFEu, v83, v82, v81, v75, v56);
      goto LABEL_184;
    case 4:
      v85 = 1;
      if ( v57 & 1 )
      {
        if ( *(_DWORD *)(v59 + 24) <= 0xFFu )
          sub_6F839044(v58, (int)"gray+alpha color-map: too few entries");
        v87 = sub_6F83DE2E((signed int)v60);
        v84 = 231;
        v86 = 1;
      }
      else if ( v57 & 2 && (v83 != v82 || v82 != v81) )
      {
        if ( *(_DWORD *)(v59 + 24) <= 0xFFu )
          sub_6F839044(v58, (int)"ga-alpha color-map: too few entries");
        v72 = 0;
        while ( v72 <= 0xE6 )
        {
          v54 = ((v72 << 8) + 115) / 0xE7;
          v4 = v72++;
          sub_6F83D60B((signed int)v60, v4, v54, v54, v54, 0xFFu, 1);
        }
        v84 = v72;
        if ( v56 == 2 )
          v5 = 0xFFFF;
        else
          v5 = 255;
        v6 = v72++;
        sub_6F83D60B((signed int)v60, v6, v83, v82, v81, v5, v56);
        if ( v56 == 1 )
        {
          v83 = (unsigned __int16)word_6FB99080[v83];
          v82 = (unsigned __int16)word_6FB99080[v82];
          v81 = (unsigned __int16)word_6FB99080[v81];
        }
        for ( i = 1; i <= 4; ++i )
        {
          v53 = 51 * i;
          v52 = v83 * (255 - 51 * i);
          v51 = v82 * (255 - 51 * i);
          v50 = v81 * (255 - 51 * i);
          for ( j = 0; j <= 5; ++j )
          {
            v49 = v53 * (unsigned __int16)word_6FB99080[51 * j];
            v7 = (unsigned __int8)((((((_WORD)v49 + (_WORD)v50) & 0x7FFF)
                                   * (unsigned int)(unsigned __int8)byte_6FB99680[(v49 + v50) >> 15] >> 12)
                                  + (unsigned __int16)word_6FB99280[(v49 + v50) >> 15]) >> 8);
            v8 = (unsigned __int8)((((((_WORD)v49 + (_WORD)v51) & 0x7FFF)
                                   * (unsigned int)(unsigned __int8)byte_6FB99680[(v49 + v51) >> 15] >> 12)
                                  + (unsigned __int16)word_6FB99280[(v49 + v51) >> 15]) >> 8);
            v9 = (unsigned __int8)((((((_WORD)v49 + (_WORD)v52) & 0x7FFF)
                                   * (unsigned int)(unsigned __int8)byte_6FB99680[(v49 + v52) >> 15] >> 12)
                                  + (unsigned __int16)word_6FB99280[(v49 + v52) >> 15]) >> 8);
            v10 = v72++;
            sub_6F83D60B((signed int)v60, v10, v9, v8, v7, 0xFFu, 1);
          }
        }
        v87 = v72;
        v86 = 1;
      }
      else
      {
        v73 = v82;
        if ( *(_DWORD *)(v59 + 24) <= 0xFFu )
          sub_6F839044(v58, (int)"gray-alpha color-map: too few entries");
        v87 = sub_6F83DDD6((signed int)v60);
        if ( v56 == 2 )
        {
          v73 = (unsigned __int8)(((unsigned __int16)word_6FB99280[255 * v73 >> 15]
                                 + ((255 * (_WORD)v73 & 0x7FFF)
                                  * (unsigned int)(unsigned __int8)byte_6FB99680[255 * v73 >> 15] >> 12)) >> 8);
          sub_6F83D60B((signed int)v60, v73, v82, v82, v82, 0xFFFFu, 2);
        }
        v35 = 0;
        v38 = v73;
        v37 = v73;
        v36 = v73;
        v39 = v73;
        sub_6F8417B0(v58, (int)&v35, 1, 0, 0);
        v86 = 0;
      }
      goto LABEL_184;
    case 2:
    case 6:
      if ( v57 & 2 )
      {
        v85 = 1;
        if ( *(_BYTE *)(v58 + 343) == 6 || *(_WORD *)(v58 + 336) )
        {
          if ( v57 & 1 )
          {
            if ( *(_DWORD *)(v59 + 24) <= 0xF3u )
              sub_6F839044(v58, (int)"rgb+alpha color-map: too few entries");
            v87 = sub_6F83DF5F((signed int)v60);
            sub_6F83D60B((signed int)v60, v87, 0xFFu, 0xFFu, 0xFFu, 0, 1);
            v11 = v87++;
            v84 = v11;
            for ( k = 0; (unsigned int)k <= 0xFF; k = 2 * k | 0x7F )
            {
              for ( l = 0; (unsigned int)l <= 0xFF; l = 2 * l | 0x7F )
              {
                for ( m = 0; (unsigned int)m <= 0xFF; m = 2 * m | 0x7F )
                {
                  v12 = v87++;
                  sub_6F83D60B((signed int)v60, v12, k, l, m, 0x80u, 1);
                }
              }
            }
            v80 = 1;
            v86 = 4;
          }
          else
          {
            v48 = ((v57 & 3) + 1) * (((v57 & 4u) >> 2) + 1);
            if ( *(_DWORD *)(v59 + 24) <= 0xF3u )
              sub_6F839044(v58, (int)"rgb-alpha color-map: too few entries");
            v87 = sub_6F83DF5F((signed int)v60);
            sub_6F83D60B((signed int)v60, v87, v83, v82, v81, 0, v56);
            if ( v56 == 2 )
            {
              n = (unsigned __int8)(((unsigned __int16)word_6FB99280[(unsigned int)(255 * v83) >> 15]
                                   + ((255 * (_WORD)v83 & 0x7FFF)
                                    * (unsigned int)(unsigned __int8)byte_6FB99680[(unsigned int)(255 * v83) >> 15] >> 12)) >> 8);
              ii = (unsigned __int8)(((unsigned __int16)word_6FB99280[(unsigned int)(255 * v82) >> 15]
                                    + ((255 * (_WORD)v82 & 0x7FFF)
                                     * (unsigned int)(unsigned __int8)byte_6FB99680[(unsigned int)(255 * v82) >> 15] >> 12)) >> 8);
              jj = (unsigned __int8)(((unsigned __int16)word_6FB99280[(unsigned int)(255 * v81) >> 15]
                                    + ((255 * (_WORD)v81 & 0x7FFF)
                                     * (unsigned int)(unsigned __int8)byte_6FB99680[(unsigned int)(255 * v81) >> 15] >> 12)) >> 8);
            }
            else
            {
              n = v83;
              ii = v82;
              jj = v82;
            }
            if ( !memcmp(
                    (const void *)(v87 * v48 + v60[3]),
                    (const void *)(v48
                                 * (unsigned __int8)(6
                                                   * (6 * ((unsigned __int16)(5 * n + 130) >> 8)
                                                    + ((unsigned __int16)(5 * ii + 130) >> 8))
                                                   + ((unsigned __int16)(5 * jj + 130) >> 8))
                                 + v60[3]),
                    v48) )
            {
              v25 = 0;
              v26 = v83;
              v27 = v82;
              v29 = v82;
              v28 = v81;
              sub_6F8417B0(v58, (int)&v25, 1, 0, 0);
              v86 = 3;
            }
            else
            {
              v13 = v87++;
              v84 = v13;
              for ( n = 0; n <= 0xFF; n = 2 * n | 0x7F )
              {
                for ( ii = 0; ii <= 0xFF; ii = 2 * ii | 0x7F )
                {
                  for ( jj = 0; jj <= 0xFF; jj = 2 * jj | 0x7F )
                  {
                    v14 = sub_6F83D545((signed int)v60, jj, 1, 128, v81, v56);
                    v15 = sub_6F83D545((signed int)v60, ii, 1, 128, v82, v56);
                    v16 = sub_6F83D545((signed int)v60, n, 1, 128, v83, v56);
                    v17 = v87++;
                    sub_6F83D60B((signed int)v60, v17, v16, v15, v14, 0, v56);
                  }
                }
              }
              v80 = 1;
              v86 = 4;
            }
          }
        }
        else
        {
          if ( *(_DWORD *)(v59 + 24) <= 0xD7u )
            sub_6F839044(v58, (int)"rgb color-map: too few entries");
          v87 = sub_6F83DF5F((signed int)v60);
          v86 = 3;
        }
      }
      else
      {
        sub_6F842CE6(v58, 1, -1, -1);
        v85 = 1;
        if ( (*(_BYTE *)(v58 + 343) == 6 || *(_WORD *)(v58 + 336)) && v57 & 1 )
        {
          v80 = 1;
          if ( *(_DWORD *)(v59 + 24) <= 0xFFu )
            sub_6F839044(v58, (int)"rgb[ga] color-map: too few entries");
          v87 = sub_6F83DE2E((signed int)v60);
          v84 = 231;
          v86 = 1;
        }
        else
        {
          if ( *(_DWORD *)(v59 + 24) <= 0xFFu )
            sub_6F839044(v58, (int)"rgb[gray] color-map: too few entries");
          if ( (*(_BYTE *)(v58 + 343) == 6 || *(_WORD *)(v58 + 336)) && sub_6F83CF7D(*(_DWORD *)(v58 + 732)) )
          {
            v87 = sub_6F83DD7E((signed int)v60);
            v85 = 3;
          }
          else
          {
            v87 = sub_6F83DDD6((signed int)v60);
          }
          if ( *(_BYTE *)(v58 + 343) == 6 || *(_WORD *)(v58 + 336) )
          {
            v69 = v82;
            if ( v85 == 3 )
            {
              if ( v56 == 1 )
                v69 = (unsigned __int16)word_6FB99080[v69];
              v69 = (255 * (unsigned int)(unsigned __int16)sub_6F8383DF(v69, *(_DWORD *)(v58 + 732)) + 32895) >> 16;
              sub_6F83D60B((signed int)v60, v69, v82, v82, v82, 0, v56);
            }
            else if ( v56 == 2 )
            {
              v69 = (unsigned __int8)(((unsigned __int16)word_6FB99280[(unsigned int)(255 * v69) >> 15]
                                     + ((255 * (_WORD)v69 & 0x7FFF)
                                      * (unsigned int)(unsigned __int8)byte_6FB99680[(unsigned int)(255 * v69) >> 15] >> 12)) >> 8);
              sub_6F83D60B((signed int)v60, v69, v82, v82, v82, 0, 2);
            }
            v30 = 0;
            v33 = v69;
            v32 = v69;
            v31 = v69;
            v34 = v69;
            v80 = 1;
            sub_6F8417B0(v58, (int)&v30, 1, 0, 0);
          }
          v86 = 0;
        }
      }
      goto LABEL_184;
    case 3:
      v62 = *(_WORD *)(v58 + 336);
      if ( v62 )
        v18 = *(_DWORD *)(v58 + 436);
      else
        v18 = 0;
      v47 = v18;
      v46 = *(_DWORD *)(v58 + 324);
      v19 = v18 && !(v57 & 1);
      v45 = v19;
      if ( !v47 )
        v62 = 0;
      v86 = 0;
      v85 = 3;
      v87 = *(_WORD *)(v58 + 328);
      if ( v87 > 0x100 )
        v87 = 256;
      if ( *(_DWORD *)(v59 + 24) < v87 )
        sub_6F839044(v58, (int)"palette color-map: too few entries");
      for ( kk = 0; kk < v87; ++kk )
      {
        if ( v45 && kk < v62 && *(_BYTE *)(v47 + kk) != -1 )
        {
          if ( *(_BYTE *)(v47 + kk) )
          {
            if ( v56 == 2 )
              v20 = 257 * *(_BYTE *)(v47 + kk);
            else
              v20 = *(_BYTE *)(v47 + kk);
            v21 = sub_6F83D545((signed int)v60, *(_BYTE *)(3 * kk + v46 + 2), 3, *(_BYTE *)(v47 + kk), v81, v56);
            v22 = sub_6F83D545((signed int)v60, *(_BYTE *)(3 * kk + v46 + 1), 3, *(_BYTE *)(v47 + kk), v82, v56);
            v23 = sub_6F83D545((signed int)v60, *(_BYTE *)(3 * kk + v46), 3, *(_BYTE *)(v47 + kk), v83, v56);
            sub_6F83D60B((signed int)v60, kk, v23, v22, v21, v20, v56);
          }
          else
          {
            sub_6F83D60B((signed int)v60, kk, v83, v82, v81, 0, v56);
          }
        }
        else
        {
          if ( kk >= v62 )
            v24 = 255;
          else
            v24 = *(_BYTE *)(v47 + kk);
          sub_6F83D60B(
            (signed int)v60,
            kk,
            *(_BYTE *)(3 * kk + v46),
            *(_BYTE *)(3 * kk + v46 + 1),
            *(_BYTE *)(3 * kk + v46 + 2),
            v24,
            3);
        }
      }
      if ( *(_BYTE *)(v58 + 344) <= 7u )
        sub_6F852CC6(v58);
      goto LABEL_184;
    default:
      sub_6F839044(v58, (int)"invalid PNG color type");
      return;
  }
}
