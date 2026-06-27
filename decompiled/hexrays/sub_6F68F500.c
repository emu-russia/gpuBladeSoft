unsigned int __usercall sub_6F68F500@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *v7; // esi@1
  int *v8; // ST1C_4@1
  int v9; // edi@1
  __int64 v10; // rax@1
  unsigned int result; // eax@1
  int v12; // [sp+20h] [bp-3Ch]@1
  int v13; // [sp+24h] [bp-38h]@1
  int v14; // [sp+28h] [bp-34h]@1

  v7 = a1;
  v8 = a2;
  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v9 = 4 * *v7;
  v10 = (v14 & ~(v14 >> 31)) - 255;
  LODWORD(v10) = ((signed int)((v10 & HIDWORD(v10)) + 255) >> 1) + (dword_6FBBFE50[v9 + 2] >> 1) - 255;
  *v7 = ((((unsigned __int16)((unsigned __int64)(signed int)v10 >> 32) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | (4 * (((((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE54[v9] >> 1) - 255) >> 31) & (((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE54[v9] >> 1) - 255)) + 1020) & 0x3E0 | (((((((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE50[v9] >> 1) - 255) >> 31) & (((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE50[v9] >> 1) - 255)) + 255) >> 3) & 0x1F;
  HIDWORD(v10) = *v8;
  result = (unsigned int)*v8 >> 17;
  *v8 = (((signed int)a5 >> 1) + ((*v8 >> 1) & 0x7F)) | ((((signed int)a6 >> 1) + ((signed int)BYTE5(v10) >> 1)) << 8) | ((((signed int)a7 >> 1) + (result & 0x7F)) << 16);
  *v7 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
