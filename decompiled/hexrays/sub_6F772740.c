int __cdecl sub_6F772740(int a1, _DWORD *a2)
{
  int v2; // edx@1
  int (__cdecl *v3)(int, int, char *, signed int); // eax@2
  int result; // eax@4
  char *v5; // ecx@5
  char v6; // [sp+1Dh] [bp-Fh]@3

  v2 = *(_DWORD *)(a1 + 8);
  *a2 = 0;
  if ( (unsigned int)(v2 + 2) >= *(_DWORD *)(a1 + 4) )
    goto LABEL_4;
  v3 = *(int (__cdecl **)(int, int, char *, signed int))(a1 + 20);
  if ( v3 )
  {
    if ( v3(a1, v2, &v6, 3) != 3 )
    {
LABEL_4:
      *a2 = 85;
      return 0;
    }
    v2 = *(_DWORD *)(a1 + 8);
    v5 = &v6;
  }
  else
  {
    v5 = (char *)(*(_DWORD *)a1 + v2);
    if ( !v5 )
    {
      result = 0;
      goto LABEL_7;
    }
  }
  result = (unsigned __int8)v5[2] | ((unsigned __int8)*v5 << 16) | ((unsigned __int8)v5[1] << 8);
LABEL_7:
  *(_DWORD *)(a1 + 8) = v2 + 3;
  return result;
}
