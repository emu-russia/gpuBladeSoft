void __usercall sub_6F758C00(int a1@<ebp>)
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
  unsigned int v15; // esi@21
  int *v16; // eax@21
  unsigned int v17; // edi@23
  int *v18; // esi@24
  unsigned int v19; // ebx@24
  int *v20; // ebx@27
  int v21; // eax@28
  int v22; // ecx@30
  int v23; // edi@31
  int v24; // ebp@43
  int v25; // esi@43
  int v26; // ST08_4@44
  char *v27; // eax@52
  char *v28; // eax@59
  int v29; // ST28_4@69
  int v30; // ST2C_4@69
  int v31; // ecx@69
  int v32; // esi@70
  int v33; // ecx@70
  int v34; // edx@70
  int v35; // edi@71
  int v36; // ebx@71
  int v37; // ecx@71
  int *v38; // [sp+20h] [bp-1DCh]@6
  int *v39; // [sp+24h] [bp-1D8h]@16
  char v40; // [sp+30h] [bp-1CCh]@1
  int *v41; // [sp+38h] [bp-1C4h]@29
  int v42; // [sp+3Ch] [bp-1C0h]@31
  int v43; // [sp+40h] [bp-1BCh]@29
  int v44; // [sp+44h] [bp-1B8h]@69
  int v45; // [sp+48h] [bp-1B4h]@69
  int v46; // [sp+4Ch] [bp-1B0h]@69
  int *v47; // [sp+50h] [bp-1ACh]@1
  size_t v48; // [sp+54h] [bp-1A8h]@23
  unsigned int v49; // [sp+58h] [bp-1A4h]@24
  int *v50; // [sp+68h] [bp-194h]@19
  size_t v51; // [sp+6Ch] [bp-190h]@21
  int v52; // [sp+70h] [bp-18Ch]@19
  int v53; // [sp+74h] [bp-188h]@70
  int v54; // [sp+78h] [bp-184h]@70
  int v55; // [sp+7Ch] [bp-180h]@70
  int *v56; // [sp+80h] [bp-17Ch]@1
  size_t v57; // [sp+84h] [bp-178h]@13
  unsigned int v58; // [sp+88h] [bp-174h]@14
  int *v59; // [sp+98h] [bp-164h]@9
  size_t v60; // [sp+9Ch] [bp-160h]@11
  int v61; // [sp+A0h] [bp-15Ch]@9
  int v62; // [sp+A4h] [bp-158h]@71
  int v63; // [sp+A8h] [bp-154h]@71
  int v64; // [sp+ACh] [bp-150h]@71
  int *v65; // [sp+B0h] [bp-14Ch]@1
  size_t v66; // [sp+B4h] [bp-148h]@3
  unsigned int v67; // [sp+B8h] [bp-144h]@4
  int v68; // [sp+BCh] [bp-140h]@43
  int v69; // [sp+C0h] [bp-13Ch]@43
  int *v70; // [sp+C8h] [bp-134h]@1
  size_t v71; // [sp+CCh] [bp-130h]@3
  unsigned int v72; // [sp+D0h] [bp-12Ch]@1
  char v73; // [sp+E0h] [bp-11Ch]@1

  sub_6F8B5DB0(a1, 0, (int)&v40);
  sub_6F760580((int)&v40, &v73, 0xFFu);
  sub_6F695280(&v47, ".png");
  sub_6F695280(&v56, &v73);
  sub_6F695280(&v65, "/screenshots/screen1_");
  sub_6F695280(&v70, *(const char **)(dword_6FBB51E8 + 8));
  v1 = 15;
  v2 = 15;
  v3 = v70;
  if ( (unsigned int *)v70 != &v72 )
    v2 = v72;
  v4 = v71 + v66;
  if ( v71 + v66 <= v2 )
  {
    if ( v66 )
    {
      v27 = (char *)v70 + v71;
      if ( v66 == 1 )
      {
        v38 = (int *)&v67;
        *v27 = *(_BYTE *)v65;
        v3 = v70;
        goto LABEL_8;
      }
      memcpy(v27, v65, v66);
      v3 = v70;
    }
    v38 = (int *)&v67;
LABEL_8:
    v71 = v4;
    *((_BYTE *)v3 + v4) = 0;
    v5 = (int *)&v70;
    goto LABEL_9;
  }
  if ( (unsigned int *)v65 != &v67 )
    v1 = v67;
  v38 = (int *)&v67;
  if ( v4 > v1 )
  {
    sub_6F93C2B0((int)&v70, v71, 0, v65, v66);
    v3 = v70;
    goto LABEL_8;
  }
  v5 = (int *)sub_6F93A0E0((int)&v65, 0, 0, v70, v71);
LABEL_9:
  v59 = &v61;
  if ( (int *)*v5 == v5 + 2 )
  {
    v35 = v5[3];
    v36 = v5[4];
    v37 = v5[5];
    v61 = v5[2];
    v62 = v35;
    v63 = v36;
    v64 = v37;
  }
  else
  {
    v6 = v5[2];
    v59 = (int *)*v5;
    v61 = v6;
  }
  v7 = v5[1];
  *((_BYTE *)v5 + 8) = 0;
  v60 = v7;
  *v5 = (int)(v5 + 2);
  v8 = 15;
  v5[1] = 0;
  v9 = v59;
  v10 = 15;
  if ( v59 != &v61 )
    v10 = v61;
  v11 = v60 + v57;
  if ( v60 + v57 <= v10 )
  {
    if ( v57 )
    {
      if ( v57 == 1 )
      {
        v12 = (int *)&v59;
        v39 = (int *)&v58;
        *((_BYTE *)v59 + v60) = *(_BYTE *)v56;
        v9 = v59;
      }
      else
      {
        v12 = (int *)&v59;
        memcpy((char *)v59 + v60, v56, v57);
        v9 = v59;
        v39 = (int *)&v58;
      }
    }
    else
    {
      v12 = (int *)&v59;
      v39 = (int *)&v58;
    }
    goto LABEL_18;
  }
  if ( (unsigned int *)v56 != &v58 )
    v8 = v58;
  v39 = (int *)&v58;
  if ( v11 > v8 )
  {
    v12 = (int *)&v59;
    sub_6F93C2B0((int)&v59, v60, 0, v56, v57);
    v9 = v59;
LABEL_18:
    v60 = v11;
    *((_BYTE *)v9 + v11) = 0;
    goto LABEL_19;
  }
  v12 = (int *)sub_6F93A0E0((int)&v56, 0, 0, v59, v60);
LABEL_19:
  v50 = &v52;
  if ( (int *)*v12 == v12 + 2 )
  {
    v32 = v12[3];
    v33 = v12[4];
    v34 = v12[5];
    v52 = v12[2];
    v53 = v32;
    v54 = v33;
    v55 = v34;
  }
  else
  {
    v13 = v12[2];
    v50 = (int *)*v12;
    v52 = v13;
  }
  v14 = v12[1];
  *((_BYTE *)v12 + 8) = 0;
  v15 = 15;
  v51 = v14;
  *v12 = (int)(v12 + 2);
  v16 = v50;
  v12[1] = 0;
  if ( v16 != &v52 )
    v15 = v52;
  v17 = v51 + v48;
  if ( v51 + v48 <= v15 )
  {
    if ( v48 )
    {
      v28 = (char *)v16 + v51;
      if ( v48 == 1 )
      {
        v18 = (int *)&v49;
        v20 = (int *)&v50;
        *v28 = *(_BYTE *)v47;
        v16 = v50;
        goto LABEL_28;
      }
      memcpy(v28, v47, v48);
      v16 = v50;
    }
    v18 = (int *)&v49;
    v20 = (int *)&v50;
LABEL_28:
    v51 = v17;
    *((_BYTE *)v16 + v17) = 0;
    v21 = (int)v20;
    goto LABEL_29;
  }
  v18 = (int *)&v49;
  v19 = 15;
  if ( (unsigned int *)v47 != &v49 )
    v19 = v49;
  if ( v17 > v19 )
  {
    v20 = (int *)&v50;
    sub_6F93C2B0((int)&v50, v51, 0, v47, v48);
    v16 = v50;
    goto LABEL_28;
  }
  v21 = sub_6F93A0E0((int)&v47, 0, 0, v16, v51);
LABEL_29:
  v41 = &v43;
  if ( *(_DWORD *)v21 == v21 + 8 )
  {
    v29 = *(_DWORD *)(v21 + 16);
    v30 = *(_DWORD *)(v21 + 20);
    v31 = *(_DWORD *)(v21 + 8);
    v44 = *(_DWORD *)(v21 + 12);
    v43 = v31;
    v45 = v29;
    v46 = v30;
  }
  else
  {
    v22 = *(_DWORD *)(v21 + 8);
    v41 = *(int **)v21;
    v43 = v22;
  }
  v23 = *(_DWORD *)(v21 + 4);
  *(_BYTE *)(v21 + 8) = 0;
  v42 = v23;
  *(_DWORD *)v21 = v21 + 8;
  *(_DWORD *)(v21 + 4) = 0;
  if ( v50 != &v52 )
    j_free_1(v50);
  if ( v59 != &v61 )
    j_free_1(v59);
  if ( (unsigned int *)v70 != &v72 )
    j_free_1(v70);
  if ( v65 != v38 )
    j_free_1(v65);
  if ( v56 != v39 )
    j_free_1(v56);
  if ( v47 != v18 )
    j_free_1(v47);
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v24 = dword_6FD400C4;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v25 = dword_6FD400C8;
  v66 = v24;
  v69 = 0;
  v67 = dword_6FD400C8;
  v68 = 3;
  v65 = (int *)malloc(3 * v24 * dword_6FD400C8);
  if ( !v65 )
    sub_6F756950();
  v69 = 1;
  glPixelStorei(3333, 1);
  glReadPixels(0, 0, v24, v25, 6407, 5121, (int)v65);
  LOBYTE(v26) = 0;
  v70 = (int *)&v72;
  sub_6F93A6C0((int)&v70, v41, (_BYTE *)v41 + v42, v26);
  sub_6F757680(&v65, (const char **)&v70);
  if ( (unsigned int *)v70 != &v72 )
    j_free_1(v70);
  if ( v69 )
  {
    free(v65);
    v65 = 0;
    v69 = 0;
  }
  sub_6F72F480("Screenshot1 taken (%s)", v41);
  if ( v41 != &v43 )
    j_free_1(v41);
}
