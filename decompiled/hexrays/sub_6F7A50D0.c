int __cdecl sub_6F7A50D0(int a1, unsigned int *a2)
{
  int v2; // eax@1
  unsigned int v3; // ebp@1
  int v4; // eax@5
  unsigned __int16 v5; // si@7
  int v6; // ecx@8
  int v7; // ebx@8
  unsigned int v8; // ecx@9
  unsigned __int16 v9; // dx@10
  int v10; // esi@10
  int v11; // ecx@11
  bool v12; // zf@11
  unsigned __int16 v13; // di@11
  __int16 v14; // ax@12
  int result; // eax@13
  int v16; // [sp+0h] [bp-1Ch]@2
  int v17; // [sp+4h] [bp-18h]@2
  int v18; // [sp+8h] [bp-14h]@9

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *a2 + 1;
  if ( v3 > 0xFFFF )
  {
LABEL_16:
    v3 = 0;
    result = 0;
    goto LABEL_17;
  }
  v17 = v2 + 518;
  v16 = v2 + 6;
  while ( 1 )
  {
    while ( v3 >> 8 )
    {
      v4 = v17 + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(v16 + 2 * (v3 >> 8))) & 0xFFF8);
      if ( v4 != v17 )
        goto LABEL_6;
LABEL_15:
      v3 = (v3 & 0xFFFFFF00) + 256;
      if ( v3 > 0xFFFF )
        goto LABEL_16;
    }
    if ( !_byteswap_ushort(*(_WORD *)(v16 + 2 * (unsigned __int8)v3)) )
      break;
    v3 = (v3 & 0xFFFFFF00) + 256;
  }
  v4 = v17;
LABEL_6:
  if ( !v4 )
    goto LABEL_15;
  v5 = _byteswap_ushort(*(_WORD *)(v4 + 6));
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_BYTE *)(v4 + 1);
  v7 = _byteswap_ushort(*(_WORD *)v4);
  if ( (unsigned __int16)v7 > (unsigned int)(unsigned __int8)v3 )
  {
    v18 = 0;
    v8 = 0;
  }
  else
  {
    v8 = (unsigned __int8)v3 - (unsigned __int16)v7;
    v7 = (unsigned __int8)v3;
    v18 = 2 * v8;
  }
  v3 = v7 + (v3 & 0xFFFFFF00);
  v9 = _byteswap_ushort(*(_WORD *)(v4 + 2));
  v10 = v4 + v5 + v18 + 6;
  if ( v8 >= v9 )
    goto LABEL_15;
  v11 = v8 - v3;
  v12 = (*(_BYTE *)(v4 + 5) | (*(_BYTE *)(v4 + 4) << 8)) == 0;
  v13 = _byteswap_ushort(*(_WORD *)(v4 + 4));
  while ( 1 )
  {
    v10 += 2;
    v14 = *(_BYTE *)(v10 - 1) | (unsigned __int16)(*(_BYTE *)(v10 - 2) << 8);
    if ( v14 )
    {
      result = (unsigned __int16)(v13 + v14);
      if ( result )
        break;
    }
    if ( v9 <= ++v3 + v11 )
      goto LABEL_15;
  }
LABEL_17:
  *a2 = v3;
  return result;
}
