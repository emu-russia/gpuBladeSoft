unsigned int __usercall sub_6F81C760@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5, int a6)
{
  int v6; // ebx@1
  int v7; // ebp@1
  int v8; // eax@1
  int v9; // esi@1
  unsigned int v10; // edi@1
  signed int v11; // eax@1
  char *v12; // ebp@2
  int v13; // eax@2
  int v14; // eax@2
  int v15; // ecx@2
  int v16; // eax@2
  unsigned int v17; // ecx@2
  int v18; // eax@3
  signed int v19; // eax@3
  int v20; // ecx@5
  signed int v21; // edi@5
  int v22; // eax@7
  int v23; // ecx@8
  int v24; // ST38_4@8
  __int16 v25; // cx@8
  int v26; // eax@8
  int v27; // edi@9
  int v28; // edx@9
  int v29; // ecx@9
  int v30; // esi@9
  int v31; // eax@9
  int v32; // ecx@9
  _BYTE *v33; // esi@10
  int v34; // eax@11
  int v35; // edx@17
  int v36; // eax@18
  int v37; // ecx@18
  int v38; // edi@20
  int v39; // edx@36
  int v40; // eax@36
  unsigned int v41; // ebx@36
  unsigned int result; // eax@36
  int v43; // eax@39
  signed int v44; // edi@39
  int v45; // eax@41
  int v46; // ecx@43
  int v47; // esi@43
  __int16 v48; // dx@43
  int v49; // eax@43
  int v50; // eax@45
  int v51; // ecx@45
  int v52; // eax@45
  int v53; // eax@45
  int v54; // [sp+20h] [bp-7Ch]@1
  int v55; // [sp+20h] [bp-7Ch]@10
  int v56; // [sp+24h] [bp-78h]@1
  int v57; // [sp+24h] [bp-78h]@9
  int v58; // [sp+28h] [bp-74h]@1
  int v59; // [sp+28h] [bp-74h]@3
  unsigned int v60; // [sp+2Ch] [bp-70h]@1
  char *v61; // [sp+2Ch] [bp-70h]@3
  int v62; // [sp+30h] [bp-6Ch]@3
  signed int v63; // [sp+34h] [bp-68h]@3
  int v64; // [sp+38h] [bp-64h]@42
  int v65; // [sp+3Ch] [bp-60h]@1
  int v66; // [sp+48h] [bp-54h]@1
  int v67; // [sp+4Ch] [bp-50h]@2
  char v68; // [sp+50h] [bp-4Ch]@2
  int v69; // [sp+54h] [bp-48h]@2
  int v70; // [sp+58h] [bp-44h]@2
  int v71; // [sp+5Ch] [bp-40h]@2

  v6 = a1;
  v7 = *(_DWORD *)(a1 + 208);
  v65 = a2;
  v60 = a3;
  v54 = *(_DWORD *)(a1 + 492);
  v58 = *(_DWORD *)(a1 + 496);
  v8 = *(_DWORD *)(a1 + 220);
  v9 = *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 272) + 480);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  v56 = v7;
  v10 = (a3 >> 2 << 6) + v8 + 16 * (a3 & 3);
  LOBYTE(v11) = sub_6F818550(v6, (int)&v66, 0, 0, 0);
  if ( v11 <= 1 )
  {
    v12 = &v68;
    *(_DWORD *)&v68 = sub_6F827990(
                        v6,
                        v54 + *(_DWORD *)(v56 + 4 * *(_DWORD *)v10),
                        v9 + *(_DWORD *)(v56 + 4 * *(_DWORD *)v10) + v66,
                        v58,
                        -1);
    v50 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v10 + 4));
    v69 = sub_6F827990(v6, v54 + v50, v9 + v50 + v66, v58, -1);
    v51 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v10 + 8));
    v70 = sub_6F827990(v6, v54 + v51, v9 + v51 + v66, v58, -1);
    v52 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v10 + 12));
    v53 = sub_6F827990(v6, v54 + v52, v9 + v52 + v66, v58, -1);
    v17 = v60;
    v71 = v53;
  }
  else
  {
    v12 = &v68;
    *(_DWORD *)&v68 = sub_6F827B20(
                        v6,
                        v54 + *(_DWORD *)(v56 + 4 * *(_DWORD *)v10),
                        v9 + *(_DWORD *)(v56 + 4 * *(_DWORD *)v10) + v66,
                        v9 + *(_DWORD *)(v56 + 4 * *(_DWORD *)v10) + v67,
                        v58,
                        -1);
    v13 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v10 + 4));
    v69 = sub_6F827B20(v6, v54 + v13, v9 + v13 + v66, v9 + v13 + v67, v58, -1);
    v14 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v10 + 8));
    v70 = sub_6F827B20(v6, v54 + v14, v9 + v14 + v66, v9 + v14 + v67, v58, -1);
    v15 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v10 + 12));
    v16 = sub_6F827B20(v6, v54 + v15, v9 + v15 + v66, v9 + v15 + v67, v58, -1);
    v17 = v60;
    v71 = v16;
  }
  v18 = *(_DWORD *)(v6 + 48);
  v59 = *(_DWORD *)(v6 + 232) + 48 * v17;
  v61 = &byte_6FB8E880[12 * v18];
  v63 = (unsigned __int8)byte_6FB8E860[v18];
  v62 = *(_DWORD *)(v6 + 500);
  LOBYTE(v19) = sub_6F818550(v6, (int)&v66, 1, 0, 0);
  if ( v19 <= 1 )
  {
    if ( v63 > 4 )
    {
      v43 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * (unsigned __int8)v61[4] & 0x3F0) + 4 * (v61[4] & 3)));
      v44 = 5;
      *((_DWORD *)v12 + 4) = sub_6F827990(v6, v54 + v43, v9 + v43 + v66, v62, -1);
      if ( v63 != 5 )
      {
        if ( !(~(4 - (_BYTE)v63) & 1)
          || (v45 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * (unsigned __int8)v61[5] & 0x3F0) + 4 * (v61[5] & 3))),
              *((_DWORD *)v12 + 5) = sub_6F827990(v6, v54 + v45, v9 + v45 + v66, v62, -1),
              v44 = 6,
              v63 != 6) )
        {
          v64 = v9;
          do
          {
            v46 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * (unsigned __int8)v61[v44] & 0x3F0) + 4 * (v61[v44] & 3)));
            v47 = v44 + 1;
            *(_DWORD *)&v12[4 * v44] = sub_6F827990(v6, v54 + v46, v64 + v46 + v66, v62, -1);
            v48 = (unsigned __int8)v61[v44 + 1];
            v44 += 2;
            v49 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * v48 & 0x3F0) + 4 * (v48 & 3)));
            *(_DWORD *)&v12[4 * v47] = sub_6F827990(v6, v54 + v49, v64 + v49 + v66, v62, -1);
          }
          while ( v63 != v44 );
        }
      }
    }
  }
  else if ( v63 > 4 )
  {
    v20 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * (unsigned __int8)v61[4] & 0x3F0) + 4 * (v61[4] & 3)));
    v21 = 5;
    *((_DWORD *)v12 + 4) = sub_6F827B20(v6, v54 + v20, v9 + v20 + v66, v9 + v20 + v67, v62, -1);
    if ( v63 != 5 )
    {
      if ( !(~(_BYTE)v63 & 1)
        || (v22 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * (unsigned __int8)v61[5] & 0x3F0) + 4 * (v61[5] & 3))),
            v21 = 6,
            *((_DWORD *)v12 + 5) = sub_6F827B20(v6, v54 + v22, v9 + v22 + v66, v9 + v22 + v67, v62, -1),
            v63 != 6) )
      {
        do
        {
          v23 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * (unsigned __int8)v61[v21] & 0x3F0) + 4 * (v61[v21] & 3)));
          *(_DWORD *)&v12[4 * v21] = sub_6F827B20(v6, v54 + v23, v9 + v23 + v66, v9 + v23 + v67, v62, -1);
          v24 = v21 + 1;
          v25 = (unsigned __int8)v61[v21 + 1];
          v21 += 2;
          v26 = *(_DWORD *)(v56 + 4 * *(_DWORD *)(v59 + (4 * v25 & 0x3F0) + 4 * (v25 & 3)));
          *(_DWORD *)&v12[4 * v24] = sub_6F827B20(v6, v54 + v26, v9 + v26 + v66, v9 + v26 + v67, v62, -1);
        }
        while ( v63 != v21 );
      }
    }
  }
  sub_6F81BC90(v6, v65, a4, a5, (int)v12, a6, 1);
  sub_6F81A820(v6, v65, (int)v12, a6, 1);
  v27 = *(_BYTE *)(v6 + 51712);
  v28 = *(_BYTE *)(v6 + 51713);
  v29 = v6 + 4 * v27;
  v57 = *(_DWORD *)(v29 + 51720);
  v30 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v29 + 51632) + 5)] + (((_WORD)v27 + 1) & 0x1F8));
  v31 = *(_DWORD *)(v6 + 4 * v28 + 51720);
  v32 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v29 + 51632) + 5)] + (((_WORD)v27 + 1) & 0x1F8));
  if ( *(_DWORD *)(v6 + 4 * v28 + 51720) - v57 <= 6 )
  {
    v55 = v57 + v30;
    v33 = (_BYTE *)(v6 + 51714);
    while ( v28 )
    {
      v34 = (unsigned __int8)*(&byte_6FB88B90[*(_BYTE *)(*(_DWORD *)(v6 + 4 * v28 + 51632) + 5)]
                             + (((_WORD)v28 + 1) & 0x1F8))
          + v31;
LABEL_12:
      if ( v55 <= v34 )
        v34 = v55;
      v55 = v34;
      if ( v33 != (_BYTE *)(v6 + 51720) )
      {
        v28 = *v33++;
        v31 = *(_DWORD *)(v6 + 4 * v28 + 51720);
        if ( *(_DWORD *)(v6 + 4 * v28 + 51720) - v57 <= 6 )
          continue;
      }
      v32 = v55 - v57;
      goto LABEL_36;
    }
    v35 = *(_BYTE *)(v6 + 51669);
    if ( !*(_BYTE *)(v6 + 51669) )
      goto LABEL_37;
    v36 = v35 - 1;
    v37 = *(_DWORD *)(v6 + 51700);
    if ( v37 < *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 - 1 + 51672) + 51680) )
    {
      v36 = *(_BYTE *)(v6 + 51669);
      goto LABEL_34;
    }
    if ( v35 == 1 )
      goto LABEL_34;
    v38 = v35 - 2;
    if ( v37 < *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 - 2 + 51672) + 51680) )
      goto LABEL_34;
    if ( v35 == 2 )
      goto LABEL_37;
    v36 = v35 - 3;
    if ( v37 >= *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 - 3 + 51672) + 51680) )
    {
      if ( v35 == 3 )
        goto LABEL_34;
      v38 = v35 - 4;
      if ( v37 < *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 - 4 + 51672) + 51680) )
        goto LABEL_34;
      if ( v35 == 4 )
        goto LABEL_37;
      v36 = v35 - 5;
      if ( v37 >= *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 - 5 + 51672) + 51680) )
      {
        if ( v35 == 5 )
          goto LABEL_34;
        v38 = v35 - 6;
        if ( v37 < *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 - 6 + 51672) + 51680) )
          goto LABEL_34;
        if ( v35 != 6 )
        {
          v36 = v35 - 7;
          if ( v37 >= *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 - 7 + 51672) + 51680) )
          {
            if ( v35 != 7 && v37 >= *(_DWORD *)(v6 + 4 * *(_BYTE *)(v6 + v35 + 51664) + 51680) )
              v36 = 0;
            goto LABEL_34;
          }
          goto LABEL_46;
        }
LABEL_37:
        v36 = 0;
LABEL_34:
        v34 = *(_DWORD *)(v6 + 51720) + (unsigned __int8)byte_6FB88B90[v36];
        goto LABEL_12;
      }
    }
LABEL_46:
    v36 = v38;
    goto LABEL_34;
  }
LABEL_36:
  v39 = *(_DWORD *)(v6 + 53164);
  v40 = (v32 << 6) + *(_DWORD *)(v65 + 12);
  v41 = *(_DWORD *)(v65 + 4);
  *(_DWORD *)(v65 + 12) = v40;
  result = (v41 >> 6)
         + v39 * ((unsigned int)(*(_DWORD *)(v65 + 8) + v40) >> 6)
         + (((v41 & 0x3F) + ((*(_DWORD *)(v65 + 8) + v40) & 0x3F) * v39 + 32) >> 6);
  *(_DWORD *)v65 = result;
  return result;
}
