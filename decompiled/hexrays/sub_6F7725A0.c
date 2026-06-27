int __cdecl sub_6F7725A0(int a1, _DWORD *a2)
{
  int (__cdecl *v2)(int, _DWORD, unsigned __int8 *, signed int); // eax@1
  int result; // eax@3
  unsigned int v4; // edx@4
  unsigned __int8 v5; // [sp+1Fh] [bp-Dh]@1

  v5 = 0;
  v2 = *(int (__cdecl **)(int, _DWORD, unsigned __int8 *, signed int))(a1 + 20);
  *a2 = 0;
  if ( v2 )
  {
    if ( v2(a1, *(_DWORD *)(a1 + 8), &v5, 1) != 1 )
    {
LABEL_3:
      *a2 = 85;
      return 0;
    }
    v4 = *(_DWORD *)(a1 + 8);
    result = v5;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 >= *(_DWORD *)(a1 + 4) )
      goto LABEL_3;
    result = *(_BYTE *)(*(_DWORD *)a1 + v4);
  }
  *(_DWORD *)(a1 + 8) = v4 + 1;
  return result;
}
