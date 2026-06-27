int __usercall sub_6F68E9E0@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  signed int v5; // ebx@1
  signed int v6; // edi@1
  signed int v7; // esi@1
  unsigned int v8; // eax@1
  unsigned int v9; // ebp@1
  signed int v10; // ecx@1
  int result; // eax@1

  v5 = (signed int)a3 >> 1;
  v6 = (signed int)a4 >> 1;
  v7 = (signed int)a5 >> 1;
  *a1 = (((_WORD)v7 + (unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1)) << 7) & 0x7C00 | ((v5
                                                                                             + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | 4 * (v6 + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0;
  v8 = *a2;
  v9 = v8;
  v10 = (signed int)BYTE1(v8) >> 1;
  result = ((signed int)*a2 >> 1) & 0x7F;
  *a2 = ((((v9 >> 17) & 0x7F) + v7) << 16) | ((v10 + v6) << 8) | (result + v5);
  return result;
}
