char *__cdecl sub_6F79A340(int a1, int a2)
{
  char *result; // eax@1
  signed int v3; // ecx@2
  int v4; // esi@5
  int v5; // ebp@5
  int v6; // edi@7
  bool v7; // cf@7
  bool v8; // zf@7
  char *v9; // eax@8
  int v10; // esi@8
  bool v11; // cf@10
  bool v12; // zf@10
  unsigned int v13; // ecx@12
  unsigned int v14; // ecx@15
  int v15; // [sp+3Ch] [bp-20h]@12

  result = *(char **)(a1 + 4);
  if ( !result )
  {
    v3 = 6;
    if ( *(_DWORD *)(a1 + 12) != 1 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 4) = v3;
      return result;
    }
    v4 = *(_DWORD *)(a1 + 28);
    v5 = *(_DWORD *)a1;
    result = *(char **)(a1 + 36);
    if ( v4 )
      *(_DWORD *)&result[16 * (v4 + 0xFFFFFFF) + 12] = a2;
    v6 = v4 + 1;
    v7 = (unsigned int)(v4 + 1) < *(_DWORD *)(a1 + 32);
    v8 = v4 + 1 == *(_DWORD *)(a1 + 32);
    if ( (unsigned int)(v4 + 1) > *(_DWORD *)(a1 + 32) )
    {
      v13 = *(_DWORD *)(a1 + 32);
      v15 = 0;
      if ( !v7 && !v8 )
      {
        result = sub_6F773B30(v5, 16, v13, (v4 + 8) & 0xFFFFFFF8, result, &v15);
        v3 = v15;
        *(_DWORD *)(a1 + 36) = result;
        if ( v3 )
          goto LABEL_3;
        *(_DWORD *)(a1 + 32) = (v4 + 8) & 0xFFFFFFF8;
      }
    }
    v9 = &result[16 * v4];
    *(_DWORD *)v9 = 0;
    *((_DWORD *)v9 + 3) = 0;
    v10 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 28) = v6;
    result = *(char **)(a1 + 72);
    if ( v10 )
      *(_DWORD *)&result[16 * (v10 + 0xFFFFFFF) + 12] = a2;
    v11 = (unsigned int)(v10 + 1) < *(_DWORD *)(a1 + 68);
    v12 = v10 + 1 == *(_DWORD *)(a1 + 68);
    if ( (unsigned int)(v10 + 1) > *(_DWORD *)(a1 + 68) )
    {
      v14 = *(_DWORD *)(a1 + 68);
      v15 = 0;
      if ( !v11 && !v12 )
      {
        result = sub_6F773B30(v5, 16, v14, (v10 + 8) & 0xFFFFFFF8, result, &v15);
        v3 = v15;
        *(_DWORD *)(a1 + 72) = result;
        if ( v3 )
          goto LABEL_3;
        *(_DWORD *)(a1 + 68) = (v10 + 8) & 0xFFFFFFF8;
      }
    }
    result += 16 * v10;
    *(_DWORD *)result = 0;
    *((_DWORD *)result + 3) = 0;
    *(_DWORD *)(a1 + 64) = v10 + 1;
  }
  return result;
}
