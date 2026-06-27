int __cdecl sub_6F791640(int a1, signed int a2, int a3)
{
  char *v3; // eax@1
  int v4; // edx@1
  int result; // eax@2
  int v6; // [sp+2Ch] [bp+0h]@1

  *(_DWORD *)(a1 + 32) = a3;
  v3 = sub_6F773B30(a3, 4, 0, a2, 0, &v6);
  v4 = v6;
  *(_DWORD *)(a1 + 24) = v3;
  if ( v4 )
    goto LABEL_2;
  *(_DWORD *)(a1 + 28) = sub_6F773B30(a3, 4, 0, a2, 0, &v6);
  result = v6;
  if ( v6 )
  {
    v3 = *(char **)(a1 + 24);
LABEL_2:
    sub_6F773D90(a3, (int)v3);
    *(_DWORD *)(a1 + 24) = 0;
    return v6;
  }
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 12) = -559038737;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 36) = sub_6F791640;
  *(_DWORD *)(a1 + 40) = sub_6F791540;
  *(_DWORD *)(a1 + 44) = sub_6F791A30;
  *(_DWORD *)(a1 + 48) = sub_6F791470;
  return result;
}
