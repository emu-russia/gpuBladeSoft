signed int __cdecl sub_6F7ACDF0(int a1)
{
  int v1; // ebx@1
  int v2; // edi@1
  int v3; // ecx@3
  int v4; // edx@3
  int v5; // esi@5
  int v6; // ebp@5
  int v7; // eax@5
  int v8; // edx@5
  signed int result; // eax@7
  int v10; // ebx@9
  int v11; // edx@9
  unsigned __int16 v12; // dx@9
  signed int v13; // eax@9
  int v14; // edx@16
  int v15; // eax@24
  int v16; // [sp+14h] [bp-38h]@1
  unsigned int v17; // [sp+18h] [bp-34h]@1
  int v18; // [sp+1Ch] [bp-30h]@7
  char v19; // [sp+24h] [bp-28h]@9
  signed int v20; // [sp+2Ch] [bp-20h]@7

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 200);
  v17 = *(_DWORD *)(a1 + 204);
  v16 = *(_DWORD *)(a1 + 12);
  while ( 1 )
  {
    v18 = v1 + 1;
    result = sub_6F7CA7E0(v16, v1 + 1);
    v20 = result;
    if ( result )
      return result;
    if ( v17 < v2 + 4 )
      return 21;
    v10 = *(_DWORD *)(v16 + 88) + 32 * v1;
    *(_DWORD *)(v10 + 12) = 0;
    *(_DWORD *)(v10 + 8) = 0;
    v11 = (*(_BYTE *)v2 << 8) | *(_BYTE *)(v2 + 1);
    *(_WORD *)(v10 + 4) = _byteswap_ushort(*(_WORD *)v2);
    v19 = v11;
    v12 = v11 & 1;
    *(_DWORD *)v10 = _byteswap_ushort(*(_WORD *)(v2 + 2));
    v13 = v12 < 1u ? 4 : 6;
    if ( !(v19 & 8) )
    {
      v13 = v12 < 1u ? 6 : 8;
      if ( !(v19 & 0x40) )
      {
        v13 = v12 < 1u ? 10 : 12;
        if ( !(v19 & 0x80) )
          v13 = v12 < 1u ? 2 : 4;
      }
    }
    if ( v17 < v2 + 4 + v13 )
      return 21;
    if ( v19 & 2 )
    {
      if ( v12 )
      {
        v3 = v2 + 8;
        *(_DWORD *)(v10 + 8) = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 4));
        v4 = *(_BYTE *)(v2 + 7);
        *(_DWORD *)(v10 + 12) = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 6));
      }
      else
      {
        v3 = v2 + 6;
        *(_DWORD *)(v10 + 8) = *(_BYTE *)(v2 + 4);
        *(_DWORD *)(v10 + 12) = *(_BYTE *)(v2 + 5);
      }
LABEL_4:
      if ( !(v19 & 8) )
        goto LABEL_17;
      goto LABEL_5;
    }
    if ( !v12 )
    {
      *(_DWORD *)(v10 + 8) = *(_BYTE *)(v2 + 4);
      v3 = v2 + 6;
      *(_DWORD *)(v10 + 12) = *(_BYTE *)(v2 + 5);
      goto LABEL_4;
    }
    v3 = v2 + 8;
    *(_DWORD *)(v10 + 8) = _byteswap_ushort(*(_WORD *)(v2 + 4));
    v14 = *(_BYTE *)(v2 + 7);
    *(_DWORD *)(v10 + 12) = _byteswap_ushort(*(_WORD *)(v2 + 6));
    if ( !(v19 & 8) )
    {
LABEL_17:
      if ( v19 & 0x40 )
      {
        v2 = v3 + 4;
        v5 = 0;
        v6 = 0;
        v7 = 4 * (signed __int16)_byteswap_ushort(*(_WORD *)v3);
        v8 = 4 * (signed __int16)_byteswap_ushort(*(_WORD *)(v3 + 2));
      }
      else if ( v19 & 0x80 )
      {
        v2 = v3 + 8;
        v7 = 4 * (signed __int16)_byteswap_ushort(*(_WORD *)v3);
        v5 = 4 * (signed __int16)_byteswap_ushort(*(_WORD *)(v3 + 2));
        v6 = 4 * (signed __int16)_byteswap_ushort(*(_WORD *)(v3 + 4));
        v8 = 4 * (signed __int16)_byteswap_ushort(*(_WORD *)(v3 + 6));
      }
      else
      {
        v2 = v3;
        v5 = 0;
        v8 = 0x10000;
        v6 = 0;
        v7 = 0x10000;
      }
      goto LABEL_6;
    }
LABEL_5:
    v2 = v3 + 2;
    v5 = 0;
    v6 = 0;
    v7 = 4 * (signed __int16)_byteswap_ushort(*(_WORD *)v3);
    v8 = v7;
LABEL_6:
    *(_DWORD *)(v10 + 16) = v7;
    *(_DWORD *)(v10 + 20) = v6;
    *(_DWORD *)(v10 + 24) = v5;
    *(_DWORD *)(v10 + 28) = v8;
    v1 = v18;
    if ( !(v19 & 0x20) )
    {
      *(_DWORD *)(v16 + 84) = v18;
      v15 = sub_6F7720A0(*(_DWORD *)(a1 + 24));
      *(_DWORD *)(a1 + 200) = v2;
      *(_DWORD *)(a1 + 168) = v2 + v15 - v17;
      return v20;
    }
  }
}
