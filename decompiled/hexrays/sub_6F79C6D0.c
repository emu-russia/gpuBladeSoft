int __cdecl sub_6F79C6D0(int a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebp@1
  int result; // eax@1
  int v8; // ebx@1
  int v9; // esi@2
  signed int v10; // ecx@5
  _BYTE *v11; // edx@5
  unsigned __int16 v12; // cx@8
  int v13; // edi@14
  signed int v14; // ebx@20
  __int16 v15; // [sp+2h] [bp-12h]@8

  v6 = *(_DWORD *)(a1 + 4);
  result = -v6 & (v6 + a3 - 1);
  v8 = -v6 & a4;
  if ( result <= v8 )
  {
    v9 = *(_DWORD *)a1;
LABEL_3:
    result >>= v9;
    if ( result >= 0 && result < *(_WORD *)(a1 + 56) )
    {
      v10 = result;
      result &= 7u;
      v11 = (_BYTE *)(*(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 148) + (v10 >> 3));
      *v11 |= 128 >> result;
    }
    return result;
  }
  if ( result != v8 + v6 )
    return result;
  v15 = *(_WORD *)(a5 + 12);
  v12 = *(_WORD *)(a5 + 12) & 7;
  if ( v12 != 1 )
  {
    if ( v12 < 1u )
    {
      v13 = -v6 & a4;
      goto LABEL_16;
    }
    if ( v12 == 4 )
    {
LABEL_15:
      v13 = -v6 & (*(_DWORD *)(a1 + 8) + (a3 + a4 - 1) / 2);
      goto LABEL_16;
    }
    if ( v12 != 5 )
      return result;
  }
  if ( *(_DWORD *)(a5 + 28) == a6 && *(_DWORD *)(a5 + 16) <= 0 && (!(v15 & 0x10) || a4 - a3 < *(_DWORD *)(a1 + 8))
    || a5 == *(_DWORD *)(a6 + 28) && *(_DWORD *)(a5 + 20) == a2 && (!(v15 & 0x20) || a4 - a3 < *(_DWORD *)(a1 + 8)) )
  {
    return result;
  }
  v13 = -v6 & a4;
  if ( (*(_WORD *)(a5 + 12) & 7) != 1 )
    goto LABEL_15;
LABEL_16:
  v9 = *(_DWORD *)a1;
  if ( v13 >= 0 )
  {
    if ( v13 >> v9 >= *(_WORD *)(a1 + 56) )
    {
      v8 = -v6 & (v6 + a3 - 1);
      result = -v6 & a4;
    }
    else if ( v13 != result )
    {
      v8 = -v6 & (v6 + a3 - 1);
      result = v13;
    }
  }
  v14 = v8 >> v9;
  if ( v14 < 0
    || v14 >= *(_WORD *)(a1 + 56)
    || !((128 >> (v14 & 7)) & *(_BYTE *)(*(_DWORD *)(a1 + 148) + *(_DWORD *)(a1 + 60) + (v14 >> 3))) )
  {
    goto LABEL_3;
  }
  return result;
}
