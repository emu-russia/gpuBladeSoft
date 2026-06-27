int __usercall sub_6F79D5C0@<eax>(int a1@<eax>, _DWORD *a2@<edx>, unsigned __int8 a3@<cl>)
{
  _DWORD *v3; // ebp@1
  unsigned __int8 v4; // di@1
  int v5; // edx@1
  int v6; // ecx@1
  unsigned int v7; // eax@1
  unsigned int v8; // ebp@3
  unsigned __int16 *v9; // ebx@5
  unsigned __int16 v10; // di@5
  int result; // eax@11
  bool v12; // dl@11
  int v13; // ecx@15
  unsigned __int16 *v14; // esi@15
  unsigned __int16 v15; // dx@16
  unsigned int v16; // eax@16
  int v17; // esi@25
  int v18; // edx@25
  unsigned __int16 v19; // ax@25
  unsigned int v20; // [sp+0h] [bp-4Ch]@15
  unsigned __int16 *v21; // [sp+4h] [bp-48h]@15
  unsigned __int16 v22; // [sp+10h] [bp-3Ch]@5
  unsigned int v23; // [sp+14h] [bp-38h]@1
  unsigned int v24; // [sp+18h] [bp-34h]@3
  int v25; // [sp+1Ch] [bp-30h]@3
  int v26; // [sp+20h] [bp-2Ch]@3
  bool v27; // [sp+27h] [bp-25h]@3
  int v28; // [sp+28h] [bp-24h]@3
  int v29; // [sp+2Ch] [bp-20h]@3
  int v30; // [sp+30h] [bp-1Ch]@1
  _DWORD *v31; // [sp+34h] [bp-18h]@1
  unsigned __int8 v32; // [sp+38h] [bp-14h]@1

  v3 = a2;
  v4 = a3;
  v31 = a2;
  v5 = *(_DWORD *)(a1 + 16);
  v30 = a1;
  v32 = a3;
  v6 = *(_BYTE *)(v5 + 7);
  v7 = _byteswap_ushort(*(_WORD *)(v5 + 6)) & 0xFFFE;
  v23 = v7 >> 1;
  if ( !(v7 >> 1) || *v3 - ((unsigned int)(v4 < 1u) - 1) > 0xFFFF )
    return 0;
  v27 = v4 == 0;
  v8 = *v3 - ((v4 < 1u) - 1);
  v25 = v5 + 14;
  v29 = 2 * v7;
  v26 = v5 + v7 + 16;
  v28 = v26 + v7;
  v24 = (v7 >> 1) - 1;
LABEL_15:
  v13 = v26;
  v9 = (unsigned __int16 *)v25;
  v20 = 0;
  v14 = (unsigned __int16 *)(v26 + v29);
  v21 = (unsigned __int16 *)v28;
  while ( 1 )
  {
    v13 += 2;
    v15 = _byteswap_ushort(*v9);
    v16 = (unsigned __int16)(*(_BYTE *)(v13 - 1) | (unsigned __int16)(*(_BYTE *)(v13 - 2) << 8));
    if ( v8 < v16 || v8 > v15 )
    {
      ++v9;
      goto LABEL_18;
    }
    v22 = _byteswap_ushort(*v21);
    v9 = v14;
    v10 = _byteswap_ushort(*v14);
    if ( v24 <= v20 && v16 == 0xFFFF && v15 == 0xFFFF )
    {
      if ( !v10 )
        goto LABEL_11;
      if ( *(_DWORD *)(*(_DWORD *)v30 + 500) + *(_DWORD *)(*(_DWORD *)v30 + 504) < (unsigned int)v14 + v10 + 2 )
      {
        v22 = 1;
LABEL_11:
        result = (unsigned __int16)(v8 + v22);
        v12 = result != 0;
LABEL_12:
        if ( v27 )
          goto LABEL_20;
LABEL_13:
        if ( v12 )
          goto LABEL_20;
        if ( ++v8 == 0x10000 )
          return 0;
        goto LABEL_15;
      }
    }
    if ( v10 != -1 )
      break;
LABEL_18:
    ++v20;
    ++v14;
    ++v21;
    if ( v23 == v20 )
      goto LABEL_19;
  }
  if ( !v10 )
    goto LABEL_11;
  v17 = (int)&v14[v8 - v16] + v10;
  v18 = *(_BYTE *)(v17 + 1);
  v19 = _byteswap_ushort(*(_WORD *)v17);
  if ( v19 )
  {
    result = (unsigned __int16)(v22 + v19);
    v12 = result != 0;
    goto LABEL_12;
  }
LABEL_19:
  v12 = 0;
  result = 0;
  if ( !v27 )
    goto LABEL_13;
LABEL_20:
  if ( v32 )
  {
    if ( v12 )
      *v31 = v8;
  }
  return result;
}
