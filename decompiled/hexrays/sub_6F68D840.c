int __usercall sub_6F68D840@<eax>(_WORD *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4@<ebp>, int a5, unsigned __int8 a6, unsigned __int8 a7, unsigned __int8 a8)
{
  _DWORD *v8; // edi@1
  _WORD *v9; // esi@1
  signed int v10; // ST10_4@1
  signed int v11; // ST14_4@1
  signed int v12; // ST18_4@1
  __int16 v13; // cx@1
  int result; // eax@1

  v8 = a2;
  v9 = a1;
  v10 = a6;
  v11 = a7;
  v12 = a8;
  dword_6FCFFE50(a3, a5, a4);
  v13 = ((((unsigned __int16)((v12 & ~(v12 >> 31)) - 255) & (unsigned __int16)(((v12 & ~(v12 >> 31)) - 255) >> 31)) + 255) << 7) & 0x7C00 | (4 * ((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v10 & ~(v10 >> 31)) - 255) & (((v10 & ~(v10 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
  result = v13;
  *v9 = v13;
  *v8 = dword_6FCBFE50[v13];
  *v9 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
