signed int __cdecl sub_6F83667B(int a1, int a2, int a3, unsigned int a4, int a5, char a6)
{
  signed int result; // eax@2
  unsigned int v7; // [sp+2Ch] [bp-Ch]@1
  unsigned int v8; // [sp+2Ch] [bp-Ch]@3
  unsigned int v9; // [sp+2Ch] [bp-Ch]@6
  unsigned int v10; // [sp+2Ch] [bp-Ch]@10
  unsigned int v11; // [sp+2Ch] [bp-Ch]@14
  unsigned int v12; // [sp+2Ch] [bp-Ch]@23
  unsigned int v13; // [sp+2Ch] [bp-Ch]@37

  v7 = (*(_BYTE *)(a5 + 2) << 8) + (*(_BYTE *)(a5 + 1) << 16) + (*(_BYTE *)a5 << 24) + *(_BYTE *)(a5 + 3);
  if ( v7 != a4 )
    return sub_6F8361F7(a1, a2, a3, v7, (int)"length does not match profile");
  v8 = (*(_BYTE *)(a5 + 130) << 8) + (*(_BYTE *)(a5 + 129) << 16) + (*(_BYTE *)(a5 + 128) << 24) + *(_BYTE *)(a5 + 131);
  if ( v8 > 0x1555554A || 12 * v8 + 132 > a4 )
    return sub_6F8361F7(a1, a2, a3, v8, (int)"tag count too large");
  v9 = (*(_BYTE *)(a5 + 66) << 8) + (*(_BYTE *)(a5 + 65) << 16) + (*(_BYTE *)(a5 + 64) << 24) + *(_BYTE *)(a5 + 67);
  if ( v9 > 0xFFFE )
    return sub_6F8361F7(a1, a2, a3, v9, (int)"invalid rendering intent");
  if ( v9 > 3 )
    sub_6F8361F7(a1, 0, a3, v9, (int)"intent outside defined range");
  v10 = (*(_BYTE *)(a5 + 38) << 8) + (*(_BYTE *)(a5 + 37) << 16) + (*(_BYTE *)(a5 + 36) << 24) + *(_BYTE *)(a5 + 39);
  if ( v10 != 1633907568 )
    return sub_6F8361F7(a1, a2, a3, v10, (int)"invalid signature");
  if ( memcmp((const void *)(a5 + 68), &unk_6FB988A7, 0xCu) )
    sub_6F8361F7(a1, 0, a3, 0, (int)"PCS illuminant is not D50");
  v11 = (*(_BYTE *)(a5 + 18) << 8) + (*(_BYTE *)(a5 + 17) << 16) + (*(_BYTE *)(a5 + 16) << 24) + *(_BYTE *)(a5 + 19);
  if ( v11 == 1196573017 )
  {
    if ( a6 & 2 )
      return sub_6F8361F7(a1, a2, a3, 0x47524159u, (int)"Gray color space not permitted on RGB PNG");
  }
  else
  {
    if ( v11 != 1380401696 )
      return sub_6F8361F7(a1, a2, a3, v11, (int)"invalid ICC profile color space");
    if ( !(a6 & 2) )
      return sub_6F8361F7(a1, a2, a3, 0x52474220u, (int)"RGB color space not permitted on grayscale PNG");
  }
  v12 = (*(_BYTE *)(a5 + 14) << 8) + (*(_BYTE *)(a5 + 13) << 16) + (*(_BYTE *)(a5 + 12) << 24) + *(_BYTE *)(a5 + 15);
  if ( v12 == 1852662636 )
  {
    sub_6F8361F7(a1, 0, a3, 0x6E6D636Cu, (int)"unexpected NamedColor ICC profile class");
  }
  else if ( v12 > 0x6E6D636C )
  {
    if ( v12 != 1935896178 && v12 != 1936744803 && v12 != 1886549106 )
    {
LABEL_36:
      sub_6F8361F7(a1, 0, a3, v12, (int)"unrecognized ICC profile class");
      goto LABEL_37;
    }
  }
  else
  {
    if ( v12 == 1818848875 )
      return sub_6F8361F7(a1, a2, a3, 0x6C696E6Bu, (int)"unexpected DeviceLink ICC profile class");
    if ( v12 != 1835955314 )
    {
      if ( v12 == 1633842036 )
        return sub_6F8361F7(a1, a2, a3, 0x61627374u, (int)"invalid embedded Abstract ICC profile");
      goto LABEL_36;
    }
  }
LABEL_37:
  v13 = (*(_BYTE *)(a5 + 22) << 8) + (*(_BYTE *)(a5 + 21) << 16) + (*(_BYTE *)(a5 + 20) << 24) + *(_BYTE *)(a5 + 23);
  if ( v13 == 1281450528 || v13 == 1482250784 )
    result = 1;
  else
    result = sub_6F8361F7(a1, a2, a3, v13, (int)"unexpected ICC PCS encoding");
  return result;
}
