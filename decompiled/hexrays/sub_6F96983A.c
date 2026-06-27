signed int __usercall sub_6F96983A@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, _DWORD *a4, _DWORD *a5)
{
  int v5; // ebp@1
  int v6; // ebx@1
  int v7; // edi@2
  signed int v8; // esi@4
  int v9; // ecx@4
  int v10; // eax@4
  int v11; // ecx@4
  bool v12; // zf@4
  bool v13; // sf@4
  signed int result; // eax@4
  int v15; // edx@7
  int v16; // ecx@7
  signed __int64 v17; // rax@13
  signed int v18; // esi@13
  signed __int64 v19; // rax@13
  unsigned int v20; // eax@13
  unsigned int v21; // edi@13
  unsigned __int8 v22; // of@13
  unsigned int v23; // edx@13
  int v24; // ecx@17
  int v25; // esi@19
  int v26; // edx@19
  int v27; // eax@19
  int v28; // eax@20
  int v29; // eax@23
  int v30; // eax@25
  int v31; // eax@27
  int v32; // ebp@29
  int v33; // edi@31
  int v34; // edx@31
  int v35; // eax@31
  int v36; // ebx@31
  int v37; // ecx@32
  int v38; // esi@32
  int v39; // esi@35
  int v40; // ST3C_4@36
  int v41; // edx@36
  int v42; // ecx@36
  unsigned int v43; // eax@41
  int v44; // edi@41
  signed __int64 v45; // rax@41
  int v46; // esi@42
  int v47; // edi@42
  int v48; // ebx@42
  signed __int64 v49; // rax@42
  signed __int64 v50; // rax@42
  int v51; // [sp+2Ch] [bp-40h]@5
  int v52; // [sp+30h] [bp-3Ch]@2
  int v53; // [sp+34h] [bp-38h]@5
  int v54; // [sp+38h] [bp-34h]@5
  int i; // [sp+38h] [bp-34h]@29
  int v56; // [sp+3Ch] [bp-30h]@39
  int v57; // [sp+40h] [bp-2Ch]@4
  int v58; // [sp+44h] [bp-28h]@29
  int v59; // [sp+48h] [bp-24h]@4

  v5 = a2;
  v6 = a1;
  if ( a3 == 1 )
  {
    v7 = *(_DWORD *)(a2 + 16);
    v52 = *(_DWORD *)(a2 + 12);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 8);
    v52 = *(_DWORD *)(a2 + 4);
  }
  *(_DWORD *)(a1 + 48) = v7;
  *(_DWORD *)(a1 + 52) = 2147483648;
  *(_DWORD *)(a1 + 56) = 0;
  v8 = *(_DWORD *)(a2 + 24);
  v9 = a2 + 1468 * a3;
  *(_DWORD *)(a1 + 44) = v52;
  v59 = *(_DWORD *)(v9 + 52);
  v10 = *(_DWORD *)(v9 + 44);
  v11 = *(_DWORD *)(a2 + 28);
  v57 = v10;
  v12 = v10 == 0;
  v13 = v10 < 0;
  *a4 = v52;
  result = (signed int)a5;
  *a5 = v7;
  if ( !v13 && !v12 )
  {
    v54 = v11;
    v51 = *(_WORD *)(v11 + 12);
    v53 = *(_WORD *)(v11 + 12);
    result = 1;
    while ( result < v8 )
    {
      v15 = *(_WORD *)(v54 + 40 * result + 12);
      v16 = v51;
      if ( v51 > v15 )
        v16 = *(_WORD *)(v54 + 40 * result + 12);
      if ( v53 >= v15 )
        v15 = v53;
      v51 = v16;
      ++result;
      v53 = v15;
    }
    if ( v51 < v53 )
    {
      v17 = (unsigned int)(((signed int)((unsigned __int64)(v52 * (signed __int64)v51) >> 32) >> 31) + 0x8000)
          + v52 * (signed __int64)v51;
      v18 = v7 + (HIDWORD(v17) << 16) + ((unsigned int)v17 >> 16);
      *(_DWORD *)v6 = v18;
      v19 = (unsigned int)(((signed int)((unsigned __int64)(v52 * (signed __int64)v53) >> 32) >> 31) + 0x8000)
          + v52 * (signed __int64)v53;
      v20 = v7 + (HIDWORD(v19) << 16) + ((unsigned int)v19 >> 16);
      v21 = v18 & 0xFFFFFFE0;
      *(_DWORD *)(v6 + 8) = v18 & 0xFFFFFFC0;
      *(_DWORD *)(v6 + 4) = v20;
      *(_DWORD *)(v6 + 16) = v18 & 0xFFFFFFE0;
      *(_DWORD *)(v6 + 24) = v20 & 0xFFFFFFE0;
      *(_DWORD *)(v6 + 12) = (v20 + 63) & 0xFFFFFFC0;
      HIDWORD(v19) = (v18 & 0xFFFFFFE0) + 32;
      v22 = __OFSUB__(v20, HIDWORD(v19));
      v13 = ((v20 - HIDWORD(v19)) & 0x80000000) != 0;
      *(_DWORD *)(v6 + 20) = HIDWORD(v19);
      v23 = (v20 & 0xFFFFFFE0) + 32;
      *(_DWORD *)(v6 + 28) = v23;
      if ( v13 ^ v22 )
        *(_DWORD *)(v6 + 20) = v20;
      if ( v18 > (signed int)(v20 & 0xFFFFFFE0) )
        *(_DWORD *)(v6 + 24) = v18;
      v24 = v20 - v18;
      *(_DWORD *)(v6 + 32) = v20 - v18;
      if ( (signed int)(v20 - v18) <= 64 )
      {
        *(_DWORD *)(v6 + 20) = v18;
        *(_DWORD *)(v6 + 24) = v20;
      }
      v25 = *(_DWORD *)(v6 + 24) - *(_DWORD *)(v6 + 20);
      v26 = v23 - v21;
      *(_DWORD *)(v6 + 40) = v26;
      v27 = 16;
      *(_DWORD *)(v6 + 36) = v25;
      if ( v24 <= 128 )
      {
        v28 = v24 < 96;
        LOBYTE(v28) = v24 > 96;
        v27 = 4 * v28 + 4;
      }
      if ( v25 < v24 - v27 )
        *(_DWORD *)(v6 + 36) = v24 - v27;
      v29 = v24 + v27;
      if ( v26 > v29 )
        *(_DWORD *)(v6 + 40) = v29;
      v30 = 3 * v24 / 4;
      if ( *(_DWORD *)(v6 + 36) < v30 )
        *(_DWORD *)(v6 + 36) = v30;
      v31 = 5 * v24 / 4;
      if ( *(_DWORD *)(v6 + 40) > v31 )
        *(_DWORD *)(v6 + 40) = v31;
      v58 = v5;
      v32 = v6;
      for ( i = *(_DWORD *)(v6 + 36); ; ++i )
      {
        if ( i > *(_DWORD *)(v32 + 40) )
        {
          v46 = *(_DWORD *)(v32 + 44);
          v47 = *(_DWORD *)(v32 + 48);
          v48 = *(_DWORD *)(v32 + 44) - v52;
          v49 = (unsigned int)(((signed int)((unsigned __int64)(v48 * (signed __int64)v51) >> 32) >> 31) + 0x8000)
              + v48 * (signed __int64)v51;
          *(_DWORD *)(v58 + 2992) = v47 + (HIDWORD(v49) << 16) + ((unsigned int)v49 >> 16);
          v50 = (unsigned int)(((signed int)((unsigned __int64)(v48 * (signed __int64)v53) >> 32) >> 31) + 0x8000)
              + v48 * (signed __int64)v53;
          *(_DWORD *)(v58 + 2996) = (HIDWORD(v50) << 16) + ((unsigned int)v50 >> 16) + v47;
          *a4 = v46;
          result = (signed int)a5;
          *a5 = v47;
          return result;
        }
        v33 = *(_DWORD *)(v32 + 32);
        v34 = *(_DWORD *)v32;
        v35 = *(_DWORD *)(v32 + 4);
        v36 = *(_DWORD *)v32 + *(_DWORD *)(v32 + 32) - i;
        if ( i < v33 )
        {
          v37 = *(_DWORD *)(v32 + 20);
          v38 = *(_DWORD *)(v32 + 4);
          if ( v36 <= v37 )
            goto LABEL_36;
        }
        else
        {
          v37 = *(_DWORD *)(v32 + 16);
          v38 = *(_DWORD *)(v32 + 4);
          if ( v36 >= v37 )
            goto LABEL_36;
        }
        v39 = v37 - v36;
        v36 = v37;
        v38 = v35 + v39;
LABEL_36:
        v40 = v34 - v36;
        v22 = __OFSUB__(v36, v34);
        v13 = v36 - v34 < 0;
        v41 = v36 - v34;
        v42 = v40;
        if ( !(v13 ^ v22) )
          v42 = v41;
        if ( v38 >= v35 )
          v56 = v42 + v38 - v35;
        else
          v56 = v42 + v35 - v38;
        v43 = sub_6F7C9760(i - v33, v53 - v51);
        v44 = v43 + v52;
        v45 = (unsigned int)(((signed int)((unsigned __int64)((signed int)(v43 + v52) * (signed __int64)v51) >> 32) >> 31)
                           + 0x8000)
            + (signed int)(v43 + v52) * (signed __int64)v51;
        sub_6F9696A5(v32, v44, v36 - ((HIDWORD(v45) << 16) + ((unsigned int)v45 >> 16)), v36, v38, 10 * v56, v59, v57);
      }
    }
  }
  return result;
}
