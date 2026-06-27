int __cdecl sub_6F6B70A0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // edi@2
  signed int v9; // ebp@2
  int *v10; // esi@2
  signed int v11; // edi@2
  signed int v12; // esi@2
  int v13; // edx@2
  int v14; // [sp+30h] [bp-2Ch]@2
  int v15; // [sp+34h] [bp-28h]@2
  int v16; // [sp+38h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v14 = a5;
    v15 = a6;
    v16 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v14);
    v8 = 4 * *a1;
    v9 = dword_6FBBFE50[v8] - (((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255);
    v10 = &dword_6FBBFE50[v8];
    v11 = dword_6FBBFE54[v8]
        - ((((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                                - 255))
         + 255);
    v12 = v10[2] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255);
    *a1 = (((unsigned __int16)~(unsigned __int16)(v12 >> 31) & (unsigned __int16)v12) << 7) & 0x7C00 | 4 * (~(unsigned __int16)(v11 >> 31) & v11) & 0x3E0 | ((~(v9 >> 31) & v9) >> 3) & 0x1F;
    v13 = *a2;
    *a2 = ~(((unsigned __int8)*a2 - a5) >> 31) & ((unsigned __int8)*a2 - a5) | ((~(((unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                  - (unsigned __int8)a7) >> 31) & ((unsigned __int8)((unsigned int)*a2 >> 16) - (unsigned __int8)a7)) << 16) | (((BYTE1(v13) - a6) & ~((BYTE1(v13) - a6) >> 31)) << 8);
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
