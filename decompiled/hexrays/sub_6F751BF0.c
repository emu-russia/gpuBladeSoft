void __usercall sub_6F751BF0(int a1@<ebp>)
{
  unsigned int v1; // edx@1
  unsigned int v2; // ebp@1
  int *v3; // eax@1
  unsigned int v4; // ebx@3
  int *v5; // eax@8
  int v6; // edi@10
  size_t v7; // edi@11
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
  unsigned int v18; // edx@24
  int *v19; // ebx@27
  int v20; // ecx@30
  int v21; // ecx@31
  wchar_t *v22; // ebp@46
  char *v23; // eax@50
  char *v24; // eax@59
  int v25; // ecx@68
  int v26; // ST1C_4@68
  int v27; // edx@68
  int v28; // esi@69
  int v29; // ecx@69
  int v30; // edx@69
  int v31; // esi@70
  int v32; // ebx@70
  int v33; // ecx@70
  int *v34; // [sp+18h] [bp-1D4h]@16
  char v35; // [sp+20h] [bp-1CCh]@1
  const wchar_t *v36; // [sp+28h] [bp-1C4h]@29
  int v37; // [sp+2Ch] [bp-1C0h]@31
  int v38; // [sp+30h] [bp-1BCh]@29
  int v39; // [sp+34h] [bp-1B8h]@68
  int v40; // [sp+38h] [bp-1B4h]@68
  int v41; // [sp+3Ch] [bp-1B0h]@68
  int *v42; // [sp+40h] [bp-1ACh]@1
  size_t v43; // [sp+44h] [bp-1A8h]@1
  unsigned int v44; // [sp+48h] [bp-1A4h]@1
  __int16 v45; // [sp+4Ch] [bp-1A0h]@1
  char v46; // [sp+4Eh] [bp-19Eh]@1
  char v47; // [sp+4Fh] [bp-19Dh]@1
  int *v48; // [sp+58h] [bp-194h]@19
  size_t v49; // [sp+5Ch] [bp-190h]@21
  int v50; // [sp+60h] [bp-18Ch]@19
  int v51; // [sp+64h] [bp-188h]@69
  int v52; // [sp+68h] [bp-184h]@69
  int v53; // [sp+6Ch] [bp-180h]@69
  int *v54; // [sp+70h] [bp-17Ch]@1
  size_t v55; // [sp+74h] [bp-178h]@13
  unsigned int v56; // [sp+78h] [bp-174h]@14
  int *v57; // [sp+88h] [bp-164h]@9
  size_t v58; // [sp+8Ch] [bp-160h]@11
  int v59; // [sp+90h] [bp-15Ch]@9
  int v60; // [sp+94h] [bp-158h]@70
  int v61; // [sp+98h] [bp-154h]@70
  int v62; // [sp+9Ch] [bp-150h]@70
  int *v63; // [sp+A0h] [bp-14Ch]@1
  size_t v64; // [sp+A4h] [bp-148h]@1
  unsigned int v65; // [sp+A8h] [bp-144h]@1
  int v66; // [sp+ACh] [bp-140h]@1
  int v67; // [sp+B0h] [bp-13Ch]@1
  __int16 v68; // [sp+B4h] [bp-138h]@1
  char v69; // [sp+B6h] [bp-136h]@1
  char v70; // [sp+B7h] [bp-135h]@1
  int *v71; // [sp+B8h] [bp-134h]@1
  size_t v72; // [sp+BCh] [bp-130h]@3
  unsigned int v73; // [sp+C0h] [bp-12Ch]@1
  char v74; // [sp+D0h] [bp-11Ch]@1

  sub_6F8B5DB0(a1, 0, (int)&v35);
  sub_6F760580((int)&v35, &v74, 0xFFu);
  v42 = (int *)&v44;
  v45 = 26414;
  v44 = 2002874926;
  v46 = 122;
  v43 = 7;
  v47 = 0;
  sub_6F695280(&v54, &v74);
  v68 = 13423;
  v63 = (int *)&v65;
  v65 = 1684633135;
  v66 = 796094309;
  v67 = 1701079414;
  v69 = 95;
  v64 = 15;
  v70 = 0;
  sub_6F695280(&v71, *(const char **)(dword_6FBB51E8 + 8));
  v1 = 15;
  v2 = 15;
  v3 = v71;
  if ( (unsigned int *)v71 != &v73 )
    v2 = v73;
  v4 = v72 + v64;
  if ( v72 + v64 <= v2 )
  {
    if ( v64 )
    {
      v23 = (char *)v71 + v72;
      if ( v64 == 1 )
      {
        *v23 = *(_BYTE *)v63;
        v3 = v71;
      }
      else
      {
        memcpy(v23, v63, v64);
        v3 = v71;
      }
    }
    goto LABEL_8;
  }
  if ( (unsigned int *)v63 != &v65 )
    v1 = v65;
  if ( v4 > v1 )
  {
    sub_6F93C2B0((int)&v71, v72, 0, v63, v64);
    v3 = v71;
LABEL_8:
    v72 = v4;
    *((_BYTE *)v3 + v4) = 0;
    v5 = (int *)&v71;
    goto LABEL_9;
  }
  v5 = (int *)sub_6F93A0E0((int)&v63, 0, 0, v71, v72);
LABEL_9:
  v57 = &v59;
  if ( (int *)*v5 == v5 + 2 )
  {
    v31 = v5[3];
    v32 = v5[4];
    v33 = v5[5];
    v59 = v5[2];
    v60 = v31;
    v61 = v32;
    v62 = v33;
  }
  else
  {
    v6 = v5[2];
    v57 = (int *)*v5;
    v59 = v6;
  }
  v7 = v5[1];
  *((_BYTE *)v5 + 8) = 0;
  v58 = v7;
  *v5 = (int)(v5 + 2);
  v8 = 15;
  v5[1] = 0;
  v9 = v57;
  v10 = 15;
  if ( v57 != &v59 )
    v10 = v59;
  v11 = v58 + v55;
  if ( v58 + v55 <= v10 )
  {
    if ( v55 )
    {
      if ( v55 == 1 )
      {
        v12 = (int *)&v57;
        v34 = (int *)&v56;
        *((_BYTE *)v57 + v58) = *(_BYTE *)v54;
        v9 = v57;
        goto LABEL_18;
      }
      memcpy((char *)v57 + v58, v54, v55);
      v9 = v57;
    }
    v12 = (int *)&v57;
    v34 = (int *)&v56;
LABEL_18:
    v58 = v11;
    *((_BYTE *)v9 + v11) = 0;
    goto LABEL_19;
  }
  if ( (unsigned int *)v54 != &v56 )
    v8 = v56;
  v34 = (int *)&v56;
  if ( v11 > v8 )
  {
    v12 = (int *)&v57;
    sub_6F93C2B0((int)&v57, v58, 0, v54, v55);
    v9 = v57;
    goto LABEL_18;
  }
  v12 = (int *)sub_6F93A0E0((int)&v54, 0, 0, v57, v58);
LABEL_19:
  v48 = &v50;
  if ( (int *)*v12 == v12 + 2 )
  {
    v28 = v12[3];
    v29 = v12[4];
    v30 = v12[5];
    v50 = v12[2];
    v51 = v28;
    v52 = v29;
    v53 = v30;
  }
  else
  {
    v13 = v12[2];
    v48 = (int *)*v12;
    v50 = v13;
  }
  v14 = v12[1];
  *((_BYTE *)v12 + 8) = 0;
  v49 = v14;
  *v12 = (int)(v12 + 2);
  v15 = v48;
  v12[1] = 0;
  v16 = 15;
  if ( v15 != &v50 )
    v16 = v50;
  v17 = v49 + v43;
  if ( v49 + v43 <= v16 )
  {
    if ( v43 )
    {
      v24 = (char *)v15 + v49;
      if ( v43 == 1 )
      {
        v19 = (int *)&v48;
        *v24 = *(_BYTE *)v42;
        v15 = v48;
        goto LABEL_28;
      }
      memcpy(v24, v42, v43);
      v15 = v48;
    }
    v19 = (int *)&v48;
LABEL_28:
    v49 = v17;
    *((_BYTE *)v15 + v17) = 0;
    goto LABEL_29;
  }
  v18 = 15;
  if ( (unsigned int *)v42 != &v44 )
    v18 = v44;
  if ( v17 > v18 )
  {
    v19 = (int *)&v48;
    sub_6F93C2B0((int)&v48, v49, 0, v42, v43);
    v15 = v48;
    goto LABEL_28;
  }
  v19 = (int *)sub_6F93A0E0((int)&v42, 0, 0, v15, v49);
LABEL_29:
  v36 = (const wchar_t *)&v38;
  if ( (int *)*v19 == v19 + 2 )
  {
    v25 = v19[4];
    v26 = v19[5];
    v27 = v19[2];
    v39 = v19[3];
    v38 = v27;
    v40 = v25;
    v41 = v26;
  }
  else
  {
    v20 = v19[2];
    v36 = (const wchar_t *)*v19;
    v38 = v20;
  }
  v21 = v19[1];
  *((_BYTE *)v19 + 8) = 0;
  v37 = v21;
  *v19 = (int)(v19 + 2);
  v19[1] = 0;
  if ( v48 != &v50 )
    j_free_1(v48);
  if ( v57 != &v59 )
    j_free_1(v57);
  if ( (unsigned int *)v71 != &v73 )
    j_free_1(v71);
  if ( (unsigned int *)v63 != &v65 )
    j_free_1(v63);
  if ( v54 != v34 )
    j_free_1(v54);
  if ( (unsigned int *)v42 != &v44 )
    j_free_1(v42);
  dword_6FD400D8 = sub_6F88C880(v36, "wb");
  if ( dword_6FD400D8 )
  {
    dword_6FD400DC = 1;
    sub_6F72F480("Video4 recording started: (%s)", v36);
    if ( dword_6FD400DC )
    {
      sub_6F69CB30(&v63);
      v71 = (int *)6;
      sub_6F88DA60(dword_6FD400D8, (char *)&v71, 4u);
      sub_6F88DA60(dword_6FD400D8, (char *)v63, *v63);
      free(v63);
    }
    v22 = (wchar_t *)v36;
    if ( (int *)v36 != &v38 )
      goto LABEL_47;
  }
  else
  {
    nullsub_10();
    v22 = (wchar_t *)v36;
    if ( (int *)v36 != &v38 )
    {
LABEL_47:
      j_free_1(v22);
      return;
    }
  }
}
