int __cdecl sub_6F836D84(int a1, int a2, int a3)
{
  signed int v3; // eax@11
  int v4; // eax@14
  unsigned int i; // [sp+10h] [bp-18h]@1
  int v7; // [sp+14h] [bp-14h]@1
  int v8; // [sp+18h] [bp-10h]@1
  unsigned int v9; // [sp+1Ch] [bp-Ch]@1

  v9 = 0;
  v8 = 0x10000;
  v7 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 6 )
      return 0;
    if ( *(_BYTE *)(a2 + 87) + (*(_BYTE *)(a2 + 86) << 8) + (*(_BYTE *)(a2 + 85) << 16) + (*(_BYTE *)(a2 + 84) << 24) == *((_DWORD *)&unk_6FB98AE0 + 8 * i + 3)
      && *(_BYTE *)(a2 + 91) + (*(_BYTE *)(a2 + 90) << 8) + (*(_BYTE *)(a2 + 89) << 16) + (*(_BYTE *)(a2 + 88) << 24) == *(_DWORD *)&aRzS[32 * i + 12]
      && *(_BYTE *)(a2 + 95) + (*(_BYTE *)(a2 + 94) << 8) + (*(_BYTE *)(a2 + 93) << 16) + (*(_BYTE *)(a2 + 92) << 24) == *(_DWORD *)&aRzS[32 * i + 16]
      && *(_BYTE *)(a2 + 99) + (*(_BYTE *)(a2 + 98) << 8) + (*(_BYTE *)(a2 + 97) << 16) + (*(_BYTE *)(a2 + 96) << 24) == *((_DWORD *)&unk_6FB98AEC + 8 * i + 3) )
    {
      break;
    }
LABEL_23:
    ;
  }
  if ( !v9 )
  {
    v9 = (*(_BYTE *)(a2 + 2) << 8) + (*(_BYTE *)(a2 + 1) << 16) + (*(_BYTE *)a2 << 24) + *(_BYTE *)(a2 + 3);
    v8 = (*(_BYTE *)(a2 + 66) << 8) + (*(_BYTE *)(a2 + 65) << 16) + (*(_BYTE *)(a2 + 64) << 24) + *(_BYTE *)(a2 + 67);
  }
  if ( *((_DWORD *)&unk_6FB98AE0 + 8 * i + 2) != v9 || *((_WORD *)&unk_6FB98AF0 + 16 * i + 7) != v8 )
    goto LABEL_28;
  if ( !a3 )
  {
    v3 = sub_6F88BA20(0, 0, 0);
    a3 = sub_6F88BA20(v3, (_BYTE *)a2, v9);
  }
  if ( *((_DWORD *)&unk_6FB98AE0 + 8 * i) != a3 )
    goto LABEL_28;
  if ( !v7 )
  {
    v4 = sub_6F88BF50(0, 0, 0);
    v7 = sub_6F88BF50(v4, a2, v9);
  }
  if ( *((_DWORD *)&unk_6FB98AE0 + 8 * i + 1) != v7 )
  {
LABEL_28:
    if ( *((_BYTE *)&unk_6FB98AF0 + 32 * i + 12) )
      sub_6F839519(a1, "copyright violation: edited ICC profile ignored");
    goto LABEL_23;
  }
  if ( *((_BYTE *)&unk_6FB98AF0 + 32 * i + 13) )
  {
    sub_6F83987F(a1, "known incorrect sRGB profile", 2);
  }
  else if ( !*((_BYTE *)&unk_6FB98AF0 + 32 * i + 12) )
  {
    sub_6F83987F(a1, "out-of-date sRGB profile with no signature", 0);
  }
  return *((_BYTE *)&unk_6FB98AF0 + 32 * i + 13) + 1;
}
