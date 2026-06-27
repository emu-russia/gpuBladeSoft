signed int __cdecl sub_6F88D190(int a1, char *a2, signed int a3)
{
  char *v3; // edi@1
  unsigned int v4; // esi@1
  int v5; // eax@3
  signed int result; // eax@5
  int v7; // ebp@7
  int v8; // eax@10
  int v9; // eax@14
  size_t v10; // eax@17
  int v11; // ST0C_4@20
  int v12; // edx@28
  int v13; // [sp+1Ch] [bp-20h]@14

  v3 = a2;
  v4 = a3;
  if ( !a1 )
    return -1;
  if ( *(_DWORD *)(a1 + 12) != 7247 )
    return -1;
  v5 = *(_DWORD *)(a1 + 76);
  if ( v5 != -5 )
  {
    if ( v5 )
      return -1;
  }
  if ( a3 < 0 )
  {
    sub_6F88C430(a1, -3, "requested length does not fit in int");
    return -1;
  }
  result = 0;
  if ( !a3 )
    return result;
  if ( *(_DWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 72) = 0;
    if ( sub_6F88D120(a1, v12) == -1 )
      return -1;
  }
  v7 = 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 )
    {
      if ( v4 <= v10 )
        v10 = v4;
      v13 = v10;
      v11 = v10;
      memcpy(v3, *(const void **)(a1 + 4), v10);
      *(_DWORD *)(a1 + 4) += v11;
      *(_DWORD *)a1 -= v11;
      v9 = v11;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(a1 + 52) && !*(_DWORD *)(a1 + 88) )
      break;
    v8 = *(_DWORD *)(a1 + 44);
    if ( !v8 || v4 < 2 * *(_DWORD *)(a1 + 24) )
    {
      if ( sub_6F88D080(a1) == -1 )
        return -1;
      goto LABEL_16;
    }
    if ( v8 == 1 )
    {
      if ( sub_6F88CC30(a1, (int)v3, v4, (unsigned int *)&v13) == -1 )
        return -1;
      v9 = v13;
    }
    else
    {
      *(_DWORD *)(a1 + 100) = v4;
      *(_DWORD *)(a1 + 96) = v3;
      if ( sub_6F88CF20(a1) == -1 )
        return -1;
      v9 = *(_DWORD *)a1;
      *(_DWORD *)a1 = 0;
      v13 = v9;
    }
LABEL_15:
    *(_DWORD *)(a1 + 8) += v9;
    v4 -= v9;
    v3 += v9;
    v7 += v9;
LABEL_16:
    if ( !v4 )
      return v7;
  }
  *(_DWORD *)(a1 + 56) = 1;
  return v7;
}
