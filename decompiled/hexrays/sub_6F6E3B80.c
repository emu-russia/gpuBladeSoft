int *__cdecl sub_6F6E3B80(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *result; // eax@1
  int v8; // eax@2
  signed int v9; // esi@2
  signed int v10; // edi@2
  int v11; // esi@2
  int v12; // edx@2
  int v13; // eax@2
  int v14; // ecx@2

  result = (int *)*a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = 4 * (_DWORD)result;
    v9 = dword_6FBBFE50[v8 + 1] + a6 - 255;
    v10 = dword_6FBBFE50[v8 + 2] + a7 - 255;
    v11 = 4 * ((v9 >> 31) & v9) + 1020;
    LOWORD(v11) = v11 & 0x3E0;
    v12 = ((v10 & (v10 >> 31)) + 255) << 7;
    LOWORD(v12) = v12 & 0x7C00;
    v13 = v12 | v11 | ((signed int)((((unsigned __int64)(dword_6FBBFE50[v8] + a5 - 255) >> 32) & (dword_6FBBFE50[v8]
                                                                                                + a5
                                                                                                - 255))
                                  + 255) >> 3) & 0x1F;
    *a1 = v13;
    v14 = dword_6FCBFE50[(signed __int16)v13];
    result = a2;
    *a2 = v14;
  }
  return result;
}
