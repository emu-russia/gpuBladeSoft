int __cdecl sub_6F85A2EF(int a1, int a2, char *a3, const char *a4, const char *a5, const char *a6)
{
  int v6; // eax@25
  char v8; // [sp+10h] [bp-478h]@25
  unsigned int v9; // [sp+14h] [bp-474h]@28
  unsigned int v10; // [sp+18h] [bp-470h]@30
  char v11[82]; // [sp+41Eh] [bp-6Ah]@1
  int v12; // [sp+470h] [bp-18h]@17
  int v13; // [sp+474h] [bp-14h]@15
  int v14; // [sp+478h] [bp-10h]@19
  int v15; // [sp+47Ch] [bp-Ch]@1
  signed int v16; // [sp+494h] [bp+Ch]@10

  v15 = sub_6F858C17(a1, a3, (unsigned __int8 *)v11);
  if ( !v15 )
    sub_6F839044(a1, (int)"iTXt: invalid keyword");
  if ( a2 )
  {
    if ( a2 <= 0 )
    {
      if ( a2 != -1 )
        goto LABEL_12;
      goto LABEL_10;
    }
    if ( a2 == 1 )
    {
LABEL_10:
      v11[++v15] = 0;
      v16 = 0;
      goto LABEL_13;
    }
    if ( a2 != 2 )
LABEL_12:
      sub_6F839044(a1, (int)"iTXt: invalid compression");
  }
  v11[++v15] = 1;
  v16 = 1;
LABEL_13:
  v11[++v15] = 0;
  ++v15;
  if ( !a4 )
    a4 = (const char *)&unk_6FB9C3ED;
  v13 = strlen(a4) + 1;
  if ( !a5 )
    a5 = (const char *)&unk_6FB9C3ED;
  v12 = strlen(a5) + 1;
  if ( !a6 )
    a6 = (const char *)&unk_6FB9C3ED;
  v14 = v15;
  if ( 0x7FFFFFFF - v15 >= (unsigned int)v13 )
    v14 += v13;
  else
    v14 = 0x7FFFFFFF;
  if ( 0x7FFFFFFF - v14 >= (unsigned int)v12 )
    v14 += v12;
  else
    v14 = 0x7FFFFFFF;
  v6 = strlen(a6);
  sub_6F85891A((int)&v8, (int)a6, v6);
  if ( v16 )
  {
    if ( sub_6F85893A(a1, 0x69545874u, (int)&v8, v14) )
      sub_6F839044(a1, *(_DWORD *)(a1 + 156));
  }
  else
  {
    if ( v9 > 0x7FFFFFFF - v14 )
      sub_6F839044(a1, (int)"iTXt: uncompressed text too long");
    v10 = v9;
  }
  sub_6F858091(a1, 0x69545874u, v10 + v14);
  sub_6F85818E(a1, (int)v11, v15);
  sub_6F85818E(a1, (int)a4, v13);
  sub_6F85818E(a1, (int)a5, v12);
  if ( v16 )
    sub_6F858B79(a1, (int)&v8);
  else
    sub_6F85818E(a1, (int)a6, v9);
  return sub_6F8581DC(a1);
}
