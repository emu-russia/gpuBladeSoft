signed int __cdecl sub_6F846D49(int a1, _BYTE *a2, int a3)
{
  signed int result; // eax@1
  __int16 v4; // ST7A_2@76
  __int16 v5; // ST70_2@111
  __int16 v6; // ST70_2@111
  __int16 v7; // ST70_2@111
  unsigned __int16 v8; // ST64_2@132
  unsigned __int16 v9; // ST60_2@142
  __int16 v10; // ST5C_2@151
  unsigned int v11; // ST48_4@165
  unsigned __int16 v12; // ST42_2@178
  unsigned __int16 v13; // ST40_2@180
  unsigned __int16 v14; // ST3E_2@182
  unsigned __int16 v15; // ST3A_2@192
  unsigned __int16 v16; // ST38_2@192
  unsigned __int16 v17; // ST36_2@192
  __int16 v18; // ST32_2@201
  __int16 v19; // ST32_2@201
  __int16 v20; // ST32_2@201
  unsigned int v21; // ST2C_4@204
  unsigned int v22; // ST28_4@206
  unsigned int v23; // ST24_4@208
  unsigned __int16 v24; // ST1E_2@218
  unsigned __int16 v25; // ST1C_2@218
  unsigned int v26; // ST18_4@218
  unsigned int v27; // ST10_4@218
  unsigned int v28; // ST0C_4@218
  unsigned __int16 v29; // [sp+22h] [bp-C2h]@215
  unsigned __int16 v30; // [sp+34h] [bp-B0h]@200
  unsigned __int8 v31; // [sp+3Dh] [bp-A7h]@189
  unsigned __int8 v32; // [sp+45h] [bp-9Fh]@174
  unsigned __int16 v33; // [sp+50h] [bp-94h]@162
  unsigned int v34; // [sp+54h] [bp-90h]@154
  unsigned __int16 v35; // [sp+5Eh] [bp-86h]@150
  unsigned __int8 v36; // [sp+63h] [bp-81h]@139
  __int16 v37; // [sp+68h] [bp-7Ch]@128
  unsigned int v38; // [sp+A8h] [bp-3Ch]@1
  int v39; // [sp+ACh] [bp-38h]@1
  int v40; // [sp+B0h] [bp-34h]@1
  int v41; // [sp+B4h] [bp-30h]@1
  int v42; // [sp+B8h] [bp-2Ch]@1
  int v43; // [sp+BCh] [bp-28h]@1
  int v44; // [sp+C0h] [bp-24h]@1
  int v45; // [sp+C4h] [bp-20h]@1
  int v46; // [sp+C8h] [bp-1Ch]@1
  unsigned __int16 v47; // [sp+CCh] [bp-18h]@204
  unsigned __int16 v48; // [sp+CCh] [bp-18h]@206
  unsigned __int16 v49; // [sp+CCh] [bp-18h]@208
  unsigned __int8 v50; // [sp+CFh] [bp-15h]@178
  unsigned __int8 v51; // [sp+CFh] [bp-15h]@180
  unsigned __int8 v52; // [sp+CFh] [bp-15h]@182
  __int16 v53; // [sp+D0h] [bp-14h]@155
  unsigned __int8 v54; // [sp+D3h] [bp-11h]@132
  signed int v55; // [sp+D4h] [bp-10h]@9
  signed int v56; // [sp+D4h] [bp-10h]@19
  signed int v57; // [sp+D4h] [bp-10h]@29
  signed int v58; // [sp+D4h] [bp-10h]@39
  signed int v59; // [sp+D4h] [bp-10h]@49
  unsigned int i; // [sp+D8h] [bp-Ch]@9
  unsigned int j; // [sp+D8h] [bp-Ch]@19
  unsigned int k; // [sp+D8h] [bp-Ch]@29
  unsigned int l; // [sp+D8h] [bp-Ch]@39
  unsigned int m; // [sp+D8h] [bp-Ch]@49
  unsigned int v65; // [sp+D8h] [bp-Ch]@59
  unsigned int v66; // [sp+D8h] [bp-Ch]@66
  unsigned int v67; // [sp+D8h] [bp-Ch]@73
  unsigned int v68; // [sp+D8h] [bp-Ch]@80
  unsigned int v69; // [sp+D8h] [bp-Ch]@88
  unsigned int v70; // [sp+D8h] [bp-Ch]@97
  unsigned int v71; // [sp+D8h] [bp-Ch]@106
  unsigned int v72; // [sp+D8h] [bp-Ch]@115
  unsigned int v73; // [sp+D8h] [bp-Ch]@127
  unsigned int v74; // [sp+D8h] [bp-Ch]@138
  unsigned int v75; // [sp+D8h] [bp-Ch]@149
  unsigned int v76; // [sp+D8h] [bp-Ch]@161
  unsigned int v77; // [sp+D8h] [bp-Ch]@173
  unsigned int v78; // [sp+D8h] [bp-Ch]@188
  unsigned int v79; // [sp+D8h] [bp-Ch]@199
  unsigned int v80; // [sp+D8h] [bp-Ch]@214
  _BYTE *v81; // [sp+DCh] [bp-8h]@9
  _BYTE *v82; // [sp+DCh] [bp-8h]@19
  _BYTE *v83; // [sp+DCh] [bp-8h]@29
  _BYTE *v84; // [sp+DCh] [bp-8h]@39
  _BYTE *v85; // [sp+DCh] [bp-8h]@49
  _BYTE *v86; // [sp+DCh] [bp-8h]@59
  _BYTE *v87; // [sp+DCh] [bp-8h]@66
  _BYTE *v88; // [sp+DCh] [bp-8h]@73
  _BYTE *v89; // [sp+DCh] [bp-8h]@80
  _BYTE *v90; // [sp+DCh] [bp-8h]@88
  _BYTE *v91; // [sp+DCh] [bp-8h]@97
  _BYTE *v92; // [sp+DCh] [bp-8h]@106
  _BYTE *v93; // [sp+DCh] [bp-8h]@115
  _BYTE *v94; // [sp+DCh] [bp-8h]@127
  _BYTE *v95; // [sp+DCh] [bp-8h]@138
  _BYTE *v96; // [sp+DCh] [bp-8h]@149
  _BYTE *v97; // [sp+DCh] [bp-8h]@161
  _BYTE *v98; // [sp+DCh] [bp-8h]@173
  _BYTE *v99; // [sp+DCh] [bp-8h]@188
  _BYTE *v100; // [sp+DCh] [bp-8h]@199
  _BYTE *v101; // [sp+DCh] [bp-8h]@214

  v46 = *(_DWORD *)(a3 + 400);
  v45 = *(_DWORD *)(a3 + 408);
  v44 = *(_DWORD *)(a3 + 412);
  v43 = *(_DWORD *)(a3 + 404);
  v42 = *(_DWORD *)(a3 + 416);
  v41 = *(_DWORD *)(a3 + 420);
  v40 = *(_DWORD *)(a3 + 392);
  v39 = (*(_DWORD *)(a3 + 120) & 0x2000) != 0;
  v38 = *(_DWORD *)a1;
  result = *(_BYTE *)(a1 + 8);
  if ( result == 2 )
  {
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      if ( v46 )
      {
        v90 = a2;
        v69 = 0;
        while ( 1 )
        {
          result = v69;
          if ( v69 >= v38 )
            break;
          if ( *v90 != *(_WORD *)(a3 + 442) || v90[1] != *(_WORD *)(a3 + 444) || v90[2] != *(_WORD *)(a3 + 446) )
          {
            *v90 = *(_BYTE *)(*v90 + v46);
            v90[1] = *(_BYTE *)(v90[1] + v46);
            v90[2] = *(_BYTE *)(v90[2] + v46);
          }
          else
          {
            *v90 = *(_WORD *)(a3 + 362);
            v90[1] = *(_WORD *)(a3 + 364);
            v90[2] = *(_WORD *)(a3 + 366);
          }
          ++v69;
          v90 += 3;
        }
      }
      else
      {
        v91 = a2;
        v70 = 0;
        while ( 1 )
        {
          result = v70;
          if ( v70 >= v38 )
            break;
          if ( *v91 == *(_WORD *)(a3 + 442) && v91[1] == *(_WORD *)(a3 + 444) && v91[2] == *(_WORD *)(a3 + 446) )
          {
            *v91 = *(_WORD *)(a3 + 362);
            v91[1] = *(_WORD *)(a3 + 364);
            v91[2] = *(_WORD *)(a3 + 366);
          }
          ++v70;
          v91 += 3;
        }
      }
    }
    else if ( v43 )
    {
      v92 = a2;
      v71 = 0;
      while ( 1 )
      {
        result = v71;
        if ( v71 >= v38 )
          break;
        if ( *(_WORD *)(a3 + 442) != (*v92 << 8) + v92[1]
          || *(_WORD *)(a3 + 444) != (v92[2] << 8) + v92[3]
          || *(_WORD *)(a3 + 446) != (v92[4] << 8) + v92[5] )
        {
          v5 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v92[1] >> v40) + v43) + 2 * *v92);
          *v92 = HIBYTE(v5);
          v92[1] = v5;
          v6 = *(_WORD *)(2 * v92[2] + *(_DWORD *)(4 * ((signed int)v92[3] >> v40) + v43));
          v92[2] = HIBYTE(v6);
          v92[3] = v6;
          v7 = *(_WORD *)(2 * v92[4] + *(_DWORD *)(4 * ((signed int)v92[5] >> v40) + v43));
          v92[4] = HIBYTE(v7);
          v92[5] = v7;
        }
        else
        {
          *v92 = *(_WORD *)(a3 + 362) >> 8;
          v92[1] = *(_WORD *)(a3 + 362);
          v92[2] = *(_WORD *)(a3 + 364) >> 8;
          v92[3] = *(_WORD *)(a3 + 364);
          v92[4] = *(_WORD *)(a3 + 366) >> 8;
          v92[5] = *(_WORD *)(a3 + 366);
        }
        ++v71;
        v92 += 6;
      }
    }
    else
    {
      v93 = a2;
      v72 = 0;
      while ( 1 )
      {
        result = v72;
        if ( v72 >= v38 )
          break;
        if ( *(_WORD *)(a3 + 442) == (*v93 << 8) + v93[1]
          && *(_WORD *)(a3 + 444) == (v93[2] << 8) + v93[3]
          && *(_WORD *)(a3 + 446) == (v93[4] << 8) + v93[5] )
        {
          *v93 = *(_WORD *)(a3 + 362) >> 8;
          v93[1] = *(_WORD *)(a3 + 362);
          v93[2] = *(_WORD *)(a3 + 364) >> 8;
          v93[3] = *(_WORD *)(a3 + 364);
          v93[4] = *(_WORD *)(a3 + 366) >> 8;
          v93[5] = *(_WORD *)(a3 + 366);
        }
        ++v72;
        v93 += 6;
      }
    }
  }
  else if ( result > 2 )
  {
    if ( result == 4 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        if ( v44 && v45 && v46 )
        {
          v94 = a2;
          v73 = 0;
          while ( 1 )
          {
            result = v73;
            if ( v73 >= v38 )
              break;
            v37 = v94[1];
            if ( v37 == 255 )
            {
              *v94 = *(_BYTE *)(*v94 + v46);
            }
            else if ( v94[1] )
            {
              v8 = v37 * *(_BYTE *)(*v94 + v44) + *(_WORD *)(a3 + 378) * (255 - v37) + 128;
              v54 = (unsigned __int16)(v8 + (v8 >> 8)) >> 8;
              if ( !v39 )
                v54 = *(_BYTE *)(v54 + v45);
              *v94 = v54;
            }
            else
            {
              *v94 = *(_WORD *)(a3 + 368);
            }
            ++v73;
            v94 += 2;
          }
        }
        else
        {
          v95 = a2;
          v74 = 0;
          while ( 1 )
          {
            result = v74;
            if ( v74 >= v38 )
              break;
            v36 = v95[1];
            if ( v36 )
            {
              if ( v36 != -1 )
              {
                v9 = v36 * *v95 + (255 - v36) * *(_WORD *)(a3 + 368) + 128;
                *v95 = (unsigned __int16)(v9 + (v9 >> 8)) >> 8;
              }
            }
            else
            {
              *v95 = *(_WORD *)(a3 + 368);
            }
            ++v74;
            v95 += 2;
          }
        }
      }
      else if ( v43 && v42 && v41 )
      {
        v96 = a2;
        v75 = 0;
        while ( 1 )
        {
          result = v75;
          if ( v75 >= v38 )
            break;
          v35 = (v96[2] << 8) + v96[3];
          if ( v35 == -1 )
          {
            v10 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v96[1] >> v40) + v43) + 2 * *v96);
            *v96 = HIBYTE(v10);
            v96[1] = v10;
          }
          else if ( v35 )
          {
            v34 = v35 * *(_WORD *)(*(_DWORD *)(4 * ((signed int)v96[1] >> v40) + v41) + 2 * *v96)
                + (0xFFFF - v35) * *(_WORD *)(a3 + 378)
                + 0x8000;
            if ( v39 )
              v53 = ((v34 >> 16) + v34) >> 16;
            else
              v53 = *(_WORD *)(2 * ((unsigned __int16)(((v34 >> 16) + v34) >> 16) >> 8)
                             + *(_DWORD *)(4 * ((signed int)(unsigned __int8)(((v34 >> 16) + v34) >> 16) >> v40) + v42));
            *v96 = HIBYTE(v53);
            v96[1] = v53;
          }
          else
          {
            *v96 = *(_WORD *)(a3 + 368) >> 8;
            v96[1] = *(_WORD *)(a3 + 368);
          }
          ++v75;
          v96 += 4;
        }
      }
      else
      {
        v97 = a2;
        v76 = 0;
        while ( 1 )
        {
          result = v76;
          if ( v76 >= v38 )
            break;
          v33 = (v97[2] << 8) + v97[3];
          if ( v33 )
          {
            if ( v33 != -1 )
            {
              v11 = v33 * (unsigned __int16)((*v97 << 8) + v97[1]) + (0xFFFF - v33) * *(_WORD *)(a3 + 368) + 0x8000;
              *v97 = ((v11 >> 16) + v11) >> 24;
              v97[1] = ((v11 >> 16) + v11) >> 16;
            }
          }
          else
          {
            *v97 = *(_WORD *)(a3 + 368) >> 8;
            v97[1] = *(_WORD *)(a3 + 368);
          }
          ++v76;
          v97 += 4;
        }
      }
    }
    else if ( result == 6 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        if ( v44 && v45 && v46 )
        {
          v98 = a2;
          v77 = 0;
          while ( 1 )
          {
            result = v77;
            if ( v77 >= v38 )
              break;
            v32 = v98[3];
            if ( v32 == -1 )
            {
              *v98 = *(_BYTE *)(*v98 + v46);
              v98[1] = *(_BYTE *)(v98[1] + v46);
              v98[2] = *(_BYTE *)(v98[2] + v46);
            }
            else if ( v32 )
            {
              v12 = v32 * *(_BYTE *)(*v98 + v44) + (255 - v32) * *(_WORD *)(a3 + 372) + 128;
              v50 = (unsigned __int16)(v12 + (v12 >> 8)) >> 8;
              if ( !v39 )
                v50 = *(_BYTE *)(v50 + v45);
              *v98 = v50;
              v13 = v32 * *(_BYTE *)(v98[1] + v44) + (255 - v32) * *(_WORD *)(a3 + 374) + 128;
              v51 = (unsigned __int16)(v13 + (v13 >> 8)) >> 8;
              if ( !v39 )
                v51 = *(_BYTE *)(v51 + v45);
              v98[1] = v51;
              v14 = v32 * *(_BYTE *)(v98[2] + v44) + (255 - v32) * *(_WORD *)(a3 + 376) + 128;
              v52 = (unsigned __int16)(v14 + (v14 >> 8)) >> 8;
              if ( !v39 )
                v52 = *(_BYTE *)(v52 + v45);
              v98[2] = v52;
            }
            else
            {
              *v98 = *(_WORD *)(a3 + 362);
              v98[1] = *(_WORD *)(a3 + 364);
              v98[2] = *(_WORD *)(a3 + 366);
            }
            ++v77;
            v98 += 4;
          }
        }
        else
        {
          v99 = a2;
          v78 = 0;
          while ( 1 )
          {
            result = v78;
            if ( v78 >= v38 )
              break;
            v31 = v99[3];
            if ( v31 )
            {
              if ( v31 != -1 )
              {
                v15 = v31 * *v99 + (255 - v31) * *(_WORD *)(a3 + 362) + 128;
                *v99 = (unsigned __int16)(v15 + (v15 >> 8)) >> 8;
                v16 = v31 * v99[1] + (255 - v31) * *(_WORD *)(a3 + 364) + 128;
                v99[1] = (unsigned __int16)(v16 + (v16 >> 8)) >> 8;
                v17 = v31 * v99[2] + (255 - v31) * *(_WORD *)(a3 + 366) + 128;
                v99[2] = (unsigned __int16)(v17 + (v17 >> 8)) >> 8;
              }
            }
            else
            {
              *v99 = *(_WORD *)(a3 + 362);
              v99[1] = *(_WORD *)(a3 + 364);
              v99[2] = *(_WORD *)(a3 + 366);
            }
            ++v78;
            v99 += 4;
          }
        }
      }
      else if ( v43 && v42 && v41 )
      {
        v100 = a2;
        v79 = 0;
        while ( 1 )
        {
          result = v79;
          if ( v79 >= v38 )
            break;
          v30 = (v100[6] << 8) + v100[7];
          if ( v30 == -1 )
          {
            v18 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v100[1] >> v40) + v43) + 2 * *v100);
            *v100 = HIBYTE(v18);
            v100[1] = v18;
            v19 = *(_WORD *)(2 * v100[2] + *(_DWORD *)(4 * ((signed int)v100[3] >> v40) + v43));
            v100[2] = HIBYTE(v19);
            v100[3] = v19;
            v20 = *(_WORD *)(2 * v100[4] + *(_DWORD *)(4 * ((signed int)v100[5] >> v40) + v43));
            v100[4] = HIBYTE(v20);
            v100[5] = v20;
          }
          else if ( v30 )
          {
            v21 = v30 * *(_WORD *)(*(_DWORD *)(4 * ((signed int)v100[1] >> v40) + v41) + 2 * *v100)
                + (0xFFFF - v30) * *(_WORD *)(a3 + 372)
                + 0x8000;
            v47 = ((v21 >> 16) + v21) >> 16;
            if ( !v39 )
              v47 = *(_WORD *)(2 * (v47 >> 8) + *(_DWORD *)(4 * ((signed int)(unsigned __int8)v47 >> v40) + v42));
            *v100 = HIBYTE(v47);
            v100[1] = v47;
            v22 = v30 * *(_WORD *)(2 * v100[2] + *(_DWORD *)(4 * ((signed int)v100[3] >> v40) + v41))
                + (0xFFFF - v30) * *(_WORD *)(a3 + 374)
                + 0x8000;
            v48 = ((v22 >> 16) + v22) >> 16;
            if ( !v39 )
              v48 = *(_WORD *)(2 * (v48 >> 8) + *(_DWORD *)(4 * ((signed int)(unsigned __int8)v48 >> v40) + v42));
            v100[2] = HIBYTE(v48);
            v100[3] = v48;
            v23 = v30 * *(_WORD *)(2 * v100[4] + *(_DWORD *)(4 * ((signed int)v100[5] >> v40) + v41))
                + (0xFFFF - v30) * *(_WORD *)(a3 + 376)
                + 0x8000;
            v49 = ((v23 >> 16) + v23) >> 16;
            if ( !v39 )
              v49 = *(_WORD *)(2 * (v49 >> 8) + *(_DWORD *)(4 * ((signed int)(unsigned __int8)v49 >> v40) + v42));
            v100[4] = HIBYTE(v49);
            v100[5] = v49;
          }
          else
          {
            *v100 = *(_WORD *)(a3 + 362) >> 8;
            v100[1] = *(_WORD *)(a3 + 362);
            v100[2] = *(_WORD *)(a3 + 364) >> 8;
            v100[3] = *(_WORD *)(a3 + 364);
            v100[4] = *(_WORD *)(a3 + 366) >> 8;
            v100[5] = *(_WORD *)(a3 + 366);
          }
          ++v79;
          v100 += 8;
        }
      }
      else
      {
        v101 = a2;
        v80 = 0;
        while ( 1 )
        {
          result = v80;
          if ( v80 >= v38 )
            break;
          v29 = (v101[6] << 8) + v101[7];
          if ( v29 )
          {
            if ( v29 != -1 )
            {
              v24 = (v101[2] << 8) + v101[3];
              v25 = (v101[4] << 8) + v101[5];
              v26 = v29 * (unsigned __int16)((*v101 << 8) + v101[1]) + (0xFFFF - v29) * *(_WORD *)(a3 + 362) + 0x8000;
              *v101 = ((v26 >> 16) + v26) >> 24;
              v101[1] = ((v26 >> 16) + v26) >> 16;
              v27 = v29 * v24 + (0xFFFF - v29) * *(_WORD *)(a3 + 364) + 0x8000;
              v101[2] = ((v27 >> 16) + v27) >> 24;
              v101[3] = ((v27 >> 16) + v27) >> 16;
              v28 = v29 * v25 + (0xFFFF - v29) * *(_WORD *)(a3 + 366) + 0x8000;
              v101[4] = ((v28 >> 16) + v28) >> 24;
              v101[5] = ((v28 >> 16) + v28) >> 16;
            }
          }
          else
          {
            *v101 = *(_WORD *)(a3 + 362) >> 8;
            v101[1] = *(_WORD *)(a3 + 362);
            v101[2] = *(_WORD *)(a3 + 364) >> 8;
            v101[3] = *(_WORD *)(a3 + 364);
            v101[4] = *(_WORD *)(a3 + 366) >> 8;
            v101[5] = *(_WORD *)(a3 + 366);
          }
          ++v80;
          v101 += 8;
        }
      }
    }
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    result = *(_BYTE *)(a1 + 9);
    switch ( result )
    {
      case 1:
        v81 = a2;
        v55 = 7;
        for ( i = 0; ; ++i )
        {
          result = i;
          if ( i >= v38 )
            break;
          if ( (((signed int)*v81 >> v55) & 1) == *(_WORD *)(a3 + 448) )
            *v81 = (*(_WORD *)(a3 + 368) << v55) | *v81 & (32639 >> (7 - v55));
          if ( v55 )
          {
            --v55;
          }
          else
          {
            v55 = 7;
            ++v81;
          }
        }
        break;
      case 2:
        if ( v46 )
        {
          v82 = a2;
          v56 = 6;
          for ( j = 0; ; ++j )
          {
            result = j;
            if ( j >= v38 )
              break;
            if ( (((signed int)*v82 >> v56) & 3) == *(_WORD *)(a3 + 448) )
              *v82 = (*(_WORD *)(a3 + 368) << v56) | *v82 & (16191 >> (6 - v56));
            else
              *v82 = (((*(_BYTE *)((((((signed int)*v82 >> v56) & 3) << 6) | ((signed int)*v82 >> v56) & 3 | 4 * (((signed int)*v82 >> v56) & 3) | 16 * (((signed int)*v82 >> v56) & 3))
                                 + v46) >> 6) & 3) << v56) | *v82 & (16191 >> (6 - v56));
            if ( v56 )
            {
              v56 -= 2;
            }
            else
            {
              v56 = 6;
              ++v82;
            }
          }
        }
        else
        {
          v83 = a2;
          v57 = 6;
          for ( k = 0; ; ++k )
          {
            result = k;
            if ( k >= v38 )
              break;
            if ( (((signed int)*v83 >> v57) & 3) == *(_WORD *)(a3 + 448) )
              *v83 = (*(_WORD *)(a3 + 368) << v57) | *v83 & (16191 >> (6 - v57));
            if ( v57 )
            {
              v57 -= 2;
            }
            else
            {
              v57 = 6;
              ++v83;
            }
          }
        }
        break;
      case 4:
        if ( v46 )
        {
          v84 = a2;
          v58 = 4;
          for ( l = 0; ; ++l )
          {
            result = l;
            if ( l >= v38 )
              break;
            if ( (((signed int)*v84 >> v58) & 0xF) == *(_WORD *)(a3 + 448) )
              *v84 = (*(_WORD *)(a3 + 368) << v58) | *v84 & (3855 >> (4 - v58));
            else
              *v84 = (((*(_BYTE *)((((signed int)*v84 >> v58) & 0xF | 16 * (((signed int)*v84 >> v58) & 0xF)) + v46) >> 4) & 0xF) << v58) | *v84 & (3855 >> (4 - v58));
            if ( v58 )
            {
              v58 -= 4;
            }
            else
            {
              v58 = 4;
              ++v84;
            }
          }
        }
        else
        {
          v85 = a2;
          v59 = 4;
          for ( m = 0; ; ++m )
          {
            result = m;
            if ( m >= v38 )
              break;
            if ( (((signed int)*v85 >> v59) & 0xF) == *(_WORD *)(a3 + 448) )
              *v85 = (*(_WORD *)(a3 + 368) << v59) | *v85 & (3855 >> (4 - v59));
            if ( v59 )
            {
              v59 -= 4;
            }
            else
            {
              v59 = 4;
              ++v85;
            }
          }
        }
        break;
      case 8:
        if ( v46 )
        {
          v86 = a2;
          v65 = 0;
          while ( 1 )
          {
            result = v65;
            if ( v65 >= v38 )
              break;
            if ( *v86 == *(_WORD *)(a3 + 448) )
              *v86 = *(_WORD *)(a3 + 368);
            else
              *v86 = *(_BYTE *)(*v86 + v46);
            ++v65;
            ++v86;
          }
        }
        else
        {
          v87 = a2;
          v66 = 0;
          while ( 1 )
          {
            result = v66;
            if ( v66 >= v38 )
              break;
            if ( *v87 == *(_WORD *)(a3 + 448) )
              *v87 = *(_WORD *)(a3 + 368);
            ++v66;
            ++v87;
          }
        }
        break;
      case 16:
        if ( v43 )
        {
          v88 = a2;
          v67 = 0;
          while ( 1 )
          {
            result = v67;
            if ( v67 >= v38 )
              break;
            if ( *(_WORD *)(a3 + 448) == (*v88 << 8) + v88[1] )
            {
              *v88 = *(_WORD *)(a3 + 368) >> 8;
              v88[1] = *(_WORD *)(a3 + 368);
            }
            else
            {
              v4 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v88[1] >> v40) + v43) + 2 * *v88);
              *v88 = HIBYTE(v4);
              v88[1] = v4;
            }
            ++v67;
            v88 += 2;
          }
        }
        else
        {
          v89 = a2;
          v68 = 0;
          while ( 1 )
          {
            result = v68;
            if ( v68 >= v38 )
              break;
            if ( *(_WORD *)(a3 + 448) == (*v89 << 8) + v89[1] )
            {
              *v89 = *(_WORD *)(a3 + 368) >> 8;
              v89[1] = *(_WORD *)(a3 + 368);
            }
            ++v68;
            v89 += 2;
          }
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
