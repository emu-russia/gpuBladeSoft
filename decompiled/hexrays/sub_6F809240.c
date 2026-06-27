signed int __cdecl sub_6F809240(int a1, int a2)
{
  int v2; // ebp@1
  int v3; // edx@1
  int v4; // esi@2
  int v5; // ebx@2
  int v6; // esi@2
  int v7; // ecx@2
  int v8; // eax@2
  int v9; // esi@2
  int v10; // ebx@2
  int v11; // eax@2
  signed int v12; // edi@2
  int v13; // edi@3
  int v14; // edi@3
  int v15; // edi@3
  int v16; // edi@3
  int v17; // edi@3
  int v18; // edi@3
  int v19; // ebx@3
  int v20; // ecx@3
  int v21; // edx@3
  int v22; // ecx@3
  _DWORD *v23; // edx@4
  int v24; // ebx@4
  int v25; // ecx@4
  int v26; // eax@4
  int v27; // edi@4
  int v28; // eax@4
  int v29; // eax@4
  _DWORD *v30; // edi@4
  signed int v31; // esi@4
  char *v32; // eax@4
  int v33; // ecx@4
  int i; // edx@4
  int v35; // ecx@5
  int v36; // ebp@5
  int v37; // ebp@5
  int v38; // ecx@5
  int v39; // ebx@5
  int v40; // ebp@5
  int v41; // ebp@5
  int v42; // ecx@5
  int v43; // ebx@5
  int v44; // ebp@5
  int v45; // ebp@5
  int v46; // ecx@5
  int v47; // ebx@5
  int v48; // ebp@5
  int v49; // edi@5
  int v50; // ebp@5
  int v51; // ecx@5
  int v52; // ebx@5
  int v53; // ebp@5
  int v54; // ecx@6
  int v55; // ebp@6
  signed int v56; // edi@7
  int *v57; // esi@7
  int v58; // ebx@7
  int v59; // edx@11
  signed int j; // eax@11
  int v61; // ecx@14
  int v63; // [sp+18h] [bp-1B4h]@2
  int v64; // [sp+18h] [bp-1B4h]@4
  _DWORD *v65; // [sp+1Ch] [bp-1B0h]@2
  int v66; // [sp+1Ch] [bp-1B0h]@4
  int v67; // [sp+20h] [bp-1ACh]@4
  int v68; // [sp+28h] [bp-1A4h]@2
  int v69; // [sp+30h] [bp-19Ch]@4
  int v70; // [sp+34h] [bp-198h]@4
  int v71; // [sp+38h] [bp-194h]@4
  char v72; // [sp+40h] [bp-18Ch]@4
  int v73; // [sp+1D0h] [bp+4h]@4

  v2 = a1;
  v3 = a2 + 4;
  while ( 2 )
  {
    v65 = (_DWORD *)v3;
    v63 = v3 + 8;
    v68 = v3 + 256;
    v4 = *(_DWORD *)(v3 + 8) - (*(_DWORD *)v3 > *(_DWORD *)(v3 + 8) ? *(_DWORD *)(v3 + 8) - *(_DWORD *)v3 : 0);
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v3 + 16) - (v4 > *(_DWORD *)(v3 + 16) ? *(_DWORD *)(v3 + 16) - v4 : 0);
    v7 = -(v6 > v5);
    v8 = *(_DWORD *)(v3 + 24) - v6;
    v9 = v3 + 256;
    v10 = v5 - (v7 & v8);
    v11 = v3 + 32;
    v12 = v10;
    do
    {
      v13 = *(_DWORD *)v11 - (v12 > *(_DWORD *)v11 ? *(_DWORD *)v11 - v12 : 0);
      v14 = *(_DWORD *)(v11 + 8) - (v13 > *(_DWORD *)(v11 + 8) ? *(_DWORD *)(v11 + 8) - v13 : 0);
      v15 = *(_DWORD *)(v11 + 16) - (v14 > *(_DWORD *)(v11 + 16) ? *(_DWORD *)(v11 + 16) - v14 : 0);
      v16 = *(_DWORD *)(v11 + 24) - (v15 > *(_DWORD *)(v11 + 24) ? *(_DWORD *)(v11 + 24) - v15 : 0);
      v17 = *(_DWORD *)(v11 + 32) - (v16 > *(_DWORD *)(v11 + 32) ? *(_DWORD *)(v11 + 32) - v16 : 0);
      v18 = *(_DWORD *)(v11 + 40) - (v17 > *(_DWORD *)(v11 + 40) ? *(_DWORD *)(v11 + 40) - v17 : 0);
      v19 = *(_DWORD *)(v11 + 48);
      v20 = v18 < v19;
      LOBYTE(v20) = v18 > v19;
      v21 = *(_DWORD *)(v11 + 48) - v18;
      v11 += 56;
      v22 = v21 & -v20;
      v12 = v19 - v22;
    }
    while ( v11 != v9 );
    v23 = v65;
    v24 = v19 - v22;
    v67 = v12;
    v71 = 0;
    v73 = v2;
    v25 = v12 - *v65;
    v26 = (1 << (v12 >> 1) << ((v12 + 1) >> 1)) - 1;
    v27 = v26;
    v66 = v26;
    v28 = *(v23 - 1);
    v70 = v25;
    v29 = v27 & (v28 << v25);
    v30 = (_DWORD *)v63;
    v31 = 1;
    v69 = v29;
    v64 = v24;
    v32 = &v72;
    v33 = v24;
    for ( i = (int)(v30 + 2); ; i += 48 )
    {
      v54 = v33 - *v30;
      v55 = *(v30 - 1);
      *((_DWORD *)v32 + 1) = v31;
      *(_DWORD *)v32 = v54;
      *((_DWORD *)v32 - 1) = v66 & (v55 << v54);
      if ( v31 == 31 )
        break;
      v35 = v64 - *(_DWORD *)i;
      v32 += 72;
      v36 = *(_DWORD *)(i - 4);
      *((_DWORD *)v32 - 14) = v31 + 1;
      *((_DWORD *)v32 - 15) = v35;
      v37 = v36 << v35;
      v38 = v64 - *(_DWORD *)(i + 8);
      v39 = v37 & v66;
      v40 = *(_DWORD *)(i + 4);
      *((_DWORD *)v32 - 16) = v39;
      *((_DWORD *)v32 - 11) = v31 + 2;
      *((_DWORD *)v32 - 12) = v38;
      v41 = v40 << v38;
      v42 = v64 - *(_DWORD *)(i + 16);
      v43 = v41 & v66;
      v44 = *(_DWORD *)(i + 12);
      *((_DWORD *)v32 - 13) = v43;
      *((_DWORD *)v32 - 8) = v31 + 3;
      *((_DWORD *)v32 - 9) = v42;
      v45 = v44 << v42;
      v46 = v64 - *(_DWORD *)(i + 24);
      v47 = v45 & v66;
      v48 = *(_DWORD *)(i + 20);
      *((_DWORD *)v32 - 10) = v47;
      *((_DWORD *)v32 - 5) = v31 + 4;
      v49 = v31 + 5;
      v31 += 6;
      *((_DWORD *)v32 - 6) = v46;
      v50 = v48 << v46;
      v51 = v64 - *(_DWORD *)(i + 32);
      v52 = v50 & v66;
      v53 = *(_DWORD *)(i + 28);
      *((_DWORD *)v32 - 7) = v52;
      *((_DWORD *)v32 - 3) = v51;
      *((_DWORD *)v32 - 4) = (v53 << v51) & v66;
      v33 = v64;
      *((_DWORD *)v32 - 2) = v49;
      v30 = (_DWORD *)(i + 40);
    }
    v56 = 1;
    v57 = &v70;
    v2 = v73;
    v58 = v64;
    qsort(&v69, 0x20u, 0xCu, (int (__cdecl *)(const void *, const void *))sub_6F809220);
    while ( 1 )
    {
      if ( *v57 >= v67 )
        goto LABEL_16;
      while ( *v57 < v58 )
      {
        --v58;
        sub_6F832980(v73, 0, 1u);
      }
      sub_6F832980(v73, 1, 1u);
      sub_6F832980(v73, v57[1], 5u);
      v59 = *(v57 - 1);
      for ( j = 1 << v58; j & v59; ++v58 )
        j *= 2;
      if ( v56 == 32 )
        break;
      v61 = v57[2];
      if ( !(v61 & j) || (v61 ^ v59) & -2 * j )
        return -10;
LABEL_16:
      ++v56;
      v57 += 3;
      if ( v56 == 33 )
        goto LABEL_17;
    }
    if ( v58 < v67 )
      return -10;
LABEL_17:
    v3 = v68;
    if ( v68 != a2 + 20484 )
      continue;
    return 0;
  }
}
