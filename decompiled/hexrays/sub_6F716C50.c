unsigned int __cdecl sub_6F716C50(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // edi@2
  int v11; // esi@2
  int v12; // edx@3
  signed int v13; // edi@3
  signed int v14; // ecx@3
  signed int v15; // edx@3
  signed int v16; // ebx@5
  int v17; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v17 = (unsigned __int8)(result >> 16);
    v10 = ((unsigned __int8)result * a5 >> 7) - 255;
    v11 = BYTE1(result) * a6 >> 7;
    if ( result >> 31 )
    {
      v12 = 4 * *a1;
      v13 = dword_6FBBFE50[v12] + ((((v10 >> 31) & v10) + 255) >> 2) - 255;
      v14 = dword_6FBBFE50[v12 + 2] + (((((v17 * a7 >> 7) - 255) & (((v17 * a7 >> 7) - 255) >> 31)) + 255) >> 2) - 255;
      result = v14 >> 31;
      v15 = dword_6FBBFE50[v12 + 1] + ((((v11 - 255) & ((v11 - 255) >> 31)) + 255) >> 2) - 255;
      *a1 = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)(v14 >> 31) & (unsigned __int16)v14) + 255) << 7) & 0x7C00 | ((((v13 >> 31) & v13) + 255) >> 3) & 0x1F | 0x8000;
    }
    else
    {
      v16 = (v17 * a7 >> 7) - 255;
      result = v16 >> 31;
      *a1 = ((((unsigned __int16)(v16 >> 31) & (unsigned __int16)v16) + 255) << 7) & 0x7C00 | (4
                                                                                             * (((v11 - 255) >> 31) & (v11 - 255))
                                                                                             + 1020) & 0x3E0 | (((v10 & (v10 >> 31)) + 255) >> 3) & 0x1F;
    }
  }
  return result;
}
