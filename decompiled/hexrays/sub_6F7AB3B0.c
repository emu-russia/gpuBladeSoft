signed int __cdecl sub_6F7AB3B0(int a1)
{
  int v1; // esi@1
  int v2; // edi@1
  int v3; // ebx@1
  signed int result; // eax@4
  int v5; // eax@6
  bool v6; // zf@7
  _WORD *v7; // ecx@9
  signed __int16 v8; // di@10
  unsigned __int16 *v9; // edx@11
  int v10; // eax@12
  int v11; // eax@17
  int v12; // esi@17
  int v13; // edx@20
  char *v14; // edx@22
  char *v15; // ecx@22
  unsigned int v16; // ebx@22
  char *v17; // esi@23
  char *v18; // ecx@24
  char v19; // al@25
  char *v20; // edi@25
  int v21; // ebx@31
  int v22; // esi@31
  unsigned int v23; // edi@33
  char *v24; // ecx@34
  int v25; // esi@34
  int v26; // eax@36
  char v27; // bl@39
  int v28; // edx@52
  unsigned int v29; // ecx@54
  int v30; // edi@56
  unsigned int v31; // ecx@56
  int v32; // ST34_4@57
  void *v33; // eax@57
  unsigned int v34; // edi@59
  char *v35; // esi@59
  bool v36; // cf@59
  int v37; // eax@62
  char v38; // cl@65
  unsigned __int16 v39; // cx@75
  unsigned int v40; // [sp+24h] [bp-48h]@1
  __int16 v41; // [sp+2Ah] [bp-42h]@1
  unsigned __int16 v42; // [sp+2Ch] [bp-40h]@7
  int v43; // [sp+2Ch] [bp-40h]@17
  unsigned int v44; // [sp+30h] [bp-3Ch]@7
  const void *v45; // [sp+30h] [bp-3Ch]@19
  int v46; // [sp+30h] [bp-3Ch]@22
  unsigned int v47; // [sp+30h] [bp-3Ch]@33
  int v48; // [sp+30h] [bp-3Ch]@60
  int v49; // [sp+34h] [bp-38h]@10
  unsigned __int16 *v50; // [sp+34h] [bp-38h]@15
  int v51; // [sp+34h] [bp-38h]@22
  int v52; // [sp+34h] [bp-38h]@33
  unsigned int v53; // [sp+34h] [bp-38h]@59
  int v54; // [sp+34h] [bp-38h]@70
  int v55; // [sp+38h] [bp-34h]@19
  int v56; // [sp+38h] [bp-34h]@34
  int v57; // [sp+38h] [bp-34h]@70
  int v58; // [sp+3Ch] [bp-30h]@51
  int v59; // [sp+4Ch] [bp-20h]@70

  v1 = *(_WORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 200);
  v3 = *(_DWORD *)(a1 + 12);
  v40 = *(_DWORD *)(a1 + 204);
  v41 = *(_WORD *)(a1 + 32);
  if ( *(_WORD *)(a1 + 32) )
  {
    if ( (unsigned int)(v1 + *(_WORD *)(v3 + 20) + *(_WORD *)(v3 + 56)) > *(_DWORD *)(v3 + 8) )
    {
      result = sub_6F7CA4F0(v3, 0, v1);
      if ( result )
        return result;
    }
    if ( v1 > 4094 )
      return 20;
    v5 = *(_DWORD *)(v3 + 68);
    v44 = v5 + 2 * v1;
    if ( v40 < v2 + 2 * v1 + 2 )
      return 20;
    v39 = _byteswap_ushort(*(_WORD *)v2);
    v42 = _byteswap_ushort(*(_WORD *)v2);
    if ( v1 > 0 )
      *(_WORD *)v5 = v39;
  }
  else
  {
    v5 = *(_DWORD *)(v3 + 68);
    if ( v40 < v2 + 2 )
      return 20;
    v44 = *(_DWORD *)(v3 + 68);
    v6 = ((*(_BYTE *)v2 << 8) | *(_BYTE *)(v2 + 1)) == 0;
    v42 = _byteswap_ushort(*(_WORD *)v2);
  }
  if ( (v42 & 0x8000u) != 0 )
    return 20;
  v7 = (_WORD *)(v5 + 2);
  if ( v5 + 2 >= v44 )
  {
    v50 = (unsigned __int16 *)(v2 + 2);
  }
  else
  {
    v49 = v2 + 4;
    v8 = _byteswap_ushort(*(_WORD *)(v2 + 2));
    *(_WORD *)(v5 + 2) = v8;
    if ( v8 <= (signed __int16)v42 )
      return 20;
    v9 = (unsigned __int16 *)v49;
    while ( 1 )
    {
      ++v7;
      if ( (unsigned int)v7 >= v44 )
        break;
      ++v9;
      v10 = *((_BYTE *)v9 - 1) | (*((_BYTE *)v9 - 2) << 8);
      *v7 = v10;
      if ( (signed __int16)v10 <= v8 )
        return 20;
      v8 = v10;
    }
    v50 = v9;
  }
  if ( v1 <= 0 )
  {
    v12 = 0;
    v43 = 0;
  }
  else
  {
    v11 = *(v7 - 1);
    v43 = v11 + 1;
    v12 = v11 + 1;
    if ( v11 + 1 < 0 )
      return 20;
  }
  if ( (unsigned int)(v12 + *(_WORD *)(v3 + 22) + *(_WORD *)(v3 + 58) + 4) > *(_DWORD *)(v3 + 4) )
  {
    result = sub_6F7CA4F0(v3, v43 + 4, 0);
    if ( result )
      return result;
  }
  v55 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v55 + 140) = 0;
  *(_DWORD *)(v55 + 136) = 0;
  v45 = v50 + 1;
  if ( v40 < (unsigned int)(v50 + 1) )
    return 20;
  v13 = _byteswap_ushort(*v50);
  result = 22;
  if ( (signed int)(v40 - (_DWORD)v45) < v13 )
    return result;
  if ( !(*(_BYTE *)(a1 + 16) & 2) )
  {
    v30 = *(_DWORD *)(a1 + 160);
    v31 = *(_DWORD *)(v30 + 388);
    if ( v31 < v13 )
    {
      v54 = *(_DWORD *)(v30 + 388);
      v57 = v13;
      *(_DWORD *)(v30 + 392) = sub_6F773B30(*(_DWORD *)(v30 + 8), 1, v31, v13, *(char **)(v30 + 392), &v59);
      result = v59;
      if ( v59 )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 160) + 388) = v54;
        return result;
      }
      v13 = v57;
      v30 = *(_DWORD *)(a1 + 160);
      LOWORD(v31) = v57;
      v55 = *(_DWORD *)(a1 + 8);
    }
    v32 = v13;
    *(_DWORD *)(v30 + 388) = (unsigned __int16)v31;
    v33 = *(void **)(v30 + 392);
    *(_DWORD *)(v55 + 140) = v13;
    *(_DWORD *)(v55 + 136) = v33;
    memcpy(v33, v45, v13);
    v13 = v32;
  }
  v14 = (char *)v45 + v13;
  v51 = v12;
  v46 = v3;
  v15 = *(char **)(v3 + 64);
  v16 = (unsigned int)&v15[v12];
  while ( 1 )
  {
    v17 = v15;
    if ( (unsigned int)v15 >= v16 )
      break;
    v18 = v14 + 1;
    if ( v40 < (unsigned int)(v14 + 1) )
      return 20;
    v19 = *v14;
    v20 = v17 + 1;
    *v17 = *v14;
    if ( !(v19 & 8) )
    {
      while ( 1 )
      {
        if ( (char *)v16 == v20 )
        {
          v21 = v46;
          v22 = v51;
          v14 = v18;
          goto LABEL_32;
        }
        if ( v18 + 1 == (char *)(v40 + 1) )
          return 20;
        v19 = *v18;
        *(++v20 - 1) = *v18;
        if ( v19 & 8 )
          break;
        ++v18;
      }
      v14 = v18;
    }
    v58 = (int)(v14 + 2);
    if ( v40 < (unsigned int)(v14 + 2) )
      return 20;
    v28 = (unsigned __int8)v14[1];
    if ( v16 < (unsigned int)&v20[v28] )
      return 20;
    if ( (_BYTE)v28 )
    {
      v29 = (unsigned __int8)(v28 - 1) + 1;
      memset(v20, v19, v29);
      v20 += v29;
    }
    v15 = v20;
    v14 = (char *)v58;
  }
  v21 = v46;
  v22 = v51;
LABEL_32:
  if ( v40 < (unsigned int)v14 )
    return 20;
  v23 = *(_DWORD *)(v21 + 60);
  v52 = 8 * v22;
  v47 = v23 + 8 * v22;
  if ( v23 < v23 + 8 * v22 )
  {
    v24 = *(char **)(v21 + 64);
    v25 = 0;
    v56 = v21;
    do
    {
      v27 = *v24;
      if ( *v24 & 2 )
      {
        if ( v40 < (unsigned int)(v14 + 1) )
          return 20;
        v26 = (unsigned __int8)*v14++;
        if ( !(v27 & 0x10) )
          v26 = -v26;
      }
      else if ( v27 & 0x10 )
      {
        v26 = 0;
      }
      else
      {
        if ( v40 < (unsigned int)(v14 + 2) )
          return 20;
        v26 = (unsigned __int8)v14[1] | ((unsigned __int8)*v14 << 8);
        v14 += 2;
        v26 = (signed __int16)v26;
      }
      v25 += v26;
      v23 += 8;
      *(_DWORD *)(v23 - 8) = v25;
      *(++v24 - 1) = v27 & 0xED;
    }
    while ( v47 > v23 );
    v21 = v56;
  }
  v34 = *(_DWORD *)(v21 + 60);
  v35 = *(char **)(v21 + 64);
  v36 = v34 < v34 + v52;
  v53 = v34 + v52;
  if ( v36 )
  {
    v48 = 0;
    do
    {
      v38 = *v35;
      if ( *v35 & 4 )
      {
        if ( v40 < (unsigned int)(v14 + 1) )
          return 20;
        v37 = (unsigned __int8)*v14++;
        if ( !(v38 & 0x20) )
          v37 = -v37;
      }
      else if ( v38 & 0x20 )
      {
        v37 = 0;
      }
      else
      {
        if ( v40 < (unsigned int)(v14 + 2) )
          return 20;
        v37 = (unsigned __int8)v14[1] | ((unsigned __int8)*v14 << 8);
        v14 += 2;
        v37 = (signed __int16)v37;
      }
      v48 += v37;
      v34 += 8;
      ++v35;
      *(_DWORD *)(v34 - 4) = v48;
      *(v35 - 1) = v38 & 1;
    }
    while ( v53 > v34 );
  }
  *(_WORD *)(v21 + 58) = v43;
  *(_WORD *)(v21 + 56) = v41;
  *(_DWORD *)(a1 + 200) = v14;
  return 0;
}
