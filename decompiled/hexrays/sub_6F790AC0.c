int __cdecl sub_6F790AC0(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // eax@1
  int v5; // edi@1
  int v6; // ebp@1
  int v7; // edx@1
  unsigned int v8; // ecx@3
  unsigned int v9; // edx@3
  int v11; // eax@7
  int v12; // ebx@8
  unsigned int v13; // esi@8
  signed int v14; // edx@17
  signed int v15; // eax@20
  unsigned int v16; // ecx@23
  int v17; // eax@23
  signed int v18; // eax@23
  unsigned int v19; // ecx@23
  int v20; // edx@24
  unsigned int v21; // eax@25
  int v22; // eax@28
  bool v23; // zf@32
  int v24; // edi@33
  unsigned int v25; // edx@37
  int v26; // edx@40
  int v27; // eax@40
  int v28; // ebx@43
  unsigned __int32 v29; // eax@47
  int v30; // eax@52
  int v31; // [sp+14h] [bp-38h]@16
  unsigned int v32; // [sp+18h] [bp-34h]@23
  int v33; // [sp+1Ch] [bp-30h]@23
  char v34; // [sp+20h] [bp-2Ch]@23
  int v35; // [sp+20h] [bp-2Ch]@32
  unsigned int v36; // [sp+24h] [bp-28h]@23
  int v37; // [sp+24h] [bp-28h]@25
  char v38; // [sp+2Bh] [bp-21h]@23

  v4 = a2;
  v5 = a4;
  v6 = a1;
  v7 = a3;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  if ( !a2 )
  {
    if ( !a3 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    goto LABEL_3;
  }
  v4 = a2 - 1;
  if ( a3 )
  {
LABEL_3:
    v8 = *(_DWORD *)(a1 + 408);
    v9 = a3 - 1;
    if ( v8 < v4 || v9 > v8 )
      return 0;
    v11 = 16 * v4;
    v7 = 16 * v9;
    goto LABEL_8;
  }
  if ( v4 > *(_DWORD *)(a1 + 408) )
    return 0;
  v11 = 16 * v4;
  v7 = 0;
LABEL_8:
  v12 = *(_DWORD *)(a1 + 424);
  v13 = *(_WORD *)(*(_DWORD *)(a1 + 416) + v7) | (*(_DWORD *)(*(_DWORD *)(a1 + 416) + v11) << 16);
  if ( !v12 )
    return 0;
  while ( v13 < *(_DWORD *)(v12 + 16) || v13 > *(_DWORD *)(v12 + 20) )
  {
    v12 = *(_DWORD *)v12;
    if ( !v12 )
      return 0;
  }
  v31 = *(_DWORD *)(a1 + 104);
  if ( !sub_6F771FF0(*(_DWORD *)(a1 + 104), *(_DWORD *)(v12 + 12))
    && !sub_6F772380(v31, *(_DWORD *)(v12 + 8) * *(_BYTE *)(v12 + 4)) )
  {
    v16 = *(_BYTE *)(v12 + 4);
    v17 = *(_DWORD *)(v12 + 8);
    v36 = v16;
    _BitScanReverse((unsigned int *)&v17, v16);
    v32 = *(_DWORD *)(v12 + 8);
    v18 = 1 << (31 - (v17 ^ 0x1F));
    v19 = v18 * v32;
    v33 = *(_DWORD *)(v31 + 32);
    v34 = *(_BYTE *)(v12 + 5) & 1;
    v38 = *(_BYTE *)(v12 + 5) & 2;
    if ( v36 != v18 )
    {
      v20 = v33 + v32 * (v36 - v18);
      if ( v34 )
      {
        v37 = v20 + 4;
        v21 = _byteswap_ulong(*(_DWORD *)v20);
      }
      else
      {
        v37 = v20 + 2;
        v21 = (*(_BYTE *)v20 << 16) | *(_BYTE *)(v20 + 1);
      }
      if ( v13 == v21 )
        goto LABEL_39;
      if ( v13 > v21 )
      {
        v22 = v37 + 2;
        if ( !v38 )
          v22 = v37 + 1;
        v33 = v22;
      }
    }
    if ( v32 >= v19 )
    {
      if ( !v34 )
      {
LABEL_56:
        v37 = v33 + 2;
        v30 = (*(_BYTE *)v33 << 16) | *(_BYTE *)(v33 + 1);
LABEL_53:
        if ( v13 != v30 )
        {
LABEL_42:
          sub_6F772460(v31);
          goto LABEL_17;
        }
LABEL_39:
        if ( v38 )
        {
          v26 = *(_BYTE *)(v37 + 1);
          v27 = (signed __int16)_byteswap_ushort(*(_WORD *)v37);
        }
        else
        {
          v27 = *(_BYTE *)v37;
        }
        *(_DWORD *)v5 = *(_WORD *)(v12 + 6) + v27;
        goto LABEL_42;
      }
    }
    else
    {
      v23 = v34 == 0;
      v35 = v12;
      if ( v23 )
      {
        v24 = v33;
        do
        {
          v19 >>= 1;
          v25 = (*(_BYTE *)(v24 + v19) << 16) | *(_BYTE *)(v24 + v19 + 1);
          if ( v13 == v25 )
          {
            v37 = v24 + v19 + 2;
            v5 = a4;
            goto LABEL_39;
          }
          if ( v13 > v25 )
            v24 += v19;
        }
        while ( v32 < v19 );
        v33 = v24;
        v5 = a4;
        goto LABEL_56;
      }
      v28 = v33;
      do
      {
        v19 >>= 1;
        v29 = _byteswap_ulong(*(_DWORD *)(v28 + v19));
        if ( v13 == v29 )
        {
          v37 = v28 + v19 + 4;
          v12 = v35;
          v6 = a1;
          goto LABEL_39;
        }
        if ( v13 > v29 )
          v28 += v19;
      }
      while ( v32 < v19 );
      v33 = v28;
      v6 = a1;
      v12 = v35;
    }
    v37 = v33 + 4;
    v30 = _byteswap_ulong(*(_DWORD *)v33);
    goto LABEL_53;
  }
LABEL_17:
  v14 = *(_DWORD *)(v6 + 300);
  if ( v14 == *(_DWORD *)(v6 + 304) )
    return 0;
  if ( *(_DWORD *)v5 )
    *(_DWORD *)v5 = sub_6F7C9420(*(_DWORD *)v5, v14, *(_DWORD *)(v6 + 304));
  v15 = *(_DWORD *)(v5 + 4);
  if ( !v15 )
    return 0;
  *(_DWORD *)(v5 + 4) = sub_6F7C9420(v15, *(_DWORD *)(v6 + 300), *(_DWORD *)(v6 + 304));
  return 0;
}
