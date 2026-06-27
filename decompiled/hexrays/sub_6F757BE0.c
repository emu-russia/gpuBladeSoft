void __usercall sub_6F757BE0(int a1@<ebp>)
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
  unsigned int v22; // esi@43
  signed int v23; // ebp@45
  signed int v24; // edi@46
  signed int v25; // ecx@47
  signed int v26; // esi@47
  char *v27; // ebx@47
  int v28; // eax@47
  int v29; // eax@48
  unsigned int v30; // eax@49
  char *v31; // eax@61
  char *v32; // eax@73
  int v33; // esi@81
  int v34; // ecx@81
  int v35; // edx@81
  int v36; // esi@82
  int v37; // ecx@82
  int v38; // edx@82
  int v39; // edi@83
  int v40; // ebx@83
  int v41; // ecx@83
  int v42; // [sp+8h] [bp-204h]@1
  unsigned int v43; // [sp+14h] [bp-1F8h]@43
  int *v44; // [sp+18h] [bp-1F4h]@26
  int v45; // [sp+18h] [bp-1F4h]@47
  int *v46; // [sp+1Ch] [bp-1F0h]@16
  int v47; // [sp+1Ch] [bp-1F0h]@47
  int *v48; // [sp+20h] [bp-1ECh]@6
  int v49; // [sp+20h] [bp-1ECh]@46
  char *v50; // [sp+24h] [bp-1E8h]@43
  int v51; // [sp+28h] [bp-1E4h]@46
  int v52; // [sp+2Ch] [bp-1E0h]@43
  int v53; // [sp+30h] [bp-1DCh]@45
  int v54; // [sp+34h] [bp-1D8h]@46
  int v55; // [sp+38h] [bp-1D4h]@46
  char v56; // [sp+40h] [bp-1CCh]@1
  int *v57; // [sp+48h] [bp-1C4h]@29
  int v58; // [sp+4Ch] [bp-1C0h]@31
  int v59; // [sp+50h] [bp-1BCh]@29
  int v60; // [sp+54h] [bp-1B8h]@81
  int v61; // [sp+58h] [bp-1B4h]@81
  int v62; // [sp+5Ch] [bp-1B0h]@81
  int *v63; // [sp+60h] [bp-1ACh]@1
  size_t v64; // [sp+64h] [bp-1A8h]@23
  unsigned int v65; // [sp+68h] [bp-1A4h]@24
  int *v66; // [sp+78h] [bp-194h]@19
  size_t v67; // [sp+7Ch] [bp-190h]@21
  int v68; // [sp+80h] [bp-18Ch]@19
  int v69; // [sp+84h] [bp-188h]@82
  int v70; // [sp+88h] [bp-184h]@82
  int v71; // [sp+8Ch] [bp-180h]@82
  int *v72; // [sp+90h] [bp-17Ch]@1
  size_t v73; // [sp+94h] [bp-178h]@13
  unsigned int v74; // [sp+98h] [bp-174h]@14
  int *v75; // [sp+A8h] [bp-164h]@9
  size_t v76; // [sp+ACh] [bp-160h]@11
  int v77; // [sp+B0h] [bp-15Ch]@9
  int v78; // [sp+B4h] [bp-158h]@83
  int v79; // [sp+B8h] [bp-154h]@83
  int v80; // [sp+BCh] [bp-150h]@83
  int *v81; // [sp+C0h] [bp-14Ch]@1
  unsigned int v82; // [sp+C4h] [bp-148h]@3
  unsigned int v83; // [sp+C8h] [bp-144h]@4
  int v84; // [sp+CCh] [bp-140h]@43
  int v85; // [sp+D0h] [bp-13Ch]@43
  int *v86; // [sp+D8h] [bp-134h]@1
  size_t v87; // [sp+DCh] [bp-130h]@3
  unsigned int v88; // [sp+E0h] [bp-12Ch]@1
  char v89; // [sp+F0h] [bp-11Ch]@1

  sub_6F8B5DB0(a1, 0, (int)&v56);
  sub_6F760580((int)&v56, &v89, 0xFFu);
  sub_6F695280(&v63, ".png");
  sub_6F695280(&v72, &v89);
  sub_6F695280(&v81, "/screenshots/screen3_");
  sub_6F695280(&v86, *(const char **)(dword_6FBB51E8 + 8));
  v1 = 15;
  v2 = 15;
  v3 = v86;
  if ( (unsigned int *)v86 != &v88 )
    v2 = v88;
  v4 = v87 + v82;
  if ( v87 + v82 <= v2 )
  {
    if ( v82 )
    {
      v31 = (char *)v86 + v87;
      if ( v82 == 1 )
      {
        v48 = (int *)&v83;
        *v31 = *(_BYTE *)v81;
        v3 = v86;
        goto LABEL_8;
      }
      memcpy(v31, v81, v82);
      v3 = v86;
    }
    v48 = (int *)&v83;
LABEL_8:
    v87 = v4;
    *((_BYTE *)v3 + v4) = 0;
    v5 = (int *)&v86;
    goto LABEL_9;
  }
  if ( (unsigned int *)v81 != &v83 )
    v1 = v83;
  v48 = (int *)&v83;
  if ( v4 > v1 )
  {
    sub_6F93C2B0((int)&v86, v87, 0, v81, v82);
    v3 = v86;
    goto LABEL_8;
  }
  v5 = (int *)sub_6F93A0E0((int)&v81, 0, 0, v86, v87);
LABEL_9:
  v75 = &v77;
  if ( (int *)*v5 == v5 + 2 )
  {
    v39 = v5[3];
    v40 = v5[4];
    v41 = v5[5];
    v77 = v5[2];
    v78 = v39;
    v79 = v40;
    v80 = v41;
  }
  else
  {
    v6 = v5[2];
    v75 = (int *)*v5;
    v77 = v6;
  }
  v7 = v5[1];
  *((_BYTE *)v5 + 8) = 0;
  v76 = v7;
  *v5 = (int)(v5 + 2);
  v8 = 15;
  v5[1] = 0;
  v9 = v75;
  v10 = 15;
  if ( v75 != &v77 )
    v10 = v77;
  v11 = v76 + v73;
  if ( v76 + v73 <= v10 )
  {
    if ( v73 )
    {
      if ( v73 == 1 )
      {
        v12 = (int *)&v75;
        v46 = (int *)&v74;
        *((_BYTE *)v75 + v76) = *(_BYTE *)v72;
        v9 = v75;
        goto LABEL_18;
      }
      memcpy((char *)v75 + v76, v72, v73);
      v9 = v75;
    }
    v12 = (int *)&v75;
    v46 = (int *)&v74;
LABEL_18:
    v76 = v11;
    *((_BYTE *)v9 + v11) = 0;
    goto LABEL_19;
  }
  if ( (unsigned int *)v72 != &v74 )
    v8 = v74;
  v46 = (int *)&v74;
  if ( v11 > v8 )
  {
    v12 = (int *)&v75;
    sub_6F93C2B0((int)&v75, v76, 0, v72, v73);
    v9 = v75;
    goto LABEL_18;
  }
  v12 = (int *)sub_6F93A0E0((int)&v72, 0, 0, v75, v76);
LABEL_19:
  v66 = &v68;
  if ( (int *)*v12 == v12 + 2 )
  {
    v36 = v12[3];
    v37 = v12[4];
    v38 = v12[5];
    v68 = v12[2];
    v69 = v36;
    v70 = v37;
    v71 = v38;
  }
  else
  {
    v13 = v12[2];
    v66 = (int *)*v12;
    v68 = v13;
  }
  v14 = v12[1];
  *((_BYTE *)v12 + 8) = 0;
  v67 = v14;
  *v12 = (int)(v12 + 2);
  v15 = v66;
  v12[1] = 0;
  v16 = 15;
  if ( v15 != &v68 )
    v16 = v68;
  v17 = v67 + v64;
  if ( v67 + v64 <= v16 )
  {
    if ( v64 )
    {
      v32 = (char *)v15 + v67;
      if ( v64 == 1 )
      {
        v44 = (int *)&v65;
        v19 = (int *)&v66;
        *v32 = *(_BYTE *)v63;
        v15 = v66;
        goto LABEL_28;
      }
      memcpy(v32, v63, v64);
      v15 = v66;
    }
    v19 = (int *)&v66;
    v44 = (int *)&v65;
LABEL_28:
    v67 = v17;
    *((_BYTE *)v15 + v17) = 0;
    goto LABEL_29;
  }
  v18 = 15;
  if ( (unsigned int *)v63 != &v65 )
    v18 = v65;
  v44 = (int *)&v65;
  if ( v17 > v18 )
  {
    v19 = (int *)&v66;
    sub_6F93C2B0((int)&v66, v67, 0, v63, v64);
    v15 = v66;
    goto LABEL_28;
  }
  v19 = (int *)sub_6F93A0E0((int)&v63, 0, 0, v15, v67);
LABEL_29:
  v57 = &v59;
  if ( (int *)*v19 == v19 + 2 )
  {
    v33 = v19[3];
    v34 = v19[4];
    v35 = v19[5];
    v59 = v19[2];
    v60 = v33;
    v61 = v34;
    v62 = v35;
  }
  else
  {
    v20 = v19[2];
    v57 = (int *)*v19;
    v59 = v20;
  }
  v21 = v19[1];
  *((_BYTE *)v19 + 8) = 0;
  v58 = v21;
  *v19 = (int)(v19 + 2);
  v19[1] = 0;
  if ( v66 != &v68 )
    j_free_1(v66);
  if ( v75 != &v77 )
    j_free_1(v75);
  if ( (unsigned int *)v86 != &v88 )
    j_free_1(v86);
  if ( v81 != v48 )
    j_free_1(v81);
  if ( v72 != v46 )
    j_free_1(v72);
  if ( v63 != v44 )
    j_free_1(v63);
  v85 = 0;
  v84 = 3;
  v22 = 2 * dword_6FD40980;
  v52 = dword_6FD4097C;
  v83 = dword_6FD4097C;
  v43 = 2 * dword_6FD40980 / 3u;
  v82 = 2 * dword_6FD40980 / 3u;
  v50 = (char *)malloc(3 * dword_6FD4097C * v43);
  v81 = (int *)v50;
  if ( !v50 )
    sub_6F756950();
  v85 = 1;
  if ( v52 > 0 )
  {
    v23 = dword_6FBB52F4;
    v53 = dword_6FBB5084;
    if ( v22 > 2 )
    {
      v24 = 2 * dword_6FBB52F4;
      v51 = (v52 - 1) << 11;
      v54 = 2 * dword_6FBB52F4 - 2;
      v55 = 4 * dword_6FBB52F4 - 1;
      v49 = 0;
      do
      {
        v25 = 0;
        v26 = 0;
        v27 = v50;
        v28 = v53 + v23 * v51;
        v45 = v28 + v55;
        v47 = v54 + v28;
        while ( 1 )
        {
          while ( 1 )
          {
            v29 = 3 * v23 * (v24 * (v25 / v24) / v23);
            v30 = v26 >= v23 ? *(_DWORD *)(v45 + v29) : *(_DWORD *)(v47 + v29);
            *v27 = v30;
            ++v26;
            v27 += 3;
            ++v25;
            *(v27 - 2) = BYTE1(v30);
            *(v27 - 1) = v30 >> 16;
            if ( v26 == v24 )
              break;
            if ( v43 == v25 )
              goto LABEL_52;
          }
          if ( v43 == v25 )
            break;
          v26 = 0;
        }
LABEL_52:
        ++v49;
        v50 += 3 * v43;
        v51 -= 2048;
      }
      while ( v52 != v49 );
    }
  }
  LOBYTE(v42) = 0;
  v86 = (int *)&v88;
  sub_6F93A6C0((int)&v86, v57, (_BYTE *)v57 + v58, v42);
  sub_6F757680(&v81, (const char **)&v86);
  if ( (unsigned int *)v86 != &v88 )
    j_free_1(v86);
  if ( v85 )
  {
    free(v81);
    v81 = 0;
    v85 = 0;
  }
  sub_6F72F480("Screenshot3 taken (%s)", v57);
  if ( v57 != &v59 )
    j_free_1(v57);
}
