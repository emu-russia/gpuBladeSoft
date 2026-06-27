int __usercall sub_6F68F390@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ebp@1
  _WORD *v8; // ST10_4@1
  __int64 v9; // rax@1
  int v10; // edi@1
  int result; // eax@1
  int v12; // [sp+20h] [bp-3Ch]@1
  int v13; // [sp+24h] [bp-38h]@1
  int v14; // [sp+28h] [bp-34h]@1

  v7 = a2;
  v8 = a1;
  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v9 = (v14 & ~(v14 >> 31)) - 255;
  v10 = 4 * *v8;
  LODWORD(v9) = (HIDWORD(v9) & v9) + 255;
  HIDWORD(v9) = ((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1)
              + (dword_6FBBFE50[v10] >> 1)
              - 255;
  LODWORD(v9) = ((signed int)v9 >> 1) + (dword_6FBBFE50[v10 + 2] >> 1) - 255;
  *v8 = ((((unsigned __int16)((signed int)v9 >> 31) & (unsigned __int16)v9) + 255) << 7) & 0x7C00 | (4 * ((((((((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31)) + 255) >> 1) + (dword_6FBBFE50[v10 + 1] >> 1) - 255) >> 31) & ((((((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31)) + 255) >> 1) + (dword_6FBBFE50[v10 + 1] >> 1) - 255)) + 1020) & 0x3E0 | ((((SHIDWORD(v9) >> 31) & HIDWORD(v9)) + 255) >> 3) & 0x1F;
  HIDWORD(v9) = *v7;
  result = (((signed int)a5 >> 1) + ((*v7 >> 1) & 0x7F)) | ((((signed int)a6 >> 1) + ((signed int)BYTE5(v9) >> 1)) << 8) | ((((signed int)a7 >> 1) + (((unsigned int)*v7 >> 17) & 0x7F)) << 16);
  *v7 = result;
  return result;
}
