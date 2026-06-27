int __usercall sub_6F6922B0@<eax>(int result@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ebp@1
  _WORD *v8; // edi@2
  int v9; // eax@2
  signed int v10; // ecx@2
  int v11; // eax@2
  int v12; // edi@2
  int v13; // [sp+20h] [bp-3Ch]@2
  int v14; // [sp+24h] [bp-38h]@2
  int v15; // [sp+28h] [bp-34h]@2

  v7 = a2;
  if ( *(_WORD *)result >= 0 )
  {
    v8 = (_WORD *)result;
    v13 = a5;
    v14 = a6;
    v15 = a7;
    dword_6FCFFE50(a3, a4, &v13);
    v9 = 4 * *v8;
    v10 = dword_6FBBFE58[v9]
        + (((((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31)) + 255) >> 2)
        - 255;
    *v8 = ((((unsigned __int16)(v10 >> 31) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | (4
                                                                                           * (((dword_6FBBFE54[v9]
                                                                                              + (((((v14 & ~(v14 >> 31))
                                                                                                  - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31))
                                                                                                + 255) >> 2)
                                                                                              - 255) >> 31) & (LOWORD(dword_6FBBFE54[v9]) + (((((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31)) + 255) >> 2) - 255))
                                                                                           + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9] + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2) - 255) >> 31) & (dword_6FBBFE50[v9] + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2) - 255)) + 255) >> 3) & 0x1F;
    v11 = *v7;
    v12 = ((((signed int)a6 >> 2) + BYTE1(v11) - 255) >> 31) & (((signed int)a6 >> 2) + BYTE1(v11) - 255);
    result = ((unsigned __int8)*v7 + ((signed int)a5 >> 2) - 255) >> 31;
    *v7 = ((result & ((unsigned __int8)*v7 + ((signed int)a5 >> 2) - 255)) + 255) | ((v12 + 255) << 8) | ((((((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) & ((((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) >> 31)) + 255) << 16);
  }
  return result;
}
