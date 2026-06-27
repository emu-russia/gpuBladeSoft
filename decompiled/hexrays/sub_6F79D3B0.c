signed int __usercall sub_6F79D3B0@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // ebx@1
  unsigned int v3; // eax@1
  int v4; // ecx@2
  unsigned int v5; // eax@2
  unsigned int v6; // edi@2
  unsigned int v7; // ebp@2
  int v8; // ecx@5
  int v9; // ebx@5
  int v10; // edx@5
  unsigned __int16 v11; // si@5
  int v12; // edx@10
  unsigned int v14; // [sp+0h] [bp-2Ch]@1
  int v15; // [sp+4h] [bp-28h]@1
  unsigned int v16; // [sp+8h] [bp-24h]@1
  int v17; // [sp+Ch] [bp-20h]@2
  int v18; // [sp+10h] [bp-1Ch]@2
  int v19; // [sp+14h] [bp-18h]@5
  unsigned int v20; // [sp+18h] [bp-14h]@2

  v2 = *(_DWORD *)(a1 + 16);
  v15 = a1;
  v3 = *(_DWORD *)(a1 + 32);
  v14 = a2;
  v16 = v3;
  if ( v3 <= a2 )
    return -1;
  v4 = 2 * v3 + 2;
  v20 = v3 - 1;
  v17 = 2 * v3;
  v5 = v2 + 2 * a2 + 14;
  v6 = v2 + 2 * a2 + v4;
  v7 = v2 + 2 * a2 + 2 * v4 - 2;
  v18 = 2 * (v4 - 2) + 14;
  while ( 1 )
  {
    v8 = *(_BYTE *)(v5 + 1) | (*(_BYTE *)v5 << 8);
    *(_DWORD *)(v15 + 44) = _byteswap_ushort(*(_WORD *)v5);
    v9 = *(_BYTE *)(v6 + 15) | (*(_BYTE *)(v6 + 14) << 8);
    *(_DWORD *)(v15 + 40) = _byteswap_ushort(*(_WORD *)(v6 + 14));
    *(_DWORD *)(v15 + 48) = (signed __int16)_byteswap_ushort(*(_WORD *)(v7 + 14));
    v19 = v6 + v18;
    v10 = *(_BYTE *)(v6 + 2 * v17 + 15) | (*(_BYTE *)(v6 + 2 * v17 + 14) << 8);
    v11 = _byteswap_ushort(*(_WORD *)(v6 + 2 * v17 + 14));
    if ( (_WORD)v8 == -1 && (_WORD)v9 == -1 && v14 >= v20 )
    {
      if ( !_byteswap_ushort(*(_WORD *)(v6 + 2 * v17 + 14)) )
        goto LABEL_10;
      if ( *(_DWORD *)(*(_DWORD *)v15 + 500) + *(_DWORD *)(*(_DWORD *)v15 + 504) < v19 + (unsigned int)v11 + 2 )
      {
        *(_DWORD *)(v15 + 48) = 1;
LABEL_10:
        v12 = 0;
        goto LABEL_11;
      }
    }
    if ( _byteswap_ushort(*(_WORD *)(v6 + 2 * v17 + 14)) != -1 )
      break;
    ++v14;
    v5 += 2;
    v6 += 2;
    v7 += 2;
    if ( v16 <= v14 )
      return -1;
  }
  if ( !v11 )
    goto LABEL_10;
  v12 = v11 + v19;
LABEL_11:
  *(_DWORD *)(v15 + 52) = v12;
  *(_DWORD *)(v15 + 36) = v14;
  return 0;
}
