signed int __usercall sub_6F7C1E80@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // edi@1
  int v3; // ecx@1
  int v4; // ebx@1
  int v5; // eax@1
  unsigned int v6; // ebp@1
  int v7; // ebx@1
  int v8; // edx@1
  unsigned int v9; // eax@2
  signed int v10; // edx@2
  signed __int64 v11; // rax@3
  signed int v12; // eax@3
  signed int v13; // eax@7
  int v14; // edx@10
  int v15; // ecx@10
  int v16; // ebx@11
  int v17; // edi@11
  signed int result; // eax@15
  int v19; // edx@16
  int v20; // edi@16
  int v21; // ebx@16
  int v22; // eax@16
  signed __int64 v23; // rax@16
  int v24; // eax@18
  unsigned int v25; // ebp@18
  unsigned int v26; // edx@18
  int v27; // ecx@19
  int v28; // eax@19
  int v29; // eax@22
  int v30; // ecx@23
  int v31; // esi@24
  bool v32; // dl@24
  int v33; // ebx@26
  int v34; // edi@28
  int v35; // ecx@28
  int v36; // edi@28
  char v37; // [sp+10h] [bp-5Ch]@10
  signed int v38; // [sp+10h] [bp-5Ch]@26
  unsigned int v39; // [sp+14h] [bp-58h]@1
  int v40; // [sp+14h] [bp-58h]@22
  signed int v41; // [sp+18h] [bp-54h]@2
  int v42; // [sp+18h] [bp-54h]@22
  unsigned int v43; // [sp+1Ch] [bp-50h]@11
  int v44; // [sp+1Ch] [bp-50h]@22
  unsigned int v45; // [sp+20h] [bp-4Ch]@18
  int v46; // [sp+24h] [bp-48h]@6
  signed int v47; // [sp+28h] [bp-44h]@5
  int v48; // [sp+2Ch] [bp-40h]@1
  int v49; // [sp+30h] [bp-3Ch]@1
  int v50; // [sp+34h] [bp-38h]@1
  signed int v51; // [sp+38h] [bp-34h]@2
  int v52; // [sp+3Ch] [bp-30h]@1
  int v53; // [sp+4Ch] [bp-20h]@15

  v2 = a1;
  v3 = a2;
  v52 = a1;
  v50 = a2;
  v4 = a1 + 1468 * a2 + 44;
  v5 = a1 + 1468 * a2;
  v6 = *(_DWORD *)(v5 + 52);
  v48 = v4;
  v49 = *(_DWORD *)v2;
  v7 = *(_DWORD *)(v2 + 2988);
  v8 = 48 * *(_DWORD *)(v5 + 44);
  *(_DWORD *)(v5 + 56) = 0;
  v39 = v6 + v8;
  if ( v3 )
  {
    v41 = 0;
    v51 = *(_DWORD *)(v2 + 12);
    v10 = *(_DWORD *)(v2 + 12);
  }
  else
  {
    v51 = *(_DWORD *)(v2 + 4);
    v9 = sub_6F7C9760(64, *(_DWORD *)(v2 + 12));
    v10 = v51;
    v41 = v9;
  }
  v11 = v10 * (signed __int64)*(_DWORD *)(v7 + 1572 * v50 + 248);
  v12 = (((unsigned __int64)(unsigned int)((SHIDWORD(v11) >> 31) + 0x8000) + v11) >> 32 << 16)
      + ((unsigned int)((SHIDWORD(v11) >> 31) + 0x8000 + v11) >> 16);
  if ( v12 > 16 )
    v12 = 16;
  v47 = sub_6F7C9760(v12, v51);
  if ( v6 < v39 )
  {
    v46 = v52 + 1468 * v50;
    do
    {
      while ( 1 )
      {
        v13 = *(_WORD *)(v6 + 8);
        if ( v41 <= v13 && (!*(_DWORD *)(v6 + 24) || 2 * v13 >= 3 * v41) )
          break;
LABEL_17:
        v6 += 48;
        if ( v39 <= v6 )
          goto LABEL_18;
      }
      v14 = *(_WORD *)(v6 + 2);
      v15 = *(_DWORD *)(v46 + 56);
      v37 = *(_BYTE *)(v6 + 1);
      if ( v15 <= 0 )
      {
LABEL_15:
        result = sub_6F7C1C40(v48, v14, v37, v49, (unsigned int *)&v53);
        if ( result )
          return result;
        v19 = v53;
        v20 = v53 + 4;
        *(_DWORD *)v53 = 0;
        *(_DWORD *)(v19 + 44) = 0;
        memset((void *)(v20 & 0xFFFFFFFC), 0, 4 * ((v19 - (v20 & 0xFFFFFFFC) + 48) >> 2));
        v21 = v53;
        *(_DWORD *)(v53 + 40) = v6;
        *(_DWORD *)(v21 + 44) = v6;
        *(_BYTE *)(v21 + 13) = *(_BYTE *)(v6 + 1);
        v22 = *(_WORD *)(v6 + 2);
        *(_WORD *)v21 = v22;
        v23 = (unsigned int)(((signed int)((unsigned __int64)(v51 * (signed __int64)v22) >> 32) >> 31) + 0x8000)
            + v51 * (signed __int64)v22;
        LODWORD(v23) = (HIDWORD(v23) << 16) + ((unsigned int)v23 >> 16);
        *(_DWORD *)(v21 + 4) = v23;
        *(_DWORD *)(v21 + 8) = v23;
        *(_DWORD *)(v6 + 16) = v6;
        goto LABEL_17;
      }
      v43 = v6;
      v16 = *(_DWORD *)(v46 + 64);
      v17 = 0;
      while ( v47 <= (((v14 - *(_WORD *)v16) >> 31) ^ (v14 - *(_WORD *)v16)) - ((v14 - *(_WORD *)v16) >> 31)
           || *(_BYTE *)(v16 + 13) != v37 )
      {
        ++v17;
        v16 += 48;
        if ( v15 == v17 )
          goto LABEL_15;
      }
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v16 + 40);
      *(_DWORD *)(*(_DWORD *)(v16 + 44) + 16) = v6;
      *(_DWORD *)(v16 + 44) = v6;
      v6 += 48;
    }
    while ( v39 > v43 + 48 );
  }
LABEL_18:
  v24 = v52 + 1468 * v50;
  v25 = *(_DWORD *)(v24 + 64);
  v26 = v25;
  v45 = v25 + 48 * *(_DWORD *)(v24 + 56);
  if ( v25 >= v45 )
    return 0;
  do
  {
    v27 = *(_DWORD *)(v26 + 40);
    v28 = *(_DWORD *)(v26 + 40);
    if ( v27 )
    {
      do
      {
        *(_DWORD *)(v28 + 12) = v26;
        v28 = *(_DWORD *)(v28 + 16);
      }
      while ( v27 != v28 );
    }
    v26 += 48;
  }
  while ( v45 > v26 );
  do
  {
    v29 = *(_DWORD *)(v25 + 40);
    v44 = 0;
    v42 = 0;
    v40 = *(_DWORD *)(v25 + 40);
    do
    {
      while ( 1 )
      {
        if ( *(_BYTE *)v29 & 1 )
        {
          v30 = *(_DWORD *)(v29 + 24);
          ++v42;
          if ( !v30 )
            goto LABEL_35;
        }
        else
        {
          v30 = *(_DWORD *)(v29 + 24);
          ++v44;
          if ( !v30 )
          {
LABEL_35:
            v31 = *(_DWORD *)(v29 + 20);
            if ( !v31 || !*(_DWORD *)(v31 + 12) )
              goto LABEL_32;
            v33 = *(_DWORD *)(v25 + 24);
            v38 = 0;
            goto LABEL_27;
          }
        }
        v31 = *(_DWORD *)(v29 + 20);
        v32 = *(_DWORD *)(v30 + 12) != 0 && v25 != *(_DWORD *)(v30 + 12);
        if ( !v31 || !*(_DWORD *)(v31 + 12) )
        {
          if ( !v32 )
            goto LABEL_32;
LABEL_39:
          v33 = *(_DWORD *)(v25 + 28);
          v31 = v30;
          v38 = 1;
          goto LABEL_27;
        }
        v33 = *(_DWORD *)(v25 + 24);
        v38 = 0;
        if ( v32 )
          goto LABEL_39;
LABEL_27:
        if ( !v33
          || (v34 = (*(_WORD *)v25 - (signed int)*(_WORD *)v33) >> 31,
              v35 = (v34 ^ (*(_WORD *)v25 - *(_WORD *)v33)) - v34,
              v36 = (*(_WORD *)(v29 + 2) - (signed int)*(_WORD *)(v31 + 2)) >> 31,
              v35 > (v36 ^ (*(_WORD *)(v29 + 2) - (signed int)*(_WORD *)(v31 + 2))) - v36) )
        {
          v33 = *(_DWORD *)(v31 + 12);
        }
        if ( !v38 )
          break;
        *(_DWORD *)(v25 + 28) = v33;
        *(_BYTE *)(v33 + 12) |= 2u;
LABEL_32:
        v29 = *(_DWORD *)(v29 + 16);
        if ( v40 == v29 )
          goto LABEL_41;
      }
      *(_DWORD *)(v25 + 24) = v33;
      v29 = *(_DWORD *)(v29 + 16);
    }
    while ( v40 != v29 );
LABEL_41:
    *(_BYTE *)(v25 + 12) = v42 > 0 && v42 >= v44;
    if ( *(_DWORD *)(v25 + 28) )
    {
      if ( *(_DWORD *)(v25 + 24) )
        *(_DWORD *)(v25 + 28) = 0;
    }
    v25 += 48;
  }
  while ( v45 > v25 );
  return 0;
}
