char *__cdecl sub_6F7A5250(int a1, int a2)
{
  int v2; // ebp@1
  _BYTE *v3; // ebx@1
  unsigned int v4; // eax@1
  char *result; // eax@2
  int v6; // edi@3
  char *v7; // ecx@3
  int v8; // edx@4
  char *v9; // eax@7
  int v10; // ecx@7
  char *v11; // edx@7
  int v12; // [sp+2Ch] [bp-20h]@1

  v12 = 0;
  v2 = *(_DWORD *)(a1 + 24);
  v3 = (_BYTE *)(*(_DWORD *)(a1 + 16) + 10);
  v4 = *(_DWORD *)(a1 + 28);
  if ( v2 + 1 > v4 )
  {
    *(_DWORD *)(a1 + 36) = a2;
    v9 = sub_6F773B30(a2, 4, v4, v2 + 1, *(char **)(a1 + 32), &v12);
    v10 = v12;
    v11 = v9;
    *(_DWORD *)(a1 + 32) = v9;
    result = 0;
    if ( v10 )
      return result;
    *(_DWORD *)(a1 + 28) = v2 + 1;
    result = v11;
  }
  else
  {
    result = *(char **)(a1 + 32);
  }
  v6 = 4 * v2;
  v7 = result;
  if ( v2 )
  {
    do
    {
      v8 = *v3;
      v7 += 4;
      v3 += 11;
      *((_DWORD *)v7 - 1) = *(v3 - 9) | (v8 << 16) | (*(v3 - 10) << 8);
    }
    while ( &result[4 * v2] != v7 );
  }
  else
  {
    v6 = 0;
  }
  *(_DWORD *)&result[v6] = 0;
  return result;
}
