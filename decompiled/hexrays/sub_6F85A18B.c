int __cdecl sub_6F85A18B(int a1, char *a2, const char *a3, int a4, int a5)
{
  int result; // eax@2
  int v6; // eax@8
  char v7; // [sp+1Ch] [bp-46Ch]@10
  int v8; // [sp+24h] [bp-464h]@12
  char v9[81]; // [sp+42Bh] [bp-5Dh]@5
  int v10; // [sp+47Ch] [bp-Ch]@5

  if ( a5 == -1 )
  {
    result = sub_6F85A09F(a1, a2, a3);
  }
  else
  {
    if ( a5 )
      sub_6F839044(a1, (int)"zTXt: invalid compression type");
    v10 = sub_6F858C17(a1, a2, (unsigned __int8 *)v9);
    if ( !v10 )
      sub_6F839044(a1, (int)"zTXt: invalid keyword");
    v9[++v10] = 0;
    ++v10;
    if ( a3 )
      v6 = strlen(a3);
    else
      v6 = 0;
    sub_6F85891A((int)&v7, (int)a3, v6);
    if ( sub_6F85893A(a1, 0x7A545874u, (int)&v7, v10) )
      sub_6F839044(a1, *(_DWORD *)(a1 + 156));
    sub_6F858091(a1, 0x7A545874u, v8 + v10);
    sub_6F85818E(a1, (int)v9, v10);
    sub_6F858B79(a1, (int)&v7);
    result = sub_6F8581DC(a1);
  }
  return result;
}
