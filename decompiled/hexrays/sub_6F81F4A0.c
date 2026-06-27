unsigned int __usercall sub_6F81F4A0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6, int a7)
{
  int v7; // ebx@1
  int v8; // ebp@1
  int v9; // edi@1
  int v10; // edi@1
  int v11; // eax@2
  int v12; // edx@2
  int v13; // ecx@2
  int v14; // esi@2
  int v15; // esi@2
  signed int v16; // eax@2
  int v17; // eax@3
  int v18; // ecx@4
  void *v19; // ebp@5
  char *v20; // eax@7
  int v21; // eax@9
  int v22; // esi@15
  char *v23; // ebp@15
  int v24; // eax@16
  int v25; // esi@16
  signed int v26; // eax@16
  int v27; // eax@17
  int v28; // esi@18
  int v29; // eax@20
  int v30; // edi@20
  signed int v31; // eax@20
  int v32; // eax@21
  int v33; // eax@24
  int v34; // edx@25
  int v35; // edi@25
  char v36; // al@25
  int v37; // eax@25
  int v38; // esi@25
  signed int v39; // eax@25
  int v40; // eax@26
  int v41; // eax@28
  int v42; // edi@28
  signed int v43; // eax@28
  int v44; // edi@31
  int v45; // ecx@31
  int v46; // edx@31
  int v47; // eax@31
  int v48; // esi@31
  int v49; // edi@31
  int v50; // edx@31
  _BYTE *v51; // esi@32
  int v52; // eax@33
  int v53; // edx@39
  int v54; // eax@40
  int v55; // ecx@40
  int v56; // edi@42
  unsigned int v57; // ecx@58
  int v58; // eax@58
  int v59; // edx@58
  int v60; // eax@58
  char v61; // di@58
  unsigned int v62; // ebx@58
  unsigned int result; // eax@58
  int v64; // edi@60
  int v65; // [sp+28h] [bp-94h]@1
  int v66; // [sp+28h] [bp-94h]@32
  int v67; // [sp+2Ch] [bp-90h]@1
  int v68; // [sp+2Ch] [bp-90h]@31
  int v69; // [sp+30h] [bp-8Ch]@1
  int v70; // [sp+34h] [bp-88h]@1
  int v71; // [sp+38h] [bp-84h]@1
  signed int v72; // [sp+38h] [bp-84h]@7
  int v73; // [sp+38h] [bp-84h]@15
  int v74; // [sp+3Ch] [bp-80h]@1
  int v75; // [sp+40h] [bp-7Ch]@1
  signed int v76; // [sp+40h] [bp-7Ch]@15
  int v77; // [sp+44h] [bp-78h]@1
  int v78; // [sp+44h] [bp-78h]@7
  signed int v79; // [sp+48h] [bp-74h]@7
  int v80; // [sp+58h] [bp-64h]@2
  int v81; // [sp+5Ch] [bp-60h]@3
  __int16 v82; // [sp+60h] [bp-5Ch]@8
  __int16 v83; // [sp+62h] [bp-5Ah]@10
  __int16 v84; // [sp+64h] [bp-58h]@12
  __int16 v85; // [sp+66h] [bp-56h]@14
  char v86; // [sp+68h] [bp-54h]@15
  char v87[7]; // [sp+69h] [bp-53h]@16
  int v88[4]; // [sp+70h] [bp-4Ch]@4
  int v89; // [sp+80h] [bp-3Ch]@18
  int v90; // [sp+84h] [bp-38h]@22

  v7 = a1;
  v74 = a2;
  v69 = *(_DWORD *)(a1 + 492);
  v77 = *(_DWORD *)(a1 + 496);
  v8 = a4;
  v70 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 276) + 480);
  v65 = *(_DWORD *)(a1 + 208);
  v75 = *(_DWORD *)(a1 + 212);
  v9 = *(_DWORD *)(a1 + 232) + 48 * a3;
  v71 = a3 & 3;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  v67 = v9;
  v10 = 0;
  do
  {
    v11 = *(_BYTE *)v8;
    v12 = *(_BYTE *)(v8 + 1);
    v13 = *(_DWORD *)(v67 + 4 * v10);
    v14 = v75 + 2 * v13;
    *(_BYTE *)v14 = v11;
    *(_BYTE *)(v14 + 1) = v12;
    v15 = *(_DWORD *)(v65 + 4 * v13);
    LOBYTE(v16) = sub_6F818550(v7, (int)&v80, 0, v11, v12);
    if ( v16 <= 1 )
      v17 = sub_6F827990(v7, v69 + v15, v70 + v15 + v80, v77, -1);
    else
      v17 = sub_6F827B20(v7, v69 + v15, v70 + v15 + v80, v70 + v15 + v81, v77, -1);
    v8 += 2;
    v18 = (unsigned __int8)*(&byte_6FB8EB80[4 * v71] + v10++);
    v88[v18] = v17;
  }
  while ( v10 != 4 );
  v19 = &unk_6FB8EBA0;
  if ( !*(_BYTE *)(v7 + 51612) )
    v19 = (void *)a7;
  sub_6F81BC90(v7, v74, a5, a6, (int)v88, (int)v19, 1);
  v79 = 0;
  v78 = 0;
  v20 = &byte_6FB8EB80[4 * v71];
  v72 = *(_BYTE *)(v7 + 794);
  if ( *(_BYTE *)(v74 + (unsigned __int8)*v20 + 16) < *(_BYTE *)(v7 + 794) )
  {
    v79 = 12;
    v64 = *(_BYTE *)(a4 + 1);
    v82 = *(_WORD *)a4;
    v78 = (unsigned __int8)byte_6FB88B1F[(char)v82] + (unsigned __int8)byte_6FB88B1F[v64];
  }
  else
  {
    v82 = 0;
  }
  v21 = (int)(v20 + 1);
  if ( v72 <= *(_BYTE *)(v74 + *(_BYTE *)v21 + 16) )
  {
    v83 = 0;
  }
  else
  {
    v79 += 12;
    v83 = *(_WORD *)(a4 + 2);
    v78 += (unsigned __int8)byte_6FB88B1F[(char)v83] + (unsigned __int8)byte_6FB88B1F[*(_BYTE *)(a4 + 3)];
  }
  if ( v72 <= *(_BYTE *)(v74 + *(_BYTE *)(v21 + 1) + 16) )
  {
    v84 = 0;
  }
  else
  {
    v79 += 12;
    v84 = *(_WORD *)(a4 + 4);
    v78 += (unsigned __int8)byte_6FB88B1F[*(_BYTE *)(a4 + 5)] + (unsigned __int8)byte_6FB88B1F[*(_BYTE *)(a4 + 4)];
  }
  if ( v72 > *(_BYTE *)(v74 + *(_BYTE *)(v21 + 2) + 16) )
  {
    v79 += 12;
    v85 = *(_WORD *)(a4 + 6);
    v78 += (unsigned __int8)byte_6FB88B1F[*(_BYTE *)(a4 + 7)] + (unsigned __int8)byte_6FB88B1F[*(_BYTE *)(a4 + 6)];
  }
  else
  {
    v85 = 0;
  }
  off_6FB8E82C[*(_DWORD *)(v7 + 48)]((int)&v86, (int)&v82);
  v22 = *(_DWORD *)(v7 + 48);
  v73 = *(_DWORD *)(v7 + 500);
  v23 = &byte_6FB8E880[12 * v22];
  v76 = (unsigned __int8)byte_6FB8E860[v22];
  if ( v76 > 4 )
  {
    v24 = v23[4] & 3;
    v25 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v67 + 16 * ((signed int)(unsigned __int8)v23[4] >> 2) + 4 * v24));
    LOBYTE(v26) = sub_6F818550(v7, (int)&v80, (signed int)(unsigned __int8)v23[4] >> 2, *(&v86 + 2 * v24), v87[2 * v24]);
    v27 = v26 <= 1 ? sub_6F827990(v7, v69 + v25, v70 + v25 + v80, v73, -1) : sub_6F827B20(
                                                                               v7,
                                                                               v69 + v25,
                                                                               v70 + v25 + v80,
                                                                               v70 + v25 + v81,
                                                                               v73,
                                                                               -1);
    v89 = v27;
    v28 = 5;
    if ( v76 != 5 )
    {
      if ( !(~(4 - (_BYTE)v76) & 1)
        || ((v29 = v23[5] & 3,
             v30 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v67 + 16 * ((signed int)(unsigned __int8)v23[5] >> 2) + 4 * v29)),
             LOBYTE(v31) = sub_6F818550(
                             v7,
                             (int)&v80,
                             (signed int)(unsigned __int8)v23[5] >> 2,
                             *(&v86 + 2 * v29),
                             v87[2 * v29]),
             v31 <= 1) ? (v32 = sub_6F827990(v7, v69 + v30, v70 + v30 + v80, v73, -1)) : (v32 = sub_6F827B20(
                                                                                                  v7,
                                                                                                  v69 + v30,
                                                                                                  v70 + v30 + v80,
                                                                                                  v70 + v30 + v81,
                                                                                                  v73,
                                                                                                  -1)),
            v90 = v32,
            v28 = 6,
            v76 != 6) )
      {
        do
        {
          v41 = v23[v28] & 3;
          v42 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v67 + 16 * ((signed int)(unsigned __int8)v23[v28] >> 2) + 4 * v41));
          LOBYTE(v43) = sub_6F818550(
                          v7,
                          (int)&v80,
                          (signed int)(unsigned __int8)v23[v28] >> 2,
                          *(&v86 + 2 * v41),
                          v87[2 * v41]);
          if ( v43 > 1 )
            v33 = sub_6F827B20(v7, v69 + v42, v70 + v42 + v80, v70 + v42 + v81, v73, -1);
          else
            v33 = sub_6F827990(v7, v69 + v42, v70 + v42 + v80, v73, -1);
          v34 = (unsigned __int8)v23[v28 + 1];
          v88[v28] = v33;
          v35 = v28 + 1;
          v36 = v34;
          v34 >>= 2;
          v37 = v36 & 3;
          v38 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v67 + 16 * v34 + 4 * v37));
          LOBYTE(v39) = sub_6F818550(v7, (int)&v80, v34, *(&v86 + 2 * v37), v87[2 * v37]);
          if ( v39 <= 1 )
            v40 = sub_6F827990(v7, v69 + v38, v70 + v38 + v80, v73, -1);
          else
            v40 = sub_6F827B20(v7, v69 + v38, v70 + v38 + v80, v70 + v38 + v81, v73, -1);
          v28 = v35 + 1;
          v88[v35] = v40;
        }
        while ( v76 != v35 + 1 );
      }
    }
  }
  sub_6F81A820(v7, v74, (int)v88, a7, 1);
  v44 = *(_BYTE *)(v7 + 51712);
  v45 = *(_BYTE *)(v7 + 51713);
  v46 = v7 + 4 * v44;
  v68 = *(_DWORD *)(v46 + 51720);
  v47 = *(_DWORD *)(v7 + 4 * v45 + 51720);
  v48 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v46 + 51632) + 7)] + (((_WORD)v44 + 1) & 0x1F8));
  v49 = *(_DWORD *)(v7 + 4 * v45 + 51720) - *(_DWORD *)(v46 + 51720);
  v50 = v48;
  if ( v49 <= 6 )
  {
    v66 = v68 + v48;
    v51 = (_BYTE *)(v7 + 51714);
    while ( v45 )
    {
      v52 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v7 + 4 * v45 + 51632) + 7)]
                             + (((_WORD)v45 + 1) & 0x1F8))
          + v47;
LABEL_34:
      if ( v66 <= v52 )
        v52 = v66;
      v66 = v52;
      if ( v51 != (_BYTE *)(v7 + 51720) )
      {
        v45 = *v51++;
        v47 = *(_DWORD *)(v7 + 4 * v45 + 51720);
        if ( *(_DWORD *)(v7 + 4 * v45 + 51720) - v68 <= 6 )
          continue;
      }
      v50 = v66 - v68;
      goto LABEL_58;
    }
    v53 = *(_BYTE *)(v7 + 51671);
    if ( !*(_BYTE *)(v7 + 51671) )
      goto LABEL_64;
    v54 = v53 - 1;
    v55 = *(_DWORD *)(v7 + 51708);
    if ( v55 < *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 - 1 + 51672) + 51680) )
    {
      v54 = *(_BYTE *)(v7 + 51671);
      goto LABEL_56;
    }
    if ( v53 == 1 )
      goto LABEL_56;
    v56 = v53 - 2;
    if ( v55 < *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 - 2 + 51672) + 51680) )
      goto LABEL_56;
    if ( v53 == 2 )
      goto LABEL_64;
    v54 = v53 - 3;
    if ( v55 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 - 3 + 51672) + 51680) )
    {
      if ( v53 == 3 )
        goto LABEL_56;
      v56 = v53 - 4;
      if ( v55 < *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 - 4 + 51672) + 51680) )
        goto LABEL_56;
      if ( v53 == 4 )
        goto LABEL_64;
      v54 = v53 - 5;
      if ( v55 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 - 5 + 51672) + 51680) )
      {
        if ( v53 == 5 )
          goto LABEL_56;
        v56 = v53 - 6;
        if ( v55 < *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 - 6 + 51672) + 51680) )
          goto LABEL_56;
        if ( v53 != 6 )
        {
          v54 = v53 - 7;
          if ( v55 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 - 7 + 51672) + 51680) )
          {
            if ( v53 != 7 && v55 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v53 + 51664) + 51680) )
              v54 = 0;
            goto LABEL_56;
          }
          goto LABEL_66;
        }
LABEL_64:
        v54 = 0;
LABEL_56:
        v52 = *(_DWORD *)(v7 + 51720) + (unsigned __int8)byte_6FB88B90[v54];
        goto LABEL_34;
      }
    }
LABEL_66:
    v54 = v56;
    goto LABEL_56;
  }
LABEL_58:
  v57 = *(_DWORD *)(v7 + 51628);
  v58 = v50
      + v78
      - (v57 < *(_DWORD *)(v7 + 51624) ? v57 - *(_DWORD *)(v7 + 51624) : 0)
      + (((v57 + v79 - (unsigned __int64)(unsigned int)(v78 + *(_DWORD *)(v7 + 51624))) >> 32) & (v57
                                                                                                + v79
                                                                                                - (v78
                                                                                                 + *(_DWORD *)(v7 + 51624))));
  v59 = *(_DWORD *)(v7 + 53164);
  v60 = *(_DWORD *)(v74 + 12) + (v58 << 6);
  v61 = *(_DWORD *)(v74 + 4);
  v62 = *(_DWORD *)(v74 + 4);
  *(_DWORD *)(v74 + 12) = v60;
  result = (v62 >> 6)
         + v59 * ((unsigned int)(*(_DWORD *)(v74 + 8) + v60) >> 6)
         + (((v61 & 0x3F) + ((*(_DWORD *)(v74 + 8) + v60) & 0x3Fu) * v59 + 32) >> 6);
  *(_DWORD *)v74 = result;
  return result;
}
