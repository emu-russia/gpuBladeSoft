int __cdecl sub_6F8A1C00(int a1)
{
  _DWORD *v1; // esi@2
  _DWORD *v2; // eax@4
  int (__cdecl *v3)(signed int, signed int, _DWORD, _DWORD, int, _DWORD **); // ecx@5
  int v4; // eax@6
  int result; // eax@9
  _DWORD *v6; // eax@13
  _DWORD *v7; // [sp+28h] [bp-14h]@3
  char v8; // [sp+2Ch] [bp-10h]@13

  if ( dword_6FB48A44 < 0 )
  {
    sub_6F8A1780();
    v1 = (_DWORD *)dword_70372B8C;
    if ( !dword_6FB48A44 )
      goto LABEL_3;
LABEL_12:
    v1 = (_DWORD *)sub_6F8B48C0(dword_70372B88);
    goto LABEL_3;
  }
  v1 = (_DWORD *)dword_70372B8C;
  if ( dword_6FB48A44 )
    goto LABEL_12;
LABEL_3:
  v7 = v1;
  if ( !v1 )
    return 5;
  v2 = v1;
  while ( 1 )
  {
    v3 = (int (__cdecl *)(signed int, signed int, _DWORD, _DWORD, int, _DWORD **))v2[6];
    if ( !v3 )
      goto LABEL_8;
    v4 = v3(1, 1, *(_DWORD *)a1, *(_DWORD *)(a1 + 4), a1, &v7);
    if ( v4 == 6 )
      break;
    if ( v4 != 8 )
      return 3;
LABEL_8:
    v2 = (_DWORD *)*v7;
    v7 = v2;
    if ( !v2 )
      return 5;
  }
  v6 = v7;
  *(_DWORD *)(a1 + 12) = 0;
  v7 = v1;
  *(_DWORD *)(a1 + 16) = v6;
  result = sub_6F8A17C0(a1, (int *)&v7, (signed int *)&v8);
  if ( result != 7 )
    return result;
  sub_6F8A1880((int *)&v7);
  return 3;
}
