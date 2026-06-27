_WORD *__usercall sub_6F691CC0@<eax>(_WORD *result@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  unsigned int *v7; // ebp@1
  _WORD *v8; // edi@2
  int v9; // eax@2
  signed int v10; // ecx@2
  unsigned int v11; // eax@2
  int v12; // [sp+20h] [bp-3Ch]@2
  int v13; // [sp+24h] [bp-38h]@2
  int v14; // [sp+28h] [bp-34h]@2

  v7 = a2;
  if ( *result >= 0 )
  {
    v8 = result;
    v12 = a5;
    v13 = a6;
    v14 = a7;
    dword_6FCFFE50(a3, a4, &v12);
    v9 = 4 * *v8;
    v10 = dword_6FBBFE58[v9] + (((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31));
    *v8 = ((((unsigned __int16)(v10 >> 31) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | (4
                                                                                           * (((dword_6FBBFE54[v9]
                                                                                              + (((v13 & ~(v13 >> 31))
                                                                                                - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31))) >> 31) & (LOWORD(dword_6FBBFE54[v9]) + (((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31))))
                                                                                           + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9] + (((~(v12 >> 31) & v12) - 255) & (((~(v12 >> 31) & v12) - 255) >> 31))) >> 31) & (dword_6FBBFE50[v9] + (((~(v12 >> 31) & v12) - 255) & (((~(v12 >> 31) & v12) - 255) >> 31)))) + 255) >> 3) & 0x1F;
    v11 = *v7;
    result = (_WORD *)(((((a5 + (unsigned __int8)*v7 - 255) >> 31) & (a5 + (unsigned __int8)*v7 - 255)) + 255) | (((((a6 + BYTE1(v11) - 255) >> 31) & (a6 + BYTE1(v11) - 255)) + 255) << 8) | ((((a7 + (unsigned __int8)(*v7 >> 16) - 255) & ((a7 + (unsigned __int8)(*v7 >> 16) - 255) >> 31)) + 255) << 16));
    *v7 = (unsigned int)result;
  }
  return result;
}
