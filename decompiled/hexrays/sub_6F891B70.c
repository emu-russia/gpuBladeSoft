int __usercall sub_6F891B70@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  int v4; // edi@3
  int v5; // esi@4
  unsigned int v6; // edx@5
  int v7; // ecx@5
  signed int v8; // esi@5
  int v9; // ebx@6
  int v10; // edx@6
  signed int v11; // ebp@7
  int v12; // ebx@7
  __int16 v13; // cx@7
  int v14; // esi@7
  int v15; // ecx@7
  int v16; // esi@7
  int v17; // edi@7
  unsigned int v18; // edi@8
  int v19; // ebx@10
  int v20; // edx@10
  int v21; // edx@11
  int v22; // ebp@11
  signed int v23; // edi@11
  signed int v24; // edx@12
  int v25; // ecx@12
  signed int v26; // ST14_4@12
  int v27; // edi@12
  __int16 v28; // si@12
  int v29; // ecx@12
  int v30; // edi@12
  int v31; // esi@12
  int v32; // ecx@12
  int v33; // ebp@13
  int v34; // edi@14
  __int16 v35; // si@15
  int v36; // edx@15
  int v37; // edx@15
  int v38; // esi@15
  int v39; // edx@15
  unsigned int v40; // edi@16
  int v41; // ebx@18
  int v42; // ebp@18
  signed int v43; // ebx@18
  int v44; // ebp@19
  signed int v45; // edx@19
  signed int v46; // ebx@19
  int v47; // ecx@19
  int v48; // ecx@19
  int v49; // esi@19
  int v50; // ebp@19
  int v51; // ebp@20
  int v52; // edi@21
  signed int v53; // edx@21
  int v54; // ebx@22
  __int16 v55; // cx@22
  int v56; // esi@22
  int v57; // ecx@22
  int v58; // esi@22
  int v59; // edi@22
  bool v60; // cf@22
  signed int v61; // edi@24
  int v62; // ebx@25
  signed int v63; // ebx@26
  int v64; // edx@28
  int v65; // edx@29
  char v66; // cl@30
  int v67; // ebp@30
  int v68; // edx@30
  __int16 v69; // cx@30
  signed int v70; // ST04_4@30
  int v71; // edx@30
  int v72; // ebp@30
  int v73; // edx@30
  __int16 v74; // [sp+0h] [bp-28h]@2
  unsigned int v75; // [sp+0h] [bp-28h]@10
  int v76; // [sp+4h] [bp-24h]@11
  int v77; // [sp+4h] [bp-24h]@17
  int v78; // [sp+8h] [bp-20h]@1
  int v79; // [sp+Ch] [bp-1Ch]@11
  int v80; // [sp+Ch] [bp-1Ch]@18
  int v81; // [sp+10h] [bp-18h]@1

  v78 = a2;
  v3 = *(_DWORD *)(result + 5820);
  v81 = a3;
  if ( !*(_DWORD *)(result + 5792) )
  {
    v74 = *(_WORD *)(result + 5816);
    goto LABEL_3;
  }
  v6 = 0;
  v7 = *(_DWORD *)(result + 5820);
  v8 = *(_WORD *)(result + 5816);
  while ( 1 )
  {
    v75 = v6 + 1;
    v19 = *(_WORD *)(*(_DWORD *)(result + 5796) + 2 * v6);
    v20 = *(_BYTE *)(*(_DWORD *)(result + 5784) + v6);
    if ( !v19 )
    {
      v9 = v78 + 4 * v20;
      v10 = *(_WORD *)(v9 + 2);
      if ( 16 - v10 >= v7 )
      {
        v62 = *(_WORD *)v9 << v7;
        v7 += v10;
        v8 |= v62;
        *(_WORD *)(result + 5816) = v8;
        *(_DWORD *)(result + 5820) = v7;
      }
      else
      {
        v11 = *(_WORD *)v9;
        v12 = *(_DWORD *)(result + 20);
        v13 = v8 | (v11 << v7);
        v14 = *(_DWORD *)(result + 8);
        *(_WORD *)(result + 5816) = v13;
        *(_DWORD *)(result + 20) = v12 + 1;
        *(_BYTE *)(v14 + v12) = v13;
        v15 = *(_DWORD *)(result + 20);
        v16 = *(_DWORD *)(result + 8);
        *(_DWORD *)(result + 20) = v15 + 1;
        *(_BYTE *)(v16 + v15) = *(_BYTE *)(result + 5817);
        v17 = *(_DWORD *)(result + 5820);
        v8 = v11 >> (16 - v17);
        v7 = v10 + v17 - 16;
        *(_WORD *)(result + 5816) = v8;
        *(_DWORD *)(result + 5820) = v7;
      }
      goto LABEL_8;
    }
    v79 = v20;
    v21 = (unsigned __int8)byte_6FBA1380[v20];
    v22 = *(_WORD *)(v78 + 4 * v21 + 1030);
    v76 = v21;
    v23 = *(_WORD *)(v78 + 4 * v21 + 1028);
    if ( 16 - v22 >= v7 )
    {
      v61 = v23 << v7;
      v32 = v22 + v7;
      v31 = v61 | v8;
      *(_WORD *)(result + 5816) = v31;
      *(_DWORD *)(result + 5820) = v32;
    }
    else
    {
      v24 = v23 << v7;
      v25 = *(_DWORD *)(result + 20);
      v26 = v23;
      v27 = *(_DWORD *)(result + 8);
      v28 = v24 | v8;
      *(_WORD *)(result + 5816) = v28;
      *(_DWORD *)(result + 20) = v25 + 1;
      *(_BYTE *)(v27 + v25) = v28;
      v29 = *(_DWORD *)(result + 20);
      v30 = *(_DWORD *)(result + 8);
      *(_DWORD *)(result + 20) = v29 + 1;
      *(_BYTE *)(v30 + v29) = *(_BYTE *)(result + 5817);
      v31 = v26 >> (16 - *(_BYTE *)(result + 5820));
      v32 = v22 + *(_DWORD *)(result + 5820) - 16;
      *(_WORD *)(result + 5816) = v31;
      *(_DWORD *)(result + 5820) = v32;
    }
    v33 = dword_6FBA1C80[v76];
    if ( v33 )
    {
      v34 = v79 - dword_6FBA1300[v76];
      if ( 16 - v33 >= v32 )
      {
        v64 = (unsigned __int16)v34 << v32;
        v32 += v33;
        v31 |= v64;
        *(_WORD *)(result + 5816) = v31;
        *(_DWORD *)(result + 5820) = v32;
      }
      else
      {
        v35 = ((unsigned __int16)v34 << v32) | v31;
        v36 = *(_DWORD *)(result + 20);
        *(_WORD *)(result + 5816) = v35;
        *(_DWORD *)(result + 20) = v36 + 1;
        *(_BYTE *)(*(_DWORD *)(result + 8) + v36) = v35;
        v37 = *(_DWORD *)(result + 20);
        v38 = *(_DWORD *)(result + 8);
        *(_DWORD *)(result + 20) = v37 + 1;
        *(_BYTE *)(v38 + v37) = *(_BYTE *)(result + 5817);
        v39 = *(_DWORD *)(result + 5820);
        v31 = (signed int)(unsigned __int16)v34 >> (16 - v39);
        v32 = v33 + v39 - 16;
        *(_WORD *)(result + 5816) = v31;
        *(_DWORD *)(result + 5820) = v32;
      }
    }
    v40 = v19 - 1;
    v77 = (unsigned int)(v19 - 1) > 0xFF ? (unsigned __int8)byte_6FBA1580[v40 >> 7] : (unsigned __int8)byte_6FBA1480[v40];
    v41 = v81 + 4 * v77;
    v42 = *(_WORD *)(v41 + 2);
    v43 = *(_WORD *)v41;
    v80 = v42;
    if ( 16 - v42 >= v32 )
    {
      v63 = v43 << v32;
      v7 = v42 + v32;
      v8 = v63 | v31;
      *(_WORD *)(result + 5816) = v8;
      *(_DWORD *)(result + 5820) = v7;
    }
    else
    {
      v44 = *(_DWORD *)(result + 20);
      v45 = v43;
      v46 = v43 << v32;
      v47 = *(_DWORD *)(result + 8);
      LOWORD(v46) = v31 | v46;
      *(_WORD *)(result + 5816) = v46;
      *(_DWORD *)(result + 20) = v44 + 1;
      *(_BYTE *)(v47 + v44) = v46;
      v48 = *(_DWORD *)(result + 20);
      v49 = *(_DWORD *)(result + 8);
      *(_DWORD *)(result + 20) = v48 + 1;
      *(_BYTE *)(v49 + v48) = *(_BYTE *)(result + 5817);
      v50 = *(_DWORD *)(result + 5820);
      v8 = v45 >> (16 - v50);
      v7 = v80 + v50 - 16;
      *(_WORD *)(result + 5816) = v8;
      *(_DWORD *)(result + 5820) = v7;
    }
    v51 = dword_6FBA1C00[v77];
    if ( v51 )
      break;
LABEL_8:
    v18 = v75;
    if ( v75 >= *(_DWORD *)(result + 5792) )
      goto LABEL_23;
LABEL_9:
    v6 = v18;
  }
  v52 = v40 - dword_6FBA1280[v77];
  v53 = (unsigned __int16)v52;
  if ( 16 - v51 >= v7 )
  {
    v65 = (unsigned __int16)v52 << v7;
    v7 += v51;
    v8 |= v65;
    *(_WORD *)(result + 5816) = v8;
    *(_DWORD *)(result + 5820) = v7;
    goto LABEL_8;
  }
  v54 = *(_DWORD *)(result + 20);
  v55 = v8 | ((unsigned __int16)v52 << v7);
  v56 = *(_DWORD *)(result + 8);
  *(_WORD *)(result + 5816) = v55;
  *(_DWORD *)(result + 20) = v54 + 1;
  *(_BYTE *)(v56 + v54) = v55;
  v57 = *(_DWORD *)(result + 20);
  v58 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 20) = v57 + 1;
  *(_BYTE *)(v58 + v57) = *(_BYTE *)(result + 5817);
  v59 = *(_DWORD *)(result + 5820);
  v8 = v53 >> (16 - v59);
  v7 = v51 + v59 - 16;
  v18 = v75;
  v60 = v75 < *(_DWORD *)(result + 5792);
  *(_WORD *)(result + 5816) = v8;
  *(_DWORD *)(result + 5820) = v7;
  if ( v60 )
    goto LABEL_9;
LABEL_23:
  v3 = v7;
  v74 = v8;
LABEL_3:
  v4 = *(_WORD *)(v78 + 1026);
  if ( 16 - v4 < v3 )
  {
    v66 = v3;
    v67 = *(_DWORD *)(result + 8);
    v68 = *(_DWORD *)(result + 20);
    v69 = v74 | (*(_WORD *)(v78 + 1024) << v66);
    v70 = *(_WORD *)(v78 + 1024);
    *(_DWORD *)(result + 20) = v68 + 1;
    *(_WORD *)(result + 5816) = v69;
    *(_BYTE *)(v67 + v68) = v69;
    v71 = *(_DWORD *)(result + 20);
    LOBYTE(v69) = *(_BYTE *)(result + 5817);
    v72 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v71 + 1;
    *(_BYTE *)(v72 + v71) = v69;
    v73 = *(_DWORD *)(result + 5820);
    *(_WORD *)(result + 5816) = v70 >> (16 - v73);
    *(_DWORD *)(result + 5820) = v4 + v73 - 16;
  }
  else
  {
    v5 = *(_WORD *)(v78 + 1024);
    *(_DWORD *)(result + 5820) = v4 + v3;
    *(_WORD *)(result + 5816) = v74 | (v5 << v3);
  }
  return result;
}
