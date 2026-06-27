signed int __usercall sub_6F77D960@<eax>(int a1@<eax>, int a2@<edx>, signed int a3@<ecx>, int a4, int a5, char a6)
{
  int v6; // ebx@1
  int v7; // esi@1
  int v8; // ebp@3
  int v9; // esi@3
  signed __int64 v10; // rax@5
  unsigned int v11; // ebp@5
  signed __int64 v12; // rax@5
  int v13; // esi@5
  int v14; // edi@5
  signed int v15; // ebp@5
  int v16; // edx@6
  signed int v17; // ebp@8
  int v18; // eax@9
  int v19; // edx@9
  signed int result; // eax@11
  signed __int64 v21; // rax@14
  unsigned int v22; // edi@14
  signed __int64 v23; // rax@14
  unsigned int v24; // eax@14
  unsigned int v25; // esi@14
  signed __int64 v26; // rax@14
  signed __int64 v27; // rax@14
  signed int v28; // eax@14
  int v29; // eax@17
  int v30; // edx@18
  int v31; // ecx@18
  int v32; // edx@20
  int v33; // ecx@21
  int v34; // edx@24
  int v35; // eax@24
  int v36; // edx@33
  int v37; // eax@39
  int v38; // edx@39
  int v39; // eax@39
  int v40; // edx@39
  signed int v41; // [sp+18h] [bp-84h]@1
  int v42; // [sp+1Ch] [bp-80h]@1
  bool v43; // [sp+1Ch] [bp-80h]@8
  int v44; // [sp+20h] [bp-7Ch]@3
  int v45; // [sp+20h] [bp-7Ch]@14
  int v46; // [sp+24h] [bp-78h]@4
  signed int v47; // [sp+24h] [bp-78h]@14
  int v48; // [sp+28h] [bp-74h]@1
  int v49; // [sp+2Ch] [bp-70h]@1
  int v50; // [sp+3Ch] [bp-60h]@5
  int v51; // [sp+3Ch] [bp-60h]@14
  int v52; // [sp+40h] [bp-5Ch]@14
  int v53; // [sp+44h] [bp-58h]@1
  int v54; // [sp+48h] [bp-54h]@5
  int v55; // [sp+5Ch] [bp-40h]@6
  int v56; // [sp+60h] [bp-3Ch]@6
  int v57; // [sp+64h] [bp-38h]@9
  int v58; // [sp+68h] [bp-34h]@32
  char v59; // [sp+6Ch] [bp-30h]@9
  int v60; // [sp+74h] [bp-28h]@9
  int v61; // [sp+78h] [bp-24h]@9
  int v62; // [sp+7Ch] [bp-20h]@9

  v6 = a1;
  v48 = a1 + 11768;
  v7 = a1 + 11776;
  v49 = a2;
  v41 = a3;
  v42 = a1 + 11776;
  v53 = *(_DWORD *)(a1 + 11748);
  if ( v53 == 2 )
  {
    v48 = a1 + 11752;
    v42 = a1 + 11760;
    v7 = a1 + 11760;
  }
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(v7 + 4);
  v44 = *(_DWORD *)a3;
  if ( v8 == *(_DWORD *)a3 )
  {
    v46 = *(_DWORD *)(a3 + 4);
    if ( v9 == *(_DWORD *)(a3 + 4) )
    {
      v13 = 0;
      v14 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v46 = *(_DWORD *)(a3 + 4);
  }
  v50 = *(_DWORD *)(v48 + 4);
  v54 = *(_DWORD *)v48;
  v10 = (unsigned int)(((signed int)((unsigned __int64)(((a5 - v46 + 16) >> 5) * (signed __int64)((v8 - v54 + 16) >> 5)) >> 32) >> 31)
                     + 0x8000)
      + ((a5 - v46 + 16) >> 5) * (signed __int64)((v8 - v54 + 16) >> 5);
  v11 = (HIDWORD(v10) << 16) + ((unsigned int)v10 >> 16);
  v12 = (unsigned int)(((signed int)((unsigned __int64)(((a4 - v44 + 16) >> 5) * (signed __int64)((v9 - v50 + 16) >> 5)) >> 32) >> 31)
                     + 0x8000)
      + ((a4 - v44 + 16) >> 5) * (signed __int64)((v9 - v50 + 16) >> 5);
  v13 = 0;
  v14 = 0;
  v15 = v11 - ((HIDWORD(v12) << 16) + ((unsigned int)v12 >> 16));
  if ( v15 )
  {
    v21 = (unsigned int)(((signed int)((unsigned __int64)(((a5 - v46 + 16) >> 5)
                                                        * (signed __int64)((v44 - v54 + 16) >> 5)) >> 32) >> 31)
                       + 0x8000)
        + ((a5 - v46 + 16) >> 5) * (signed __int64)((v44 - v54 + 16) >> 5);
    v22 = (HIDWORD(v21) << 16) + ((unsigned int)v21 >> 16);
    v23 = (unsigned int)(((signed int)((unsigned __int64)(((a4 - v44 + 16) >> 5)
                                                        * (signed __int64)((v46 - v50 + 16) >> 5)) >> 32) >> 31)
                       + 0x8000)
        + ((a4 - v44 + 16) >> 5) * (signed __int64)((v46 - v50 + 16) >> 5);
    v24 = sub_6F7C9760(v22 - ((HIDWORD(v23) << 16) + ((unsigned int)v23 >> 16)), v15);
    v25 = v24;
    v51 = *(_DWORD *)v42;
    v26 = (unsigned int)(((signed int)((unsigned __int64)((v51 - *(_DWORD *)v48) * (signed __int64)(signed int)v24) >> 32) >> 31)
                       + 0x8000)
        + (v51 - *(_DWORD *)v48) * (signed __int64)(signed int)v24;
    LODWORD(v26) = (HIDWORD(v26) << 16) + ((unsigned int)v26 >> 16);
    v47 = v26;
    v14 = *(_DWORD *)v48 + v26;
    LODWORD(v26) = *(_DWORD *)(v48 + 4);
    v52 = *(_DWORD *)(v42 + 4);
    v45 = v26;
    v27 = (unsigned int)(((signed int)((unsigned __int64)((v52 - (signed int)v26) * (signed __int64)(signed int)v25) >> 32) >> 31)
                       + 0x8000)
        + (v52 - (signed int)v26) * (signed __int64)(signed int)v25;
    v28 = (HIDWORD(v27) << 16) + ((unsigned int)v27 >> 16);
    v13 = v28 + v45;
    if ( *(_DWORD *)v42 == *(_DWORD *)v48 && ((v47 >> 31) ^ v47) - (v47 >> 31) < *(_DWORD *)(v6 + 11700) )
      v14 = *(_DWORD *)v42;
    if ( v52 == v45 && ((v28 >> 31) ^ v28) - (v28 >> 31) < *(_DWORD *)(v6 + 11700) )
      v13 = *(_DWORD *)(v42 + 4);
    v44 = *(_DWORD *)v41;
    if ( a4 == *(_DWORD *)v41 && abs(v14 - *(_DWORD *)v41) < *(_DWORD *)(v6 + 11700) )
      v14 = *(_DWORD *)v41;
    v29 = *(_DWORD *)(v41 + 4);
    v46 = *(_DWORD *)(v41 + 4);
    if ( a5 == v29 && abs(v13 - v29) < *(_DWORD *)(v6 + 11700) )
      v13 = *(_DWORD *)(v41 + 4);
    v30 = (v44 + v51) / 2;
    v31 = v14 - v30;
    if ( v14 - v30 < 0 )
      v31 = v30 - v14;
    v32 = *(_DWORD *)(v6 + 11696);
    if ( v32 >= v31 )
    {
      v33 = v13 - (v46 + v52) / 2;
      if ( v33 < 0 )
        v33 = (v46 + v52) / 2 - v13;
      if ( v32 >= v33 )
      {
        v17 = 1;
        *(_DWORD *)v42 = v14;
        *(_DWORD *)(v42 + 4) = v13;
        v34 = *(_DWORD *)(v6 + 11732);
        v43 = a6 != 0;
        v55 = *(_DWORD *)(v6 + 11728);
        v35 = *(_DWORD *)(v6 + 11748);
        v56 = v34;
        if ( v35 != 2 )
        {
          if ( v35 == 4 )
            goto LABEL_9;
LABEL_10:
          if ( !v43 )
          {
LABEL_11:
            result = v41;
            *(_DWORD *)v41 = v14;
            *(_DWORD *)(v41 + 4) = v13;
            return result;
          }
          goto LABEL_34;
        }
LABEL_29:
        v62 = 2;
        if ( a6 )
          sub_6F77D740(v6, v6 + 3876, (int)&v57, *(_DWORD *)(v6 + 11760), *(_DWORD *)(v6 + 11764));
        else
          sub_6F77D740(v6, v49, (int)&v57, *(_DWORD *)(v6 + 11760), *(_DWORD *)(v6 + 11764));
        if ( v55 != v57 || v56 != v58 )
        {
          (*(void (__cdecl **)(_DWORD, int *))(*(_DWORD *)(v6 + 4) + 4))(*(_DWORD *)(v6 + 4), &v55);
          v36 = v58;
          *(_DWORD *)(v6 + 11728) = v57;
          *(_DWORD *)(v6 + 11732) = v36;
          if ( !v43 )
            goto LABEL_11;
LABEL_34:
          v44 = *(_DWORD *)v41;
          v46 = *(_DWORD *)(v41 + 4);
          goto LABEL_35;
        }
        goto LABEL_10;
      }
    }
    v53 = *(_DWORD *)(v6 + 11748);
  }
LABEL_6:
  v16 = *(_DWORD *)(v6 + 11732);
  v55 = *(_DWORD *)(v6 + 11728);
  v56 = v16;
  if ( v53 == 2 )
  {
    v43 = 1;
    v17 = 0;
    goto LABEL_29;
  }
  if ( v53 == 4 )
  {
    v43 = 1;
    v17 = 0;
LABEL_9:
    v18 = *(_DWORD *)(v6 + 11764);
    v62 = 4;
    sub_6F77D740(v6, v49, (int)&v57, *(_DWORD *)(v6 + 11760), v18);
    sub_6F77D740(v6, v49, (int)&v59, *(_DWORD *)(v6 + 11768), *(_DWORD *)(v6 + 11772));
    sub_6F77D740(v6, v49, (int)&v60, *(_DWORD *)(v6 + 11776), *(_DWORD *)(v6 + 11780));
    (*(void (__cdecl **)(_DWORD, int *))(*(_DWORD *)(v6 + 4) + 12))(*(_DWORD *)(v6 + 4), &v55);
    v19 = v61;
    *(_DWORD *)(v6 + 11728) = v60;
    *(_DWORD *)(v6 + 11732) = v19;
    goto LABEL_10;
  }
  v17 = 0;
LABEL_35:
  if ( a6 )
    sub_6F77D740(v6, v6 + 3876, (int)&v57, v44, v46);
  else
    sub_6F77D740(v6, v49, (int)&v57, v44, v46);
  if ( v57 != *(_DWORD *)(v6 + 11728) || v58 != *(_DWORD *)(v6 + 11732) )
  {
    v37 = *(_DWORD *)(v6 + 11728);
    v38 = *(_DWORD *)(v6 + 11732);
    v62 = 2;
    v55 = v37;
    v39 = *(_DWORD *)(v6 + 4);
    v56 = v38;
    (*(void (__cdecl **)(int, int *))(v39 + 4))(v39, &v55);
    v40 = v58;
    *(_DWORD *)(v6 + 11728) = v57;
    *(_DWORD *)(v6 + 11732) = v40;
  }
  result = v17;
  if ( (_BYTE)v17 )
    goto LABEL_11;
  return result;
}
