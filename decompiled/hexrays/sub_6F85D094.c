int __cdecl sub_6F85D094(int a1)
{
  bool v1; // al@5

  sub_6F85EE00(a1, 0);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    sub_6F86BF0C(a1);
    sub_6F860F8C(a1);
    sub_6F860570(a1, 0);
  }
  sub_6F86C9F8(a1);
  if ( !*(_BYTE *)(a1 + 209) )
  {
    sub_6F86F5B4(a1);
    if ( *(_DWORD *)(a1 + 200) > 1 )
      goto LABEL_5;
LABEL_8:
    v1 = *(_BYTE *)(a1 + 210) != 0;
    goto LABEL_6;
  }
  sub_6F86B108(a1);
  if ( *(_DWORD *)(a1 + 200) <= 1 )
    goto LABEL_8;
LABEL_5:
  v1 = 1;
LABEL_6:
  sub_6F86B914(a1, v1);
  sub_6F85D2A8(a1, 0);
  sub_6F85DD94(a1);
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 4) + 24))(a1);
  return (**(int (__cdecl ***)(_DWORD))(a1 + 388))(a1);
}
