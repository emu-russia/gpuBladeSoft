void __cdecl __noreturn sub_6F8A1D70(int a1)
{
  int v1; // edx@1
  int v2; // eax@3
  int v3; // eax@5
  signed int *v4; // ecx@5
  int **v5; // edx@5
  int i; // eax@6
  int v7; // [sp+18h] [bp-14h]@5
  char v8; // [sp+1Ch] [bp-10h]@5

  v1 = dword_6FB48A44;
  if ( dword_6FB48A44 < 0 )
  {
    sub_6F8A1780();
    v1 = dword_6FB48A44;
  }
  v2 = dword_70372B8C;
  if ( v1 )
    v2 = sub_6F8B48C0(dword_70372B88);
  v7 = v2;
  v3 = a1;
  v4 = (signed int *)&v8;
  v5 = (int **)&v7;
  if ( *(_DWORD *)(a1 + 12) )
    goto LABEL_9;
  for ( i = sub_6F8A17C0(a1, &v7, (signed int *)&v8); ; i = sub_6F8A18E0(v3, v5, v4) )
  {
    if ( i != 7 )
      abort();
    v3 = sub_6F8A1880(&v7);
LABEL_9:
    ;
  }
}
