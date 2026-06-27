int __cdecl sub_6F6CB7C0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // esi@1
  int *v8; // ebx@1
  signed int v9; // edi@1
  signed int v10; // esi@1
  signed int v11; // ebx@1
  int v12; // edx@1
  int result; // eax@1
  int v14; // [sp+30h] [bp-2Ch]@1
  int v15; // [sp+34h] [bp-28h]@1
  int v16; // [sp+38h] [bp-24h]@1

  v14 = a5;
  v15 = a6;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v7 = 4 * *a1;
  v8 = &dword_6FBBFE50[v7];
  v9 = dword_6FBBFE50[v7] - (((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255);
  v10 = dword_6FBBFE54[v7]
      - ((((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                              - 255))
       + 255);
  v11 = v8[2] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255);
  *a1 = (((unsigned __int16)~(unsigned __int16)(v11 >> 31) & (unsigned __int16)v11) << 7) & 0x7C00 | 4 * (~(unsigned __int16)(v10 >> 31) & v10) & 0x3E0 | ((~(v9 >> 31) & v9) >> 3) & 0x1F;
  v12 = *a2;
  result = ~(((unsigned __int8)*a2 - a5) >> 31) & ((unsigned __int8)*a2 - a5) | ((((unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                 - a7) & ~(((unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                          - a7) >> 31)) << 16) | (((BYTE1(v12) - a6) & ~((BYTE1(v12) - a6) >> 31)) << 8);
  *a2 = result;
  return result;
}
