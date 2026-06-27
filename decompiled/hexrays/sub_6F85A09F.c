int __cdecl sub_6F85A09F(int a1, char *a2, const char *a3)
{
  char v4; // [sp+18h] [bp-60h]@1
  unsigned int v5; // [sp+68h] [bp-10h]@1
  unsigned int v6; // [sp+6Ch] [bp-Ch]@5

  v5 = sub_6F858C17(a1, a2, (unsigned __int8 *)&v4);
  if ( !v5 )
    sub_6F839044(a1, (int)"tEXt: invalid keyword");
  if ( a3 && *a3 )
    v6 = strlen(a3);
  else
    v6 = 0;
  if ( 2147483646 - v5 < v6 )
    sub_6F839044(a1, (int)"tEXt: text too long");
  sub_6F858091(a1, 0x74455874u, v5 + v6 + 1);
  sub_6F85818E(a1, (int)&v4, v5 + 1);
  if ( v6 )
    sub_6F85818E(a1, (int)a3, v6);
  return sub_6F8581DC(a1);
}
