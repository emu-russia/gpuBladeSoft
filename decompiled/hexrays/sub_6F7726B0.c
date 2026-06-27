int __cdecl sub_6F7726B0(int a1, _DWORD *a2)
{
  int v2; // edx@1
  int (__cdecl *v3)(int, int, char *, signed int); // eax@2
  char *v4; // edi@3
  int result; // eax@4
  char v6; // [sp+1Eh] [bp-Eh]@3

  v2 = *(_DWORD *)(a1 + 8);
  *a2 = 0;
  if ( (unsigned int)(v2 + 1) >= *(_DWORD *)(a1 + 4) )
    goto LABEL_4;
  v3 = *(int (__cdecl **)(int, int, char *, signed int))(a1 + 20);
  if ( v3 )
  {
    v4 = &v6;
    if ( v3(a1, v2, &v6, 2) != 2 )
    {
LABEL_4:
      *a2 = 85;
      return 0;
    }
    v2 = *(_DWORD *)(a1 + 8);
  }
  else
  {
    v4 = (char *)(*(_DWORD *)a1 + v2);
    if ( !v4 )
    {
      result = 0;
      goto LABEL_7;
    }
  }
  result = (unsigned __int8)*v4 | ((unsigned __int8)v4[1] << 8);
LABEL_7:
  *(_DWORD *)(a1 + 8) = v2 + 2;
  return result;
}
