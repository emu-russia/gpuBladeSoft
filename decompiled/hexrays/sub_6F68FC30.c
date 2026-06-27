signed int __usercall sub_6F68FC30@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *v7; // ebp@1
  int *v8; // ST1C_4@1
  int v9; // edi@1
  int v10; // edx@1
  signed int v11; // ecx@1
  signed int v12; // ebx@1
  signed int result; // eax@1
  int v14; // [sp+20h] [bp-3Ch]@1
  int v15; // [sp+24h] [bp-38h]@1
  int v16; // [sp+28h] [bp-34h]@1

  v7 = a1;
  v8 = a2;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v9 = 4 * *v7;
  *v7 = ((((unsigned __int16)((dword_6FBBFE58[v9]
                             + (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 2)
                             - 255) >> 31) & (unsigned __int16)(LOWORD(dword_6FBBFE58[v9])
                                                              + (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31))
                                                                                                  - 255) >> 31))
                                                                + 255) >> 2)
                                                              - 255))
        + 255) << 7) & 0x7C00 | (4
                               * (((dword_6FBBFE54[v9]
                                  + ((((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255) >> 2)
                                  - 255) >> 31) & (LOWORD(dword_6FBBFE54[v9])
                                                 + ((((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255))
                                                   + 255) >> 2)
                                                 - 255))
                               + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9]
                                                    + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31))
                                                                                               - 255))
                                                      + 255) >> 2)
                                                    - 255) >> 31) & (dword_6FBBFE50[v9]
                                                                   + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255))
                                                                     + 255) >> 2)
                                                                   - 255))
                                                 + 255) >> 3) & 0x1F;
  v10 = *v8;
  v11 = (unsigned __int8)*v8 + ((signed int)a5 >> 2) - 255;
  v12 = ((signed int)a6 >> 2) + BYTE1(v10) - 255;
  result = v12 >> 31;
  *v8 = (((v11 >> 31) & v11) + 255) | ((((v12 >> 31) & v12) + 255) << 8) | ((((((signed int)a7 >> 2)
                                                                             + (unsigned __int8)((unsigned int)*v8 >> 16)
                                                                             - 255) & ((((signed int)a7 >> 2)
                                                                                      + (unsigned __int8)((unsigned int)*v8 >> 16)
                                                                                      - 255) >> 31))
                                                                           + 255) << 16);
  return result;
}
