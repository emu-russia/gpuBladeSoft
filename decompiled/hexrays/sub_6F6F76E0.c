unsigned int __cdecl sub_6F6F76E0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ecx@3
  int v11; // ebx@3
  int v12; // eax@3
  int v13; // ebp@4
  int *v14; // ebp@6
  signed int v15; // edi@6
  signed int v16; // esi@6
  signed int v17; // ebp@6
  signed int v18; // ecx@6
  int v19; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE44(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v19 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v14 = &dword_6FBBFE50[4 * *a1];
      v15 = ((((((unsigned __int8)result * a5 >> 7) - 255) & ((((unsigned __int8)result * a5 >> 7) - 255) >> 31)) + 255) >> 1)
          + (*v14 >> 1)
          - 255;
      v16 = v14[1];
      v17 = (((((v19 * a7 >> 7) - 255) & (((v19 * a7 >> 7) - 255) >> 31)) + 255) >> 1) + (v14[2] >> 1) - 255;
      v18 = (((((BYTE1(result) * a6 >> 7) - 255) & (((BYTE1(result) * a6 >> 7) - 255) >> 31)) + 255) >> 1)
          + (v16 >> 1)
          - 255;
      LOWORD(v18) = (((v15 & (v15 >> 31)) + 255) >> 3) & 0x1F | ((((unsigned __int16)v17 & (unsigned __int16)(v17 >> 31))
                                                                + 255) << 7) & 0x7C00 | (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0 | 0x8000;
      v12 = (unsigned __int16)v18;
      *a1 = v18;
    }
    else
    {
      v10 = 4 * ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 1020;
      LOWORD(v10) = v10 & 0x3E0;
      v11 = (((((v19 * a7 >> 7) - 255) >> 31) & ((v19 * a7 >> 7) - 255)) + 255) << 7;
      LOWORD(v11) = v11 & 0x7C00;
      v12 = v11 | v10 | (((((a5 * (unsigned __int8)result >> 7) - 255) & (((a5 * (unsigned __int8)result >> 7) - 255) >> 31))
                        + 255) >> 3) & 0x1F;
      *a1 = v12;
      v12 = (signed __int16)v12;
    }
    v13 = dword_6FCBFE50[v12];
    result = (unsigned int)a2;
    *a2 = v13;
  }
  return result;
}
