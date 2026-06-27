int __cdecl sub_6F7A94F0(int a1, int a2)
{
  int v2; // ebx@1
  signed int v3; // eax@1
  int v4; // edi@1
  int v5; // ebp@1
  signed int v6; // ecx@2
  int v7; // edx@2
  int v8; // edx@5
  signed int v9; // ecx@5
  signed int v10; // eax@6
  signed int v11; // eax@8
  int v12; // eax@9
  signed __int64 v13; // rtt@9
  signed int v14; // ebx@11
  int v15; // ebp@11
  signed int v16; // ecx@14
  int v17; // edi@14
  signed int v18; // edx@18
  bool v19; // sf@21
  int v20; // eax@21
  signed int v21; // ebx@23
  signed int v22; // eax@23
  int v23; // eax@25
  int v24; // ecx@27
  int v26; // ebx@34
  signed int v27; // ecx@34
  signed int v28; // edx@34
  int v29; // eax@34
  int v30; // eax@34
  int v31; // ebp@34
  int v32; // eax@35
  int v33; // eax@37
  int v34; // edx@37
  signed int v35; // eax@37
  signed int v36; // edi@39
  unsigned int v37; // ebp@39
  __int64 v38; // rcx@39
  signed int v39; // eax@43
  int v40; // edx@46
  int v41; // eax@49
  int *v42; // eax@51
  int v43; // eax@51
  int v44; // edx@53
  int v45; // edx@57
  int v46; // edx@59
  int v47; // eax@59
  int v48; // edx@60
  int v49; // edx@60
  int v50; // edx@62
  int v51; // ebp@64
  int v52; // edx@64
  int v53; // ecx@70
  int v54; // ebp@72
  int v55; // ecx@72
  int v56; // ebp@73
  int v57; // ecx@73
  int v58; // eax@75
  int v59; // ecx@75
  int v60; // ebx@75
  int v61; // edx@76
  int v62; // eax@78
  int v63; // [sp+14h] [bp-68h]@6
  int v64; // [sp+14h] [bp-68h]@14
  unsigned int v65; // [sp+14h] [bp-68h]@34
  int v66; // [sp+18h] [bp-64h]@9
  unsigned int v67; // [sp+18h] [bp-64h]@25
  signed int v68; // [sp+18h] [bp-64h]@34
  int v69; // [sp+1Ch] [bp-60h]@1
  signed int v70; // [sp+20h] [bp-5Ch]@1
  int v71; // [sp+24h] [bp-58h]@1
  signed int v72; // [sp+28h] [bp-54h]@6
  int v73; // [sp+2Ch] [bp-50h]@8
  int v74; // [sp+2Ch] [bp-50h]@40
  signed int v75; // [sp+30h] [bp-4Ch]@8
  int v76; // [sp+30h] [bp-4Ch]@39
  int v77; // [sp+34h] [bp-48h]@8
  int v78; // [sp+34h] [bp-48h]@37
  int v79; // [sp+38h] [bp-44h]@5
  int v80; // [sp+38h] [bp-44h]@12
  int v81; // [sp+38h] [bp-44h]@51
  int v82; // [sp+3Ch] [bp-40h]@12
  int v83; // [sp+3Ch] [bp-40h]@51
  int v84; // [sp+40h] [bp-3Ch]@14
  int v85; // [sp+40h] [bp-3Ch]@34
  int v86; // [sp+44h] [bp-38h]@15
  int *v87; // [sp+44h] [bp-38h]@51
  int v88; // [sp+48h] [bp-34h]@5
  int v89; // [sp+4Ch] [bp-30h]@16
  int v90; // [sp+4Ch] [bp-30h]@60
  int v91; // [sp+50h] [bp-2Ch]@16
  int v92; // [sp+50h] [bp-2Ch]@34
  int v93; // [sp+54h] [bp-28h]@64
  int *v94; // [sp+58h] [bp-24h]@64

  v2 = *(_DWORD *)(a1 + 4);
  v70 = 4 * *(_DWORD *)a1;
  v3 = *(_DWORD *)(a2 + 136);
  v69 = 4 * v2;
  v4 = 4 * v2 >> 8;
  v5 = v3 >> 8;
  v71 = v4 << 8;
  if ( v3 >> 8 > v4 )
  {
    v6 = v3 >> 8;
    v7 = 4 * v2 >> 8;
  }
  else
  {
    v6 = 4 * v2 >> 8;
    v7 = v3 >> 8;
  }
  if ( *(_DWORD *)(a2 + 84) > v7 && *(_DWORD *)(a2 + 80) <= v6 )
  {
    v8 = *(_DWORD *)(a2 + 132);
    v9 = *(_DWORD *)(a2 + 128);
    v79 = *(_DWORD *)(a2 + 132) - v3;
    v88 = v69 - v71;
    if ( v5 == v4 )
    {
      sub_6F7A7D70(a2, v3 >> 8, v9, *(_DWORD *)(a2 + 132) - v3, v70, v69 - v71);
    }
    else
    {
      v10 = v69 - v8;
      v72 = v69 - v8;
      v63 = v70 - v9;
      if ( v70 == v9 )
      {
        v26 = v9 >> 8;
        v85 = 2 * (unsigned __int8)v9;
        v27 = v10 >> 31;
        v28 = v27;
        v29 = ~(unsigned __int16)(v10 >> 31) & 0x100;
        v27 |= 1u;
        v92 = v29;
        v30 = v29 - v79;
        *(_DWORD *)(a2 + 100) += v30;
        v31 = v27 + v5;
        v65 = (v28 & 0xFFFFFE00) + 256;
        v68 = v27;
        *(_DWORD *)(a2 + 96) += v30 * v85;
        sub_6F7A7C50(a2, v26, v31);
        if ( v4 == v31 )
        {
          v59 = *(_DWORD *)(a2 + 96);
          v60 = *(_DWORD *)(a2 + 100);
        }
        else
        {
          v32 = v26;
          if ( *(_DWORD *)(a2 + 76) <= v26 )
            v32 = *(_DWORD *)(a2 + 76);
          v33 = v32 - *(_DWORD *)(a2 + 72);
          v19 = v33 < 0;
          v78 = v4;
          v34 = v33;
          v35 = -1;
          if ( !v19 )
            v35 = v34;
          v36 = v35;
          v37 = v68 + v31 - *(_DWORD *)(a2 + 80);
          HIDWORD(v38) = *(_DWORD *)(a2 + 96);
          v76 = *(_DWORD *)(a2 + 80) - v68;
          LODWORD(v38) = *(_DWORD *)(a2 + 100);
          do
          {
            v40 = *(_DWORD *)(a2 + 64);
            HIDWORD(v38) += v65 * v85;
            LODWORD(v38) = v65 + v38;
            if ( v40 != v36 || v37 != *(_DWORD *)(a2 + 68) )
            {
              v74 = *(_DWORD *)(a2 + 104);
              if ( !*(_DWORD *)(a2 + 104) && v38 )
              {
                v41 = *(_DWORD *)(a2 + 88);
                if ( v40 <= v41 )
                  v41 = *(_DWORD *)(a2 + 64);
                v81 = v41;
                v42 = (int *)(*(_DWORD *)(a2 + 1328) + 4 * *(_DWORD *)(a2 + 68));
                v87 = v42;
                v43 = *v42;
                v83 = v43;
                if ( v43 && *(_DWORD *)v43 <= v81 )
                {
                  v44 = v43;
                  if ( *(_DWORD *)v43 != v81 )
                  {
                    do
                    {
                      v45 = v43 + 12;
                      v43 = *(_DWORD *)(v43 + 12);
                      if ( !v43 || *(_DWORD *)v43 > v81 )
                      {
                        v83 = v43;
                        v87 = (int *)v45;
                        goto LABEL_59;
                      }
                    }
                    while ( *(_DWORD *)v43 != v81 );
                    v44 = v43;
                  }
                  v74 = *(_DWORD *)(v43 + 8);
                  v62 = v44;
                  v49 = *(_DWORD *)(v44 + 4);
                  v90 = v62;
                }
                else
                {
LABEL_59:
                  v46 = *(_DWORD *)(a2 + 116);
                  v47 = *(_DWORD *)(a2 + 116);
                  if ( v46 >= *(_DWORD *)(a2 + 112) )
                  {
                    *(_DWORD *)(a2 + 96) = HIDWORD(v38);
                    *(_DWORD *)(a2 + 100) = v38;
LABEL_85:
                    longjmp(a2, 1);
                  }
                  *(_DWORD *)(a2 + 116) = v46 + 1;
                  v48 = *(_DWORD *)(a2 + 108) + 16 * v47;
                  *(_DWORD *)v48 = v81;
                  *(_DWORD *)(v48 + 8) = 0;
                  *(_DWORD *)(v48 + 4) = 0;
                  v90 = v48;
                  *(_DWORD *)(v48 + 12) = v83;
                  *v87 = v48;
                  v49 = 0;
                }
                *(_DWORD *)(v90 + 8) = HIDWORD(v38) + v74;
                *(_DWORD *)(v90 + 4) = v38 + v49;
              }
              *(_DWORD *)(a2 + 64) = v36;
              *(_DWORD *)(a2 + 68) = v37;
              v38 = 0i64;
            }
            v39 = 1;
            if ( *(_DWORD *)(a2 + 92) > v37 )
            {
              v39 = v36 < *(_DWORD *)(a2 + 88);
              LOBYTE(v39) = v36 >= *(_DWORD *)(a2 + 88);
            }
            v37 += v68;
            *(_DWORD *)(a2 + 104) = v39;
          }
          while ( v78 != v37 + v76 );
          v58 = v38;
          v59 = HIDWORD(v38);
          v60 = v58;
        }
        v61 = v88 + v92 - 256;
        *(_DWORD *)(a2 + 100) = v60 + v61;
        *(_DWORD *)(a2 + 96) = v61 * v85 + v59;
      }
      else
      {
        if ( v72 < 0 )
        {
          v72 = -v72;
          v11 = v63 * v79;
          v77 = 256;
          v75 = -1;
          v73 = 0;
        }
        else
        {
          v77 = 0;
          v11 = v63 * (256 - v79);
          v75 = 1;
          v73 = 256;
        }
        v13 = v11;
        v12 = v11 / v72;
        v66 = v13 % v72;
        if ( v66 < 0 )
        {
          --v12;
          v66 += v72;
        }
        v14 = v9 + v12;
        sub_6F7A7D70(a2, v5, v9, v79, v9 + v12, v73);
        v15 = v75 + v5;
        sub_6F7A7C50(a2, v14 >> 8, v15);
        if ( v4 != v15 )
        {
          v82 = (v63 << 8) % v72;
          v80 = (v63 << 8) / v72;
          if ( v82 < 0 )
          {
            --v80;
            v82 += v72;
          }
          v16 = v14;
          v84 = v4;
          v17 = v15;
          v64 = v66 - v72;
          while ( 1 )
          {
            v19 = v82 + v64 < 0;
            v64 += v82;
            v20 = v80;
            if ( !v19 )
            {
              v64 -= v72;
              v20 = v80 + 1;
            }
            v21 = v20 + v16;
            sub_6F7A7D70(a2, v17, v16, v77, v20 + v16, v73);
            v17 += v75;
            v22 = v21 >> 8;
            if ( v21 >> 8 > *(_DWORD *)(a2 + 76) )
              v22 = *(_DWORD *)(a2 + 76);
            v23 = v22 - *(_DWORD *)(a2 + 72);
            v67 = v17 - *(_DWORD *)(a2 + 80);
            if ( v23 < 0 )
              v23 = -1;
            v24 = *(_DWORD *)(a2 + 64);
            if ( v24 == v23 && v17 - *(_DWORD *)(a2 + 80) == *(_DWORD *)(a2 + 68) )
              goto LABEL_18;
            v86 = *(_DWORD *)(a2 + 104);
            if ( !*(_DWORD *)(a2 + 104) )
            {
              v89 = *(_DWORD *)(a2 + 96);
              v91 = *(_DWORD *)(a2 + 100);
              if ( *(_QWORD *)(a2 + 96) )
                break;
            }
LABEL_17:
            *(_DWORD *)(a2 + 96) = 0;
            *(_DWORD *)(a2 + 100) = 0;
            *(_DWORD *)(a2 + 64) = v23;
            *(_DWORD *)(a2 + 68) = v67;
LABEL_18:
            v18 = 1;
            if ( *(_DWORD *)(a2 + 92) > v67 )
            {
              v18 = v23 < *(_DWORD *)(a2 + 88);
              LOBYTE(v18) = v23 >= *(_DWORD *)(a2 + 88);
            }
            *(_DWORD *)(a2 + 104) = v18;
            v16 = v21;
            if ( v84 == v17 )
            {
              v15 = v17;
              goto LABEL_31;
            }
          }
          v50 = *(_DWORD *)(a2 + 88);
          if ( v24 <= v50 )
            v50 = *(_DWORD *)(a2 + 64);
          v51 = v50;
          v93 = v50;
          v52 = *(_DWORD *)(*(_DWORD *)(a2 + 1328) + 4 * *(_DWORD *)(a2 + 68));
          v94 = (int *)(*(_DWORD *)(a2 + 1328) + 4 * *(_DWORD *)(a2 + 68));
          if ( v52 && v51 >= *(_DWORD *)v52 )
          {
            if ( v51 == *(_DWORD *)v52 )
            {
LABEL_79:
              v56 = v52;
              v86 = *(_DWORD *)(v52 + 8);
              v57 = *(_DWORD *)(v52 + 4);
LABEL_74:
              *(_DWORD *)(v56 + 4) = v91 + v57;
              *(_DWORD *)(v56 + 8) = v86 + v89;
              goto LABEL_17;
            }
            while ( 1 )
            {
              v53 = v52 + 12;
              v52 = *(_DWORD *)(v52 + 12);
              if ( !v52 || v93 < *(_DWORD *)v52 )
                break;
              if ( v93 == *(_DWORD *)v52 )
                goto LABEL_79;
            }
            v94 = (int *)v53;
          }
          v54 = *(_DWORD *)(a2 + 116);
          v55 = *(_DWORD *)(a2 + 116);
          if ( v54 >= *(_DWORD *)(a2 + 112) )
            goto LABEL_85;
          *(_DWORD *)(a2 + 116) = v54 + 1;
          v56 = *(_DWORD *)(a2 + 108) + 16 * v55;
          *(_DWORD *)v56 = v93;
          *(_DWORD *)(v56 + 8) = 0;
          *(_DWORD *)(v56 + 4) = 0;
          *(_DWORD *)(v56 + 12) = v52;
          *v94 = v56;
          v57 = 0;
          goto LABEL_74;
        }
        v16 = v14;
LABEL_31:
        sub_6F7A7D70(a2, v15, v16, v77, v70, v88);
      }
    }
  }
  *(_DWORD *)(a2 + 128) = v70;
  *(_DWORD *)(a2 + 132) = v69;
  *(_DWORD *)(a2 + 136) = v71;
  return 0;
}
