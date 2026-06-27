int __usercall sub_6F68EED0@<eax>(_WORD *a1@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  signed int v5; // ebx@1
  signed int v6; // edi@1
  signed int vars4; // ST18_4@1
  int v8; // ecx@1
  signed int v9; // edi@1
  signed int v10; // esi@1
  signed int v11; // ebp@1
  signed int v12; // ecx@1
  signed int v13; // edi@1
  int result; // eax@1

  v5 = (signed int)a3 >> 2;
  v6 = (signed int)a4 >> 2;
  vars4 = v6;
  v8 = 4 * *a1;
  v9 = dword_6FBBFE54[v8] + v6 - 255;
  v10 = dword_6FBBFE50[v8 + 2] + ((signed int)a5 >> 2) - 255;
  v11 = v9 >> 31;
  *a1 = ((((unsigned __int16)(v10 >> 31) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | (4 * ((v9 >> 31) & v9) + 1020) & 0x3E0 | ((((v5 + dword_6FBBFE50[v8] - 255) & ((v5 + dword_6FBBFE50[v8] - 255) >> 31)) + 255) >> 3) & 0x1F;
  v12 = v5 + (unsigned __int8)*a2 - 255;
  v13 = ((signed int)a5 >> 2) + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
  result = (((v12 >> 31) & v12) + 255) | ((((v11 >> 31) & v11) + 255) << 8) | (((v13 & (v13 >> 31)) + 255) << 16);
  *a2 = result;
  return result;
}
