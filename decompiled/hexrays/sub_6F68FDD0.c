int __usercall sub_6F68FDD0@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ebp@1
  _WORD *v8; // edi@1
  int v9; // eax@1
  int v10; // ecx@1
  int v11; // ebx@1
  int v12; // edx@1
  signed int v13; // ecx@1
  int result; // eax@1
  int v15; // [sp+20h] [bp-3Ch]@1
  int v16; // [sp+24h] [bp-38h]@1
  int v17; // [sp+28h] [bp-34h]@1

  v7 = a2;
  v8 = a1;
  v15 = a5;
  v16 = a6;
  v17 = a7;
  dword_6FCFFE50(a3, a4, &v15);
  v9 = 4 * *v8;
  v10 = dword_6FBBFE58[v9] + (((((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31)) + 255) >> 2);
  v11 = dword_6FBBFE54[v9] + (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 2);
  *v8 = ((((unsigned __int16)((v10 - 255) >> 31) & (unsigned __int16)(v10 - 255)) + 255) << 7) & 0x7C00 | (4 * (((v11 - 255) >> 31) & (v11 - 255)) + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9] + ((((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255) >> 2) - 255) >> 31) & (dword_6FBBFE50[v9] + ((((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255) >> 2) - 255)) + 255) >> 3) & 0x1F;
  v12 = *v7;
  v13 = (unsigned __int8)*v7 + ((signed int)a5 >> 2) - 255;
  *v7 = (((v13 >> 31) & v13) + 255) | ((((((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) & ((((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) >> 31))
                                      + 255) << 16) | (((((((signed int)a6 >> 2) + BYTE1(v12) - 255) >> 31) & (((signed int)a6 >> 2) + BYTE1(v12) - 255))
                                                      + 255) << 8);
  result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  *v8 |= result;
  return result;
}
