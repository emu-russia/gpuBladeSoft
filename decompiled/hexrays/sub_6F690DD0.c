_WORD *__usercall sub_6F690DD0@<eax>(_WORD *result@<eax>, unsigned int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5)
{
  signed int v5; // ebx@2
  signed int v6; // edi@2
  signed int v7; // esi@2
  unsigned int v8; // eax@2
  unsigned int v9; // ebp@2
  signed int v10; // ecx@2

  if ( *result >= 0 )
  {
    v5 = (signed int)a3 >> 1;
    v6 = (signed int)a4 >> 1;
    v7 = (signed int)a5 >> 1;
    *result = (((_WORD)v7 + (unsigned __int16)(dword_6FBBFE50[4 * *result + 2] >> 1)) << 7) & 0x7C00 | ((v5 + (dword_6FBBFE50[4 * *result] >> 1)) >> 3) & 0x1F | 4 * (v6 + (dword_6FBBFE50[4 * *result + 1] >> 1)) & 0x3E0;
    v8 = *a2;
    v9 = v8;
    v10 = (signed int)BYTE1(v8) >> 1;
    result = (_WORD *)(((signed int)*a2 >> 1) & 0x7F);
    *a2 = ((((v9 >> 17) & 0x7F) + v7) << 16) | ((v10 + v6) << 8) | ((unsigned int)result + v5);
  }
  return result;
}
