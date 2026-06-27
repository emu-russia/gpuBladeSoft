int __cdecl sub_6F861FBC(int a1, int a2, int a3)
{
  int result; // eax@3
  int v4; // eax@5

  if ( !a2 || !a3 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 43;
    (*(void (__cdecl **)(int))v4)(a1);
    result = *(_DWORD *)(a1 + 24);
    if ( result )
      goto LABEL_4;
LABEL_6:
    result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 0, 28);
    *(_DWORD *)(a1 + 24) = result;
    goto LABEL_4;
  }
  result = *(_DWORD *)(a1 + 24);
  if ( !result )
    goto LABEL_6;
LABEL_4:
  *(_DWORD *)(result + 8) = sub_6F861E18;
  *(_DWORD *)(result + 12) = sub_6F861E20;
  *(_DWORD *)(result + 16) = sub_6F861E5C;
  *(_DWORD *)(result + 20) = sub_6F864F74;
  *(_DWORD *)(result + 24) = sub_6F861E9C;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)result = a2;
  return result;
}
