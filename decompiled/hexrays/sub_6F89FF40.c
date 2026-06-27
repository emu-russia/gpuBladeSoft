int __usercall sub_6F89FF40@<eax>(const char *a1@<eax>, int *a2@<edx>, int a3@<ecx>)
{
  const char *v3; // ebx@1
  char v4; // al@1
  bool v5; // cf@1
  bool v6; // zf@1
  const char *v7; // edi@2
  signed int v8; // ecx@2
  const char *v9; // esi@2
  unsigned int v10; // edi@5
  char v11; // al@6
  char v12; // al@8
  size_t v13; // esi@10
  void *v14; // esp@10
  unsigned int v15; // eax@10
  int v16; // ecx@10
  void *v17; // esp@10
  size_t v18; // eax@14
  unsigned int v19; // edx@14
  int v20; // ecx@14
  int *v21; // ebx@16
  int v22; // eax@17
  const char *v23; // ebx@17
  int v24; // edi@17
  char v25; // al@17
  signed int v27; // eax@22
  int v28; // edx@22
  unsigned int v29; // eax@24
  int v30; // ecx@24
  void *v31; // esp@24
  unsigned int v32; // eax@26
  void *v33; // esp@26
  int v34; // eax@26
  int v35; // edx@26
  const char *v36; // ecx@39
  int v37; // eax@39
  char v38; // dl@40
  char v39; // dl@43
  const char *v40; // ebx@43
  char v41; // dl@46
  const char *v42; // edi@46
  int v43; // edi@49
  int v44; // ebx@50
  int v45; // edx@50
  int v46; // [sp+0h] [bp-1D8h]@10
  char v47; // [sp+Ch] [bp-1CCh]@10
  char v48; // [sp+Fh] [bp-1C9h]@14
  unsigned int v49; // [sp+1Ch] [bp-1BCh]@14
  int v50; // [sp+20h] [bp-1B8h]@10
  int v51; // [sp+24h] [bp-1B4h]@1
  int v52; // [sp+28h] [bp-1B0h]@1
  int *v53; // [sp+2Ch] [bp-1ACh]@1
  const char *v54; // [sp+3Ch] [bp-19Ch]@10
  const char *v55; // [sp+40h] [bp-198h]@10
  int v56; // [sp+44h] [bp-194h]@10
  const char *v57; // [sp+48h] [bp-190h]@10
  int v58; // [sp+4Ch] [bp-18Ch]@10
  int v59; // [sp+50h] [bp-188h]@10
  int v60; // [sp+54h] [bp-184h]@10
  char *v61; // [sp+58h] [bp-180h]@10
  int v62; // [sp+5Ch] [bp-17Ch]@10
  size_t v63; // [sp+60h] [bp-178h]@10
  int v64; // [sp+64h] [bp-174h]@10
  int v65; // [sp+68h] [bp-170h]@10
  int v66; // [sp+6Ch] [bp-16Ch]@10
  int v67; // [sp+70h] [bp-168h]@10
  char v68[256]; // [sp+74h] [bp-164h]@26
  int v69; // [sp+174h] [bp-64h]@22
  char v70; // [sp+178h] [bp-60h]@22
  int *v71; // [sp+17Ch] [bp-5Ch]@22
  int v72; // [sp+180h] [bp-58h]@22
  int v73; // [sp+184h] [bp-54h]@22
  int v74; // [sp+188h] [bp-50h]@22
  int v75; // [sp+18Ch] [bp-4Ch]@22
  int v76; // [sp+190h] [bp-48h]@22
  int v77; // [sp+194h] [bp-44h]@22
  int v78; // [sp+198h] [bp-40h]@22
  int v79; // [sp+19Ch] [bp-3Ch]@22
  int v80; // [sp+1A0h] [bp-38h]@22
  char *v81; // [sp+1A4h] [bp-34h]@22
  int v82; // [sp+1A8h] [bp-30h]@22
  int v83; // [sp+1ACh] [bp-2Ch]@22
  char *v84; // [sp+1B0h] [bp-28h]@22
  int v85; // [sp+1B4h] [bp-24h]@22
  int v86; // [sp+1B8h] [bp-20h]@22
  int v87; // [sp+1BCh] [bp-1Ch]@22

  v3 = a1;
  v4 = *a1;
  v53 = a2;
  v52 = a3;
  LOBYTE(v51) = v4;
  v5 = (unsigned __int8)v4 < 0x5Fu;
  v6 = v4 == 95;
  if ( v4 != 95 || (v5 = v3[1] < 0x5Au, v6 = v3[1] == 90, v10 = 1, v3[1] != 90) )
  {
    v7 = "_GLOBAL_";
    v8 = 8;
    v9 = v3;
    do
    {
      if ( !v8 )
        break;
      v5 = (const unsigned __int8)*v9 < *v7;
      v6 = *v9++ == *v7++;
      --v8;
    }
    while ( v6 );
    v10 = 0;
    if ( (!v5 && !v6) == v5 )
    {
      v11 = v3[8];
      if ( v11 == 95 || v11 == 46 || v11 == 36 )
      {
        v12 = v3[9];
        if ( v12 == 68 || (v10 = 0, v12 == 73) )
        {
          v10 = 0;
          if ( v3[10] == 95 )
            v10 = (v12 != 73) + 2;
        }
      }
    }
  }
  v54 = v3;
  v13 = strlen(v3);
  v56 = 17;
  v55 = &v3[v13];
  v50 = 2 * v13;
  v60 = 2 * v13;
  v57 = v3;
  v59 = 0;
  v63 = v13;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  sub_6F8A13B0(32 * v13, v46);
  v14 = alloca(32 * v13);
  v15 = 16 * ((4 * v13 + 15) >> 4);
  sub_6F8A13B0(v15, v46);
  v17 = alloca(v15);
  v58 = v16;
  v61 = &v47;
  if ( v10 == 1 )
  {
    if ( (_BYTE)v51 != 95 || v3[1] != 90 )
      return 0;
    v57 = v3 + 2;
    v24 = sub_6F8996C0((int)&v54, 1, v16);
    if ( !(v56 & 1) )
    {
      v25 = *v57;
      goto LABEL_20;
    }
    v25 = *v57;
    if ( *v57 == 46 )
    {
      v36 = v57;
      v37 = v24;
      while ( 1 )
      {
        v38 = v36[1];
        if ( (unsigned __int8)(v38 - 97) <= 0x19u || v38 == 95 )
        {
          v40 = v36 + 2;
          LOBYTE(v51) = v36[2];
          if ( (unsigned __int8)(v51 - 97) > 0x19u && (_BYTE)v51 != 95 )
          {
            v39 = v51;
          }
          else
          {
            v51 = v37;
            do
            {
              do
                v39 = *++v40;
              while ( (unsigned __int8)(*v40 - 97) <= 0x19u );
            }
            while ( v39 == 95 );
            v37 = v51;
          }
        }
        else
        {
          if ( (unsigned __int8)(v38 - 48) > 9u )
          {
            v24 = v37;
            v25 = *v36;
            break;
          }
          v39 = *v36;
          v40 = v36;
        }
        if ( v39 == 46 )
        {
          do
          {
            if ( (unsigned __int8)(v40[1] - 48) > 9u )
              break;
            v41 = v40[2];
            v42 = v40 + 2;
            if ( (unsigned __int8)(v41 - 48) <= 9u )
            {
              do
                v41 = *++v42;
              while ( (unsigned __int8)(*v42 - 48) <= 9u );
            }
            v40 = v42;
          }
          while ( v41 == 46 );
        }
        v57 = v40;
        v43 = v40 - v36;
        if ( v59 < v60 && (v44 = v59 + 1, v45 = v58 + 16 * v59, *(_DWORD *)(v45 + 4) = 0, v59 = v44, v43) )
        {
          *(_DWORD *)(v45 + 4) = 0;
          *(_DWORD *)v45 = 0;
          *(_DWORD *)(v45 + 8) = v36;
          *(_DWORD *)(v45 + 12) = v43;
        }
        else
        {
          v45 = 0;
        }
        v37 = sub_6F896B60((int)&v54, 77, v37, v45);
        v36 = v57;
        if ( *v57 != 46 )
        {
          v24 = v37;
          v25 = *v57;
          break;
        }
      }
    }
LABEL_20:
    if ( !v24 )
      return 0;
  }
  else
  {
    if ( !v10 || v10 > 3 )
    {
      v24 = sub_6F898420((int)&v54);
      v25 = *v57;
      goto LABEL_20;
    }
    v6 = v3[11] == 95;
    v57 = v3 + 11;
    if ( v6 && v3[12] == 90 )
    {
      v57 = v3 + 13;
      v21 = (int *)&v54;
      v20 = sub_6F8996C0((int)&v54, 0, v16);
    }
    else
    {
      v49 = (unsigned int)&v48 >> 2;
      v51 = v16;
      v18 = strlen(v3 + 11);
      v19 = v49;
      v20 = v51;
      if ( v50 > 0 && (*(_DWORD *)(4 * v49 + 4) = 0, v59 = 1, v18) )
      {
        *(_DWORD *)(4 * v19 + 8) = v3 + 11;
        v21 = (int *)&v54;
        *(_DWORD *)(4 * v19) = 0;
        *(_DWORD *)(4 * v19 + 0xC) = v18;
      }
      else
      {
        v20 = 0;
        v21 = (int *)&v54;
      }
    }
    v22 = sub_6F896B60((int)v21, (v10 != 2) + 67, v20, 0);
    v23 = v57;
    v24 = v22;
    v57 = &v23[strlen(v57)];
    v25 = *v57;
    if ( !v24 )
      return 0;
  }
  if ( v25 )
    return 0;
  v70 = 0;
  v69 = 0;
  v71 = v53;
  v73 = 0;
  v72 = v52;
  v74 = 0;
  v78 = 0;
  v79 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  sub_6F896C20((int)&v86, &v83, v24);
  v27 = v83;
  v87 = 0;
  v28 = v83 * v86;
  v53 = &v46;
  if ( v83 <= 0 )
    v27 = 1;
  v86 *= v83;
  v29 = 16 * ((unsigned int)(8 * v27 + 15) >> 4);
  sub_6F8A13B0(v29, v46);
  v31 = alloca(v29);
  if ( v28 <= 0 )
    v28 = v30;
  v32 = 16 * ((unsigned int)(8 * v28 + 15) >> 4);
  sub_6F8A13B0(v32, v46);
  v33 = alloca(v32);
  v81 = &v47;
  v84 = &v47;
  sub_6F899DD0((int)v68, 17, v24);
  v34 = v69;
  v35 = v72;
  v68[v69] = 0;
  ((void (__cdecl *)(char *, int, int))v71)(v68, v34, v35);
  return v75 == 0;
}
