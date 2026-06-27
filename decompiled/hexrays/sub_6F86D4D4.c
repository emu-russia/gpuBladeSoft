char __usercall sub_6F86D4D4@<al>(unsigned int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  int v4; // ecx@4
  int v5; // esi@5
  int v6; // edi@6
  _BYTE *v7; // eax@9
  int v8; // eax@9
  _BYTE *v9; // eax@11
  int v10; // eax@11
  int v12; // [sp+Ch] [bp-2Ch]@1
  int v13; // [sp+10h] [bp-28h]@1
  int v14; // [sp+14h] [bp-24h]@4
  int v15; // [sp+18h] [bp-20h]@3
  int v16; // [sp+1Ch] [bp-1Ch]@5

  v3 = a1;
  v12 = a2;
  v13 = a3;
  if ( *(_BYTE *)(a1 + 108) || !a3 )
    return a1;
  v15 = 0;
  LOBYTE(a1) = 0;
  while ( 2 )
  {
    v4 = *(_DWORD *)(v3 + 16);
    v14 = *(_DWORD *)(v3 + 16);
    if ( (_BYTE)a1 )
      goto LABEL_15;
    v16 = v4 + 1;
    v5 = *(_DWORD *)(v3 + 12) | ((*(_BYTE *)(v12 + v15) & 1) << (24 - (v4 + 1)));
    if ( v4 + 1 <= 7 )
      goto LABEL_14;
    v6 = v4 + 1;
    do
    {
      while ( 1 )
      {
        v7 = *(_BYTE **)(v3 + 112);
        *v7 = v5 >> 16;
        *(_DWORD *)(v3 + 112) = v7 + 1;
        v8 = *(_DWORD *)(v3 + 116) - 1;
        *(_DWORD *)(v3 + 116) = v8;
        if ( !v8 )
          break;
        if ( ((v5 >> 16) & 0xFF) == 255 )
          goto LABEL_11;
LABEL_8:
        v5 <<= 8;
        v6 -= 8;
        if ( v6 <= 7 )
          goto LABEL_13;
      }
      sub_6F86CA70(v3);
      if ( ((v5 >> 16) & 0xFF) != 255 )
        goto LABEL_8;
LABEL_11:
      v9 = *(_BYTE **)(v3 + 112);
      *v9 = 0;
      *(_DWORD *)(v3 + 112) = v9 + 1;
      v10 = *(_DWORD *)(v3 + 116) - 1;
      *(_DWORD *)(v3 + 116) = v10;
      if ( v10 )
        goto LABEL_8;
      sub_6F86CA70(v3);
      v5 <<= 8;
      v6 -= 8;
    }
    while ( v6 > 7 );
LABEL_13:
    a1 = -((v14 - 7) & 0xFFFFFFF8);
    v16 = v16 - ((v14 - 7) & 0xFFFFFFF8) - 8;
LABEL_14:
    *(_DWORD *)(v3 + 12) = v5;
    *(_DWORD *)(v3 + 16) = v16;
LABEL_15:
    if ( v13 != ++v15 )
    {
      LOBYTE(a1) = *(_BYTE *)(v3 + 108);
      continue;
    }
    return a1;
  }
}
