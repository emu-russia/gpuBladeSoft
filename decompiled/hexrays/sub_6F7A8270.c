signed int __usercall sub_6F7A8270@<eax>(int a1@<eax>, signed int a2@<edx>, signed int a3@<ecx>)
{
  int v3; // esi@1
  signed int v4; // edi@1
  signed int v5; // eax@1
  int v6; // ebp@1
  signed int v7; // ecx@2
  signed int v8; // edx@2
  int v9; // edx@5
  signed int v10; // ecx@5
  signed int v11; // eax@6
  signed int v12; // eax@8
  int v13; // eax@9
  signed __int64 v14; // rtt@9
  signed int v15; // ebx@11
  int v16; // ebp@11
  int v17; // eax@14
  signed int v18; // ecx@14
  int v19; // edi@14
  signed int v20; // edx@18
  bool v21; // sf@21
  int v22; // eax@21
  signed int v23; // ebx@23
  signed int v24; // eax@23
  int v25; // eax@25
  int v26; // ecx@27
  signed int result; // eax@32
  int v28; // ebx@34
  signed int v29; // ecx@34
  int v30; // edx@34
  int v31; // eax@34
  signed int v32; // ebx@34
  int v33; // eax@34
  int v34; // ebp@34
  unsigned int v35; // ebx@34
  int v36; // ecx@34
  int v37; // edx@34
  int v38; // ebx@34
  int v39; // eax@35
  int v40; // edx@37
  int v41; // edi@39
  __int64 v42; // rcx@39
  unsigned int v43; // ebp@39
  signed int v44; // eax@43
  int v45; // edx@46
  int v46; // eax@49
  int *v47; // eax@51
  int v48; // eax@51
  int v49; // edx@53
  int v50; // edx@57
  int v51; // edx@59
  int v52; // eax@59
  int v53; // edx@60
  int v54; // edx@60
  int v55; // eax@62
  int v56; // edx@63
  int v57; // edx@64
  int v58; // ebp@66
  int v59; // edx@66
  int v60; // ecx@72
  int v61; // ebp@74
  int v62; // ecx@74
  int v63; // ebp@75
  int v64; // ecx@75
  int v65; // eax@78
  int v66; // [sp+14h] [bp-68h]@6
  int v67; // [sp+14h] [bp-68h]@14
  signed int v68; // [sp+14h] [bp-68h]@34
  int v69; // [sp+18h] [bp-64h]@5
  unsigned int v70; // [sp+18h] [bp-64h]@25
  int v71; // [sp+18h] [bp-64h]@34
  signed int v72; // [sp+1Ch] [bp-60h]@1
  signed int v73; // [sp+20h] [bp-5Ch]@1
  signed int v74; // [sp+24h] [bp-58h]@1
  signed int v75; // [sp+28h] [bp-54h]@6
  unsigned int v76; // [sp+28h] [bp-54h]@34
  int v77; // [sp+2Ch] [bp-50h]@8
  int v78; // [sp+2Ch] [bp-50h]@34
  int v79; // [sp+2Ch] [bp-50h]@40
  signed int v80; // [sp+30h] [bp-4Ch]@8
  int v81; // [sp+30h] [bp-4Ch]@39
  int v82; // [sp+34h] [bp-48h]@8
  signed int v83; // [sp+34h] [bp-48h]@37
  int v84; // [sp+38h] [bp-44h]@12
  int v85; // [sp+38h] [bp-44h]@51
  int v86; // [sp+3Ch] [bp-40h]@12
  int v87; // [sp+3Ch] [bp-40h]@51
  int v88; // [sp+40h] [bp-3Ch]@9
  signed int v89; // [sp+40h] [bp-3Ch]@14
  int v90; // [sp+40h] [bp-3Ch]@34
  int v91; // [sp+44h] [bp-38h]@15
  int *v92; // [sp+44h] [bp-38h]@51
  int v93; // [sp+48h] [bp-34h]@5
  int v94; // [sp+4Ch] [bp-30h]@16
  int v95; // [sp+4Ch] [bp-30h]@60
  int v96; // [sp+50h] [bp-2Ch]@16
  int v97; // [sp+50h] [bp-2Ch]@34
  int v98; // [sp+54h] [bp-28h]@66
  int *v99; // [sp+58h] [bp-24h]@66

  v3 = a1;
  v4 = a3 >> 8;
  v5 = *(_DWORD *)(a1 + 136);
  v72 = a3;
  v73 = a2;
  v74 = a3 >> 8 << 8;
  v6 = v5 >> 8;
  if ( v5 >> 8 > a3 >> 8 )
  {
    v7 = v5 >> 8;
    v8 = v4;
  }
  else
  {
    v7 = a3 >> 8;
    v8 = v5 >> 8;
  }
  if ( v8 < *(_DWORD *)(v3 + 84) && v7 >= *(_DWORD *)(v3 + 80) )
  {
    v9 = *(_DWORD *)(v3 + 132);
    v10 = *(_DWORD *)(v3 + 128);
    v69 = *(_DWORD *)(v3 + 132) - v5;
    v93 = v72 - v74;
    if ( v6 == v4 )
    {
      sub_6F7A7D70(v3, v5 >> 8, v10, *(_DWORD *)(v3 + 132) - v5, v73, v72 - v74);
    }
    else
    {
      v11 = v72 - v9;
      v75 = v72 - v9;
      v66 = v73 - v10;
      if ( v73 == v10 )
      {
        v78 = v10 >> 8;
        v28 = 2 * (unsigned __int8)v10;
        v29 = v11 >> 31;
        v90 = v28;
        v30 = v28;
        v31 = ~(unsigned __int16)(v11 >> 31) & 0x100;
        v32 = v29;
        v29 |= 1u;
        v97 = v31;
        v33 = v31 - v69;
        *(_DWORD *)(v3 + 100) += v33;
        v34 = v29 + v6;
        v35 = (v32 & 0xFFFFFE00) + 256;
        v68 = v29;
        v76 = v35;
        *(_DWORD *)(v3 + 96) += v33 * v30;
        sub_6F7A7C50(v3, v78, v34);
        v36 = *(_DWORD *)(v3 + 96);
        v37 = v35 * v90;
        v38 = *(_DWORD *)(v3 + 100);
        v71 = v37;
        if ( v4 != v34 )
        {
          v39 = v78;
          if ( *(_DWORD *)(v3 + 76) <= v78 )
            v39 = *(_DWORD *)(v3 + 76);
          v83 = v4;
          v40 = v39 - *(_DWORD *)(v3 + 72);
          if ( v40 < 0 )
            v40 = -1;
          v41 = v40;
          HIDWORD(v42) = *(_DWORD *)(v3 + 96);
          v81 = *(_DWORD *)(v3 + 80) - v68;
          LODWORD(v42) = *(_DWORD *)(v3 + 100);
          v43 = v68 + v34 - *(_DWORD *)(v3 + 80);
          do
          {
            v45 = *(_DWORD *)(v3 + 64);
            HIDWORD(v42) += v71;
            LODWORD(v42) = v76 + v42;
            if ( v45 != v41 || v43 != *(_DWORD *)(v3 + 68) )
            {
              v79 = *(_DWORD *)(v3 + 104);
              if ( !*(_DWORD *)(v3 + 104) && v42 )
              {
                v46 = *(_DWORD *)(v3 + 88);
                if ( v45 <= v46 )
                  v46 = *(_DWORD *)(v3 + 64);
                v85 = v46;
                v47 = (int *)(*(_DWORD *)(v3 + 1328) + 4 * *(_DWORD *)(v3 + 68));
                v92 = v47;
                v48 = *v47;
                v87 = v48;
                if ( v48 && *(_DWORD *)v48 <= v85 )
                {
                  v49 = v48;
                  if ( *(_DWORD *)v48 != v85 )
                  {
                    do
                    {
                      v50 = v48 + 12;
                      v48 = *(_DWORD *)(v48 + 12);
                      if ( !v48 || *(_DWORD *)v48 > v85 )
                      {
                        v87 = v48;
                        v92 = (int *)v50;
                        goto LABEL_59;
                      }
                    }
                    while ( *(_DWORD *)v48 != v85 );
                    v49 = v48;
                  }
                  v79 = *(_DWORD *)(v48 + 8);
                  v65 = v49;
                  v54 = *(_DWORD *)(v49 + 4);
                  v95 = v65;
                }
                else
                {
LABEL_59:
                  v51 = *(_DWORD *)(v3 + 116);
                  v52 = *(_DWORD *)(v3 + 116);
                  if ( v51 >= *(_DWORD *)(v3 + 112) )
                  {
                    *(_DWORD *)(v3 + 96) = HIDWORD(v42);
                    *(_DWORD *)(v3 + 100) = v42;
LABEL_84:
                    longjmp(v3, 1);
                  }
                  *(_DWORD *)(v3 + 116) = v51 + 1;
                  v53 = *(_DWORD *)(v3 + 108) + 16 * v52;
                  *(_DWORD *)v53 = v85;
                  *(_DWORD *)(v53 + 8) = 0;
                  *(_DWORD *)(v53 + 4) = 0;
                  v95 = v53;
                  *(_DWORD *)(v53 + 12) = v87;
                  *v92 = v53;
                  v54 = 0;
                }
                *(_DWORD *)(v95 + 8) = HIDWORD(v42) + v79;
                *(_DWORD *)(v95 + 4) = v42 + v54;
              }
              *(_DWORD *)(v3 + 64) = v41;
              *(_DWORD *)(v3 + 68) = v43;
              v42 = 0i64;
            }
            v44 = 1;
            if ( *(_DWORD *)(v3 + 92) > v43 )
            {
              v44 = v41 < *(_DWORD *)(v3 + 88);
              LOBYTE(v44) = v41 >= *(_DWORD *)(v3 + 88);
            }
            v43 += v68;
            *(_DWORD *)(v3 + 104) = v44;
          }
          while ( v83 != v43 + v81 );
          v55 = v42;
          v36 = HIDWORD(v42);
          v38 = v55;
        }
        v56 = v97 + v93 - 256;
        *(_DWORD *)(v3 + 100) = v38 + v56;
        *(_DWORD *)(v3 + 96) = v56 * v90 + v36;
      }
      else
      {
        if ( v75 < 0 )
        {
          v75 = -v75;
          v12 = v66 * v69;
          v82 = 256;
          v80 = -1;
          v77 = 0;
        }
        else
        {
          v82 = 0;
          v12 = v66 * (256 - v69);
          v80 = 1;
          v77 = 256;
        }
        v14 = v12;
        v13 = v12 / v75;
        v88 = v14 % v75;
        if ( v88 < 0 )
        {
          --v13;
          v88 += v75;
        }
        v15 = v13 + v10;
        sub_6F7A7D70(v3, v6, v10, v69, v13 + v10, v77);
        v16 = v80 + v6;
        sub_6F7A7C50(v3, v15 >> 8, v16);
        if ( v4 != v16 )
        {
          v84 = (v66 << 8) % v75;
          v86 = (v66 << 8) / v75;
          if ( v84 < 0 )
          {
            --v86;
            v84 += v75;
          }
          v17 = v88 - v75;
          v18 = v15;
          v89 = v4;
          v19 = v16;
          v67 = v17;
          while ( 1 )
          {
            v21 = v84 + v67 < 0;
            v67 += v84;
            v22 = v86;
            if ( !v21 )
            {
              v67 -= v75;
              v22 = v86 + 1;
            }
            v23 = v22 + v18;
            sub_6F7A7D70(v3, v19, v18, v82, v22 + v18, v77);
            v19 += v80;
            v24 = v23 >> 8;
            if ( v23 >> 8 > *(_DWORD *)(v3 + 76) )
              v24 = *(_DWORD *)(v3 + 76);
            v25 = v24 - *(_DWORD *)(v3 + 72);
            v70 = v19 - *(_DWORD *)(v3 + 80);
            if ( v25 < 0 )
              v25 = -1;
            v26 = *(_DWORD *)(v3 + 64);
            if ( v26 == v25 && v19 - *(_DWORD *)(v3 + 80) == *(_DWORD *)(v3 + 68) )
              goto LABEL_18;
            v91 = *(_DWORD *)(v3 + 104);
            if ( !*(_DWORD *)(v3 + 104) )
            {
              v94 = *(_DWORD *)(v3 + 96);
              v96 = *(_DWORD *)(v3 + 100);
              if ( *(_QWORD *)(v3 + 96) )
                break;
            }
LABEL_17:
            *(_DWORD *)(v3 + 96) = 0;
            *(_DWORD *)(v3 + 100) = 0;
            *(_DWORD *)(v3 + 64) = v25;
            *(_DWORD *)(v3 + 68) = v70;
LABEL_18:
            v20 = 1;
            if ( *(_DWORD *)(v3 + 92) > v70 )
            {
              v20 = v25 < *(_DWORD *)(v3 + 88);
              LOBYTE(v20) = v25 >= *(_DWORD *)(v3 + 88);
            }
            *(_DWORD *)(v3 + 104) = v20;
            v18 = v23;
            if ( v89 == v19 )
            {
              v16 = v19;
              goto LABEL_31;
            }
          }
          v57 = *(_DWORD *)(v3 + 88);
          if ( v26 <= v57 )
            v57 = *(_DWORD *)(v3 + 64);
          v58 = v57;
          v98 = v57;
          v59 = *(_DWORD *)(*(_DWORD *)(v3 + 1328) + 4 * *(_DWORD *)(v3 + 68));
          v99 = (int *)(*(_DWORD *)(v3 + 1328) + 4 * *(_DWORD *)(v3 + 68));
          if ( v59 && v58 >= *(_DWORD *)v59 )
          {
            if ( v58 == *(_DWORD *)v59 )
            {
LABEL_79:
              v63 = v59;
              v91 = *(_DWORD *)(v59 + 8);
              v64 = *(_DWORD *)(v59 + 4);
LABEL_76:
              *(_DWORD *)(v63 + 4) = v96 + v64;
              *(_DWORD *)(v63 + 8) = v91 + v94;
              goto LABEL_17;
            }
            while ( 1 )
            {
              v60 = v59 + 12;
              v59 = *(_DWORD *)(v59 + 12);
              if ( !v59 || v98 < *(_DWORD *)v59 )
                break;
              if ( v98 == *(_DWORD *)v59 )
                goto LABEL_79;
            }
            v99 = (int *)v60;
          }
          v61 = *(_DWORD *)(v3 + 116);
          v62 = *(_DWORD *)(v3 + 116);
          if ( v61 >= *(_DWORD *)(v3 + 112) )
            goto LABEL_84;
          *(_DWORD *)(v3 + 116) = v61 + 1;
          v63 = *(_DWORD *)(v3 + 108) + 16 * v62;
          *(_DWORD *)v63 = v98;
          *(_DWORD *)(v63 + 8) = 0;
          *(_DWORD *)(v63 + 4) = 0;
          *(_DWORD *)(v63 + 12) = v59;
          *v99 = v63;
          v64 = 0;
          goto LABEL_76;
        }
        v18 = v15;
LABEL_31:
        sub_6F7A7D70(v3, v16, v18, v82, v73, v93);
      }
    }
  }
  *(_DWORD *)(v3 + 128) = v73;
  *(_DWORD *)(v3 + 132) = v72;
  result = v74;
  *(_DWORD *)(v3 + 136) = v74;
  return result;
}
