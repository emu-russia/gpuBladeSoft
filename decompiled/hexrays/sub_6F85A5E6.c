int __cdecl sub_6F85A5E6(int a1, char *a2, signed int a3, signed int a4, signed int a5, int a6, const char *a7, int a8)
{
  char *v8; // ebx@6
  size_t v9; // eax@6
  char v11; // [sp+12h] [bp-76h]@3
  char v12; // [sp+62h] [bp-26h]@8
  __int16 v13; // [sp+66h] [bp-22h]@8
  char v14; // [sp+6Ah] [bp-1Eh]@8
  char v15; // [sp+6Bh] [bp-1Dh]@8
  char *v16; // [sp+6Ch] [bp-1Ch]@5
  int v17; // [sp+70h] [bp-18h]@5
  int v18; // [sp+74h] [bp-14h]@3
  int i; // [sp+78h] [bp-10h]@5
  unsigned int v20; // [sp+7Ch] [bp-Ch]@5

  if ( a5 > 3 )
    sub_6F839044(a1, (int)"Unrecognized equation type for pCAL chunk");
  v18 = sub_6F858C17(a1, a2, (unsigned __int8 *)&v11);
  if ( !v18 )
    sub_6F839044(a1, (int)"pCAL: invalid keyword");
  ++v18;
  v17 = (a6 != 0) + strlen(a7);
  v20 = v18 + v17 + 10;
  v16 = (char *)sub_6F83B4D4(a1, 4 * a6);
  for ( i = 0; i < a6; ++i )
  {
    v8 = &v16[4 * i];
    v9 = strlen(*(const char **)(4 * i + a8));
    *(_DWORD *)v8 = (a6 - 1 != i) + v9;
    v20 += *(_DWORD *)&v16[4 * i];
  }
  sub_6F858091(a1, 0x7043414Cu, v20);
  sub_6F85818E(a1, (int)&v11, v18);
  sub_6F8348CA((int)&v12, a3);
  sub_6F8348CA((int)&v13, a4);
  v14 = a5;
  v15 = a6;
  sub_6F85818E(a1, (int)&v12, 10);
  sub_6F85818E(a1, (int)a7, v17);
  for ( i = 0; i < a6; ++i )
    sub_6F85818E(a1, *(_DWORD *)(4 * i + a8), *(_DWORD *)&v16[4 * i]);
  sub_6F83B5A7(a1, (int)v16);
  return sub_6F8581DC(a1);
}
