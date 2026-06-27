int __usercall sub_6F76A8D0@<eax>(int *a1@<eax>, int a2@<edx>, int a3@<ecx>, signed int a4, int *a5)
{
  int *v5; // ebp@1
  int v6; // esi@1
  signed int v7; // ebx@1
  int v9; // ebx@4
  int v10; // eax@7
  int v11; // edi@9
  int v12; // edi@12
  unsigned int i; // ebp@12
  signed __int32 v14; // eax@13
  signed int v15; // edx@13
  unsigned int v16; // eax@15
  int v17; // eax@19
  int *v18; // ebp@25
  unsigned __int32 v19; // eax@28
  unsigned int v20; // ST38_4@33
  _BYTE *v21; // eax@33
  int v22; // edi@33
  unsigned int v23; // ecx@33
  int v24; // ebx@34
  int v25; // ebp@34
  unsigned int v26; // ecx@37
  signed __int32 v27; // ecx@44
  unsigned __int16 v28; // ax@46
  signed int v29; // edx@47
  int v30; // ecx@48
  int v31; // esi@58
  int v32; // esi@60
  int v33; // ebp@60
  int v34; // eax@60
  void *v35; // eax@63
  const void *v36; // edi@63
  int v37; // ebx@65
  bool v38; // cf@65
  signed int v39; // eax@67
  int v40; // ecx@68
  const char *v41; // esi@68
  int v42; // eax@69
  int v43; // [sp+24h] [bp-68h]@4
  int v44; // [sp+24h] [bp-68h]@22
  int v45; // [sp+28h] [bp-64h]@1
  int v46; // [sp+2Ch] [bp-60h]@4
  int v47; // [sp+2Ch] [bp-60h]@22
  int *v48; // [sp+30h] [bp-5Ch]@12
  unsigned int v49; // [sp+30h] [bp-5Ch]@25
  signed int v50; // [sp+30h] [bp-5Ch]@30
  int v51; // [sp+34h] [bp-58h]@12
  unsigned int v52; // [sp+38h] [bp-54h]@34
  unsigned int v53; // [sp+3Ch] [bp-50h]@45
  size_t v54; // [sp+3Ch] [bp-50h]@50
  signed int v55; // [sp+40h] [bp-4Ch]@34
  int v56; // [sp+40h] [bp-4Ch]@35
  int v57; // [sp+44h] [bp-48h]@34
  unsigned int v58; // [sp+48h] [bp-44h]@34
  int v59; // [sp+4Ch] [bp-40h]@34
  int v60; // [sp+5Ch] [bp-30h]@1
  int v61; // [sp+60h] [bp-2Ch]@1
  int v62; // [sp+64h] [bp-28h]@3
  int v63; // [sp+68h] [bp-24h]@3
  int v64; // [sp+6Ch] [bp-20h]@4

  v5 = a1;
  v6 = a2;
  v45 = *a1;
  v7 = sub_6F7719D0((int)a1, a2, a3, &v60, (unsigned __int32 *)&v61);
  if ( v7 )
    return v7;
  if ( sub_6F771C10(v5, v6, v60, v61, 1347375956, 1, &v62, (size_t *)&v63) )
  {
    v7 = sub_6F771C10(v5, v6, v60, v61, 1936092788, 0, &v62, (size_t *)&v63);
    if ( v7 )
      return v7;
    v10 = v62;
    if ( a4 % v63 != -1 )
      v7 = a4 % v63;
    v11 = v7;
    v7 = 1;
    if ( v63 <= v11 )
    {
LABEL_10:
      sub_6F773D90(v45, v10);
      return v7;
    }
    v44 = *v5;
    v47 = *(_DWORD *)(v62 + 4 * v11);
    v7 = sub_6F771FF0(v6, *(_DWORD *)(v62 + 4 * v11));
    v64 = v7;
    if ( !v7 )
    {
      v19 = sub_6F7727E0(v6, &v64);
      v7 = v64;
      if ( !v64 )
      {
        if ( v19 == -1 )
        {
          v10 = v62;
          v7 = 1;
          goto LABEL_10;
        }
        v50 = v19;
        v64 = sub_6F76A550(v5, v6, v11, 0, 0, a5);
        if ( !v64 )
        {
          sub_6F773D90(v45, v62);
LABEL_32:
          *(_DWORD *)*a5 = v63;
          return v7;
        }
        if ( sub_6F771FF0(v6, v47 + 4) )
        {
LABEL_58:
          v31 = v64;
          sub_6F773D90(v45, v62);
          if ( v31 )
            return v31;
          goto LABEL_32;
        }
        v35 = sub_6F773A50(v44, v50, &v64);
        v36 = v35;
        if ( v64 )
        {
          v10 = v62;
          v7 = v64;
          goto LABEL_10;
        }
        v39 = sub_6F7720B0(v6, v35, v50);
        v64 = v39;
        if ( !v39 )
        {
          v40 = v50;
          v41 = "truetype";
          if ( v50 > 4 )
          {
            v42 = memcmp(v36, "OTTO", 4u);
            v40 = v50;
            if ( !v42 )
              v41 = "cff";
          }
          v64 = sub_6F76A3D0((int)v5, (int)v36, v40, 0, v41, a5);
          goto LABEL_58;
        }
        v7 = v39;
      }
    }
    v10 = v62;
    goto LABEL_10;
  }
  v64 = 1;
  v43 = v63;
  v9 = v62;
  v46 = v62;
  if ( (unsigned int)a4 < 0xFFFFFFFF && a4 != 0 )
  {
    v7 = 1;
    sub_6F773D90(v45, v62);
    return v7;
  }
  if ( v63 <= 0 )
  {
LABEL_27:
    v7 = 10;
    v17 = v46;
    goto LABEL_20;
  }
  v48 = v5;
  v12 = 0;
  v51 = *v5;
  for ( i = 0; ; i = v16 )
  {
    v15 = sub_6F771FF0(v6, *(_DWORD *)(v9 + 4 * v12));
    v64 = v15;
    if ( v15 || (v14 = sub_6F7727E0(v6, &v64), (v15 = v64) != 0) )
    {
      v17 = v62;
      v7 = v15;
      goto LABEL_20;
    }
    if ( v14 < 0 || (v16 = v14 + i + 6, v16 < i) )
    {
      v17 = v62;
      v7 = 9;
      goto LABEL_20;
    }
    if ( v43 == ++v12 )
      break;
  }
  v18 = v48;
  v49 = v16 + 2;
  if ( v16 + 2 <= 5 )
  {
    v46 = v62;
    goto LABEL_27;
  }
  v20 = v16;
  v21 = sub_6F773A50(v51, v49, &v64);
  v7 = v64;
  v22 = (int)v21;
  v23 = v20;
  if ( v64 )
  {
LABEL_55:
    v17 = v62;
    goto LABEL_20;
  }
  *v21 = -128;
  v21[1] = 1;
  v24 = 0;
  v21[2] = 0;
  v21[3] = 0;
  v21[4] = 0;
  v21[5] = 0;
  v59 = (int)v18;
  v57 = 2;
  v25 = 6;
  v52 = 0;
  v55 = 1;
  v58 = v23;
  while ( 1 )
  {
    v64 = sub_6F771FF0(v6, *(_DWORD *)(v46 + 4 * v24));
    if ( v64 )
      goto LABEL_53;
    v27 = sub_6F7727E0(v6, &v64);
    if ( v64 )
      goto LABEL_53;
    v53 = v27;
    if ( v27 < 0 )
      goto LABEL_53;
    v28 = sub_6F772620(v6, &v64);
    if ( v64 )
      goto LABEL_53;
    v29 = (signed int)v28 >> 8;
    v64 = 10;
    if ( !v29 )
      goto LABEL_42;
    v30 = 0;
    if ( v53 >= 3 )
      v30 = v53 - 2;
    v54 = v30;
    if ( v29 != v55 )
      break;
    v52 += v30;
    v26 = v25;
LABEL_39:
    v55 = (signed int)v28 >> 8;
    if ( v58 < v26 )
      goto LABEL_52;
    v25 = v54 + v26;
    if ( v58 < v54 + v26 )
      goto LABEL_52;
    v64 = sub_6F7720B0(v6, (void *)(v22 + v26), v54);
    if ( v64 )
      goto LABEL_53;
LABEL_42:
    if ( v43 == ++v24 )
    {
      v32 = v25;
      v33 = v59;
      v64 = 10;
      v34 = v32 + 2;
      if ( v49 >= v32 + 2 )
      {
        *(_BYTE *)(v22 + v32) = -128;
        *(_BYTE *)(v22 + v32 + 1) = 3;
        v56 = v57 + 3;
        if ( v49 >= v57 + 3 )
          goto LABEL_62;
LABEL_52:
        if ( !v64 )
        {
LABEL_54:
          sub_6F773D90(v51, v22);
          v7 = v64;
          goto LABEL_55;
        }
      }
LABEL_53:
      v64 = 1;
      goto LABEL_54;
    }
  }
  v56 = v57 + 3;
  if ( v49 < v57 + 3 )
    goto LABEL_53;
  *(_BYTE *)(v22 + v57) = v52;
  *(_BYTE *)(v22 + v57 + 1) = BYTE1(v52);
  *(_BYTE *)(v22 + v57 + 2) = v52 >> 16;
  *(_BYTE *)(v22 + v57 + 3) = BYTE3(v52);
  if ( v29 != 5 )
  {
    v26 = v25 + 6;
    if ( v49 < v25 + 6 )
      goto LABEL_52;
    *(_BYTE *)(v22 + v25) = -128;
    *(_BYTE *)(v22 + v25 + 1) = HIBYTE(v28);
    *(_BYTE *)(v22 + v25 + 2) = 0;
    *(_BYTE *)(v22 + v25 + 3) = 0;
    v57 = v25 + 2;
    *(_BYTE *)(v22 + v25 + 4) = 0;
    *(_BYTE *)(v22 + v25 + 5) = 0;
    v52 = v54;
    goto LABEL_39;
  }
  v37 = v25;
  v64 = 10;
  v34 = v25 + 2;
  v38 = v49 < v25 + 2;
  v33 = v59;
  if ( v38 )
    goto LABEL_53;
  *(_BYTE *)(v22 + v37) = -128;
  *(_BYTE *)(v22 + v37 + 1) = 3;
LABEL_62:
  *(_BYTE *)(v22 + v57) = v52;
  *(_BYTE *)(v22 + v57 + 1) = BYTE1(v52);
  *(_BYTE *)(v22 + v57 + 2) = v52 >> 16;
  *(_BYTE *)(v22 + v56) = BYTE3(v52);
  v7 = sub_6F76A3D0(v33, v22, v34, 0, "type1", a5);
  v17 = v62;
LABEL_20:
  sub_6F773D90(v45, v17);
  if ( !v7 )
    *(_DWORD *)*a5 = 1;
  return v7;
}
