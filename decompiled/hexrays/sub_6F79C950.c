int __cdecl sub_6F79C950(int a1, signed __int16 a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx@1
  int v7; // ecx@1
  int v8; // esi@1
  int result; // eax@1
  int v10; // ebx@2
  unsigned int v11; // ebx@4
  signed int v12; // esi@5
  int v13; // ecx@5
  unsigned __int16 v14; // bx@10
  int v15; // edi@16
  int v16; // edi@22
  int v17; // ecx@22
  _BYTE *v18; // esi@22
  int v19; // ecx@28
  __int16 v20; // [sp+6h] [bp-12h]@10

  v6 = *(_DWORD *)(a1 + 4);
  v7 = -v6;
  v8 = -v6 & a4;
  result = -v6 & (v6 + a3 - 1);
  if ( result <= v8 )
  {
    v10 = *(_DWORD *)a1;
LABEL_3:
    result >>= v10;
    if ( result >= 0 )
    {
      v11 = *(_DWORD *)(a1 + 104);
      if ( v11 > result )
      {
        v12 = 128 >> (a2 & 7);
        v13 = *(_DWORD *)(a1 + 112);
        result = *(_DWORD *)(a1 + 60) + (signed __int16)(a2 >> 3) - v13 * result;
        if ( v13 > 0 )
          result += v13 * (v11 - 1);
        *(_BYTE *)result |= v12;
      }
    }
    return result;
  }
  if ( result != v8 + v6 )
    return result;
  v20 = *(_WORD *)(a5 + 12);
  v14 = *(_WORD *)(a5 + 12) & 7;
  if ( v14 != 1 )
  {
    if ( v14 < 1u )
    {
      v15 = v8;
      goto LABEL_18;
    }
    if ( v14 == 4 )
    {
LABEL_17:
      v15 = v7 & (*(_DWORD *)(a1 + 8) + (a3 + a4 - 1) / 2);
      goto LABEL_18;
    }
    if ( v14 != 5 )
      return result;
  }
  if ( *(_DWORD *)(a5 + 28) == a6 && *(_DWORD *)(a5 + 16) <= 0 && (!(v20 & 0x10) || a4 - a3 < *(_DWORD *)(a1 + 8))
    || a5 == *(_DWORD *)(a6 + 28) && *(_DWORD *)(a5 + 20) == a2 && (!(v20 & 0x20) || a4 - a3 < *(_DWORD *)(a1 + 8)) )
  {
    return result;
  }
  v15 = v8;
  if ( v14 != 1 )
    goto LABEL_17;
LABEL_18:
  v10 = *(_DWORD *)a1;
  if ( v15 >= 0 )
  {
    if ( (unsigned int)(v15 >> v10) >= *(_DWORD *)(a1 + 104) )
    {
      v19 = v8;
      v8 = result;
      result = v19;
    }
    else if ( v15 != result )
    {
      v8 = result;
      result = v15;
    }
  }
  v16 = *(_DWORD *)(a1 + 112);
  v17 = v8 >> v10;
  v18 = (_BYTE *)((signed __int16)(a2 >> 3) - v16 * (v8 >> v10) + *(_DWORD *)(a1 + 60));
  if ( v16 > 0 )
    v18 += (*(_DWORD *)(a1 + 104) - 1) * v16;
  if ( v17 < 0 || *(_DWORD *)(a1 + 104) <= (unsigned int)v17 || !((unsigned __int8)(128 >> (a2 & 7)) & *v18) )
    goto LABEL_3;
  return result;
}
