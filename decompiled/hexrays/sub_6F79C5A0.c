int __cdecl sub_6F79C5A0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi@1
  int v6; // edx@1
  int result; // eax@2
  int v8; // esi@4
  signed int v9; // ecx@5
  int v10; // ebp@5
  signed int v11; // edx@9
  signed int v12; // edi@9
  signed int v13; // esi@9
  int v14; // ecx@9
  int v15; // esi@9
  int v16; // ebx@9
  int v17; // edx@11
  char *v18; // ecx@11

  v5 = *(_DWORD *)(a1 + 4);
  v6 = (-v5 & (v5 + a3 - 1)) >> *(_DWORD *)a1;
  if ( (*(_WORD *)(a5 + 12) & 7) == 2
    || (result = (-v5 & (v5 + a3 - 1)) >> *(_DWORD *)a1, a4 - a3 - v5 > *(_DWORD *)(a1 + 20)) )
  {
    result = (-v5 & a4) >> *(_DWORD *)a1;
  }
  if ( result >= 0 )
  {
    v8 = *(_WORD *)(a1 + 56);
    if ( v6 < v8 )
    {
      v9 = 0;
      v10 = *(_DWORD *)(a1 + 148);
      if ( v6 >= 0 )
        v9 = v6;
      if ( result >= v8 )
        result = v8 - 1;
      v11 = 255 >> (v9 & 7);
      v12 = v9 >> 3;
      v13 = 127 >> (result & 7);
      v14 = *(_DWORD *)(a1 + 60);
      result = (result >> 3) - v12;
      v15 = ~v13;
      v16 = v14 + v10 + v12;
      if ( result <= 0 )
      {
        *(_BYTE *)v16 |= (unsigned __int8)v15 & (unsigned __int8)v11;
      }
      else
      {
        *(_BYTE *)v16 |= v11;
        if ( result != 1 )
        {
          v17 = result - 1;
          v18 = (char *)(v12 + v10 + 1 + v14);
          if ( (unsigned int)(result - 1) >= 4 )
          {
            *(_DWORD *)v18 = -1;
            *(_DWORD *)&v18[v17 - 4] = -1;
            v16 += v17;
            memset(
              (void *)((unsigned int)(v18 + 4) & 0xFFFFFFFC),
              0xFFu,
              4 * ((unsigned int)(&v18[v17] - ((unsigned int)(v18 + 4) & 0xFFFFFFFC)) >> 2));
          }
          else if ( result != 1 && (*v18 = -1, v17 & 2) )
          {
            v16 += v17;
            *(_WORD *)&v18[v17 - 2] = -1;
          }
          else
          {
            v16 += v17;
          }
        }
        result = v15;
        *(_BYTE *)(v16 + 1) |= v15;
      }
    }
  }
  return result;
}
