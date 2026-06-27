int __usercall sub_6F7A7D70@<eax>(int a1@<eax>, int a2@<edx>, signed int a3@<ecx>, int a4, signed int a5, int a6)
{
  int v6; // ebx@1
  signed int v7; // edx@1
  int v8; // esi@3
  int v9; // edx@4
  int v10; // esi@4
  int v11; // ebp@5
  int result; // eax@5
  int v13; // ecx@8
  int v14; // edi@8
  int v15; // ebx@8
  unsigned int v16; // esi@11
  signed int v17; // edx@12
  bool v18; // sf@16
  int v19; // eax@16
  int v20; // edx@18
  int v21; // eax@18
  int v22; // ecx@18
  int v23; // eax@20
  int v24; // edx@25
  int v25; // esi@27
  int v26; // edx@27
  int v27; // ecx@33
  int v28; // esi@35
  int v29; // ecx@35
  int v30; // esi@36
  int v31; // ecx@36
  int v32; // esi@38
  int v33; // edx@42
  signed int v34; // [sp+1Ch] [bp-60h]@1
  int v35; // [sp+1Ch] [bp-60h]@8
  int v36; // [sp+20h] [bp-5Ch]@1
  int v37; // [sp+20h] [bp-5Ch]@8
  int v38; // [sp+24h] [bp-58h]@4
  int v39; // [sp+24h] [bp-58h]@8
  int v40; // [sp+28h] [bp-54h]@1
  signed int v41; // [sp+2Ch] [bp-50h]@4
  int v42; // [sp+30h] [bp-4Ch]@5
  signed int v43; // [sp+34h] [bp-48h]@3
  int v44; // [sp+38h] [bp-44h]@6
  int v45; // [sp+3Ch] [bp-40h]@6
  int v46; // [sp+40h] [bp-3Ch]@8
  int v47; // [sp+44h] [bp-38h]@8
  int v48; // [sp+48h] [bp-34h]@9
  signed int v49; // [sp+50h] [bp-2Ch]@4
  int v50; // [sp+58h] [bp-24h]@27
  int *v51; // [sp+5Ch] [bp-20h]@27

  v6 = a1;
  v36 = a2;
  v7 = a3;
  v34 = a3 >> 8;
  v40 = a5 >> 8;
  if ( a4 == a6 )
    return sub_6F7A7C50(a1, v40, v36);
  a3 = (unsigned __int8)a3;
  if ( v34 == v40 )
  {
    result = a6 - a4;
    *(_DWORD *)(v6 + 100) += a6 - a4;
    *(_DWORD *)(v6 + 96) += (a6 - a4) * ((unsigned __int8)a5 + (unsigned __int8)v7);
    return result;
  }
  v8 = a6 - a4;
  v43 = a5 - v7;
  if ( a5 - v7 < 0 )
  {
    v43 = -v43;
    v41 = -1;
    v49 = 0;
    v33 = (unsigned __int8)v7 * v8 % v43;
    v38 = a3 * v8 % v43;
    v10 = a3 * v8 / v43;
    if ( v33 >= 0 )
      goto LABEL_5;
LABEL_43:
    --v10;
    v38 += v43;
    goto LABEL_5;
  }
  v41 = 1;
  v49 = 256;
  v9 = v8 * (256 - (unsigned __int8)v7) % v43;
  v38 = v8 * (256 - a3) % v43;
  v10 = v8 * (256 - a3) / v43;
  if ( v9 < 0 )
    goto LABEL_43;
LABEL_5:
  *(_DWORD *)(a1 + 100) += v10;
  v11 = a1;
  *(_DWORD *)(a1 + 96) += v10 * (v49 + a3);
  sub_6F7A7C50(a1, v41 + v34, v36);
  result = v10 + a4;
  v42 = v10 + a4;
  if ( v40 != v41 + v34 )
  {
    v45 = ((v10 + a6 - v42) << 8) % v43;
    v44 = ((v10 + a6 - v42) << 8) / v43;
    if ( v45 < 0 )
    {
      --v44;
      v45 += v43;
    }
    v13 = v38 - v43;
    v14 = *(_DWORD *)(v11 + 100);
    v15 = v41 + v41 + v34;
    v39 = v36 - *(_DWORD *)(v11 + 80);
    v35 = v13;
    v37 = *(_DWORD *)(v11 + 96);
    v46 = *(_DWORD *)(v11 + 76);
    v47 = *(_DWORD *)(v11 + 72);
    while ( 1 )
    {
      v18 = v45 + v35 < 0;
      v35 += v45;
      v19 = v44;
      if ( !v18 )
      {
        v35 -= v43;
        v19 = v44 + 1;
      }
      v20 = v19;
      v14 += v19;
      v42 += v19;
      v21 = v46;
      v37 += v20 << 8;
      v22 = *(_DWORD *)(v11 + 64);
      if ( v15 <= v46 )
        v21 = v15;
      v23 = v21 - v47;
      if ( v23 < 0 )
        v23 = -1;
      if ( v22 != v23 )
        break;
      v16 = v39;
      if ( *(_DWORD *)(v11 + 68) != v39 )
        break;
LABEL_12:
      v17 = 1;
      if ( *(_DWORD *)(v11 + 92) > v16 )
      {
        v17 = v23 < *(_DWORD *)(v11 + 88);
        LOBYTE(v17) = v23 >= *(_DWORD *)(v11 + 88);
      }
      *(_DWORD *)(v11 + 104) = v17;
      result = v15 + v41;
      if ( v40 == v15 )
      {
        v32 = v37;
        goto LABEL_39;
      }
      v15 += v41;
    }
    v48 = *(_DWORD *)(v11 + 104);
    if ( *(_DWORD *)(v11 + 104) || !(v14 | v37) )
    {
LABEL_11:
      v16 = v39;
      *(_DWORD *)(v11 + 64) = v23;
      v37 = 0;
      *(_DWORD *)(v11 + 68) = v39;
      v14 = 0;
      goto LABEL_12;
    }
    v24 = *(_DWORD *)(v11 + 88);
    if ( v22 <= v24 )
      v24 = *(_DWORD *)(v11 + 64);
    v25 = v24;
    v50 = v24;
    v26 = *(_DWORD *)(*(_DWORD *)(v11 + 1328) + 4 * *(_DWORD *)(v11 + 68));
    v51 = (int *)(*(_DWORD *)(v11 + 1328) + 4 * *(_DWORD *)(v11 + 68));
    if ( v26 && v25 >= *(_DWORD *)v26 )
    {
      if ( v25 == *(_DWORD *)v26 )
      {
LABEL_40:
        v30 = v26;
        v48 = *(_DWORD *)(v26 + 8);
        v31 = *(_DWORD *)(v26 + 4);
LABEL_37:
        *(_DWORD *)(v30 + 4) = v14 + v31;
        *(_DWORD *)(v30 + 8) = v37 + v48;
        goto LABEL_11;
      }
      while ( 1 )
      {
        v27 = v26 + 12;
        v26 = *(_DWORD *)(v26 + 12);
        if ( !v26 || v50 < *(_DWORD *)v26 )
          break;
        if ( v50 == *(_DWORD *)v26 )
          goto LABEL_40;
      }
      v51 = (int *)v27;
    }
    v28 = *(_DWORD *)(v11 + 116);
    v29 = *(_DWORD *)(v11 + 116);
    if ( v28 >= *(_DWORD *)(v11 + 112) )
    {
      *(_DWORD *)(v11 + 100) = v14;
      *(_DWORD *)(v11 + 96) = v37;
      longjmp(v11, 1);
    }
    *(_DWORD *)(v11 + 116) = v28 + 1;
    v30 = *(_DWORD *)(v11 + 108) + 16 * v29;
    *(_DWORD *)v30 = v50;
    *(_DWORD *)(v30 + 8) = 0;
    *(_DWORD *)(v30 + 4) = 0;
    *(_DWORD *)(v30 + 12) = v26;
    *v51 = v30;
    v31 = 0;
    goto LABEL_37;
  }
  v32 = *(_DWORD *)(v11 + 96);
  v14 = *(_DWORD *)(v11 + 100);
LABEL_39:
  *(_DWORD *)(v11 + 100) = v14 + a6 - v42;
  *(_DWORD *)(v11 + 96) = v32 + (a6 - v42) * ((unsigned __int8)a5 + 256 - v49);
  return result;
}
