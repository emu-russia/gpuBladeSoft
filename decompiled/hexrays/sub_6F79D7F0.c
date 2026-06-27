int __usercall sub_6F79D7F0@<eax>(int a1@<eax>, unsigned int *a2@<edx>, char a3@<cl>)
{
  int v3; // ebp@1
  int v4; // ebx@1
  unsigned int v5; // ebx@4
  unsigned int v6; // esi@4
  unsigned int v7; // edx@7
  _BYTE *v8; // ecx@7
  __int16 v9; // di@7
  unsigned __int16 *v10; // ecx@7
  unsigned int v11; // edi@7
  int v12; // eax@7
  int v13; // ebx@9
  int result; // eax@10
  signed int v15; // esi@14
  unsigned int v16; // eax@14
  int v17; // ebx@23
  int v18; // edi@23
  int v19; // ebx@23
  int v20; // edi@35
  int v21; // esi@35
  int v22; // ecx@35
  int v23; // ST14_4@36
  int v24; // edi@36
  int v25; // ecx@36
  int v26; // ebx@36
  __int16 v27; // ax@37
  __int16 v28; // bp@37
  unsigned int v29; // eax@37
  unsigned int v30; // eax@39
  _BYTE *v31; // edx@44
  __int16 v32; // ax@44
  int v33; // edx@44
  __int16 v34; // cx@44
  __int16 v35; // ax@44
  int v36; // edx@44
  int v37; // ebx@44
  signed int v38; // esi@44
  int v39; // ebx@47
  __int16 v40; // ax@47
  __int16 v41; // cx@47
  __int16 v42; // ax@47
  signed int v43; // edx@52
  unsigned int v44; // eax@57
  int v45; // esi@61
  unsigned __int16 *v46; // edi@61
  unsigned __int16 v47; // ax@61
  int v48; // ebx@62
  int v49; // ST14_4@62
  _BYTE *v50; // edi@62
  int v51; // ebp@62
  _BYTE *v52; // ecx@62
  unsigned int v53; // edx@63
  int v54; // eax@63
  unsigned int v55; // eax@65
  unsigned int v56; // [sp+0h] [bp-5Ch]@2
  unsigned int v57; // [sp+4h] [bp-58h]@30
  int v58; // [sp+8h] [bp-54h]@4
  unsigned int v59; // [sp+Ch] [bp-50h]@1
  unsigned int v60; // [sp+10h] [bp-4Ch]@2
  int v61; // [sp+14h] [bp-48h]@23
  signed int v62; // [sp+18h] [bp-44h]@23
  unsigned int v63; // [sp+18h] [bp-44h]@62
  unsigned __int16 v64; // [sp+1Ch] [bp-40h]@23
  __int16 v65; // [sp+1Ch] [bp-40h]@63
  int v66; // [sp+20h] [bp-3Ch]@2
  unsigned int v67; // [sp+24h] [bp-38h]@35
  char v68; // [sp+28h] [bp-34h]@2
  unsigned int v69; // [sp+2Ch] [bp-30h]@9
  int v70; // [sp+30h] [bp-2Ch]@36
  unsigned __int8 v71; // [sp+30h] [bp-2Ch]@65
  unsigned __int16 v72; // [sp+34h] [bp-28h]@65
  int v73; // [sp+38h] [bp-24h]@39
  int v74; // [sp+38h] [bp-24h]@62
  int v75; // [sp+3Ch] [bp-20h]@36
  unsigned int *v76; // [sp+40h] [bp-1Ch]@2
  int v77; // [sp+44h] [bp-18h]@30
  unsigned int v78; // [sp+44h] [bp-18h]@62
  int v79; // [sp+48h] [bp-14h]@62

  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_BYTE *)(v3 + 7) | (*(_BYTE *)(v3 + 6) << 8);
  v59 = _byteswap_ushort(*(_WORD *)(v3 + 6)) & 0xFFFE;
  if ( !v59 )
    return 0;
  v66 = a1;
  v68 = a3;
  v76 = a2;
  v56 = *a2;
  v60 = v59 >> 1;
  if ( !a3 )
  {
    if ( v60 )
      goto LABEL_4;
    return 0;
  }
  v56 = *a2 + 1;
  if ( !(v59 >> 1) )
  {
    v7 = 0;
    v13 = 0;
    v69 = 0xFFFF;
LABEL_11:
    if ( v56 > v69 && v60 == ++v7 )
      return 0;
    if ( sub_6F79D3B0(v66, v7) )
    {
      result = 0;
      if ( v13 )
      {
        *v76 = v56;
        result = v13;
      }
      return result;
    }
    v15 = v66;
    v16 = v56;
    *(_DWORD *)(v66 + 24) = v56;
    if ( v13 )
    {
      *(_DWORD *)(v66 + 28) = v13;
    }
    else
    {
LABEL_54:
      sub_6F79D520(v15);
      v13 = *(_DWORD *)(v15 + 28);
      if ( !v13 )
        return 0;
      v16 = *(_DWORD *)(v66 + 24);
    }
    *v76 = v16;
    return v13;
  }
LABEL_4:
  v5 = v59 >> 1;
  v6 = 0;
  v58 = v59 + 2;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (v5 + v6) >> 1;
      v8 = (_BYTE *)(v3 + 2 * v7 + 14);
      v9 = *v8;
      v10 = (unsigned __int16 *)&v8[v58];
      v11 = (unsigned __int16)(*(_BYTE *)(v3 + 2 * v7 + 15) | (unsigned __int16)(v9 << 8));
      v12 = _byteswap_ushort(*v10);
      if ( (unsigned __int16)v12 <= v56 )
        break;
      v5 = (v5 + v6) >> 1;
      if ( v6 >= v7 )
      {
LABEL_9:
        v69 = v11;
        v13 = 0;
        goto LABEL_10;
      }
    }
    if ( v11 >= v56 )
      break;
    v6 = v7 + 1;
    if ( v7 + 1 >= v5 )
      goto LABEL_9;
  }
  v69 = v11;
  v17 = (int)v10 + v59 + v59;
  v18 = v17;
  v61 = (int)v10 + v59 + v59;
  v64 = _byteswap_ushort(*(unsigned __int16 *)((char *)v10 + v59));
  v19 = (*(_BYTE *)v17 << 8) | *(_BYTE *)(v17 + 1);
  v62 = (unsigned __int16)v19;
  if ( v7 >= v60 - 1 && (unsigned __int16)v12 == 0xFFFF && v69 == 0xFFFF )
  {
    if ( !(_WORD)v19 )
    {
LABEL_29:
      if ( !(*(_BYTE *)(v66 + 20) & 2) )
      {
        v69 = 0xFFFF;
        goto LABEL_50;
      }
      v57 = v7;
      v62 = 0;
      v77 = v7 + 1;
LABEL_34:
      if ( v7 )
      {
        v20 = 2 * v7 + 12;
        v21 = v3 + v20;
        v22 = *(_BYTE *)(v3 + v20 + 1) | (*(_BYTE *)(v3 + v20) << 8);
        v67 = _byteswap_ushort(*(_WORD *)(v3 + v20));
        if ( v67 >= v56 )
        {
          v70 = v3;
          v23 = v3 + v20 - 2;
          v24 = v7 - 1;
          v25 = v23;
          v75 = -v3 - 2;
          v26 = v21 + v59;
          while ( 1 )
          {
            v73 = _byteswap_ushort(*(_WORD *)(v26 + 2));
            v64 = _byteswap_ushort(*(_WORD *)(v21 + 2 * v59 + 2));
            v61 = v26 + 2 * v59 + 2;
            v30 = v57;
            v62 = _byteswap_ushort(*(_WORD *)(v26 + 2 * v59 + 2));
            if ( _byteswap_ushort(*(_WORD *)(v26 + 2 * v59 + 2)) != -1 )
              v30 = v24;
            v57 = v30;
            if ( !v24 )
            {
              v12 = v73;
              v3 = v70;
              if ( v57 == v77 )
                goto LABEL_60;
              goto LABEL_43;
            }
            v27 = *(_BYTE *)v25;
            v28 = *(_BYTE *)(v25 + 1);
            v26 -= 2;
            v25 -= 2;
            v21 += v70 + v75;
            v29 = (unsigned __int16)(v28 | (v27 << 8));
            if ( (unsigned __int16)v29 < v56 )
              break;
            --v24;
            v67 = v29;
          }
          v12 = v73;
          v3 = v70;
          if ( v57 != v77 )
            goto LABEL_43;
          v44 = v67;
          if ( v7 != v24 )
            v44 = v69;
          v69 = v44;
          goto LABEL_60;
        }
        v24 = v7;
      }
      else
      {
        v24 = 0;
      }
      if ( v57 != v77 )
      {
        v67 = v69;
LABEL_43:
        if ( v57 == v24 )
        {
          v7 = v57;
          v69 = v67;
        }
        else
        {
          v31 = (_BYTE *)(v3 + 2 * v57 + 14);
          v32 = *v31;
          v33 = (int)&v31[v58];
          v34 = *(_BYTE *)(v33 + 1);
          v69 = (unsigned __int16)(*(_BYTE *)(v3 + 2 * v57 + 15) | (unsigned __int16)(v32 << 8));
          v35 = *(_BYTE *)v33;
          v36 = v59 + v33;
          v37 = *(_BYTE *)(v36 + 1);
          v12 = (unsigned __int16)(v34 | (v35 << 8));
          v64 = _byteswap_ushort(*(_WORD *)v36);
          v61 = v59 + v36;
          v38 = _byteswap_ushort(*(_WORD *)(v59 + v36));
          v7 = v57;
          v62 = v38;
        }
LABEL_46:
        if ( v62 )
        {
          v39 = v61 + v62 + 2 * (v56 - v12);
          v40 = *(_BYTE *)v39;
          v41 = *(_BYTE *)(v39 + 1);
          v13 = 0;
          v42 = v41 | (v40 << 8);
          if ( v42 )
            v13 = (unsigned __int16)(v42 + v64);
LABEL_10:
          result = v13;
          if ( !v68 )
            return result;
          goto LABEL_11;
        }
LABEL_50:
        v13 = (unsigned __int16)(v56 + v64);
        goto LABEL_10;
      }
LABEL_60:
      if ( v60 <= v57
        || (v45 = 2 * v57 + 14,
            v67 = _byteswap_ushort(*(_WORD *)(v3 + v45)),
            v46 = (unsigned __int16 *)(v3 + v45 + v58),
            v47 = _byteswap_ushort(*v46),
            v47 > v56) )
      {
        v13 = 0;
        v7 = v57 - 1;
        goto LABEL_10;
      }
      v79 = v3;
      v63 = v7;
      v74 = v47;
      v78 = v7;
      v48 = (int)v46 + v59;
      v49 = (int)&v46[v59];
      v50 = (_BYTE *)(v3 + v45 + 3);
      v51 = v57;
      v52 = (_BYTE *)v49;
      while ( 1 )
      {
        v61 = (int)v52;
        LOBYTE(v69) = *(_BYTE *)v48;
        v71 = *(_BYTE *)(v48 + 1);
        v55 = v63;
        v72 = (*v52 << 8) | *(_BYTE *)(v48 + v59 + 1);
        if ( v72 != -1 )
          v55 = v51;
        v63 = v55;
        if ( v60 == v51 + 1 )
          break;
        v48 += 2;
        v52 += 2;
        v53 = (unsigned __int16)((*(v50 - 1) << 8) | *v50);
        v54 = (int)&v50[v59 + 1];
        v50 += 2;
        v61 = v54;
        v65 = v50[v59 - 1] << 8;
        if ( (unsigned __int16)(v65 | v50[v59]) > v56 )
          break;
        ++v51;
        v74 = (unsigned __int16)(v65 | v50[v59]);
        v67 = v53;
      }
      v24 = v51;
      v12 = v74;
      v3 = v79;
      if ( v63 == v78 )
      {
        v7 = v24;
        v13 = 0;
        v69 = v67;
        goto LABEL_10;
      }
      v57 = v63;
      v64 = ((_WORD)v69 << 8) | v71;
      v62 = v72;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(*(_DWORD *)v66 + 504) + *(_DWORD *)(*(_DWORD *)v66 + 500) < v18
                                                                               + (unsigned int)(unsigned __int16)v19
                                                                               + 2 )
    {
      v64 = 1;
      goto LABEL_29;
    }
  }
  if ( *(_BYTE *)(v66 + 20) & 2 )
  {
    if ( (_WORD)v19 == -1 )
    {
      v62 = 0xFFFF;
      v57 = v7 + 1;
      v77 = v7 + 1;
    }
    else
    {
      v57 = v7;
      v77 = v7 + 1;
    }
    goto LABEL_34;
  }
  if ( (_WORD)v19 != -1 )
    goto LABEL_46;
  if ( !v68 )
    return 0;
  v43 = sub_6F79D3B0(v66, v7);
  result = 0;
  if ( !v43 )
  {
    *(_DWORD *)(v66 + 24) = v56;
    v15 = v66;
    goto LABEL_54;
  }
  return result;
}
