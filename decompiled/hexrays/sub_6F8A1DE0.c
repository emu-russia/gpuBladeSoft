int __cdecl sub_6F8A1DE0(int a1)
{
  int v1; // eax@3
  int v3; // [sp+18h] [bp-14h]@4
  char v4; // [sp+1Ch] [bp-10h]@4

  if ( !*(_DWORD *)(a1 + 12) )
    return sub_6F8A1C00(a1);
  if ( dword_6FB48A44 < 0 )
  {
    sub_6F8A1780();
    v1 = dword_70372B8C;
    if ( !dword_6FB48A44 )
      goto LABEL_4;
LABEL_8:
    v1 = sub_6F8B48C0(dword_70372B88);
    goto LABEL_4;
  }
  v1 = dword_70372B8C;
  if ( dword_6FB48A44 )
    goto LABEL_8;
LABEL_4:
  v3 = v1;
  if ( sub_6F8A18E0(a1, (int **)&v3, (signed int *)&v4) != 7 )
    abort();
  sub_6F8A1880(&v3);
  return sub_6F8A1C00(a1);
}
