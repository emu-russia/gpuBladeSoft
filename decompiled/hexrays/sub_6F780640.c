int *__usercall sub_6F780640@<eax>(int a1@<eax>, int *a2@<edx>, int *a3@<ecx>, int a4, int a5, char a6)
{
  int v6; // esi@1
  int v7; // eax@1
  _BYTE *v8; // edx@1
  int v9; // ebx@1
  unsigned int v10; // edi@1
  int v11; // esi@1
  char *v12; // eax@1
  int v13; // ebp@1
  bool v14; // zf@3
  int v15; // ecx@3
  int *v16; // edi@5
  int v17; // ebx@6
  signed int v18; // ecx@16
  signed int v19; // edx@16
  int *v20; // eax@16
  signed int v21; // ebx@17
  signed int v22; // edi@17
  signed int v23; // ST24_4@17
  signed int v24; // esi@17
  int v25; // ecx@17
  int v26; // ebx@17
  int v27; // eax@20
  int v28; // edx@20
  int v29; // ebx@20
  int *result; // eax@23
  int v31; // ebx@24
  int v32; // edi@24
  int v33; // edi@28
  int v34; // eax@30
  int v35; // edx@30
  int v36; // edx@31
  int v37; // eax@32
  int v38; // edx@32
  int v39; // esi@33
  int v40; // edi@33
  int v41; // eax@35
  int v42; // ebx@38
  int v43; // edx@38
  int v44; // eax@38
  int *v45; // esi@39
  int v46; // ecx@40
  int v47; // eax@43
  int v48; // edx@44
  int *v49; // ecx@45
  int v50; // eax@46
  int v51; // ecx@49
  int *v52; // ebx@50
  int v53; // eax@51
  int v54; // ecx@54
  int v55; // esi@54
  int v56; // eax@57
  int v57; // ebx@57
  int v58; // eax@60
  int v59; // ecx@60
  char v60; // al@65
  int v61; // esi@72
  int v62; // ebx@74
  int v63; // ecx@76
  int v64; // [sp+18h] [bp-E4h]@4
  int *v65; // [sp+18h] [bp-E4h]@16
  char v66; // [sp+1Ch] [bp-E0h]@1
  int v67; // [sp+1Ch] [bp-E0h]@17
  int v68; // [sp+1Ch] [bp-E0h]@38
  int v69; // [sp+20h] [bp-DCh]@17
  int v70; // [sp+24h] [bp-D8h]@17
  int v71; // [sp+28h] [bp-D4h]@1
  int v72; // [sp+2Ch] [bp-D0h]@17
  int v73; // [sp+30h] [bp-CCh]@17
  int v74; // [sp+34h] [bp-C8h]@17
  int v75; // [sp+38h] [bp-C4h]@17
  int *v76; // [sp+3Ch] [bp-C0h]@1
  int v77; // [sp+40h] [bp-BCh]@1
  int *v78; // [sp+44h] [bp-B8h]@1
  int v79; // [sp+48h] [bp-B4h]@17
  int v80; // [sp+4Ch] [bp-B0h]@17
  int v81; // [sp+50h] [bp-ACh]@15
  int v82; // [sp+54h] [bp-A8h]@13
  int v83; // [sp+58h] [bp-A4h]@34
  const void *v84; // [sp+5Ch] [bp-A0h]@34
  int v85; // [sp+6Ch] [bp-90h]@17
  int v86; // [sp+70h] [bp-8Ch]@17
  int v87; // [sp+74h] [bp-88h]@17
  int v88; // [sp+78h] [bp-84h]@17
  int v89; // [sp+7Ch] [bp-80h]@17
  int v90; // [sp+80h] [bp-7Ch]@17
  int v91; // [sp+84h] [bp-78h]@30
  int v92; // [sp+88h] [bp-74h]@30
  int v93; // [sp+8Ch] [bp-70h]@32
  int v94; // [sp+90h] [bp-6Ch]@32
  int v95; // [sp+A4h] [bp-58h]@30
  int v96; // [sp+A8h] [bp-54h]@1
  int v97; // [sp+ACh] [bp-50h]@1
  char v98; // [sp+B0h] [bp-4Ch]@1
  int v99; // [sp+D0h] [bp-2Ch]@38
  int v100; // [sp+D4h] [bp-28h]@10
  int v101; // [sp+D8h] [bp-24h]@13
  int v102; // [sp+DCh] [bp-20h]@15

  v6 = a1;
  v77 = a1;
  v7 = *a2;
  v78 = a2;
  v8 = (_BYTE *)a5;
  v76 = a3;
  v96 = v7;
  v97 = *a3;
  v66 = *(_BYTE *)(a5 + 9);
  v9 = v6;
  v10 = 0;
  v71 = v6 + 8;
  v11 = a5 - (*(_BYTE *)(a5 + 9) < 1u) + 10;
  v12 = &v98;
  v13 = v9;
  do
  {
    while ( 1 )
    {
      v14 = *v8 == 0;
      v15 = *((_DWORD *)v12 - 2);
      *(_DWORD *)v12 = v15;
      if ( !v14 )
        break;
      ++v8;
      v12 += 4;
      if ( v8 == (_BYTE *)v11 )
        goto LABEL_9;
    }
    v64 = v10 + 1;
    if ( (*(_DWORD *)(v13 + 392) - v71) >> 3 > v10 )
    {
      v31 = v13 + 8 * v10;
      v32 = *(_DWORD *)(v31 + 12);
      if ( v32 == 1 )
      {
        v33 = *(_DWORD *)(v31 + 8);
        v17 = (v33 + 0x2000) >> 14;
        if ( v33 < 0 )
          v17 = -((0x2000 - v33) >> 14);
      }
      else
      {
        v17 = *(_DWORD *)(v31 + 8);
        if ( v32 == 2 )
          v17 <<= 16;
      }
    }
    else
    {
      v16 = *(int **)(v13 + 4);
      if ( !v16 || (v17 = *v16) != 0 )
        v17 = 0;
      else
        *v16 = 130;
    }
    ++v8;
    v12 += 4;
    *((_DWORD *)v12 - 1) = v17 + v15;
    v10 = v64;
  }
  while ( v8 != (_BYTE *)v11 );
LABEL_9:
  if ( !v66 )
    v100 = *v76;
  if ( a6 )
  {
    v42 = v100;
    v68 = v99;
    v43 = (((v99 - *v78) >> 31) ^ (v99 - *v78)) - ((v99 - *v78) >> 31);
    v44 = (((v100 - *v76) >> 31) ^ (v100 - *v76)) - ((v100 - *v76) >> 31);
    if ( v10 < (*(_DWORD *)(v77 + 392) - v71) >> 3 )
    {
      v54 = v77 + 8 * v10;
      v55 = *(_DWORD *)(v54 + 12);
      if ( v55 == 1 )
      {
        v61 = *(_DWORD *)(v54 + 8);
        v46 = (v61 + 0x2000) >> 14;
        if ( v61 < 0 )
          v46 = -((0x2000 - v61) >> 14);
      }
      else
      {
        v46 = *(_DWORD *)(v54 + 8);
        if ( v55 == 2 )
          v46 <<= 16;
      }
    }
    else
    {
      v45 = *(int **)(v77 + 4);
      if ( !v45 || (v46 = *v45) != 0 )
        v46 = 0;
      else
        *v45 = 130;
    }
    if ( v43 <= v44 )
    {
      v82 = *v78;
      v101 = *v78;
      v81 = v42 + v46;
      v102 = v42 + v46;
    }
    else
    {
      v47 = *v76;
      v82 = v68 + v46;
      v101 = v68 + v46;
      v81 = v47;
      v102 = v47;
    }
  }
  else
  {
    if ( *(_BYTE *)(a5 + 10) )
    {
      v51 = v99;
      if ( v10 < (*(_DWORD *)(v77 + 392) - v71) >> 3 )
      {
        v56 = v77 + 8 * v10;
        v57 = *(_DWORD *)(v56 + 12);
        if ( v57 == 1 )
        {
          v62 = *(_DWORD *)(v56 + 8);
          v53 = (v62 + 0x2000) >> 14;
          if ( v62 < 0 )
            v53 = -((0x2000 - v62) >> 14);
        }
        else
        {
          v53 = *(_DWORD *)(v56 + 8);
          if ( v57 == 2 )
            v53 <<= 16;
        }
      }
      else
      {
        v52 = *(int **)(v77 + 4);
        if ( v52 && (v53 = *v52) == 0 )
          *v52 = 130;
        else
          v53 = 0;
      }
      ++v10;
      v82 = v51 + v53;
      v101 = v51 + v53;
    }
    else
    {
      v82 = *v78;
      v101 = *v78;
    }
    if ( *(_BYTE *)(a5 + 11) )
    {
      v48 = v100;
      if ( v10 < (*(_DWORD *)(v77 + 392) - v71) >> 3 )
      {
        v58 = v77 + 8 * v10;
        v59 = *(_DWORD *)(v58 + 12);
        if ( v59 == 1 )
        {
          v63 = *(_DWORD *)(v58 + 8);
          v50 = (v63 + 0x2000) >> 14;
          if ( v63 < 0 )
            v50 = -((0x2000 - v63) >> 14);
        }
        else
        {
          v50 = *(_DWORD *)(v58 + 8);
          if ( v59 == 2 )
            v50 <<= 16;
        }
      }
      else
      {
        v49 = *(int **)(v77 + 4);
        if ( v49 && (v50 = *v49) == 0 )
          *v49 = 130;
        else
          v50 = 0;
      }
      v81 = v48 + v50;
      v102 = v48 + v50;
    }
    else
    {
      v81 = *v76;
      v102 = *v76;
    }
  }
  v18 = *(_DWORD *)(a4 + 11724);
  v19 = *(_DWORD *)(a4 + 11720);
  v65 = &v96;
  v20 = &v96;
  do
  {
    v21 = v20[3];
    v67 = v20[7];
    v69 = v20[6];
    v22 = v20[5];
    v23 = v20[4];
    v24 = v20[2];
    sub_6F77A280((_DWORD *)a4, v19, v18, v20[2], v20[3], &v85, &v86);
    sub_6F77A280((_DWORD *)a4, v23, v22, v69, v67, &v87, &v88);
    v25 = *(_DWORD *)(a4 + 11724);
    *(_DWORD *)(*(_DWORD *)(a4 + 4) + 16) += (v24 >> 16) * ((v22 - v21) >> 16) - ((v23 - v24) >> 16) * (v21 >> 16);
    v79 = v85 + *(_DWORD *)(a4 + 11720);
    v89 = v85 + *(_DWORD *)(a4 + 11720);
    v72 = v24 + v85;
    v26 = v86 + v21;
    v80 = v86 + v25;
    v90 = v86 + v25;
    v70 = v87 + v23;
    v73 = v22 + v88;
    v75 = v67 + v88;
    v74 = v87 + v69;
    if ( !*(_BYTE *)(a4 + 11667) )
      goto LABEL_18;
    v14 = *(_BYTE *)(a4 + 20) == 0;
    v34 = *(_DWORD *)(a4 + 11728);
    v35 = *(_DWORD *)(a4 + 11732);
    v95 = 1;
    v91 = v34;
    v92 = v35;
    if ( v14 )
    {
      v39 = *(_DWORD *)(a4 + 11740);
      v40 = *(_DWORD *)(a4 + 11736);
      if ( *(_BYTE *)(a4 + 11664) )
      {
        *(_BYTE *)(a4 + 11665) = 1;
        sub_6F780120(a4, v40, v39);
        v84 = (const void *)(a4 + 8);
        v83 = a4 + 8;
        if ( *(_BYTE *)(a4 + 11744) )
          sub_6F77D960(a4, (int)v84, a4 + 11704, *(_DWORD *)(a4 + 11712), *(_DWORD *)(a4 + 11716), 1);
        v60 = *(_BYTE *)(a4 + 20);
        *(_BYTE *)(a4 + 11664) = 0;
        *(_BYTE *)(a4 + 11665) = 0;
        *(_BYTE *)(a4 + 11744) = 0;
        *(_DWORD *)(a4 + 11736) = v40;
        *(_DWORD *)(a4 + 11720) = v40;
        *(_DWORD *)(a4 + 11740) = v39;
        *(_DWORD *)(a4 + 11724) = v39;
        *(_BYTE *)(a4 + 11667) = 1;
        if ( v60 )
        {
          v41 = *(_DWORD *)(a4 + 11676);
          if ( !*(_BYTE *)(v41 + 5) )
            goto LABEL_37;
          goto LABEL_36;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 11720) = v40;
        *(_DWORD *)(a4 + 11724) = v39;
        *(_BYTE *)(a4 + 11667) = 1;
        v84 = (const void *)(a4 + 8);
        v83 = a4 + 8;
      }
      v41 = *(_DWORD *)(a4 + 11676);
LABEL_36:
      sub_6F77E350((int)v84, *(_DWORD *)(a4 + 11668), *(_DWORD *)(a4 + 11672), v41, *(_DWORD *)(a4 + 11680), 0);
LABEL_37:
      v36 = v83;
      qmemcpy((void *)(a4 + 3876), v84, 0xF1Cu);
      goto LABEL_32;
    }
    v36 = a4 + 8;
LABEL_32:
    sub_6F77D740(a4, v36, (int)&v93, v79, v80);
    (**(void (__cdecl ***)(_DWORD, int *))(a4 + 4))(*(_DWORD *)(a4 + 4), &v91);
    v37 = v93;
    v38 = v94;
    *(_DWORD *)(a4 + 11704) = v79;
    *(_DWORD *)(a4 + 11708) = v80;
    *(_BYTE *)(a4 + 11667) = 0;
    *(_BYTE *)(a4 + 11664) = 1;
    *(_DWORD *)(a4 + 11728) = v37;
    *(_DWORD *)(a4 + 11732) = v38;
    *(_DWORD *)(a4 + 11716) = v26;
    *(_DWORD *)(a4 + 11712) = v72;
LABEL_18:
    if ( *(_BYTE *)(a4 + 11744) )
      sub_6F77D960(a4, a4 + 8, (signed int)&v89, v72, v26, 0);
    v27 = v89;
    *(_DWORD *)(a4 + 11764) = v26;
    v28 = v90;
    v29 = *(_DWORD *)(a4 + 11676);
    *(_BYTE *)(a4 + 11744) = 1;
    *(_DWORD *)(a4 + 11748) = 4;
    *(_DWORD *)(a4 + 11752) = v27;
    *(_DWORD *)(a4 + 11756) = v28;
    *(_DWORD *)(a4 + 11760) = v72;
    *(_DWORD *)(a4 + 11768) = v70;
    *(_DWORD *)(a4 + 11772) = v73;
    *(_DWORD *)(a4 + 11776) = v74;
    *(_DWORD *)(a4 + 11780) = v75;
    if ( *(_BYTE *)(v29 + 5) )
      sub_6F77E350(a4 + 8, *(_DWORD *)(a4 + 11668), *(_DWORD *)(a4 + 11672), v29, *(_DWORD *)(a4 + 11680), 0);
    v65 += 6;
    v19 = v69;
    v20 = v65;
    v18 = v67;
    *(_DWORD *)(a4 + 11720) = v69;
    *(_DWORD *)(a4 + 11724) = v67;
  }
  while ( &v101 != v65 );
  *(_DWORD *)(v77 + 392) = v71;
  *v78 = v82;
  result = v76;
  *v76 = v81;
  return result;
}
