char __cdecl sub_6F86DCC4(int a1, int a2)
{
  unsigned int v2; // ebx@1
  int v3; // edx@1
  _BYTE *v4; // eax@1
  int v5; // esi@7
  int v6; // edi@8
  int v7; // ecx@12
  int v8; // edx@14
  int v9; // edx@20
  int v10; // eax@20
  int v11; // edx@21
  int v13; // [sp+10h] [bp-28h]@1
  int v14; // [sp+14h] [bp-24h]@6
  int v15; // [sp+18h] [bp-20h]@5
  int v16; // [sp+1Ch] [bp-1Ch]@7

  v2 = *(_DWORD *)(a1 + 404);
  v13 = *(_DWORD *)(a1 + 356);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_BYTE **)v3;
  *(_DWORD *)(v2 + 112) = *(_DWORD *)v3;
  *(_DWORD *)(v2 + 116) = *(_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(a1 + 224) && !*(_DWORD *)(v2 + 36) )
  {
    sub_6F86D854(v2, *(_DWORD *)(v2 + 40));
    v4 = *(_BYTE **)(v2 + 112);
  }
  if ( *(_DWORD *)(a1 + 300) <= 0 )
    goto LABEL_20;
  v15 = 0;
  while ( 2 )
  {
    v14 = *(_DWORD *)(v2 + 16);
    if ( *(_BYTE *)(v2 + 108) )
      goto LABEL_18;
    v16 = *(_DWORD *)(v2 + 16) + 1;
    v5 = *(_DWORD *)(v2 + 12) | ((((signed int)**(_WORD **)(a2 + 4 * v15) >> v13) & 1) << (24 - v16));
    if ( v16 <= 7 )
      goto LABEL_17;
    v6 = *(_DWORD *)(v2 + 16) + 1;
    while ( 1 )
    {
      *v4++ = v5 >> 16;
      *(_DWORD *)(v2 + 112) = v4;
      v7 = *(_DWORD *)(v2 + 116) - 1;
      *(_DWORD *)(v2 + 116) = v7;
      if ( v7 )
      {
        if ( ((v5 >> 16) & 0xFF) != 255 )
          goto LABEL_10;
      }
      else
      {
        sub_6F86CA70(v2);
        v4 = *(_BYTE **)(v2 + 112);
        if ( ((v5 >> 16) & 0xFF) != 255 )
          goto LABEL_10;
      }
      *v4++ = 0;
      *(_DWORD *)(v2 + 112) = v4;
      v8 = *(_DWORD *)(v2 + 116) - 1;
      *(_DWORD *)(v2 + 116) = v8;
      if ( !v8 )
        break;
LABEL_10:
      v5 <<= 8;
      v6 -= 8;
      if ( v6 <= 7 )
        goto LABEL_16;
LABEL_11:
      v4 = *(_BYTE **)(v2 + 112);
    }
    sub_6F86CA70(v2);
    v4 = *(_BYTE **)(v2 + 112);
    v5 <<= 8;
    v6 -= 8;
    if ( v6 > 7 )
      goto LABEL_11;
LABEL_16:
    v16 = v16 - ((v14 - 7) & 0xFFFFFFF8) - 8;
LABEL_17:
    *(_DWORD *)(v2 + 12) = v5;
    *(_DWORD *)(v2 + 16) = v16;
LABEL_18:
    if ( *(_DWORD *)(a1 + 300) > ++v15 )
    {
      v4 = *(_BYTE **)(v2 + 112);
      continue;
    }
    break;
  }
LABEL_20:
  v9 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)v9 = v4;
  *(_DWORD *)(v9 + 4) = *(_DWORD *)(v2 + 116);
  v10 = *(_DWORD *)(a1 + 224);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v2 + 36);
    if ( !v11 )
    {
      *(_DWORD *)(v2 + 40) = ((unsigned __int8)*(_DWORD *)(v2 + 40) + 1) & 7;
      v11 = v10;
    }
    *(_DWORD *)(v2 + 36) = v11 - 1;
  }
  return 1;
}
