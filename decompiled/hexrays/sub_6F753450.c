signed int __usercall sub_6F753450@<eax>(unsigned int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4)
{
  size_t v4; // ebx@2
  _BYTE *v5; // edi@2
  _BYTE *v6; // eax@3
  _BYTE *v7; // esi@4
  int v8; // ebx@6
  int v9; // eax@7
  int v10; // edx@7
  int v11; // ecx@9
  int v12; // edi@12
  unsigned __int16 v13; // dx@12
  int v14; // ebp@12
  int v15; // ebp@13
  unsigned __int16 v16; // cx@13
  int v17; // edi@13
  int v18; // ebp@14
  unsigned __int16 v19; // cx@14
  int v20; // edi@14
  int v21; // ebp@15
  unsigned __int16 v22; // cx@15
  int v23; // edi@15
  int v24; // edx@22
  unsigned int v25; // edi@22
  unsigned int v26; // edx@22
  int v27; // eax@22
  char v28; // cl@31
  unsigned int v29; // edi@31
  int v30; // edi@31
  char v31; // cl@32
  unsigned int v32; // ebp@32
  int v33; // ebp@32
  char v34; // cl@33
  unsigned int v35; // edi@33
  int v36; // edi@33
  char v37; // cl@34
  unsigned int v38; // ebp@34
  int v39; // ebp@34
  char v40; // cl@35
  unsigned int v41; // edi@35
  int v42; // edi@35
  char v43; // cl@36
  unsigned int v44; // ebp@36
  int v45; // ebp@36
  char v46; // cl@37
  int v47; // edi@37
  unsigned int v48; // ebp@37
  unsigned int v49; // edi@37
  unsigned int v50; // ebp@37
  unsigned int v51; // edi@37
  unsigned int v52; // ebp@37
  unsigned int v53; // edi@37
  unsigned int v54; // ebp@37
  int v55; // ebp@37
  signed int result; // eax@44
  int v57; // edi@45
  int v58; // ebp@45
  char v59; // cl@52
  char v60; // cl@53
  char v61; // cl@54
  char v62; // cl@55
  char v63; // cl@56
  char v64; // cl@57
  char v65; // cl@58
  char v66; // cl@59
  char v67; // cl@30
  int v68; // [sp+1Ch] [bp-C0h]@6
  int v69; // [sp+1Ch] [bp-C0h]@22
  unsigned int v70; // [sp+20h] [bp-BCh]@1
  int v71; // [sp+24h] [bp-B8h]@9
  unsigned int v72; // [sp+24h] [bp-B8h]@21
  _BYTE *v73; // [sp+28h] [bp-B4h]@1
  int v74; // [sp+2Ch] [bp-B0h]@21
  int v75; // [sp+30h] [bp-ACh]@1
  unsigned int v76; // [sp+34h] [bp-A8h]@1
  unsigned int v77; // [sp+38h] [bp-A4h]@1
  unsigned int v78; // [sp+40h] [bp-9Ch]@6
  unsigned int v79; // [sp+44h] [bp-98h]@6
  unsigned int v80; // [sp+48h] [bp-94h]@1
  unsigned int v81; // [sp+4Ch] [bp-90h]@6
  unsigned int v82; // [sp+54h] [bp-88h]@6
  _BYTE *v83; // [sp+58h] [bp-84h]@2
  _BYTE *v84; // [sp+5Ch] [bp-80h]@3
  const void *v85; // [sp+60h] [bp-7Ch]@42
  size_t v86; // [sp+64h] [bp-78h]@42
  const void *v87; // [sp+68h] [bp-74h]@42
  size_t v88; // [sp+6Ch] [bp-70h]@42
  char v89; // [sp+70h] [bp-6Ch]@40
  unsigned int v90; // [sp+90h] [bp-4Ch]@1
  unsigned int v91; // [sp+94h] [bp-48h]@1
  unsigned int v92; // [sp+98h] [bp-44h]@1
  _BYTE *v93; // [sp+9Ch] [bp-40h]@4
  unsigned int v94; // [sp+A0h] [bp-3Ch]@1
  unsigned int v95; // [sp+A4h] [bp-38h]@1
  unsigned int v96; // [sp+A8h] [bp-34h]@1
  void *v97; // [sp+ACh] [bp-30h]@4
  unsigned int v98; // [sp+B0h] [bp-2Ch]@1
  unsigned int v99; // [sp+B4h] [bp-28h]@1
  unsigned int v100; // [sp+B8h] [bp-24h]@1
  void *v101; // [sp+BCh] [bp-20h]@4

  v70 = a1;
  v76 = a2;
  v75 = a3;
  v91 = (a2 + 15) & 0xFFFFFFF0;
  v77 = (a1 + 15) & 0xFFFFFFF0;
  v90 = v77;
  v92 = (a1 + 15) & 0xFFFFFFF0;
  v80 = v77 >> 1;
  v94 = v77 >> 1;
  v96 = v77 >> 1;
  v95 = v91 >> 1;
  v98 = v77 >> 1;
  v100 = v77 >> 1;
  v99 = v91 >> 1;
  v73 = malloc(v77 * v91);
  if ( !v73 || (v4 = v80 * (v91 >> 1), v5 = malloc(v4), (v83 = v5) == 0) || (v6 = malloc(v4), (v84 = v6) == 0) )
  {
    nullsub_10();
    exit(1);
  }
  v97 = v5;
  v101 = v6;
  v7 = v73;
  v93 = v73;
  if ( v76 && v70 )
  {
    v68 = 0;
    v79 = v70 & 0xFFFFFFFC;
    v78 = v70 & 0xFFFFFFFC;
    v82 = (v70 & 0xFFFFFFFC) + 2;
    v81 = (v70 & 0xFFFFFFFC) + 1;
    v8 = 0;
    do
    {
      v9 = v75 + 3 * v8;
      v10 = (int)v7;
      if ( v9 & 3 || v70 - 1 <= 6 )
      {
        v57 = (int)&v7[v70];
        v58 = v70 & 7;
        if ( !(v70 & 7) )
          goto LABEL_67;
        if ( v58 != 1 )
        {
          if ( v58 != 2 )
          {
            if ( v58 != 3 )
            {
              if ( v58 != 4 )
              {
                if ( v58 != 5 )
                {
                  if ( v58 != 6 )
                  {
                    v59 = *(_BYTE *)v9;
                    v10 = (int)(v7 + 1);
                    v9 += 3;
                    *v7 = v59;
                  }
                  v60 = *(_BYTE *)v9;
                  ++v10;
                  v9 += 3;
                  *(_BYTE *)(v10 - 1) = v60;
                }
                v61 = *(_BYTE *)v9;
                ++v10;
                v9 += 3;
                *(_BYTE *)(v10 - 1) = v61;
              }
              v62 = *(_BYTE *)v9;
              ++v10;
              v9 += 3;
              *(_BYTE *)(v10 - 1) = v62;
            }
            v63 = *(_BYTE *)v9;
            ++v10;
            v9 += 3;
            *(_BYTE *)(v10 - 1) = v63;
          }
          v64 = *(_BYTE *)v9;
          ++v10;
          v9 += 3;
          *(_BYTE *)(v10 - 1) = v64;
        }
        v65 = *(_BYTE *)v9;
        ++v10;
        v9 += 3;
        *(_BYTE *)(v10 - 1) = v65;
        if ( v10 != v57 )
        {
LABEL_67:
          do
          {
            v66 = *(_BYTE *)v9;
            v10 += 8;
            v9 += 24;
            *(_BYTE *)(v10 - 8) = v66;
            *(_BYTE *)(v10 - 7) = *(_BYTE *)(v9 - 21);
            *(_BYTE *)(v10 - 6) = *(_BYTE *)(v9 - 18);
            *(_BYTE *)(v10 - 5) = *(_BYTE *)(v9 - 15);
            *(_BYTE *)(v10 - 4) = *(_BYTE *)(v9 - 12);
            *(_BYTE *)(v10 - 3) = *(_BYTE *)(v9 - 9);
            *(_BYTE *)(v10 - 2) = *(_BYTE *)(v9 - 6);
            *(_BYTE *)(v10 - 1) = *(_BYTE *)(v9 - 3);
          }
          while ( v10 != v57 );
        }
      }
      else
      {
        v71 = (int)&v7[v79];
        v11 = ((unsigned __int8)((v79 - 4) >> 2) + 1) & 3;
        if ( !(((unsigned __int8)((v79 - 4) >> 2) + 1) & 3) )
          goto LABEL_68;
        if ( v11 != 1 )
        {
          if ( v11 != 2 )
          {
            v12 = *(_BYTE *)(v9 + 6);
            LOBYTE(v13) = *(_BYTE *)v9;
            v9 += 12;
            HIBYTE(v13) = *(_BYTE *)(v9 - 9);
            v14 = v13;
            v10 = (int)(v7 + 4);
            *(_DWORD *)v7 = (*(_BYTE *)(v9 - 3) << 24) | (v12 << 16) | v14;
          }
          v15 = *(_BYTE *)(v9 + 6);
          LOBYTE(v16) = *(_BYTE *)v9;
          v10 += 4;
          HIBYTE(v16) = *(_BYTE *)(v9 + 3);
          v17 = *(_BYTE *)(v9 + 9);
          v9 += 12;
          *(_DWORD *)(v10 - 4) = (v17 << 24) | (v15 << 16) | v16;
        }
        v18 = *(_BYTE *)(v9 + 6);
        LOBYTE(v19) = *(_BYTE *)v9;
        v10 += 4;
        HIBYTE(v19) = *(_BYTE *)(v9 + 3);
        v20 = *(_BYTE *)(v9 + 9);
        v9 += 12;
        *(_DWORD *)(v10 - 4) = (v20 << 24) | (v18 << 16) | v19;
        if ( v10 != v71 )
        {
LABEL_68:
          do
          {
            v21 = *(_BYTE *)(v9 + 6);
            LOBYTE(v22) = *(_BYTE *)v9;
            v10 += 16;
            HIBYTE(v22) = *(_BYTE *)(v9 + 3);
            v23 = *(_BYTE *)(v9 + 9);
            v9 += 48;
            *(_DWORD *)(v10 - 16) = (v21 << 16) | v22 | (v23 << 24);
            LOBYTE(v22) = *(_BYTE *)(v9 - 36);
            HIBYTE(v22) = *(_BYTE *)(v9 - 33);
            *(_DWORD *)(v10 - 12) = (*(_BYTE *)(v9 - 30) << 16) | v22 | (*(_BYTE *)(v9 - 27) << 24);
            LOBYTE(v22) = *(_BYTE *)(v9 - 24);
            HIBYTE(v22) = *(_BYTE *)(v9 - 21);
            *(_DWORD *)(v10 - 8) = (*(_BYTE *)(v9 - 18) << 16) | v22 | (*(_BYTE *)(v9 - 15) << 24);
            LOBYTE(v22) = *(_BYTE *)(v9 - 12);
            HIBYTE(v22) = *(_BYTE *)(v9 - 9);
            *(_DWORD *)(v10 - 4) = (*(_BYTE *)(v9 - 6) << 16) | v22 | (*(_BYTE *)(v9 - 3) << 24);
          }
          while ( v10 != v71 );
        }
        if ( v78 != v70 )
        {
          *(&v73[v70 & 0xFFFFFFFC] + v7 - v73) = *(_BYTE *)(v75 + 3 * (v8 + v78));
          if ( v70 > v81 )
          {
            *(&v73[v81] + v7 - v73) = *(_BYTE *)(v75 + 3 * (v8 + v81));
            if ( v70 > v82 )
              *(&v73[v82] + v7 - v73) = *(_BYTE *)(v75 + 3 * (v8 + v82));
          }
        }
      }
      ++v68;
      v7 += v77;
      v8 += v70;
    }
    while ( v76 != v68 );
    v72 = 0;
    v74 = v75;
    do
    {
      v24 = (v72 >> 1) * v80;
      v25 = ((v70 - 1) >> 1) & 7;
      v83[v24] = *(_BYTE *)(v74 + 1);
      v69 = (v72 >> 1) * v80;
      v84[v24] = *(_BYTE *)(v74 + 2);
      v26 = 2;
      v27 = v74 + 6;
      if ( v70 > 2 )
      {
        if ( !v25 )
          goto LABEL_69;
        if ( v25 != 1 )
        {
          if ( v25 != 2 )
          {
            if ( v25 != 3 )
            {
              if ( v25 != 4 )
              {
                if ( v25 != 5 )
                {
                  if ( v25 != 6 )
                  {
                    v67 = *(_BYTE *)(v74 + 8);
                    v83[v69 + 1] = *(_BYTE *)(v74 + 7);
                    v26 = 4;
                    v84[v69 + 1] = v67;
                    v27 = v74 + 12;
                  }
                  v28 = *(_BYTE *)(v27 + 1);
                  v29 = v26;
                  v27 += 6;
                  v26 += 2;
                  v30 = v69 + (v29 >> 1);
                  v83[v30] = v28;
                  v84[v30] = *(_BYTE *)(v27 - 4);
                }
                v31 = *(_BYTE *)(v27 + 1);
                v32 = v26;
                v27 += 6;
                v26 += 2;
                v33 = v69 + (v32 >> 1);
                v83[v33] = v31;
                v84[v33] = *(_BYTE *)(v27 - 4);
              }
              v34 = *(_BYTE *)(v27 + 1);
              v35 = v26;
              v27 += 6;
              v26 += 2;
              v36 = v69 + (v35 >> 1);
              v83[v36] = v34;
              v84[v36] = *(_BYTE *)(v27 - 4);
            }
            v37 = *(_BYTE *)(v27 + 1);
            v38 = v26;
            v27 += 6;
            v26 += 2;
            v39 = v69 + (v38 >> 1);
            v83[v39] = v37;
            v84[v39] = *(_BYTE *)(v27 - 4);
          }
          v40 = *(_BYTE *)(v27 + 1);
          v41 = v26;
          v27 += 6;
          v26 += 2;
          v42 = v69 + (v41 >> 1);
          v83[v42] = v40;
          v84[v42] = *(_BYTE *)(v27 - 4);
        }
        v43 = *(_BYTE *)(v27 + 1);
        v44 = v26;
        v27 += 6;
        v26 += 2;
        v45 = v69 + (v44 >> 1);
        v83[v45] = v43;
        v84[v45] = *(_BYTE *)(v27 - 4);
        if ( v70 > v26 )
        {
LABEL_69:
          do
          {
            v46 = *(_BYTE *)(v27 + 1);
            v27 += 48;
            v47 = v69 + (v26 >> 1);
            v48 = v69 + ((v26 + 2) >> 1);
            v83[v47] = v46;
            v84[v47] = *(_BYTE *)(v27 - 46);
            v49 = v69 + ((v26 + 4) >> 1);
            v83[v48] = *(_BYTE *)(v27 - 41);
            v84[v48] = *(_BYTE *)(v27 - 40);
            v50 = v69 + ((v26 + 6) >> 1);
            v83[v49] = *(_BYTE *)(v27 - 35);
            v84[v49] = *(_BYTE *)(v27 - 34);
            v51 = v69 + ((v26 + 8) >> 1);
            v83[v50] = *(_BYTE *)(v27 - 29);
            v84[v50] = *(_BYTE *)(v27 - 28);
            v52 = v69 + ((v26 + 10) >> 1);
            v83[v51] = *(_BYTE *)(v27 - 23);
            v84[v51] = *(_BYTE *)(v27 - 22);
            v53 = v69 + ((v26 + 12) >> 1);
            v83[v52] = *(_BYTE *)(v27 - 17);
            v84[v52] = *(_BYTE *)(v27 - 16);
            v54 = v26 + 14;
            v26 += 16;
            v83[v53] = *(_BYTE *)(v27 - 11);
            v55 = v69 + (v54 >> 1);
            v84[v53] = *(_BYTE *)(v27 - 10);
            v83[v55] = *(_BYTE *)(v27 - 5);
            v84[v55] = *(_BYTE *)(v27 - 4);
          }
          while ( v70 > v26 );
        }
      }
      v72 += 2;
      v74 += 6 * v70;
    }
    while ( v76 > v72 );
  }
  if ( sub_6F807530(dword_70258F08, (int)&v90) )
  {
    nullsub_10();
    result = 1;
  }
  else if ( sub_6F807B10(dword_70258F08, a4, (int)&v89) )
  {
    sub_6F82FF10((int)&unk_70258DA0, (int)&v89);
    while ( sub_6F830C00((int)&unk_70258DA0, (int)&v85) )
    {
      fwrite(v85, v86, 1u, (FILE *)dword_70258D80);
      fwrite(v87, v88, 1u, (FILE *)dword_70258D80);
    }
    free(v73);
    free(v83);
    free(v84);
    result = 0;
  }
  else
  {
    nullsub_10();
    result = 1;
  }
  return result;
}
