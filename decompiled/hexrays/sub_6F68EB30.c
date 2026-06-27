int __usercall sub_6F68EB30@<eax>(_WORD *a1@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // ebx@1
  int vars4; // ST18_4@1
  signed int v7; // edi@1
  int v8; // esi@1
  signed int v9; // ebp@1
  signed int v10; // ecx@1
  signed int v11; // ebx@1
  signed int v12; // edi@1
  int result; // eax@1

  v5 = 4 * *a1;
  vars4 = a4;
  v7 = dword_6FBBFE54[v5] + a4 - 255;
  v8 = dword_6FBBFE50[v5 + 2] + a5;
  v9 = v7 >> 31;
  *a1 = ((((unsigned __int16)((v8 - 255) >> 31) & (unsigned __int16)(v8 - 255)) + 255) << 7) & 0x7C00 | (4 * ((v7 >> 31) & v7) + 1020) & 0x3E0 | ((((a3 + dword_6FBBFE50[v5] - 255) & ((a3 + dword_6FBBFE50[v5] - 255) >> 31)) + 255) >> 3) & 0x1F;
  v10 = a3 + (unsigned __int8)*a2 - 255;
  v11 = v7 >> 31;
  v12 = a5 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
  result = (((v10 >> 31) & v10) + 255) | ((((v11 >> 31) & v9) + 255) << 8) | (((v12 & (v12 >> 31)) + 255) << 16);
  *a2 = result;
  return result;
}
