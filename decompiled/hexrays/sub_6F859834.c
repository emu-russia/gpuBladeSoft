int __cdecl sub_6F859834(int a1, int a2)
{
  signed int v2; // eax@2
  char v4; // [sp+16h] [bp-72h]@8
  char v5; // [sp+17h] [bp-71h]@8
  char v6; // [sp+18h] [bp-70h]@8
  char v7; // [sp+19h] [bp-6Fh]@8
  __int16 v8; // [sp+1Ah] [bp-6Eh]@8
  int v9; // [sp+1Ch] [bp-6Ch]@9
  char v10; // [sp+20h] [bp-68h]@4
  unsigned int v11; // [sp+70h] [bp-18h]@4
  int v12; // [sp+74h] [bp-14h]@4
  int v13; // [sp+78h] [bp-10h]@4
  unsigned int i; // [sp+7Ch] [bp-Ch]@6

  if ( *(_BYTE *)(a2 + 4) == 8 )
    v2 = 6;
  else
    v2 = 10;
  v13 = v2;
  v12 = v2 * *(_DWORD *)(a2 + 12);
  v11 = sub_6F858C17(a1, *(char **)a2, (unsigned __int8 *)&v10);
  if ( !v11 )
    sub_6F839044(a1, (int)"sPLT: invalid keyword");
  sub_6F858091(a1, 0x73504C54u, v11 + v12 + 2);
  sub_6F85818E(a1, (int)&v10, v11 + 1);
  sub_6F85818E(a1, a2 + 4, 1);
  for ( i = *(_DWORD *)(a2 + 8); *(_DWORD *)(a2 + 8) + 10 * *(_DWORD *)(a2 + 12) > i; i += 10 )
  {
    if ( *(_BYTE *)(a2 + 4) == 8 )
    {
      v4 = *(_WORD *)i;
      v5 = *(_WORD *)(i + 2);
      v6 = *(_WORD *)(i + 4);
      v7 = *(_WORD *)(i + 6);
      sub_6F857FE5((int)&v8, *(_WORD *)(i + 8));
    }
    else
    {
      sub_6F857FE5((int)&v4, *(_WORD *)i);
      sub_6F857FE5((int)&v6, *(_WORD *)(i + 2));
      sub_6F857FE5((int)&v8, *(_WORD *)(i + 4));
      sub_6F857FE5((int)&v9, *(_WORD *)(i + 6));
      sub_6F857FE5((int)&v9 + 2, *(_WORD *)(i + 8));
    }
    sub_6F85818E(a1, (int)&v4, v13);
  }
  return sub_6F8581DC(a1);
}
