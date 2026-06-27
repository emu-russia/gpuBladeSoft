int __usercall sub_6F68ED40@<eax>(_WORD *a1@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  int *v5; // edi@1
  int v6; // eax@1
  signed int v7; // edi@1
  signed int v8; // ebx@1
  signed int v9; // ebp@1
  int result; // eax@1

  v5 = &dword_6FBBFE50[4 * *a1];
  *a1 = (((unsigned __int16)(*((_WORD *)v5 + 4) - a5) & (unsigned __int16)~(unsigned __int16)((v5[2] - a5) >> 31)) << 7) & 0x7C00 | 4 * ((*((_WORD *)v5 + 2) - a4) & ~(unsigned __int16)((v5[1] - a4) >> 31)) & 0x3E0 | (((*v5 - a3) & ~((*v5 - a3) >> 31)) >> 3) & 0x1F;
  v6 = *a2;
  v7 = BYTE1(v6) - a4;
  v8 = (unsigned __int8)*a2 - a3;
  v9 = (unsigned __int8)((unsigned int)*a2 >> 16) - a5;
  result = ~(v8 >> 31);
  *a2 = result & v8 | ((v9 & ~(v9 >> 31)) << 16) | ((v7 & ~(v7 >> 31)) << 8);
  return result;
}
