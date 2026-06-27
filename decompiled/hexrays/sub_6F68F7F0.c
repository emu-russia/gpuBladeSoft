int __usercall sub_6F68F7F0@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ebp@1
  _WORD *v8; // edi@1
  int v9; // eax@1
  signed int v10; // esi@1
  int v11; // edx@1
  signed int v12; // ecx@1
  int result; // eax@1
  int v14; // [sp+20h] [bp-3Ch]@1
  int v15; // [sp+24h] [bp-38h]@1
  int v16; // [sp+28h] [bp-34h]@1

  v7 = a2;
  v8 = a1;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v9 = 4 * *v8;
  v10 = dword_6FBBFE50[v9] + (((~(v14 >> 31) & v14) - 255) & (((~(v14 >> 31) & v14) - 255) >> 31));
  *v8 = ((((unsigned __int16)((dword_6FBBFE58[v9] + (((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31))) >> 31) & (unsigned __int16)(LOWORD(dword_6FBBFE58[v9]) + (((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31))))
        + 255) << 7) & 0x7C00 | (4
                               * (((dword_6FBBFE54[v9]
                                  + (((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31))) >> 31) & (LOWORD(dword_6FBBFE54[v9]) + (((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31))))
                               + 1020) & 0x3E0 | ((((v10 >> 31) & v10) + 255) >> 3) & 0x1F;
  v11 = *v7;
  v12 = a5 + (unsigned __int8)*v7 - 255;
  *v7 = (((v12 >> 31) & v12) + 255) | ((((a7 + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) & ((a7 + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) >> 31))
                                      + 255) << 16) | (((((a6 + BYTE1(v11) - 255) >> 31) & (a6 + BYTE1(v11) - 255)) + 255) << 8);
  result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  *v8 |= result;
  return result;
}
