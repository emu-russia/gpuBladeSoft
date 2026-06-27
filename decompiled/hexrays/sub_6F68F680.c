int __usercall sub_6F68F680@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *v7; // ebp@1
  int *v8; // ST1C_4@1
  int v9; // edi@1
  int v10; // eax@1
  signed int v11; // edx@1
  int result; // eax@1
  int v13; // [sp+20h] [bp-3Ch]@1
  int v14; // [sp+24h] [bp-38h]@1
  int v15; // [sp+28h] [bp-34h]@1

  v7 = a1;
  v8 = a2;
  v13 = a5;
  v14 = a6;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v9 = 4 * *v7;
  *v7 = ((((unsigned __int16)((dword_6FBBFE58[v9] + (((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31))) >> 31) & (unsigned __int16)(LOWORD(dword_6FBBFE58[v9]) + (((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31))))
        + 255) << 7) & 0x7C00 | (4
                               * (((dword_6FBBFE54[v9]
                                  + (((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31))) >> 31) & (LOWORD(dword_6FBBFE54[v9]) + (((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31))))
                               + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9]
                                                    + (((~(v13 >> 31) & v13) - 255) & (((~(v13 >> 31) & v13) - 255) >> 31))) >> 31) & (dword_6FBBFE50[v9] + (((~(v13 >> 31) & v13) - 255) & (((~(v13 >> 31) & v13) - 255) >> 31))))
                                                 + 255) >> 3) & 0x1F;
  v10 = *v8;
  v11 = a5 + (unsigned __int8)*v8 - 255;
  result = (((v11 >> 31) & v11) + 255) | (((((a6 + BYTE1(v10) - 255) >> 31) & (a6 + BYTE1(v10) - 255)) + 255) << 8) | ((((a7 + (unsigned __int8)((unsigned int)*v8 >> 16) - 255) & ((a7 + (unsigned __int8)((unsigned int)*v8 >> 16) - 255) >> 31)) + 255) << 16);
  *v8 = result;
  return result;
}
