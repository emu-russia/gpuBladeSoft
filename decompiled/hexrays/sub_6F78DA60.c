int __cdecl sub_6F78DA60(int a1, unsigned int a2, int a3)
{
  int v3; // ebp@2
  char v4; // cl@2
  unsigned int v5; // edi@2
  unsigned int v6; // edi@2
  char *v7; // edi@3
  int v8; // eax@4
  unsigned __int16 *v9; // ebx@8
  int v10; // ecx@8
  int v11; // edi@8
  int v12; // edx@9
  int v13; // eax@10
  int v14; // edx@11
  unsigned __int16 *v15; // eax@12
  int v16; // esi@17
  int v17; // esi@18
  int result; // eax@20
  signed int v19; // edi@23
  char *v20; // eax@23
  char *v21; // edx@23
  char v22; // [sp+23h] [bp-39h]@4
  char v23; // [sp+23h] [bp-39h]@23
  char v24; // [sp+24h] [bp-38h]@6
  char v25; // [sp+25h] [bp-37h]@6
  char v26; // [sp+26h] [bp-36h]@6
  char v27; // [sp+27h] [bp-35h]@6
  unsigned int v28; // [sp+28h] [bp-34h]@2
  int v29; // [sp+3Ch] [bp-20h]@1

  v29 = 0;
  if ( a2 < a1 + 5 )
    return 8;
  v3 = *(_BYTE *)(a1 + 4);
  v4 = *(_BYTE *)(a1 + 3);
  v5 = *(_DWORD *)(a3 + 92);
  v28 = v5;
  v6 = v3 + v5;
  if ( v6 > *(_DWORD *)(a3 + 96) )
  {
    v23 = *(_BYTE *)(a1 + 3);
    v19 = (v6 + 3) & 0xFFFFFFFC;
    v20 = sub_6F773B30(*(_DWORD *)a3, 36, v28, v19, *(char **)(a3 + 100), &v29);
    v21 = v20;
    *(_DWORD *)(a3 + 100) = v20;
    result = v29;
    if ( v29 )
      return result;
    v4 = v23;
    *(_DWORD *)(a3 + 96) = v19;
    v7 = v21;
    v28 = *(_DWORD *)(a3 + 92);
  }
  else
  {
    v7 = *(char **)(a3 + 100);
  }
  v22 = v4 & 1;
  v8 = 9 - ((v4 & 1u) < 1);
  if ( v4 & 2 )
    v8 = 10 - ((v4 & 1u) < 1);
  v24 = v4 & 2;
  v25 = v4 & 4;
  v26 = v4 & 8;
  v27 = v4 & 0x10;
  if ( a2 < a1 + 5 + v3 * (v8 - (((v4 & 4u) < 1) - 1) - (((v4 & 8u) < 1) - 1) - ((unsigned int)((v4 & 0x10u) < 1) - 1)) )
    return 8;
  if ( v3 )
  {
    v9 = (unsigned __int16 *)(a1 + 5);
    v10 = (int)&v7[36 * v28];
    v11 = 0;
    do
    {
      while ( v22 )
      {
        v12 = (int)(v9 + 1);
        *(_DWORD *)v10 = _byteswap_ushort(*v9);
        if ( !v24 )
          goto LABEL_16;
LABEL_10:
        v13 = v12 + 2;
        *(_DWORD *)(v10 + 4) = _byteswap_ushort(*(_WORD *)v12);
        *(_DWORD *)(v10 + 8) = *(_BYTE *)(v12 + 2);
        if ( !v25 )
          goto LABEL_17;
LABEL_11:
        v14 = v13 + 4;
        *(_DWORD *)(v10 + 20) = *(_BYTE *)(v13 + 3) | (*(_BYTE *)(v13 + 1) << 16) | (*(_BYTE *)(v13 + 2) << 8);
        if ( !v26 )
          goto LABEL_18;
LABEL_12:
        v15 = (unsigned __int16 *)(v14 + 3);
        *(_DWORD *)(v10 + 24) = *(_BYTE *)(v14 + 2) | (*(_BYTE *)v14 << 16) | (*(_BYTE *)(v14 + 1) << 8);
        if ( v27 )
          goto LABEL_13;
LABEL_19:
        ++v11;
        v10 += 36;
        v9 = (unsigned __int16 *)((char *)v15 + 1);
        *(_DWORD *)(v10 - 8) = *(_BYTE *)v15;
        if ( v3 == v11 )
          goto LABEL_20;
      }
      v12 = (int)v9 + 1;
      *(_DWORD *)v10 = *(_BYTE *)v9;
      if ( v24 )
        goto LABEL_10;
LABEL_16:
      v13 = v12 + 1;
      *(_DWORD *)(v10 + 4) = *(_BYTE *)v12;
      *(_DWORD *)(v10 + 8) = *(_BYTE *)(v12 + 1);
      if ( v25 )
        goto LABEL_11;
LABEL_17:
      v16 = *(_BYTE *)(v13 + 2);
      v14 = v13 + 3;
      *(_DWORD *)(v10 + 20) = _byteswap_ushort(*(_WORD *)(v13 + 1));
      if ( v26 )
        goto LABEL_12;
LABEL_18:
      v17 = *(_BYTE *)(v14 + 1);
      v15 = (unsigned __int16 *)(v14 + 2);
      *(_DWORD *)(v10 + 24) = _byteswap_ushort(*(_WORD *)v14);
      if ( !v27 )
        goto LABEL_19;
LABEL_13:
      v9 = v15 + 1;
      ++v11;
      v10 += 36;
      *(_DWORD *)(v10 - 8) = _byteswap_ushort(*v15);
    }
    while ( v3 != v11 );
  }
LABEL_20:
  *(_DWORD *)(a3 + 92) = v3 + v28;
  return 0;
}
