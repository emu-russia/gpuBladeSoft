signed int __usercall sub_6F732840@<eax>(__int16 a1@<ax>, __int16 a2@<dx>, __int16 a3@<cx>, __int16 a4, __int16 a5, __int16 a6, signed int *a7, _DWORD *a8, _DWORD *a9, _DWORD *a10, _DWORD *a11, _DWORD *a12, _DWORD *a13, _DWORD *a14, _DWORD *a15)
{
  int v15; // ebp@2
  int v16; // ecx@3
  int v17; // edx@3
  int v18; // ecx@3
  int v19; // eax@6
  int v20; // edx@7
  int v21; // eax@8
  int v22; // eax@9
  int v23; // edx@10
  int v24; // eax@11
  int v25; // eax@12
  int v26; // edx@13
  int v27; // eax@14
  int v28; // eax@15
  int *v29; // edi@16
  int v30; // ebp@18
  int v31; // esi@18
  int v32; // ebx@18
  double v33; // st7@20
  double v34; // st6@21
  signed int v35; // ST98_4@21
  int v36; // ebx@22
  int v37; // ebx@22
  double v38; // rt0@22
  double v39; // st6@22
  double v40; // st7@22
  int v42; // eax@44
  int v43; // ebx@45
  int v44; // ebx@45
  int v45; // edx@45
  int v46; // esi@47
  double v47; // st7@47
  double v48; // st6@48
  signed int v49; // ST98_4@48
  int v50; // ebx@49
  int v51; // ebx@49
  double v52; // rt1@49
  double v53; // st6@49
  double v54; // st7@49
  signed int v55; // ST98_4@50
  int v56; // ecx@54
  double v57; // st7@54
  double v58; // st6@55
  signed int v59; // ST98_4@55
  signed int v60; // ST98_4@56
  signed int v61; // edi@57
  int v62; // edi@58
  double v63; // rt2@58
  double v64; // st6@58
  double v65; // st7@58
  int v66; // [sp+2Ch] [bp-C0h]@2
  int v67; // [sp+30h] [bp-BCh]@2
  int v68; // [sp+34h] [bp-B8h]@3
  int v69; // [sp+38h] [bp-B4h]@3
  int v70; // [sp+3Ch] [bp-B0h]@6
  int v71; // [sp+3Ch] [bp-B0h]@15
  int v72; // [sp+40h] [bp-ACh]@4
  int v73; // [sp+44h] [bp-A8h]@9
  int v74; // [sp+44h] [bp-A8h]@16
  int v75; // [sp+48h] [bp-A4h]@12
  int *v76; // [sp+48h] [bp-A4h]@15
  signed int v77; // [sp+48h] [bp-A4h]@54
  int v78; // [sp+4Ch] [bp-A0h]@4
  int v79; // [sp+50h] [bp-9Ch]@15
  int v80; // [sp+54h] [bp-98h]@16
  int v81; // [sp+54h] [bp-98h]@56
  int v82; // [sp+58h] [bp-94h]@15
  int v83; // [sp+5Ch] [bp-90h]@5
  int v84; // [sp+64h] [bp-88h]@5
  int v85; // [sp+68h] [bp-84h]@16
  int v86; // [sp+6Ch] [bp-80h]@43
  int v87; // [sp+70h] [bp-7Ch]@15
  int v88; // [sp+74h] [bp-78h]@16
  int v89; // [sp+78h] [bp-74h]@20
  int v90; // [sp+78h] [bp-74h]@43
  int v91; // [sp+7Ch] [bp-70h]@20
  int v92; // [sp+88h] [bp-64h]@45
  int v93; // [sp+8Ch] [bp-60h]@15
  int v94; // [sp+90h] [bp-5Ch]@22
  int v95; // [sp+94h] [bp-58h]@49
  int v96; // [sp+ACh] [bp-40h]@7
  int v97; // [sp+B0h] [bp-3Ch]@8
  int v98; // [sp+B4h] [bp-38h]@9
  int v99; // [sp+B8h] [bp-34h]@10
  int v100; // [sp+BCh] [bp-30h]@11
  int v101; // [sp+C0h] [bp-2Ch]@12
  int v102; // [sp+C4h] [bp-28h]@13
  int v103; // [sp+C8h] [bp-24h]@14
  int v104; // [sp+CCh] [bp-20h]@15

  if ( dword_6FBB5540 || dword_6FBB553C == 2 )
  {
    v15 = a1;
    v66 = a2;
    v67 = a3;
    nullsub_10();
    if ( dword_6FBB5540 || dword_6FBB553C == 2 )
    {
      v16 = (v15 + 2048) >> 3;
      v68 = v16;
      v69 = (v66 + 2048) >> 3;
      v17 = v16 + (v69 << 9);
      v18 = dword_6FE41420[v17];
      if ( v18 )
      {
        v78 = (a4 + 2048) >> 3;
        v72 = (v67 + 2048) >> 3;
        if ( dword_6FE41420[(v78 << 9) + v72] )
        {
          v83 = (a5 + 2048) >> 3;
          v84 = (a6 + 2048) >> 3;
          if ( dword_6FE41420[(v84 << 9) + v83] )
          {
            v70 = (v15 & 7) + 8 * (v66 & 7);
            v19 = *(_BYTE *)(dword_6FD41420[v17] + v70);
            if ( *(_BYTE *)(dword_6FD41420[v17] + v70) )
            {
              v96 = v19 - 1;
              v20 = v19 - 2;
              if ( v19 == 1 )
              {
                v97 = 2;
                v21 = 1;
              }
              else
              {
                v21 = v19 - 3;
                v97 = v20;
                if ( v21 == -1 )
                  v21 = 2;
              }
            }
            else
            {
              v96 = 2;
              v21 = 0;
              v97 = 1;
            }
            v98 = v21;
            v73 = (v67 & 7) + 8 * (a4 & 7);
            v22 = *(_BYTE *)(dword_6FD41420[v72 + (v78 << 9)] + v73);
            if ( *(_BYTE *)(dword_6FD41420[v72 + (v78 << 9)] + v73) )
            {
              v99 = v22 - 1;
              v23 = v22 - 2;
              if ( v22 == 1 )
              {
                v100 = 2;
                v24 = 1;
              }
              else
              {
                v24 = v22 - 3;
                v100 = v23;
                if ( v24 == -1 )
                  v24 = 2;
              }
            }
            else
            {
              v99 = 2;
              v24 = 0;
              v100 = 1;
            }
            v101 = v24;
            v75 = (a5 & 7) + 8 * (a6 & 7);
            v25 = *(_BYTE *)(dword_6FD41420[v83 + (v84 << 9)] + v75);
            if ( *(_BYTE *)(dword_6FD41420[v83 + (v84 << 9)] + v75) )
            {
              v102 = v25 - 1;
              v26 = v25 - 2;
              if ( v25 == 1 )
              {
                v103 = 2;
                v27 = 1;
              }
              else
              {
                v27 = v25 - 3;
                v103 = v26;
                if ( v27 == -1 )
                  v27 = 2;
              }
            }
            else
            {
              v102 = 2;
              v27 = 0;
              v103 = 1;
            }
            v104 = v27;
            v82 = v15;
            v71 = 2304 * v70;
            v79 = 2304 * v73;
            v28 = 2304 * v75;
            v76 = &v96;
            v87 = v28;
            v93 = v83 + (v84 << 9);
            while ( 2 )
            {
              v29 = &v99;
              v85 = *v76;
              v80 = 288 * *v76;
              v74 = 288 * *v76;
              v88 = 288 * *v76;
              while ( 1 )
              {
                if ( *(_DWORD *)(v18 + v71 + v74 + 24) )
                {
                  v30 = *v29;
                  v31 = v72 + (v78 << 9);
                  v32 = 288 * *v29;
                  if ( *(_DWORD *)(v32 + dword_6FE41420[v31] + v79 + 24) )
                  {
                    if ( sub_6F72C010(v80 + v18 + v71, v82, v66, v32 + dword_6FE41420[v31] + v79, v67, a4) )
                    {
                      v91 = v80 + v71;
                      v89 = dword_6FE41420[v68 + (v69 << 9)] + v80 + v71;
                      v33 = (double)dword_6FBB52F4 * 0.000015258789;
                      if ( dword_6FBB52F4 >= (((dword_6FBB52F4 * v82 - (signed int)((double)*(signed __int64 *)v89 * v33)) >> 31) ^ (dword_6FBB52F4 * v82 - (signed int)((double)*(signed __int64 *)v89 * v33)))
                                           - ((dword_6FBB52F4 * v82 - (signed int)((double)*(signed __int64 *)v89 * v33)) >> 31) )
                      {
                        v34 = 0.000015258789 * (double)dword_6FBB52F8;
                        v35 = (signed int)((double)*(signed __int64 *)(v89 + 8) * v34);
                        if ( dword_6FBB52F8 >= (((dword_6FBB52F8 * v66 - v35) >> 31) ^ (dword_6FBB52F8 * v66 - v35))
                                             - ((dword_6FBB52F8 * v66 - v35) >> 31) )
                        {
                          v36 = v79 + v32;
                          v94 = v36;
                          v37 = dword_6FE41420[v31] + v36;
                          v38 = v34;
                          v39 = v33 * (double)*(signed __int64 *)v37;
                          v40 = v38;
                          if ( dword_6FBB52F4 >= (((dword_6FBB52F4 * v67 - (signed int)v39) >> 31) ^ (dword_6FBB52F4 * v67 - (signed int)v39))
                                               - ((dword_6FBB52F4 * v67 - (signed int)v39) >> 31)
                            && dword_6FBB52F8 >= abs(dword_6FBB52F8 * a4 - (signed int)(v40
                                                                                      * (double)*(signed __int64 *)(v37 + 8))) )
                          {
                            nullsub_10();
                            v86 = 0;
                            v90 = v68 + (v69 << 9);
                            while ( 1 )
                            {
                              v42 = dword_6FE41420[v90] + v71;
                              if ( *(_DWORD *)(v42 + v88 + 24) )
                              {
                                v43 = *(&v102 + v86);
                                v92 = v43;
                                v44 = 288 * v43;
                                v45 = v44 + dword_6FE41420[v93] + v87;
                                if ( *(_DWORD *)(v45 + 24) )
                                {
                                  if ( sub_6F72C010(v80 + v42, v82, v66, v45, a5, a6) )
                                  {
                                    v46 = dword_6FE41420[v90] + v91;
                                    v47 = (double)dword_6FBB52F4 * 0.000015258789;
                                    if ( dword_6FBB52F4 >= abs(dword_6FBB52F4 * v82 - (signed int)((double)*(signed __int64 *)v46
                                                                                                 * v47)) )
                                    {
                                      v48 = 0.000015258789 * (double)dword_6FBB52F8;
                                      v49 = (signed int)((double)*(signed __int64 *)(v46 + 8) * v48);
                                      if ( dword_6FBB52F8 >= (((dword_6FBB52F8 * v66 - v49) >> 31) ^ (dword_6FBB52F8 * v66 - v49))
                                                           - ((dword_6FBB52F8 * v66 - v49) >> 31) )
                                      {
                                        v50 = v87 + v44;
                                        v95 = v50;
                                        v51 = dword_6FE41420[v93] + v50;
                                        v52 = v48;
                                        v53 = v47 * (double)*(signed __int64 *)v51;
                                        v54 = v52;
                                        if ( dword_6FBB52F4 >= (((dword_6FBB52F4 * a5 - (signed int)v53) >> 31) ^ (dword_6FBB52F4 * a5 - (signed int)v53))
                                                             - ((dword_6FBB52F4 * a5 - (signed int)v53) >> 31) )
                                        {
                                          v55 = (signed int)(v54 * (double)*(signed __int64 *)(v51 + 8));
                                          if ( dword_6FBB52F8 >= (((dword_6FBB52F8 * a6 - v55) >> 31) ^ (dword_6FBB52F8 * a6 - v55))
                                                               - ((dword_6FBB52F8 * a6 - v55) >> 31) )
                                            break;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              if ( ++v86 == 3 )
                                goto LABEL_24;
                            }
                            nullsub_10();
                            if ( dword_6FBB5540 )
                            {
                              v56 = dword_6FE41420[v90] + v91;
                              v57 = (double)dword_6FBB52F4 * 0.000015258789;
                              v77 = (signed int)((double)*(signed __int64 *)v56 * v57);
                              if ( dword_6FBB52F4 >= (((dword_6FBB52F4 * v82 - v77) >> 31) ^ (dword_6FBB52F4 * v82 - v77))
                                                   - ((dword_6FBB52F4 * v82 - v77) >> 31) )
                              {
                                v58 = 0.000015258789 * (double)dword_6FBB52F8;
                                v59 = (signed int)((double)*(signed __int64 *)(v56 + 8) * v58);
                                if ( dword_6FBB52F8 >= (((dword_6FBB52F8 * v66 - v59) >> 31) ^ (dword_6FBB52F8 * v66
                                                                                              - v59))
                                                     - ((dword_6FBB52F8 * v66 - v59) >> 31) )
                                {
                                  v81 = v72 + (v78 << 9);
                                  v60 = (signed int)((double)*(signed __int64 *)(dword_6FE41420[v72 + (v78 << 9)] + v94)
                                                   * v57);
                                  if ( dword_6FBB52F4 >= (((dword_6FBB52F4 * v67 - v60) >> 31) ^ (dword_6FBB52F4 * v67
                                                                                                - v60))
                                                       - ((dword_6FBB52F4 * v67 - v60) >> 31) )
                                  {
                                    v61 = dword_6FBB52F8 * a4
                                        - (signed int)((double)*(signed __int64 *)(dword_6FE41420[v72 + (v78 << 9)]
                                                                                 + v94
                                                                                 + 8)
                                                     * v58);
                                    if ( dword_6FBB52F8 >= ((v61 >> 31) ^ v61) - (v61 >> 31) )
                                    {
                                      v62 = (v84 << 9) + v83;
                                      v63 = v58;
                                      v64 = v57 * (double)*(signed __int64 *)(dword_6FE41420[v62] + v95);
                                      v65 = v63;
                                      if ( dword_6FBB52F4 >= (((dword_6FBB52F4 * a5 - (signed int)v64) >> 31) ^ (dword_6FBB52F4 * a5 - (signed int)v64))
                                                           - ((dword_6FBB52F4 * a5 - (signed int)v64) >> 31)
                                        && dword_6FBB52F8 >= abs(dword_6FBB52F8 * a6 - (signed int)(v65
                                                                                                  * (double)*(signed __int64 *)(dword_6FE41420[v62] + v95 + 8))) )
                                      {
                                        *a7 = v77;
                                        *a8 = (signed int)((double)dword_6FBB52F8
                                                         * 0.000015258789
                                                         * (double)*(signed __int64 *)(v71
                                                                                     + dword_6FE41420[v68 + (v69 << 9)]
                                                                                     + 288 * v85
                                                                                     + 8));
                                        *a10 = (signed int)((double)*(signed __int64 *)(288 * v30
                                                                                      + dword_6FE41420[v81]
                                                                                      + v79)
                                                          * ((double)dword_6FBB52F4
                                                           * 0.000015258789));
                                        *a11 = (signed int)((double)*(signed __int64 *)(v79
                                                                                      + dword_6FE41420[v81]
                                                                                      + 288 * v30
                                                                                      + 8)
                                                          * ((double)dword_6FBB52F8
                                                           * 0.000015258789));
                                        *a13 = (signed int)((double)*(signed __int64 *)(288 * v92
                                                                                      + dword_6FE41420[v62]
                                                                                      + v87)
                                                          * ((double)dword_6FBB52F4
                                                           * 0.000015258789));
                                        *a14 = (signed int)(0.000015258789
                                                          * (double)dword_6FBB52F8
                                                          * (double)*(signed __int64 *)(v87
                                                                                      + dword_6FE41420[v62]
                                                                                      + 288 * v92
                                                                                      + 8));
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            *a9 = *(_DWORD *)(v71 + dword_6FE41420[v68 + (v69 << 9)] + 288 * v85 + 16);
                            *a12 = *(_DWORD *)(v79 + dword_6FE41420[v72 + (v78 << 9)] + 288 * v30 + 16);
                            *a15 = *(_DWORD *)(v87 + dword_6FE41420[v83 + (v84 << 9)] + 288 * v92 + 16);
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
LABEL_24:
                ++v29;
                if ( v29 == &v102 )
                  break;
                v18 = dword_6FE41420[v68 + (v69 << 9)];
              }
              ++v76;
              if ( v76 != &v99 )
              {
                v18 = dword_6FE41420[v68 + (v69 << 9)];
                continue;
              }
              break;
            }
            nullsub_10();
          }
        }
      }
    }
  }
  return 0;
}
