int __usercall sub_6F967718@<eax>(int *a1@<eax>, char **a2@<edx>, char **a3@<ecx>)
{
  int *v3; // ebp@1
  int v4; // eax@1
  int v5; // eax@1
  int v6; // eax@2
  int v7; // esi@4
  int v8; // edi@4
  unsigned __int8 v9; // bl@5
  signed int v10; // edi@5
  char *v11; // eax@5
  bool v12; // zf@5
  unsigned int v13; // edi@7
  unsigned int v14; // eax@8
  int v15; // ecx@8
  unsigned int v16; // edi@8
  int v17; // edx@12
  __int16 v18; // dx@15
  __int16 v19; // bx@15
  int v20; // edx@17
  unsigned int v21; // edx@19
  char *v22; // edx@26
  char *v23; // eax@29
  unsigned int v24; // ebx@29
  unsigned int v25; // esi@31
  unsigned int v26; // eax@33
  int v27; // ecx@39
  char **v29; // [sp+28h] [bp-44h]@1
  int v30; // [sp+2Ch] [bp-40h]@1
  int v31; // [sp+2Ch] [bp-40h]@29
  int v32; // [sp+30h] [bp-3Ch]@4
  char *v33; // [sp+30h] [bp-3Ch]@24
  int v34; // [sp+34h] [bp-38h]@29
  char **v35; // [sp+3Ch] [bp-30h]@1
  int v36; // [sp+48h] [bp-24h]@1
  int v37; // [sp+4Ch] [bp-20h]@4

  v3 = a1;
  v4 = *a1;
  v35 = a2;
  v29 = a3;
  v36 = 0;
  v5 = *(_DWORD *)(v4 + 28);
  *a2 = 0;
  v30 = v5;
  if ( !v3[6] )
  {
    v7 = *v3;
    v8 = v3[2];
    v37 = 0;
    v32 = *(_DWORD *)(v7 + 28);
    if ( v8 )
    {
      v9 = *((_BYTE *)v3 + 12);
      v10 = v8 + 1;
      v11 = sub_6F773B30(v32, 4, 0, v10, 0, &v37);
      v12 = v37 == 0;
      v3[6] = (int)v11;
      if ( !v12 || (v37 = sub_6F771FF0(v7, v3[1] + 3)) != 0 || (v13 = v9 * v10, (v37 = sub_6F772380(v7, v13)) != 0) )
      {
LABEL_21:
        sub_6F773D90(v32, v3[6]);
        v3[6] = 0;
LABEL_22:
        v36 = v37;
        if ( v37 )
          return v36;
        goto LABEL_2;
      }
      v14 = *(_DWORD *)(v7 + 32);
      v15 = v3[6];
      v16 = v14 + v13;
      switch ( v9 )
      {
        case 2u:
          while ( v16 > v14 )
          {
            v18 = *(_BYTE *)v14;
            v19 = *(_BYTE *)(v14 + 1);
            v15 += 4;
            v14 += 2;
            *(_DWORD *)(v15 - 4) = (unsigned __int16)(v19 | (v18 << 8));
          }
          break;
        case 3u:
          while ( v16 > v14 )
          {
            v20 = *(_BYTE *)v14;
            v15 += 4;
            v14 += 3;
            *(_DWORD *)(v15 - 4) = *(_BYTE *)(v14 - 1) | (v20 << 16) | (*(_BYTE *)(v14 - 2) << 8);
          }
          break;
        case 1u:
          while ( v16 > v14 )
          {
            v17 = *(_BYTE *)v14;
            v15 += 4;
            ++v14;
            *(_DWORD *)(v15 - 4) = v17;
          }
          break;
        default:
          while ( v16 > v14 )
          {
            v21 = *(_DWORD *)v14;
            v15 += 4;
            v14 += 4;
            *(_DWORD *)(v15 - 4) = _byteswap_ulong(v21);
          }
          break;
      }
      sub_6F772460(v7);
    }
    if ( !v37 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_2:
  v6 = v3[2];
  if ( !v6 )
    return v36;
  v33 = sub_6F773B30(v30, 4, 0, v6 + 1, 0, &v36);
  if ( v36 )
    return v36;
  if ( v29 )
  {
    v22 = (char *)sub_6F773A50(v30, v3[5] + v3[2], &v36);
    if ( v36 )
      return v36;
  }
  else
  {
    v22 = 0;
  }
  v23 = (char *)v3[7];
  v24 = 1;
  v31 = 0;
  v34 = v3[7];
  if ( v29 )
    v23 = v22;
  v25 = 0;
  *(_DWORD *)v33 = v23;
  while ( v24 <= v3[2] )
  {
    v26 = *(_DWORD *)(v3[6] + 4 * v24) - 1;
    if ( v25 > v26 )
    {
      if ( !v29 )
        goto LABEL_38;
      *(_DWORD *)&v33[4 * v24] = &v22[v25] + v31;
      v26 = v25;
    }
    else
    {
      if ( v26 > v3[5] )
        v26 = v3[5];
      if ( !v29 )
      {
        v25 = v26;
LABEL_38:
        *(_DWORD *)&v33[4 * v24] = v25 + v34;
        v26 = v25;
        goto LABEL_41;
      }
      v27 = (int)(&v22[v26] + v31);
      *(_DWORD *)&v33[4 * v24] = v27;
      if ( v25 != v26 )
      {
        ++v31;
        qmemcpy(*(void **)&v33[4 * v24 - 4], (const void *)(v34 + v25), v27 - *(_DWORD *)&v33[4 * v24 - 4]);
        *(_BYTE *)(*(_DWORD *)&v33[4 * v24])++ = 0;
      }
    }
LABEL_41:
    ++v24;
    v25 = v26;
  }
  *v35 = v33;
  if ( v29 )
    *v29 = v22;
  return v36;
}
