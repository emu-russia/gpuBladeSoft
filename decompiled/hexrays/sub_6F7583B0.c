void __usercall sub_6F7583B0(int a1@<ebp>)
{
  unsigned int v1; // edx@1
  unsigned int v2; // ebp@1
  int *v3; // eax@1
  unsigned int v4; // ebx@3
  int *v5; // eax@8
  int v6; // esi@10
  size_t v7; // esi@11
  unsigned int v8; // edx@11
  int *v9; // eax@11
  unsigned int v10; // ebx@11
  unsigned int v11; // esi@13
  int *v12; // ebx@17
  int v13; // edi@20
  size_t v14; // edi@21
  int *v15; // eax@21
  unsigned int v16; // ebx@21
  unsigned int v17; // esi@23
  unsigned int v18; // ebx@24
  int *v19; // ebx@27
  int v20; // ecx@30
  int v21; // edi@31
  int v22; // ebp@43
  int *v23; // eax@43
  int v24; // esi@46
  _WORD *v25; // edx@47
  int v26; // ebp@47
  int v27; // eax@47
  int v28; // ecx@47
  signed int v29; // ebx@50
  signed int v30; // ecx@51
  signed int v31; // ecx@52
  signed int v32; // ecx@53
  signed int v33; // ecx@53
  signed int v34; // ecx@53
  signed int v35; // ecx@53
  char *v36; // eax@63
  char *v37; // eax@72
  int v38; // esi@80
  int v39; // ecx@80
  int v40; // edx@80
  int v41; // esi@81
  int v42; // ecx@81
  int v43; // edx@81
  int v44; // edi@82
  int v45; // ebx@82
  int v46; // ecx@82
  int v47; // [sp+8h] [bp-1F4h]@1
  int v48; // [sp+10h] [bp-1ECh]@46
  int *v49; // [sp+14h] [bp-1E8h]@16
  int *v50; // [sp+18h] [bp-1E4h]@6
  char *v51; // [sp+18h] [bp-1E4h]@46
  int *v52; // [sp+1Ch] [bp-1E0h]@26
  int v53; // [sp+1Ch] [bp-1E0h]@43
  int v54; // [sp+20h] [bp-1DCh]@46
  int v55; // [sp+24h] [bp-1D8h]@46
  int v56; // [sp+28h] [bp-1D4h]@46
  int v57; // [sp+2Ch] [bp-1D0h]@46
  char v58; // [sp+30h] [bp-1CCh]@1
  int *v59; // [sp+38h] [bp-1C4h]@29
  int v60; // [sp+3Ch] [bp-1C0h]@31
  int v61; // [sp+40h] [bp-1BCh]@29
  int v62; // [sp+44h] [bp-1B8h]@80
  int v63; // [sp+48h] [bp-1B4h]@80
  int v64; // [sp+4Ch] [bp-1B0h]@80
  int *v65; // [sp+50h] [bp-1ACh]@1
  size_t v66; // [sp+54h] [bp-1A8h]@23
  unsigned int v67; // [sp+58h] [bp-1A4h]@24
  int *v68; // [sp+68h] [bp-194h]@19
  size_t v69; // [sp+6Ch] [bp-190h]@21
  int v70; // [sp+70h] [bp-18Ch]@19
  int v71; // [sp+74h] [bp-188h]@81
  int v72; // [sp+78h] [bp-184h]@81
  int v73; // [sp+7Ch] [bp-180h]@81
  int *v74; // [sp+80h] [bp-17Ch]@1
  size_t v75; // [sp+84h] [bp-178h]@13
  unsigned int v76; // [sp+88h] [bp-174h]@14
  int *v77; // [sp+98h] [bp-164h]@9
  size_t v78; // [sp+9Ch] [bp-160h]@11
  int v79; // [sp+A0h] [bp-15Ch]@9
  int v80; // [sp+A4h] [bp-158h]@82
  int v81; // [sp+A8h] [bp-154h]@82
  int v82; // [sp+ACh] [bp-150h]@82
  int *v83; // [sp+B0h] [bp-14Ch]@1
  size_t v84; // [sp+B4h] [bp-148h]@3
  unsigned int v85; // [sp+B8h] [bp-144h]@4
  int v86; // [sp+BCh] [bp-140h]@43
  int v87; // [sp+C0h] [bp-13Ch]@43
  int *v88; // [sp+C8h] [bp-134h]@1
  size_t v89; // [sp+CCh] [bp-130h]@3
  unsigned int v90; // [sp+D0h] [bp-12Ch]@1
  char v91; // [sp+E0h] [bp-11Ch]@1

  sub_6F8B5DB0(a1, 0, (int)&v58);
  sub_6F760580((int)&v58, &v91, 0xFFu);
  sub_6F695280(&v65, ".png");
  sub_6F695280(&v74, &v91);
  sub_6F695280(&v83, "/screenshots/screen2_");
  sub_6F695280(&v88, *(const char **)(dword_6FBB51E8 + 8));
  v1 = 15;
  v2 = 15;
  v3 = v88;
  if ( (unsigned int *)v88 != &v90 )
    v2 = v90;
  v4 = v89 + v84;
  if ( v89 + v84 <= v2 )
  {
    if ( v84 )
    {
      v36 = (char *)v88 + v89;
      if ( v84 == 1 )
      {
        v50 = (int *)&v85;
        *v36 = *(_BYTE *)v83;
        v3 = v88;
        goto LABEL_8;
      }
      memcpy(v36, v83, v84);
      v3 = v88;
    }
    v50 = (int *)&v85;
LABEL_8:
    v89 = v4;
    *((_BYTE *)v3 + v4) = 0;
    v5 = (int *)&v88;
    goto LABEL_9;
  }
  if ( (unsigned int *)v83 != &v85 )
    v1 = v85;
  v50 = (int *)&v85;
  if ( v4 > v1 )
  {
    sub_6F93C2B0((int)&v88, v89, 0, v83, v84);
    v3 = v88;
    goto LABEL_8;
  }
  v5 = (int *)sub_6F93A0E0((int)&v83, 0, 0, v88, v89);
LABEL_9:
  v77 = &v79;
  if ( (int *)*v5 == v5 + 2 )
  {
    v44 = v5[3];
    v45 = v5[4];
    v46 = v5[5];
    v79 = v5[2];
    v80 = v44;
    v81 = v45;
    v82 = v46;
  }
  else
  {
    v6 = v5[2];
    v77 = (int *)*v5;
    v79 = v6;
  }
  v7 = v5[1];
  *((_BYTE *)v5 + 8) = 0;
  v78 = v7;
  *v5 = (int)(v5 + 2);
  v8 = 15;
  v5[1] = 0;
  v9 = v77;
  v10 = 15;
  if ( v77 != &v79 )
    v10 = v79;
  v11 = v78 + v75;
  if ( v78 + v75 <= v10 )
  {
    if ( v75 )
    {
      if ( v75 == 1 )
      {
        v12 = (int *)&v77;
        v49 = (int *)&v76;
        *((_BYTE *)v77 + v78) = *(_BYTE *)v74;
        v9 = v77;
        goto LABEL_18;
      }
      memcpy((char *)v77 + v78, v74, v75);
      v9 = v77;
    }
    v12 = (int *)&v77;
    v49 = (int *)&v76;
LABEL_18:
    v78 = v11;
    *((_BYTE *)v9 + v11) = 0;
    goto LABEL_19;
  }
  if ( (unsigned int *)v74 != &v76 )
    v8 = v76;
  v49 = (int *)&v76;
  if ( v11 > v8 )
  {
    v12 = (int *)&v77;
    sub_6F93C2B0((int)&v77, v78, 0, v74, v75);
    v9 = v77;
    goto LABEL_18;
  }
  v12 = (int *)sub_6F93A0E0((int)&v74, 0, 0, v77, v78);
LABEL_19:
  v68 = &v70;
  if ( (int *)*v12 == v12 + 2 )
  {
    v41 = v12[3];
    v42 = v12[4];
    v43 = v12[5];
    v70 = v12[2];
    v71 = v41;
    v72 = v42;
    v73 = v43;
  }
  else
  {
    v13 = v12[2];
    v68 = (int *)*v12;
    v70 = v13;
  }
  v14 = v12[1];
  *((_BYTE *)v12 + 8) = 0;
  v69 = v14;
  *v12 = (int)(v12 + 2);
  v15 = v68;
  v12[1] = 0;
  v16 = 15;
  if ( v15 != &v70 )
    v16 = v70;
  v17 = v69 + v66;
  if ( v69 + v66 <= v16 )
  {
    if ( v66 )
    {
      v37 = (char *)v15 + v69;
      if ( v66 == 1 )
      {
        v52 = (int *)&v67;
        v19 = (int *)&v68;
        *v37 = *(_BYTE *)v65;
        v15 = v68;
        goto LABEL_28;
      }
      memcpy(v37, v65, v66);
      v15 = v68;
    }
    v19 = (int *)&v68;
    v52 = (int *)&v67;
LABEL_28:
    v69 = v17;
    *((_BYTE *)v15 + v17) = 0;
    goto LABEL_29;
  }
  v18 = 15;
  if ( (unsigned int *)v65 != &v67 )
    v18 = v67;
  v52 = (int *)&v67;
  if ( v17 > v18 )
  {
    v19 = (int *)&v68;
    sub_6F93C2B0((int)&v68, v69, 0, v65, v66);
    v15 = v68;
    goto LABEL_28;
  }
  v19 = (int *)sub_6F93A0E0((int)&v65, 0, 0, v15, v69);
LABEL_29:
  v59 = &v61;
  if ( (int *)*v19 == v19 + 2 )
  {
    v38 = v19[3];
    v39 = v19[4];
    v40 = v19[5];
    v61 = v19[2];
    v62 = v38;
    v63 = v39;
    v64 = v40;
  }
  else
  {
    v20 = v19[2];
    v59 = (int *)*v19;
    v61 = v20;
  }
  v21 = v19[1];
  *((_BYTE *)v19 + 8) = 0;
  v60 = v21;
  *v19 = (int)(v19 + 2);
  v19[1] = 0;
  if ( v68 != &v70 )
    j_free_1(v68);
  if ( v77 != &v79 )
    j_free_1(v77);
  if ( (unsigned int *)v88 != &v90 )
    j_free_1(v88);
  if ( v83 != v50 )
    j_free_1(v83);
  if ( v74 != v49 )
    j_free_1(v74);
  if ( v65 != v52 )
    j_free_1(v65);
  v22 = dword_6FD40980;
  v87 = 0;
  v86 = 3;
  v53 = dword_6FD4097C;
  v85 = dword_6FD4097C;
  v84 = dword_6FD40980;
  v23 = (int *)malloc(3 * dword_6FD40980 * dword_6FD4097C);
  v83 = v23;
  if ( !v23 )
    sub_6F756950();
  v87 = 1;
  if ( v53 > 0 && v22 > 0 )
  {
    v51 = (char *)v23;
    v56 = 2 * v22;
    v48 = 0;
    v54 = -2 * v22;
    v57 = 3 * v22;
    v55 = dword_6FBB5068;
    v24 = 2 * v22 * (v53 - 1);
    do
    {
      v25 = (_WORD *)(v55 + v24);
      v26 = v24 + v56 + v55;
      v27 = (int)v51;
      v28 = ((unsigned __int8)((unsigned int)(v26 - (v55 + v24) - 2) >> 1) + 1) & 3;
      if ( !(((unsigned __int8)((unsigned int)(v26 - (v55 + v24) - 2) >> 1) + 1) & 3) )
        goto LABEL_86;
      if ( v28 != 1 )
      {
        if ( v28 != 2 )
        {
          v29 = *v25;
          ++v25;
          *v51 = 8 * v29;
          v27 = (int)(v51 + 3);
          v51[2] = (v29 >> 7) & 0xF8;
          v51[1] = (v29 >> 2) & 0xF8;
        }
        v30 = *v25;
        v27 += 3;
        ++v25;
        *(_BYTE *)(v27 - 3) = 8 * v30;
        *(_BYTE *)(v27 - 1) = (v30 >> 7) & 0xF8;
        *(_BYTE *)(v27 - 2) = (v30 >> 2) & 0xF8;
      }
      v31 = *v25;
      ++v25;
      v27 += 3;
      *(_BYTE *)(v27 - 3) = 8 * v31;
      *(_BYTE *)(v27 - 1) = (v31 >> 7) & 0xF8;
      *(_BYTE *)(v27 - 2) = (v31 >> 2) & 0xF8;
      if ( (_WORD *)v26 != v25 )
      {
LABEL_86:
        do
        {
          v32 = *v25;
          v27 += 12;
          v25 += 4;
          *(_BYTE *)(v27 - 12) = 8 * v32;
          *(_BYTE *)(v27 - 10) = (v32 >> 7) & 0xF8;
          *(_BYTE *)(v27 - 11) = (v32 >> 2) & 0xF8;
          v33 = *(v25 - 3);
          *(_BYTE *)(v27 - 9) = 8 * v33;
          *(_BYTE *)(v27 - 7) = (v33 >> 7) & 0xF8;
          *(_BYTE *)(v27 - 8) = (v33 >> 2) & 0xF8;
          v34 = *(v25 - 2);
          *(_BYTE *)(v27 - 6) = 8 * v34;
          *(_BYTE *)(v27 - 4) = (v34 >> 7) & 0xF8;
          *(_BYTE *)(v27 - 5) = (v34 >> 2) & 0xF8;
          v35 = *(v25 - 1);
          *(_BYTE *)(v27 - 3) = 8 * v35;
          *(_BYTE *)(v27 - 1) = (v35 >> 7) & 0xF8;
          *(_BYTE *)(v27 - 2) = (v35 >> 2) & 0xF8;
        }
        while ( (_WORD *)v26 != v25 );
      }
      ++v48;
      v24 += v54;
      v51 += v57;
    }
    while ( v53 != v48 );
  }
  LOBYTE(v47) = 0;
  v88 = (int *)&v90;
  sub_6F93A6C0((int)&v88, v59, (_BYTE *)v59 + v60, v47);
  sub_6F757680(&v83, (const char **)&v88);
  if ( (unsigned int *)v88 != &v90 )
    j_free_1(v88);
  if ( v87 )
  {
    free(v83);
    v83 = 0;
    v87 = 0;
  }
  sub_6F72F480("Screenshot2 taken (%s)", v59);
  if ( v59 != &v61 )
    j_free_1(v59);
}
