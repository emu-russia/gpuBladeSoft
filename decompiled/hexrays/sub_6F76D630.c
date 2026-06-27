int __cdecl sub_6F76D630(int a1, int a2, unsigned int *a3)
{
  int v3; // ebp@2
  unsigned int v4; // eax@4
  int v5; // edx@4
  int v7; // [sp+1Ch] [bp-20h]@8

  if ( a1 && (v3 = *(_DWORD *)(a1 + 92)) != 0 && *(_DWORD *)(a1 + 16) )
  {
    v7 = a2;
    do
      v4 = (*(int (__cdecl **)(int, int *))(*(_DWORD *)(v3 + 12) + 16))(v3, &v7);
    while ( v4 >= *(_DWORD *)(a1 + 16) );
    v5 = 0;
    if ( v4 )
      v5 = v7;
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  if ( a3 )
    *a3 = v4;
  return v5;
}
