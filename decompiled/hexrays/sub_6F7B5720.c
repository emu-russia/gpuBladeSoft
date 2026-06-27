void *__cdecl sub_6F7B5720(int a1)
{
  int v1; // esi@2
  void *v2; // ebx@2
  void *result; // eax@4
  int v4; // esi@6
  int v5; // eax@6
  int v6; // eax@6
  int v7; // eax@6
  int v8; // [sp+28h] [bp-14h]@2
  int v9; // [sp+2Ch] [bp-10h]@3

  if ( !a1 )
    goto LABEL_10;
  v1 = *(_DWORD *)(a1 + 8);
  v2 = sub_6F773A50(*(_DWORD *)(a1 + 8), 612, &v8);
  if ( v8 )
    goto LABEL_10;
  *((_DWORD *)v2 + 2) = v1;
  *((_DWORD *)v2 + 108) = 32;
  *((_DWORD *)v2 + 109) = sub_6F773B30(v1, 16, 0, 32, 0, &v9);
  if ( !v9 )
  {
    *((_DWORD *)v2 + 5) = 0;
    *((_WORD *)v2 + 221) = 0;
    *((_WORD *)v2 + 220) = 0;
    result = v2;
    *((_DWORD *)v2 + 97) = 0;
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 98) = 0;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    return result;
  }
  v4 = *((_DWORD *)v2 + 2);
  *((_WORD *)v2 + 220) = 0;
  v5 = *((_DWORD *)v2 + 6);
  *((_WORD *)v2 + 221) = 0;
  sub_6F773D90(v4, v5);
  v6 = *((_DWORD *)v2 + 109);
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 5) = 0;
  sub_6F773D90(v4, v6);
  v7 = *((_DWORD *)v2 + 98);
  *((_DWORD *)v2 + 109) = 0;
  *((_DWORD *)v2 + 108) = 0;
  *((_DWORD *)v2 + 107) = 0;
  sub_6F773D90(v4, v7);
  *((_DWORD *)v2 + 98) = 0;
  *((_DWORD *)v2 + 97) = 0;
  *((_DWORD *)v2 + 1) = 0;
  *(_DWORD *)v2 = 0;
  sub_6F773D90(v4, (int)v2);
  result = v2;
  if ( v9 )
LABEL_10:
    result = 0;
  return result;
}
