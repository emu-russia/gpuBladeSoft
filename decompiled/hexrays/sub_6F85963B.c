int __cdecl sub_6F85963B(int a1, char *a2, int a3)
{
  char v4; // [sp+14h] [bp-474h]@11
  int v5; // [sp+1Ch] [bp-46Ch]@13
  char v6[81]; // [sp+423h] [bp-65h]@9
  int v7; // [sp+474h] [bp-14h]@9
  int v8; // [sp+478h] [bp-10h]@7
  int v9; // [sp+47Ch] [bp-Ch]@3

  if ( !a3 )
    sub_6F839044(a1, (int)"No profile for iCCP chunk");
  v9 = (*(_BYTE *)(a3 + 2) << 8) + (*(_BYTE *)(a3 + 1) << 16) + (*(_BYTE *)a3 << 24) + *(_BYTE *)(a3 + 3);
  if ( (unsigned int)v9 <= 0x83 )
    sub_6F839044(a1, (int)"ICC profile too short");
  if ( v9 & 3 )
    sub_6F839044(a1, (int)"ICC profile length invalid (not a multiple of 4)");
  v8 = (*(_BYTE *)(a3 + 2) << 8) + (*(_BYTE *)(a3 + 1) << 16) + (*(_BYTE *)a3 << 24) + *(_BYTE *)(a3 + 3);
  if ( v9 != v8 )
    sub_6F839044(a1, (int)"Profile length does not match profile");
  v7 = sub_6F858C17(a1, a2, (unsigned __int8 *)v6);
  if ( !v7 )
    sub_6F839044(a1, (int)"iCCP: invalid keyword");
  v6[++v7] = 0;
  ++v7;
  sub_6F85891A((int)&v4, a3, v9);
  if ( sub_6F85893A(a1, 0x69434350u, (int)&v4, v7) )
    sub_6F839044(a1, *(_DWORD *)(a1 + 156));
  sub_6F858091(a1, 0x69434350u, v5 + v7);
  sub_6F85818E(a1, (int)v6, v7);
  sub_6F858B79(a1, (int)&v4);
  return sub_6F8581DC(a1);
}
