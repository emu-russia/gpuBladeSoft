int *__cdecl sub_6F6D3460(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *result; // eax@1
  int v8; // eax@2
  signed int v9; // esi@2
  signed int v10; // edi@2
  int v11; // edi@2

  result = (int *)*a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = 16 * (_DWORD)result;
    v9 = *(int *)((char *)&dword_6FBBFE50[1] + v8) + a6 - 255;
    v10 = *(int *)((char *)&dword_6FBBFE50[2] + v8) + a7 - 255;
    LOWORD(v8) = ((((unsigned __int16)v10 & (unsigned __int16)(v10 >> 31)) + 255) << 7) & 0x7C00 | (4 * ((v9 >> 31) & v9)
                                                                                                  + 1020) & 0x3E0 | ((signed int)((((unsigned __int64)(*(int *)((char *)dword_6FBBFE50 + v8) + a5 - 255) >> 32) & (*(int *)((char *)dword_6FBBFE50 + v8) + a5 - 255)) + 255) >> 3) & 0x1F;
    *a1 = v8;
    v11 = dword_6FCBFE50[(signed __int16)v8];
    result = a2;
    *a2 = v11;
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
