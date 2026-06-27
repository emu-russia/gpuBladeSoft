void __usercall sub_6F6969F0(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int (__cdecl *a4)(int, int)@<ebp>, int a5)
{
  int v5; // ebx@1
  int v6; // esi@2
  int v7; // edx@6
  int v8; // ecx@6
  unsigned int v9; // edx@6
  unsigned __int8 v10; // al@8
  int v11; // edi@12
  int v12; // ebx@13
  int v13; // eax@13
  int v14; // eax@19
  char v15; // cl@19
  int v16; // eax@19
  char v17; // cl@19
  int v18; // eax@19
  char v19; // cl@19
  int v20; // edx@19
  int *v21; // ebx@21
  int (**v22)(); // ecx@21
  char *v23; // esi@21
  char v24; // cl@23
  int *v25; // ebx@24
  char *v26; // eax@26
  int v27; // edi@28
  int v28; // eax@36
  unsigned int v29; // ST18_4@41
  int v30; // [sp+18h] [bp-188h]@6
  int v31; // [sp+1Ch] [bp-184h]@12
  int v32; // [sp+20h] [bp-180h]@1
  int v33; // [sp+24h] [bp-17Ch]@12
  void *v34; // [sp+28h] [bp-178h]@0
  _BYTE *v35; // [sp+2Ch] [bp-174h]@8
  unsigned int v36; // [sp+30h] [bp-170h]@8
  char v37; // [sp+3Ch] [bp-164h]@21
  char *v38; // [sp+48h] [bp-158h]@26
  char *v39; // [sp+4Ch] [bp-154h]@23
  int v40; // [sp+50h] [bp-150h]@24
  char v41; // [sp+54h] [bp-14Ch]@24
  char v42; // [sp+64h] [bp-13Ch]@21
  int (**v43)(); // [sp+B8h] [bp-E8h]@32
  int (**v44)(); // [sp+BCh] [bp-E4h]@21
  int (**v45)(); // [sp+C0h] [bp-E0h]@21
  int v46; // [sp+C4h] [bp-DCh]@21
  int v47; // [sp+C8h] [bp-D8h]@21
  int v48; // [sp+CCh] [bp-D4h]@21
  int v49; // [sp+D0h] [bp-D0h]@21
  int v50; // [sp+D4h] [bp-CCh]@21
  int v51; // [sp+D8h] [bp-C8h]@21
  char v52; // [sp+DCh] [bp-C4h]@21
  int *v53; // [sp+E0h] [bp-C0h]@21
  char *v54; // [sp+E4h] [bp-BCh]@21
  int v55; // [sp+E8h] [bp-B8h]@21
  char v56; // [sp+ECh] [bp-B4h]@21
  int (**v57)(); // [sp+F8h] [bp-A8h]@32
  int (**v58)(); // [sp+FCh] [bp-A4h]@21
  int v59; // [sp+16Ch] [bp-34h]@21
  __int16 v60; // [sp+170h] [bp-30h]@21
  int v61; // [sp+174h] [bp-2Ch]@21
  int v62; // [sp+178h] [bp-28h]@21
  int v63; // [sp+17Ch] [bp-24h]@21
  int v64; // [sp+180h] [bp-20h]@21

  v32 = a1;
  v5 = a5;
  if ( !qword_6FBB554C )
    return;
  v6 = a2;
  if ( BYTE2(dword_6FBBDBA8) != -1 )
  {
    v32 = 0;
    a3 = BYTE2(dword_6FBBDBA8) + 1;
  }
  if ( BYTE3(dword_6FBBDBA8) != -1 )
  {
    v5 = BYTE3(dword_6FBBDBA8) + 1;
    v6 = 0;
  }
  v7 = a3;
  v30 = a3;
  v8 = -1;
  v9 = v5 * v7;
  if ( v9 <= 0x1FFFFFFF )
    v8 = 4 * v9;
  v36 = 4 * v9;
  v35 = sub_6F961B40(v8);
  v10 = ((unsigned __int16)word_6FBB979C >> 7) & 3;
  if ( v10 != 3 )
    a4 = off_6FB4DD1C[v10];
  if ( v5 > 0 && v30 > 0 )
  {
    v34 = (void *)(4 * v30);
    v33 = v5 + v6;
    v31 = v32 + v30;
    v11 = (int)&v35[-4 * v32];
    do
    {
      v12 = v32;
      v13 = v30 & 3;
      if ( !(v30 & 3) )
        goto LABEL_47;
      if ( v13 != 1 )
      {
        if ( v13 != 2 )
        {
          *(_DWORD *)(v11 + 4 * v32) = a4(v32 << dword_6FD4098C, v6 << dword_6FD4098C);
          v12 = v32 + 1;
        }
        *(_DWORD *)(v11 + 4 * v12) = a4(v12 << dword_6FD4098C, v6 << dword_6FD4098C);
        ++v12;
      }
      *(_DWORD *)(v11 + 4 * v12) = a4(v12 << dword_6FD4098C, v6 << dword_6FD4098C);
      if ( v31 != ++v12 )
      {
LABEL_47:
        do
        {
          v14 = a4(v12 << dword_6FD4098C, v6 << dword_6FD4098C);
          v15 = dword_6FD4098C;
          *(_DWORD *)(v11 + 4 * v12) = v14;
          v16 = a4((v12 + 1) << v15, v6 << v15);
          v17 = dword_6FD4098C;
          *(_DWORD *)(v11 + 4 * (v12 + 1)) = v16;
          v18 = a4((v12 + 2) << v17, v6 << v17);
          v19 = dword_6FD4098C;
          *(_DWORD *)(v11 + 4 * (v12 + 2)) = v18;
          v20 = v12 + 3;
          v12 += 4;
          *(_DWORD *)(v11 + 4 * v20) = a4(v20 << v19, v6 << v19);
        }
        while ( v31 != v12 );
      }
      ++v6;
      v11 += (int)v34;
    }
    while ( v33 != v6 );
  }
  v21 = (int *)&v37;
  sub_6F88B8B0((int)&v42);
  sub_6F88B8E0((int *)&v42, v35, v36);
  sub_6F88B900((int)&v42, (int)&v37);
  sub_6F956880((int)&v58);
  v58 = off_6FBB0FC0;
  v60 = 0;
  v44 = (int (**)())dword_6FBABC10;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  *(int (***)())((char *)&v44 + dword_6FBABC10[-3]) = (int (**)())&unk_6FBABC24;
  sub_6F958050((int (*)())((char *)*(v44 - 3) + (_DWORD)&v44), 0);
  v44 = off_6FBAFF14;
  v58 = off_6FBAFF28;
  v45 = off_6FBB0674;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  sub_6F938250(&v52);
  v45 = off_6FBAFC20;
  v54 = &v56;
  v53 = (int *)16;
  v55 = 0;
  v56 = 0;
  sub_6F958050(&v58, (int)&v45);
  v22 = v44;
  *(_DWORD *)((char *)*(v44 - 3) + (_DWORD)&v46) = 2;
  v23 = (char *)*(v22 - 3) + (_DWORD)&v44;
  if ( !v23[117] )
  {
    v28 = *((_DWORD *)v23 + 31);
    if ( !v28 )
      sub_6F95AA30();
    if ( *(_BYTE *)(v28 + 28) )
    {
      v23[117] = 1;
    }
    else
    {
      v29 = *((_DWORD *)v23 + 31);
      sub_6F8C33B0(v29);
      (*(void (__cdecl **)(signed int))(*(_DWORD *)v29 + 24))(32);
      v23[117] = 1;
      v22 = v43;
    }
  }
  v23[116] = 48;
  *(_DWORD *)((char *)*(v22 - 3) + (_DWORD)&v44 + 12) = *(_DWORD *)((char *)*(v22 - 3) + (_DWORD)&v44 + 12) & 0xFFFFFFB5 | 8;
  do
  {
    v24 = *(_BYTE *)v21;
    v21 = (int *)((char *)v21 + 1);
    LOBYTE(v39) = v24;
    sub_6F95A010((char *)&v44, (int)&v39, 1);
  }
  while ( (int *)&v39 != v21 );
  v25 = (int *)&v41;
  v41 = 0;
  v39 = &v41;
  v40 = 0;
  if ( v50 )
    sub_6F93BDA0((int)&v39, 0, 0, v49);
  else
    sub_6F93C180((int)&v39, (int)&v54);
  v26 = (char *)dword_6FBBD7C4;
  if ( v38 == &v41 )
  {
    sub_6F93C180((int)&dword_6FBBD7C4, (int)&v39);
    v26 = v38;
    goto LABEL_30;
  }
  if ( (int *)dword_6FBBD7C4 == &dword_6FBBD7CC )
  {
    dword_6FBBD7C4 = (int)v38;
    dword_6FBBD7C8 = (int)v39;
    dword_6FBBD7CC = v40;
    goto LABEL_40;
  }
  v27 = dword_6FBBD7CC;
  dword_6FBBD7C4 = (int)v38;
  dword_6FBBD7C8 = (int)v39;
  dword_6FBBD7CC = v40;
  if ( !v26 )
  {
LABEL_40:
    v38 = &v41;
    v25 = &v40;
    v26 = (char *)&v40;
    goto LABEL_30;
  }
  v38 = v26;
  v40 = v27;
LABEL_30:
  v39 = 0;
  *v26 = 0;
  if ( (int *)v38 != v25 )
    j_free_1(v38);
  v43 = off_6FBAFF14;
  v57 = off_6FBAFF28;
  v44 = off_6FBAFC20;
  if ( v53 != &v55 )
    j_free_1(v53);
  v44 = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)&v51);
  v43 = (int (**)())dword_6FBABC10;
  *(int (***)())((char *)&v43 + dword_6FBABC10[-3]) = (int (**)())&unk_6FBABC24;
  v57 = off_6FBB0FC0;
  sub_6F956920(&v57);
  j_j_free_1(v34);
}
