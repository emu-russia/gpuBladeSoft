void __usercall sub_6F753DF0(int a1@<ebp>)
{
  int *v1; // eax@1
  int v2; // edi@1
  unsigned int v3; // edx@1
  unsigned int v4; // ebp@1
  int *v5; // eax@1
  unsigned int v6; // ebx@3
  int *v7; // eax@8
  int v8; // edi@10
  size_t v9; // edi@11
  unsigned int v10; // edx@11
  int *v11; // eax@11
  unsigned int v12; // ebx@11
  unsigned int v13; // esi@13
  int *v14; // ebx@17
  int v15; // edi@20
  size_t v16; // edi@21
  int *v17; // eax@21
  unsigned int v18; // ebx@21
  unsigned int v19; // esi@23
  unsigned int v20; // edx@24
  int *v21; // ebx@27
  int v22; // ecx@30
  int v23; // ecx@31
  wchar_t *v24; // ebp@46
  char *v25; // eax@50
  char *v26; // eax@59
  int v27; // ecx@68
  int v28; // ST1C_4@68
  int v29; // edx@68
  int v30; // esi@69
  int v31; // ecx@69
  int v32; // edx@69
  int v33; // esi@70
  int v34; // ebx@70
  int v35; // ecx@70
  int *v36; // [sp+18h] [bp-1D4h]@16
  char v37; // [sp+20h] [bp-1CCh]@1
  const wchar_t *v38; // [sp+28h] [bp-1C4h]@29
  int v39; // [sp+2Ch] [bp-1C0h]@31
  int v40; // [sp+30h] [bp-1BCh]@29
  int v41; // [sp+34h] [bp-1B8h]@68
  int v42; // [sp+38h] [bp-1B4h]@68
  int v43; // [sp+3Ch] [bp-1B0h]@68
  int *v44; // [sp+40h] [bp-1ACh]@1
  size_t v45; // [sp+44h] [bp-1A8h]@1
  unsigned int v46; // [sp+48h] [bp-1A4h]@1
  __int16 v47; // [sp+4Ch] [bp-1A0h]@1
  char v48; // [sp+4Eh] [bp-19Eh]@1
  char v49; // [sp+4Fh] [bp-19Dh]@1
  int *v50; // [sp+58h] [bp-194h]@19
  size_t v51; // [sp+5Ch] [bp-190h]@21
  int v52; // [sp+60h] [bp-18Ch]@19
  int v53; // [sp+64h] [bp-188h]@69
  int v54; // [sp+68h] [bp-184h]@69
  int v55; // [sp+6Ch] [bp-180h]@69
  int *v56; // [sp+70h] [bp-17Ch]@1
  size_t v57; // [sp+74h] [bp-178h]@13
  unsigned int v58; // [sp+78h] [bp-174h]@14
  int *v59; // [sp+88h] [bp-164h]@9
  size_t v60; // [sp+8Ch] [bp-160h]@11
  int v61; // [sp+90h] [bp-15Ch]@9
  int v62; // [sp+94h] [bp-158h]@70
  int v63; // [sp+98h] [bp-154h]@70
  int v64; // [sp+9Ch] [bp-150h]@70
  int *v65; // [sp+A0h] [bp-14Ch]@1
  size_t v66; // [sp+A4h] [bp-148h]@1
  unsigned int v67; // [sp+A8h] [bp-144h]@1
  int *v68; // [sp+B8h] [bp-134h]@1
  size_t v69; // [sp+BCh] [bp-130h]@3
  unsigned int v70; // [sp+C0h] [bp-12Ch]@1
  char v71; // [sp+D0h] [bp-11Ch]@1

  sub_6F8B5DB0(a1, 0, (int)&v37);
  sub_6F760580((int)&v37, &v71, 0xFFu);
  v44 = (int *)&v46;
  v47 = 26414;
  v46 = 2002874926;
  v48 = 122;
  v45 = 7;
  v49 = 0;
  sub_6F695280(&v56, &v71);
  v65 = (int *)&v67;
  v1 = (int *)sub_6F961B60(0x16u);
  v2 = dword_6FBB51E8;
  v67 = 21;
  *v1 = 1919120175;
  v1[1] = 1936614757;
  v1[2] = 1937010536;
  v1[3] = 1919120175;
  v1[4] = 879650149;
  *((_BYTE *)v1 + 20) = 95;
  *((_BYTE *)v1 + 21) = 0;
  v65 = v1;
  v66 = 21;
  sub_6F695280(&v68, *(const char **)(v2 + 8));
  v3 = 15;
  v4 = 15;
  v5 = v68;
  if ( (unsigned int *)v68 != &v70 )
    v4 = v70;
  v6 = v69 + v66;
  if ( v69 + v66 <= v4 )
  {
    if ( v66 )
    {
      v25 = (char *)v68 + v69;
      if ( v66 == 1 )
      {
        *v25 = *(_BYTE *)v65;
        v5 = v68;
      }
      else
      {
        memcpy(v25, v65, v66);
        v5 = v68;
      }
    }
    goto LABEL_8;
  }
  if ( (unsigned int *)v65 != &v67 )
    v3 = v67;
  if ( v6 > v3 )
  {
    sub_6F93C2B0((int)&v68, v69, 0, v65, v66);
    v5 = v68;
LABEL_8:
    v69 = v6;
    *((_BYTE *)v5 + v6) = 0;
    v7 = (int *)&v68;
    goto LABEL_9;
  }
  v7 = (int *)sub_6F93A0E0((int)&v65, 0, 0, v68, v69);
LABEL_9:
  v59 = &v61;
  if ( (int *)*v7 == v7 + 2 )
  {
    v33 = v7[3];
    v34 = v7[4];
    v35 = v7[5];
    v61 = v7[2];
    v62 = v33;
    v63 = v34;
    v64 = v35;
  }
  else
  {
    v8 = v7[2];
    v59 = (int *)*v7;
    v61 = v8;
  }
  v9 = v7[1];
  *((_BYTE *)v7 + 8) = 0;
  v60 = v9;
  *v7 = (int)(v7 + 2);
  v10 = 15;
  v7[1] = 0;
  v11 = v59;
  v12 = 15;
  if ( v59 != &v61 )
    v12 = v61;
  v13 = v60 + v57;
  if ( v60 + v57 <= v12 )
  {
    if ( v57 )
    {
      if ( v57 == 1 )
      {
        v14 = (int *)&v59;
        v36 = (int *)&v58;
        *((_BYTE *)v59 + v60) = *(_BYTE *)v56;
        v11 = v59;
        goto LABEL_18;
      }
      memcpy((char *)v59 + v60, v56, v57);
      v11 = v59;
    }
    v14 = (int *)&v59;
    v36 = (int *)&v58;
LABEL_18:
    v60 = v13;
    *((_BYTE *)v11 + v13) = 0;
    goto LABEL_19;
  }
  if ( (unsigned int *)v56 != &v58 )
    v10 = v58;
  v36 = (int *)&v58;
  if ( v13 > v10 )
  {
    v14 = (int *)&v59;
    sub_6F93C2B0((int)&v59, v60, 0, v56, v57);
    v11 = v59;
    goto LABEL_18;
  }
  v14 = (int *)sub_6F93A0E0((int)&v56, 0, 0, v59, v60);
LABEL_19:
  v50 = &v52;
  if ( (int *)*v14 == v14 + 2 )
  {
    v30 = v14[3];
    v31 = v14[4];
    v32 = v14[5];
    v52 = v14[2];
    v53 = v30;
    v54 = v31;
    v55 = v32;
  }
  else
  {
    v15 = v14[2];
    v50 = (int *)*v14;
    v52 = v15;
  }
  v16 = v14[1];
  *((_BYTE *)v14 + 8) = 0;
  v51 = v16;
  *v14 = (int)(v14 + 2);
  v17 = v50;
  v14[1] = 0;
  v18 = 15;
  if ( v17 != &v52 )
    v18 = v52;
  v19 = v51 + v45;
  if ( v51 + v45 <= v18 )
  {
    if ( v45 )
    {
      v26 = (char *)v17 + v51;
      if ( v45 == 1 )
      {
        v21 = (int *)&v50;
        *v26 = *(_BYTE *)v44;
        v17 = v50;
        goto LABEL_28;
      }
      memcpy(v26, v44, v45);
      v17 = v50;
    }
    v21 = (int *)&v50;
LABEL_28:
    v51 = v19;
    *((_BYTE *)v17 + v19) = 0;
    goto LABEL_29;
  }
  v20 = 15;
  if ( (unsigned int *)v44 != &v46 )
    v20 = v46;
  if ( v19 > v20 )
  {
    v21 = (int *)&v50;
    sub_6F93C2B0((int)&v50, v51, 0, v44, v45);
    v17 = v50;
    goto LABEL_28;
  }
  v21 = (int *)sub_6F93A0E0((int)&v44, 0, 0, v17, v51);
LABEL_29:
  v38 = (const wchar_t *)&v40;
  if ( (int *)*v21 == v21 + 2 )
  {
    v27 = v21[4];
    v28 = v21[5];
    v29 = v21[2];
    v41 = v21[3];
    v40 = v29;
    v42 = v27;
    v43 = v28;
  }
  else
  {
    v22 = v21[2];
    v38 = (const wchar_t *)*v21;
    v40 = v22;
  }
  v23 = v21[1];
  *((_BYTE *)v21 + 8) = 0;
  v39 = v23;
  *v21 = (int)(v21 + 2);
  v21[1] = 0;
  if ( v50 != &v52 )
    j_free_1(v50);
  if ( v59 != &v61 )
    j_free_1(v59);
  if ( (unsigned int *)v68 != &v70 )
    j_free_1(v68);
  if ( (unsigned int *)v65 != &v67 )
    j_free_1(v65);
  if ( v56 != v36 )
    j_free_1(v56);
  if ( (unsigned int *)v44 != &v46 )
    j_free_1(v44);
  dword_6FD400E4 = sub_6F88C880(v38, "wb");
  if ( dword_6FD400E4 )
  {
    dword_6FBB5098 = 1;
    sub_6F72F480("Screenshot4 taken (%s)", v38);
    if ( dword_6FBB5098 )
    {
      sub_6F69CB30(&v65);
      v68 = (int *)6;
      sub_6F88DA60(dword_6FD400E4, (char *)&v68, 4u);
      sub_6F88DA60(dword_6FD400E4, (char *)v65, *v65);
      free(v65);
    }
    v24 = (wchar_t *)v38;
    if ( (int *)v38 != &v40 )
      goto LABEL_47;
  }
  else
  {
    nullsub_10();
    v24 = (wchar_t *)v38;
    if ( (int *)v38 != &v40 )
    {
LABEL_47:
      j_free_1(v24);
      return;
    }
  }
}
