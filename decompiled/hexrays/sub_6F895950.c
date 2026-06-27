int __cdecl sub_6F895950(int a1, int a2)
{
  unsigned int v2; // edi@1
  unsigned int v3; // eax@1
  unsigned int v4; // ebp@1
  int v5; // ebx@3
  int v6; // edx@3
  int v7; // ebx@3
  char v8; // cl@3
  int v9; // ebx@4
  unsigned __int8 v10; // cl@4
  char v11; // dl@4
  int v12; // ebx@4
  int v13; // ebx@10
  unsigned __int8 v14; // cl@10
  int v15; // edx@14
  int v16; // ecx@14
  int v17; // ebx@14
  int result; // eax@14
  unsigned __int8 v19; // dl@15
  char v20; // cl@17
  int v21; // ebx@21
  unsigned __int8 v22; // cl@21
  char v23; // dl@21
  int v24; // ebx@21
  int v25; // ebx@25
  unsigned __int8 v26; // cl@25
  int v27; // ecx@26
  char v28; // bl@26
  unsigned int v29; // esi@26
  char v30; // cl@27
  unsigned int v31; // edx@29
  bool v32; // cf@29
  bool v33; // zf@29
  int v34; // edx@29
  unsigned int v35; // ecx@30
  int v36; // edx@33
  int v37; // ecx@34
  unsigned int v38; // ecx@37
  char v39; // bl@38
  int v40; // ebx@20
  char v41; // cl@20
  unsigned int v42; // ebx@47
  int i; // edx@47
  int v44; // edx@54
  unsigned int v45; // ecx@54
  int v46; // ecx@55
  int v47; // edx@58
  int v48; // ecx@64
  unsigned int v49; // [sp+0h] [bp-54h]@1
  int v50; // [sp+4h] [bp-50h]@1
  unsigned int v51; // [sp+8h] [bp-4Ch]@15
  int v52; // [sp+Ch] [bp-48h]@1
  unsigned int v53; // [sp+10h] [bp-44h]@1
  int v54; // [sp+14h] [bp-40h]@1
  unsigned int v55; // [sp+18h] [bp-3Ch]@1
  int v56; // [sp+1Ch] [bp-38h]@1
  int v57; // [sp+20h] [bp-34h]@1
  int v58; // [sp+24h] [bp-30h]@1
  int v59; // [sp+28h] [bp-2Ch]@1
  int v60; // [sp+2Ch] [bp-28h]@1
  int v61; // [sp+30h] [bp-24h]@1
  int v62; // [sp+34h] [bp-20h]@26
  unsigned int v63; // [sp+34h] [bp-20h]@29
  unsigned int v64; // [sp+38h] [bp-1Ch]@1
  int v65; // [sp+3Ch] [bp-18h]@1

  v52 = *(_DWORD *)(a1 + 28);
  v49 = *(_DWORD *)a1 - 1;
  v55 = v49 + *(_DWORD *)(a1 + 4) - 5;
  v2 = *(_DWORD *)(a1 + 12) - 1;
  v53 = v2 + *(_DWORD *)(a1 + 16) - 257;
  v61 = v2 + *(_DWORD *)(a1 + 16) - a2;
  v58 = *(_DWORD *)(v52 + 40);
  v64 = *(_DWORD *)(v52 + 44);
  v56 = *(_DWORD *)(v52 + 48);
  v59 = *(_DWORD *)(v52 + 52);
  v3 = *(_DWORD *)(v52 + 56);
  v4 = *(_DWORD *)(v52 + 60);
  v50 = *(_DWORD *)(v52 + 76);
  v57 = *(_DWORD *)(v52 + 80);
  v54 = (1 << *(_DWORD *)(v52 + 84)) - 1;
  v60 = (1 << *(_DWORD *)(v52 + 88)) - 1;
  v65 = v59 - 1;
  while ( 1 )
  {
    if ( v4 <= 0xE )
    {
      v5 = *(_BYTE *)(v49 + 1);
      v6 = *(_BYTE *)(v49 + 2);
      v49 += 2;
      v7 = v5 << v4;
      v8 = v4 + 8;
      v4 += 16;
      v3 += v7 + (v6 << v8);
    }
    v9 = v50 + 4 * (v3 & v54);
    v10 = *(_BYTE *)(v9 + 1);
    v11 = *(_BYTE *)v9;
    v12 = *(_WORD *)(v9 + 2);
    v3 >>= v10;
    v4 -= v10;
    if ( !v11 )
      goto LABEL_11;
    if ( !(v11 & 0x10) )
      break;
LABEL_15:
    v19 = v11 & 0xF;
    v51 = (unsigned __int16)v12;
    if ( v19 )
    {
      if ( v19 > v4 )
      {
        v20 = v4;
        v4 += 8;
        v3 += *(_BYTE *)(v49++ + 1) << v20;
      }
      v4 -= v19;
      v51 = (v3 & ((1 << v19) - 1)) + (unsigned __int16)v12;
      v3 >>= v19;
    }
    if ( v4 <= 0xE )
    {
      v40 = *(_BYTE *)(v49 + 1) << v4;
      v41 = v4 + 8;
      v4 += 16;
      v3 += v40 + (*(_BYTE *)(v49 + 2) << v41);
      v49 += 2;
    }
    v21 = v57 + 4 * (v3 & v60);
    v22 = *(_BYTE *)(v21 + 1);
    v23 = *(_BYTE *)v21;
    v24 = *(_WORD *)(v21 + 2);
    v3 >>= v22;
    v4 -= v22;
    if ( !(v23 & 0x10) )
    {
      if ( v23 & 0x40 )
      {
LABEL_46:
        *(_DWORD *)(a1 + 24) = "invalid distance code";
        *(_DWORD *)v52 = 29;
        goto LABEL_14;
      }
      while ( 1 )
      {
        v25 = v57 + 4 * (v24 + (v3 & ((1 << v23) - 1)));
        v26 = *(_BYTE *)(v25 + 1);
        v23 = *(_BYTE *)v25;
        v24 = *(_WORD *)(v25 + 2);
        v3 >>= v26;
        v4 -= v26;
        if ( v23 & 0x10 )
          break;
        if ( v23 & 0x40 )
          goto LABEL_46;
      }
    }
    v27 = (unsigned __int16)v24;
    v28 = v23 & 0xF;
    v29 = v23 & 0xF;
    v62 = v27;
    if ( v29 > v4 )
    {
      v30 = v4 + 8;
      v3 += *(_BYTE *)(v49 + 1) << v4;
      if ( v29 > v4 + 8 )
      {
        v4 += 16;
        v3 += *(_BYTE *)(v49 + 2) << v30;
        v49 += 2;
      }
      else
      {
        ++v49;
        v4 += 8;
      }
    }
    v4 -= v29;
    v31 = v62 + (v3 & ((1 << v28) - 1));
    v3 >>= v28;
    v63 = v31;
    v32 = v31 < v2 - v61;
    v33 = v31 == v2 - v61;
    v34 = v2 - v61;
    if ( !v32 && !v33 )
    {
      v35 = v63 - v34;
      if ( v64 < v63 - v34 && *(_DWORD *)(v52 + 7104) )
      {
        *(_DWORD *)(a1 + 24) = "invalid distance too far back";
        *(_DWORD *)v52 = 29;
        goto LABEL_14;
      }
      if ( v56 )
      {
        if ( v56 >= v35 )
        {
          v36 = v65 + v56 - v35;
          if ( v51 > v35 )
          {
            v51 -= v35;
            v48 = v2 + v35;
            do
              *(_BYTE *)++v2 = *(_BYTE *)++v36;
            while ( v2 != v48 );
LABEL_36:
            v36 = v2 - v63;
          }
        }
        else
        {
          v44 = v58 + v56 - v35;
          v45 = v35 - v56;
          v36 = v65 + v44;
          if ( v51 > v45 )
          {
            v51 -= v45;
            v46 = v2 + v45;
            do
              *(_BYTE *)++v2 = *(_BYTE *)++v36;
            while ( v2 != v46 );
            v36 = v59 - 1;
            if ( v56 < v51 )
            {
              v47 = 0;
              v51 -= v56;
              do
              {
                *(_BYTE *)(v46 + v47 + 1) = *(_BYTE *)(v59 + v47);
                ++v47;
              }
              while ( v47 != v56 );
              v2 = v46 + v56;
              v36 = v46 + v56 - v63;
            }
          }
        }
      }
      else
      {
        v36 = v65 + v58 - v35;
        if ( v51 > v35 )
        {
          v51 -= v35;
          v37 = v2 + v35;
          do
            *(_BYTE *)++v2 = *(_BYTE *)++v36;
          while ( v2 != v37 );
          goto LABEL_36;
        }
      }
      v38 = v51;
      if ( v51 > 2 )
      {
        do
        {
          v39 = *(_BYTE *)(v36 + 1);
          v36 += 3;
          v38 -= 3;
          v2 += 3;
          *(_BYTE *)(v2 - 2) = v39;
          *(_BYTE *)(v2 - 1) = *(_BYTE *)(v36 - 1);
          *(_BYTE *)v2 = *(_BYTE *)v36;
        }
        while ( v38 > 2 );
        v51 = v38;
      }
      if ( v51 )
      {
        *(_BYTE *)(v2 + 1) = *(_BYTE *)(v36 + 1);
        if ( v51 == 2 )
        {
          v2 += 2;
          *(_BYTE *)v2 = *(_BYTE *)(v36 + 2);
        }
        else
        {
          ++v2;
        }
      }
      goto LABEL_12;
    }
    v42 = v51;
    for ( i = v2 - v63; ; i += 3 )
    {
      v42 -= 3;
      *(_BYTE *)(v2 + 1) = *(_BYTE *)(i + 1);
      *(_BYTE *)(v2 + 2) = *(_BYTE *)(i + 2);
      *(_BYTE *)(v2 + 3) = *(_BYTE *)(i + 3);
      if ( v42 <= 2 )
        break;
      v2 += 3;
    }
    if ( v42 )
    {
      *(_BYTE *)(v2 + 4) = *(_BYTE *)(i + 4);
      if ( v42 == 2 )
      {
        v2 += 5;
        *(_BYTE *)v2 = *(_BYTE *)(i + 5);
      }
      else
      {
        v2 += 4;
      }
    }
    else
    {
      v2 += 3;
    }
LABEL_12:
    if ( v2 >= v53 || v49 >= v55 )
      goto LABEL_14;
  }
  if ( !(v11 & 0x40) )
  {
    while ( 1 )
    {
      v13 = v50 + 4 * (v12 + (v3 & ((1 << v11) - 1)));
      v14 = *(_BYTE *)(v13 + 1);
      v11 = *(_BYTE *)v13;
      v12 = *(_WORD *)(v13 + 2);
      v3 >>= v14;
      v4 -= v14;
      if ( !v11 )
        break;
      if ( v11 & 0x10 )
        goto LABEL_15;
      if ( v11 & 0x40 )
        goto LABEL_43;
    }
LABEL_11:
    *(_BYTE *)(v2++ + 1) = v12;
    goto LABEL_12;
  }
LABEL_43:
  if ( v11 & 0x20 )
  {
    *(_DWORD *)v52 = 11;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = "invalid literal/length code";
    *(_DWORD *)v52 = 29;
  }
LABEL_14:
  v15 = v49 - (v4 >> 3);
  v16 = v4 - 8 * (v4 >> 3);
  v17 = v3 & ((1 << v16) - 1);
  *(_DWORD *)a1 = v15 + 1;
  *(_DWORD *)(a1 + 12) = v2 + 1;
  *(_DWORD *)(a1 + 4) = v55 - v15 + 5;
  *(_DWORD *)(a1 + 16) = v53 - v2 + 257;
  result = v52;
  *(_DWORD *)(v52 + 56) = v17;
  *(_DWORD *)(v52 + 60) = v16;
  return result;
}
