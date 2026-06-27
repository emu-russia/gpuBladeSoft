int __cdecl sub_6F836BC5(int a1, int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // [sp+28h] [bp-20h]@2
  unsigned int v7; // [sp+2Ch] [bp-1Ch]@2
  unsigned int v8; // [sp+30h] [bp-18h]@2
  unsigned int v9; // [sp+34h] [bp-14h]@1
  int v10; // [sp+38h] [bp-10h]@1
  unsigned int v11; // [sp+3Ch] [bp-Ch]@1

  v9 = (*(_BYTE *)(a5 + 130) << 8) + (*(_BYTE *)(a5 + 129) << 16) + (*(_BYTE *)(a5 + 128) << 24) + *(_BYTE *)(a5 + 131);
  v10 = a5 + 132;
  v11 = 0;
  while ( v11 < v9 )
  {
    v8 = (*(_BYTE *)(v10 + 2) << 8) + (*(_BYTE *)(v10 + 1) << 16) + (*(_BYTE *)v10 << 24) + *(_BYTE *)(v10 + 3);
    v7 = (*(_BYTE *)(v10 + 6) << 8) + (*(_BYTE *)(v10 + 5) << 16) + (*(_BYTE *)(v10 + 4) << 24) + *(_BYTE *)(v10 + 7);
    v6 = (*(_BYTE *)(v10 + 10) << 8) + (*(_BYTE *)(v10 + 9) << 16) + (*(_BYTE *)(v10 + 8) << 24) + *(_BYTE *)(v10 + 11);
    if ( *(_BYTE *)(v10 + 7) & 3 )
      sub_6F8361F7(a1, 0, a3, v8, (int)"ICC profile tag start not a multiple of 4");
    if ( v7 > a4 || a4 - v7 < v6 )
      return sub_6F8361F7(a1, a2, a3, v8, (int)"ICC profile tag outside profile");
    ++v11;
    v10 += 12;
  }
  return 1;
}
