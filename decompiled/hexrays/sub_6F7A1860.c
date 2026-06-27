signed int __usercall sub_6F7A1860@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned __int16 *v4; // ebp@1
  int v5; // edi@1
  unsigned __int16 *v6; // ecx@2
  unsigned int *v7; // esi@2
  unsigned int v8; // ebp@2
  int v9; // ebx@4
  __int16 v10; // bp@6
  __int16 v11; // ax@6
  __int16 v12; // cx@6
  signed int result; // eax@9
  unsigned int v14; // ecx@9
  int v15; // ecx@10
  int v16; // ebx@10
  int v17; // edi@11
  int v18; // ecx@11
  unsigned __int8 v19; // al@11
  unsigned int v20; // edi@11
  int v21; // esi@11
  int v22; // ecx@12
  unsigned int v23; // edx@13
  unsigned int v24; // eax@13
  int v25; // edx@18
  unsigned int v26; // ebp@18
  __int16 v27; // ax@20
  int v28; // ecx@20
  __int16 v29; // dx@20
  int v30; // ebx@21
  int v31; // eax@25
  unsigned int v32; // ebx@29
  int v33; // ebp@30
  int v34; // ecx@31
  int v35; // edx@32
  unsigned int v36; // eax@35
  __int16 v37; // dx@36
  __int16 v38; // cx@36
  signed int v39; // ebx@38
  unsigned int v40; // edi@38
  unsigned __int32 v41; // ebx@41
  int v42; // edi@42
  unsigned int v43; // eax@43
  int v44; // ecx@43
  unsigned int v45; // edx@44
  unsigned int v46; // eax@44
  int v47; // ebp@48
  unsigned int v48; // edi@48
  signed int (__cdecl *v49)(int, unsigned __int16 *, unsigned int, int, int); // ebp@55
  int v50; // edx@57
  int v51; // ecx@58
  unsigned int v52; // eax@58
  int v53; // ebx@58
  int v54; // eax@64
  int v55; // eax@73
  int v56; // ecx@73
  int v57; // eax@73
  unsigned int v58; // edx@73
  signed int v59; // eax@81
  int v60; // [sp+28h] [bp-54h]@1
  int v61; // [sp+28h] [bp-54h]@10
  unsigned __int32 v62; // [sp+28h] [bp-54h]@17
  int v63; // [sp+28h] [bp-54h]@46
  unsigned int v64; // [sp+2Ch] [bp-50h]@1
  unsigned __int16 v65; // [sp+30h] [bp-4Ch]@0
  int v66; // [sp+40h] [bp-3Ch]@1
  unsigned int v67; // [sp+40h] [bp-3Ch]@26
  int v68; // [sp+44h] [bp-38h]@1
  unsigned __int8 v69; // [sp+4Bh] [bp-31h]@11
  unsigned __int32 v70; // [sp+4Ch] [bp-30h]@11
  unsigned int *v71; // [sp+54h] [bp-28h]@2
  unsigned __int16 *v72; // [sp+58h] [bp-24h]@48
  unsigned __int16 *v73; // [sp+5Ch] [bp-20h]@47

  v4 = (unsigned __int16 *)(*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 28));
  v66 = a1;
  v68 = a3;
  v64 = *(_DWORD *)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 32);
  v60 = *(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 28);
  if ( !v5 )
    return 6;
  v71 = (unsigned int *)(v4 + 1);
  v6 = v4;
  v7 = (unsigned int *)(v4 + 2);
  v8 = _byteswap_ushort(*v4);
  v71 = v7;
  if ( a2 > _byteswap_ushort(v6[1]) || a2 < v8 )
  {
    v9 = v60 + 12;
    do
    {
      if ( !--v5 )
        return 6;
      v10 = *(_BYTE *)(v9 - 4);
      v11 = *(_BYTE *)(v9 - 3);
      v7 = (unsigned int *)v9;
      v12 = *(_BYTE *)(v9 - 1);
      v9 += 8;
      v8 = (unsigned __int16)(v11 | (v10 << 8));
    }
    while ( (unsigned __int16)(v12 | (*((_BYTE *)v7 - 2) << 8)) < a2 || v8 > a2 );
    v71 = v7;
  }
  result = 8;
  v14 = _byteswap_ulong(*v7);
  if ( v14 > v64 - v60 )
    return result;
  v15 = v60 + v14;
  v16 = v15 + 8;
  v61 = v15;
  if ( v64 < v15 + 8 )
    return 6;
  v17 = v15;
  v71 = (unsigned int *)(v15 + 2);
  v18 = (*(_BYTE *)v15 << 8) | *(_BYTE *)(v15 + 1);
  v71 = (unsigned int *)(v17 + 4);
  LOBYTE(v65) = *(_BYTE *)(v17 + 2);
  v19 = *(_BYTE *)(v17 + 3);
  v71 = (unsigned int *)v16;
  v69 = v19;
  v70 = _byteswap_ulong(*(_DWORD *)(v17 + 4));
  v20 = a2;
  v21 = v66;
  switch ( (_WORD)v18 )
  {
    default:
      return 6;
    case 5:
    case 0x13:
      if ( v64 < v61 + 24 )
        return 6;
      v71 = (unsigned int *)(v61 + 12);
      v62 = _byteswap_ulong(*(_DWORD *)(v61 + 8));
      if ( sub_6F79E8D0(v66, (unsigned int *)&v71, v64, 1) )
        return 6;
      v25 = (int)v71;
      ++v71;
      v26 = _byteswap_ulong(*(_DWORD *)v25);
      if ( v26 > (signed int)(v64 - (_DWORD)v71) >> 1 || !v26 )
        return 6;
      v27 = *(_BYTE *)(v25 + 4);
      v28 = v25 + 6;
      v29 = *(_BYTE *)(v25 + 5);
      v71 = (unsigned int *)v28;
      if ( v20 == (unsigned __int16)(v29 | (v27 << 8)) )
      {
        v23 = 0;
      }
      else
      {
        v30 = 0;
        do
        {
          if ( v26 == ++v30 )
            return 6;
          v28 += 2;
          v71 = (unsigned int *)v28;
        }
        while ( v20 != (unsigned __int16)(*(_BYTE *)(v28 - 1) | (unsigned __int16)(*(_BYTE *)(v28 - 2) << 8)) );
        v23 = v30 * v62;
      }
      v24 = v23 + v62;
LABEL_37:
      if ( v23 > v24 )
        return 6;
      v39 = 6;
      v40 = v24 - v23;
      if ( v24 - v23 + v23 + v70 > *(_DWORD *)(v21 + 24) )
        return v39;
      v63 = *(_DWORD *)(v21 + 4);
      v39 = sub_6F771FF0(*(_DWORD *)(v21 + 4), *(_DWORD *)(v21 + 20) + v23 + v70);
      if ( v39 )
        return v39;
      v39 = sub_6F772240(v63, v40, (int *)&v73);
      if ( v39 )
        return v39;
      v47 = v69 | (v65 << 8);
      v48 = (unsigned int)v73 + v40;
      v72 = v73;
      if ( (unsigned __int16)v47 > 0x12u )
        goto LABEL_49;
      if ( (1 << v69) & 0x402C0 )
      {
        v59 = sub_6F79E8D0(v21, (unsigned int *)&v72, v48, 1);
      }
      else
      {
        if ( !((1 << v69) & 0x20106) )
          goto LABEL_49;
        v59 = sub_6F79E8D0(v21, (unsigned int *)&v72, v48, 0);
      }
      if ( v59 )
      {
        v39 = v59;
        goto LABEL_54;
      }
LABEL_49:
      switch ( (_WORD)v47 )
      {
        case 0x11:
        case 0x12:
        case 0x13:
          v39 = 7;
          break;
        case 9:
          v49 = sub_6F7A1EB0;
          goto LABEL_56;
        case 8:
          if ( v48 < (unsigned int)v72 + 1 )
            break;
          v72 = (unsigned __int16 *)((char *)v72 + 1);
          v49 = sub_6F7A1EB0;
          goto LABEL_56;
        case 5:
          v49 = (signed int (__cdecl *)(int, unsigned __int16 *, unsigned int, int, int))sub_6F79EC60;
          goto LABEL_56;
        case 2:
        case 7:
          v55 = *(_DWORD *)(v21 + 12);
          v49 = (signed int (__cdecl *)(int, unsigned __int16 *, unsigned int, int, int))sub_6F79EC60;
          v56 = *(_WORD *)(v55 + 2);
          v57 = *(_WORD *)v55;
          v58 = v57 * ((unsigned int)(v56 + 7) >> 3);
          if ( (unsigned int)(v56 * v57 + 7) >> 3 < v58 && v58 == v48 - (_DWORD)v72 )
            v49 = (signed int (__cdecl *)(int, unsigned __int16 *, unsigned int, int, int))sub_6F79E980;
          goto LABEL_56;
        case 1:
        case 6:
          v49 = (signed int (__cdecl *)(int, unsigned __int16 *, unsigned int, int, int))sub_6F79E980;
LABEL_56:
          if ( *(_BYTE *)(v21 + 17) )
            goto LABEL_65;
          v50 = *(_DWORD *)(v21 + 8);
          v39 = 6;
          if ( !*(_BYTE *)(v21 + 16) )
            break;
          v51 = *(_DWORD *)(v21 + 12);
          v52 = *(_WORD *)(v51 + 2);
          v53 = *(_WORD *)v51;
          *(_DWORD *)(v50 + 4) = v52;
          *(_DWORD *)v50 = v53;
          if ( *(_BYTE *)(v21 + 18) > 0x20u )
          {
LABEL_71:
            v39 = 3;
          }
          else
          {
            switch ( *(_BYTE *)(v21 + 18) )
            {
              case 0:
              case 3:
              case 5:
              case 6:
              case 7:
              case 9:
              case 0xA:
              case 0xB:
              case 0xC:
              case 0xD:
              case 0xE:
              case 0xF:
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x13:
              case 0x14:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
              case 0x19:
              case 0x1A:
              case 0x1B:
              case 0x1C:
              case 0x1D:
              case 0x1E:
              case 0x1F:
                goto LABEL_71;
              case 1:
                *(_BYTE *)(v50 + 18) = 1;
                v52 = (v52 + 7) >> 3;
                *(_WORD *)(v50 + 16) = 2;
                *(_DWORD *)(v50 + 8) = v52;
                break;
              case 2:
                *(_BYTE *)(v50 + 18) = 3;
                v52 = (v52 + 3) >> 2;
                *(_WORD *)(v50 + 16) = 4;
                *(_DWORD *)(v50 + 8) = v52;
                break;
              case 4:
                *(_BYTE *)(v50 + 18) = 4;
                v52 = (v52 + 1) >> 1;
                *(_WORD *)(v50 + 16) = 16;
                *(_DWORD *)(v50 + 8) = v52;
                break;
              case 8:
                *(_BYTE *)(v50 + 18) = 2;
                *(_DWORD *)(v50 + 8) = v52;
                *(_WORD *)(v50 + 16) = 256;
                break;
              case 0x20:
                v52 *= 4;
                *(_BYTE *)(v50 + 18) = 7;
                *(_DWORD *)(v50 + 8) = v52;
                *(_WORD *)(v50 + 16) = 256;
                break;
            }
            v54 = v53 * v52;
            if ( !v54 )
              goto LABEL_65;
            v39 = sub_6F769350(*(_DWORD *)(*(_DWORD *)v21 + 84), v54);
            if ( !v39 )
            {
              *(_BYTE *)(v21 + 17) = 1;
LABEL_65:
              v39 = v49(v21, v72, v48, v68, a4);
              break;
            }
          }
          break;
        default:
          v39 = 8;
          break;
      }
LABEL_54:
      sub_6F772340(v63, &v73);
      result = v39;
      break;
    case 4:
      v31 = v61 + 12;
      if ( v64 < v61 + 12 )
        return 6;
      v71 = (unsigned int *)(v61 + 12);
      v22 = v61 + 16;
      v67 = _byteswap_ulong(*(_DWORD *)(v61 + 8));
      if ( v64 < v61 + 16 || v67 > ((signed int)(v64 - v31) >> 2) - 1 || !v67 )
        return 6;
      v71 = (unsigned int *)(v61 + 14);
      v32 = 0;
      if ( a2 == _byteswap_ushort(*(_WORD *)(v61 + 12)) )
        goto LABEL_13;
      v33 = v61 + 12;
      v31 = v61 + 16;
      while ( 2 )
      {
        if ( v67 == ++v32 )
          return 6;
        v34 = *(_BYTE *)(v33 + 5);
        if ( v20 != _byteswap_ushort(*(_WORD *)(v33 + 4)) )
        {
          v35 = v33 + 8;
          v33 = v31;
          v31 = v35;
          continue;
        }
        break;
      }
      v22 = v33 + 8;
LABEL_13:
      v71 = (unsigned int *)v22;
      v23 = _byteswap_ushort(*(_WORD *)(v31 + 2));
      v71 = (unsigned int *)(v31 + 6);
      v24 = _byteswap_ushort(*(_WORD *)(v31 + 6));
      if ( v67 <= v32 )
        return 6;
      goto LABEL_37;
    case 3:
      v36 = v16 + 2 * (a2 - v8);
      if ( v64 >= v36 + 4 )
      {
        v71 = (unsigned int *)(v36 + 2);
        v37 = *(_BYTE *)v36;
        v38 = *(_BYTE *)(v36 + 1);
        v71 = (unsigned int *)(v36 + 4);
        v23 = (unsigned __int16)(v38 | (v37 << 8));
        v24 = _byteswap_ushort(*(_WORD *)(v36 + 2));
        if ( (unsigned __int16)v23 != v24 )
          goto LABEL_37;
      }
      return 6;
    case 2:
      if ( v64 < v61 + 20 )
        return 6;
      v71 = (unsigned int *)(v61 + 12);
      v41 = _byteswap_ulong(*(_DWORD *)(v61 + 8));
      if ( sub_6F79E8D0(v66, (unsigned int *)&v71, v64, 1) )
        return 6;
      v42 = v20 - v8;
      v23 = v41 * v42;
      v24 = v41 + v41 * v42;
      goto LABEL_37;
    case 1:
      v43 = v16 + 4 * (a2 - v8);
      v44 = v43 + 8;
      if ( v64 < v43 + 8 )
        return 6;
      v71 = (unsigned int *)(v43 + 4);
      v45 = *(_DWORD *)v43;
      v46 = *(_DWORD *)(v43 + 4);
      v71 = (unsigned int *)v44;
      v23 = _byteswap_ulong(v45);
      v24 = _byteswap_ulong(v46);
      if ( v23 == v24 )
        return 6;
      goto LABEL_37;
  }
  return result;
}
