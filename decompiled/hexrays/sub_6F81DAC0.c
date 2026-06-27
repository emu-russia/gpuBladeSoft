int __usercall sub_6F81DAC0@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5, int a6, int a7)
{
  int v7; // ebx@1
  int v8; // esi@1
  unsigned int v9; // edi@1
  int v10; // eax@1
  int v11; // ecx@1
  signed int v12; // eax@1
  char *v13; // ebp@2
  int v14; // eax@2
  int v15; // eax@2
  int v16; // ecx@2
  unsigned int v17; // eax@2
  int v18; // ecx@3
  int v19; // eax@3
  signed int v20; // eax@3
  int v21; // ecx@5
  signed int v22; // edi@5
  int v23; // eax@7
  int v24; // ecx@8
  int v25; // ST48_4@8
  __int16 v26; // cx@8
  int v27; // eax@8
  int v28; // ebp@9
  int v29; // esi@9
  int v30; // edx@9
  int v31; // ecx@9
  int v32; // eax@9
  int v33; // edx@9
  _BYTE *v34; // ecx@10
  int v35; // eax@11
  int v36; // eax@17
  int v37; // esi@18
  int v38; // edx@18
  int v39; // edi@20
  int v40; // esi@30
  int v41; // edi@32
  int v42; // ecx@36
  int v43; // edx@36
  int v44; // eax@36
  unsigned int v45; // esi@36
  int v46; // ST34_4@36
  int v47; // edi@36
  int v48; // ST2C_4@36
  int result; // eax@36
  int v50; // edx@36
  int v51; // ecx@38
  int v52; // eax@38
  int v53; // ecx@38
  int v54; // edi@40
  int v55; // ST08_4@40
  int v56; // ST04_4@40
  signed int v57; // edi@40
  int v58; // eax@42
  int v59; // eax@44
  int v60; // esi@44
  __int16 v61; // dx@44
  int v62; // eax@44
  int v63; // [sp+2Ch] [bp-80h]@1
  int v64; // [sp+2Ch] [bp-80h]@10
  int v65; // [sp+30h] [bp-7Ch]@1
  int v66; // [sp+30h] [bp-7Ch]@9
  int v67; // [sp+34h] [bp-78h]@1
  int v68; // [sp+34h] [bp-78h]@3
  unsigned int v69; // [sp+38h] [bp-74h]@1
  char *v70; // [sp+38h] [bp-74h]@3
  int v71; // [sp+3Ch] [bp-70h]@3
  signed int v72; // [sp+40h] [bp-6Ch]@3
  int v73; // [sp+44h] [bp-68h]@1
  int v74; // [sp+48h] [bp-64h]@1
  int v75; // [sp+48h] [bp-64h]@43
  int v76; // [sp+4Ch] [bp-60h]@1
  int v77; // [sp+58h] [bp-54h]@1
  int v78; // [sp+5Ch] [bp-50h]@2
  char v79; // [sp+60h] [bp-4Ch]@2
  int v80; // [sp+64h] [bp-48h]@2
  int v81; // [sp+68h] [bp-44h]@2
  int v82; // [sp+6Ch] [bp-40h]@2

  v7 = a1;
  v69 = a3;
  v73 = a2;
  v63 = *(_DWORD *)(a1 + 492);
  v67 = *(_DWORD *)(a1 + 496);
  v65 = *(_DWORD *)(a1 + 208);
  v8 = *(_DWORD *)(v7 + 4 * *(_DWORD *)(v7 + 272) + 480);
  v9 = (a3 >> 2 << 6) + *(_DWORD *)(a1 + 220) + 16 * (a3 & 3);
  v10 = *(_BYTE *)a4;
  v11 = *(_BYTE *)(a4 + 1);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  v74 = v10;
  v76 = v11;
  LOBYTE(v12) = sub_6F818550(v7, (int)&v77, 0, v10, v11);
  if ( v12 <= 1 )
  {
    v13 = &v79;
    *(_DWORD *)&v79 = sub_6F827990(
                        v7,
                        v63 + *(_DWORD *)(v65 + 4 * *(_DWORD *)v9),
                        v8 + *(_DWORD *)(v65 + 4 * *(_DWORD *)v9) + v77,
                        v67,
                        -1);
    v51 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v9 + 4));
    v80 = sub_6F827990(v7, v63 + v51, v8 + v51 + v77, v67, -1);
    v52 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v9 + 8));
    v81 = sub_6F827990(v7, v63 + v52, v8 + v52 + v77, v67, -1);
    v53 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v9 + 12));
    v82 = sub_6F827990(v7, v63 + v53, v8 + v53 + v77, v67, -1);
    v17 = v69;
  }
  else
  {
    v13 = &v79;
    *(_DWORD *)&v79 = sub_6F827B20(
                        v7,
                        v63 + *(_DWORD *)(v65 + 4 * *(_DWORD *)v9),
                        v8 + *(_DWORD *)(v65 + 4 * *(_DWORD *)v9) + v77,
                        v8 + *(_DWORD *)(v65 + 4 * *(_DWORD *)v9) + v78,
                        v67,
                        -1);
    v14 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v9 + 4));
    v80 = sub_6F827B20(v7, v63 + v14, v8 + v14 + v77, v8 + v14 + v78, v67, -1);
    v15 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v9 + 8));
    v81 = sub_6F827B20(v7, v63 + v15, v8 + v15 + v77, v8 + v15 + v78, v67, -1);
    v16 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v9 + 12));
    v82 = sub_6F827B20(v7, v63 + v16, v8 + v16 + v77, v8 + v16 + v78, v67, -1);
    v17 = v69;
  }
  v18 = 3 * v17;
  v19 = *(_DWORD *)(v7 + 48);
  v68 = *(_DWORD *)(v7 + 232) + 16 * v18;
  v70 = &byte_6FB8E880[12 * v19];
  v72 = (unsigned __int8)byte_6FB8E860[v19];
  v71 = *(_DWORD *)(v7 + 500);
  LOBYTE(v20) = sub_6F818550(v7, (int)&v77, 1, v74, v76);
  if ( v20 <= 1 )
  {
    if ( v72 > 4 )
    {
      v54 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * (unsigned __int8)v70[4] & 0x3F0) + 4 * (v70[4] & 3)));
      v55 = v8 + v54 + v77;
      v56 = v63 + v54;
      v57 = 5;
      *((_DWORD *)v13 + 4) = sub_6F827990(v7, v56, v55, v71, -1);
      if ( v72 != 5 )
      {
        if ( !(~(4 - (_BYTE)v72) & 1)
          || (v58 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * (unsigned __int8)v70[5] & 0x3F0) + 4 * (v70[5] & 3))),
              *((_DWORD *)v13 + 5) = sub_6F827990(v7, v63 + v58, v8 + v58 + v77, v71, -1),
              v57 = 6,
              v72 != 6) )
        {
          v75 = v8;
          do
          {
            v59 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * (unsigned __int8)v70[v57] & 0x3F0) + 4 * (v70[v57] & 3)));
            v60 = v57 + 1;
            *(_DWORD *)&v13[4 * v57] = sub_6F827990(v7, v63 + v59, v75 + v59 + v77, v71, -1);
            v61 = (unsigned __int8)v70[v57 + 1];
            v57 += 2;
            v62 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * v61 & 0x3F0) + 4 * (v61 & 3)));
            *(_DWORD *)&v13[4 * v60] = sub_6F827990(v7, v63 + v62, v75 + v62 + v77, v71, -1);
          }
          while ( v72 != v57 );
        }
      }
    }
  }
  else if ( v72 > 4 )
  {
    v21 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * (unsigned __int8)v70[4] & 0x3F0) + 4 * (v70[4] & 3)));
    v22 = 5;
    *((_DWORD *)v13 + 4) = sub_6F827B20(v7, v63 + v21, v8 + v21 + v77, v8 + v21 + v78, v71, -1);
    if ( v72 != 5 )
    {
      if ( !(~(_BYTE)v72 & 1)
        || (v23 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * (unsigned __int8)v70[5] & 0x3F0) + 4 * (v70[5] & 3))),
            v22 = 6,
            *((_DWORD *)v13 + 5) = sub_6F827B20(v7, v63 + v23, v8 + v23 + v77, v8 + v23 + v78, v71, -1),
            v72 != 6) )
      {
        do
        {
          v24 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * (unsigned __int8)v70[v22] & 0x3F0) + 4 * (v70[v22] & 3)));
          *(_DWORD *)&v13[4 * v22] = sub_6F827B20(v7, v63 + v24, v8 + v24 + v77, v8 + v24 + v78, v71, -1);
          v25 = v22 + 1;
          v26 = (unsigned __int8)v70[v22 + 1];
          v22 += 2;
          v27 = *(_DWORD *)(v65 + 4 * *(_DWORD *)(v68 + (4 * v26 & 0x3F0) + 4 * (v26 & 3)));
          *(_DWORD *)&v13[4 * v25] = sub_6F827B20(v7, v63 + v27, v8 + v27 + v77, v8 + v27 + v78, v71, -1);
        }
        while ( v72 != v22 );
      }
    }
  }
  sub_6F81BC90(v7, v73, a5, a6, (int)v13, a7, 1);
  sub_6F81A820(v7, v73, (int)v13, a7, 1);
  v28 = *(_BYTE *)(v7 + 51712);
  v29 = *(_BYTE *)(v7 + 51713);
  v30 = v7 + 4 * v28;
  v66 = *(_DWORD *)(v30 + 51720);
  v31 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v30 + 51632) + 6)] + (((_WORD)v28 + 1) & 0x1F8));
  v32 = *(_DWORD *)(v7 + 4 * v29 + 51720);
  v33 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v30 + 51632) + 6)] + (((_WORD)v28 + 1) & 0x1F8));
  if ( *(_DWORD *)(v7 + 4 * v29 + 51720) - v66 <= 6 )
  {
    v64 = v66 + v31;
    v34 = (_BYTE *)(v7 + 51714);
    while ( v29 )
    {
      v35 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v7 + 4 * v29 + 51632) + 6)]
                             + (((_WORD)v29 + 1) & 0x1F8))
          + v32;
LABEL_12:
      if ( v64 <= v35 )
        v35 = v64;
      v64 = v35;
      if ( v34 != (_BYTE *)(v7 + 51720) )
      {
        v29 = *v34++;
        v32 = *(_DWORD *)(v7 + 4 * v29 + 51720);
        if ( *(_DWORD *)(v7 + 4 * v29 + 51720) - v66 <= 6 )
          continue;
      }
      v33 = v64 - v66;
      goto LABEL_36;
    }
    v36 = *(_BYTE *)(v7 + 51670);
    if ( !*(_BYTE *)(v7 + 51670)
      || (v37 = v36 - 1,
          v38 = *(_DWORD *)(v7 + 51704),
          v38 < *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v36 - 1 + 51672) + 51680)) )
    {
LABEL_34:
      v35 = *(_DWORD *)(v7 + 51720) + (unsigned __int8)byte_6FB88B90[v36];
      goto LABEL_12;
    }
    if ( v36 == 1 )
      goto LABEL_37;
    v39 = v36 - 2;
    if ( v38 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v36 - 2 + 51672) + 51680) )
    {
      if ( v36 == 2 )
        goto LABEL_37;
      v37 = v36 - 3;
      if ( v38 < *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v36 - 3 + 51672) + 51680) )
        goto LABEL_46;
      if ( v36 == 3 )
      {
LABEL_37:
        v36 = 0;
        goto LABEL_34;
      }
      v39 = v36 - 4;
      if ( v38 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v36 - 4 + 51672) + 51680) )
      {
        if ( v36 == 4 )
          goto LABEL_37;
        v37 = v36 - 5;
        if ( v38 < *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v36 - 5 + 51672) + 51680) )
          goto LABEL_46;
        if ( v36 == 5 )
          goto LABEL_37;
        v39 = v36 - 6;
        if ( v38 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v36 - 6 + 51672) + 51680) )
        {
          if ( v36 != 6 )
          {
            v40 = v36 - 7;
            if ( v38 >= *(_DWORD *)(v7 + 4 * *(_BYTE *)(v7 + v36 + 51665) + 51680) )
            {
              if ( v36 != 7 )
              {
                v41 = *(_BYTE *)(v7 + v36 + 51664);
                v36 = 0;
                if ( v38 < *(_DWORD *)(v7 + 4 * v41 + 51680) )
                  v36 = v40;
                goto LABEL_34;
              }
              goto LABEL_37;
            }
LABEL_46:
            v36 = v39;
            goto LABEL_34;
          }
          goto LABEL_37;
        }
      }
    }
    v36 = v37;
    goto LABEL_34;
  }
LABEL_36:
  v42 = *(_DWORD *)(v73 + 4);
  v43 = *(_DWORD *)(v73 + 12) + (v33 << 6);
  v44 = *(_DWORD *)(v73 + 8);
  v45 = *(_DWORD *)(v73 + 4);
  *(_DWORD *)(v73 + 12) = v43;
  v46 = v44;
  v47 = *(_DWORD *)(v7 + 53164);
  v48 = (v42 & 0x3F) + 32;
  *(_DWORD *)v73 = ((v48 + v47 * ((v43 + v44) & 0x3Fu)) >> 6) + (v45 >> 6) + v47 * ((unsigned int)(v43 + v44) >> 6);
  result = (unsigned __int8)byte_6FB88B1F[*(_BYTE *)a4] + (unsigned __int8)byte_6FB88B1F[*(_BYTE *)(a4 + 1)];
  v50 = ((result
        - (*(_DWORD *)(v7 + 51628) < *(_DWORD *)(v7 + 51624) ? *(_DWORD *)(v7 + 51628) - *(_DWORD *)(v7 + 51624) : 0)
        + (result + *(_DWORD *)(v7 + 51624) > (unsigned int)(*(_DWORD *)(v7 + 51628) + 12) ? *(_DWORD *)(v7 + 51628)
                                                                                           + 12
                                                                                           - (result
                                                                                            + *(_DWORD *)(v7 + 51624)) : 0)) << 6)
      + v43;
  *(_DWORD *)(v73 + 12) = v50;
  *(_DWORD *)v73 = (v45 >> 6) + v47 * ((unsigned int)(v46 + v50) >> 6) + ((((v46 + v50) & 0x3Fu) * v47 + v48) >> 6);
  return result;
}
