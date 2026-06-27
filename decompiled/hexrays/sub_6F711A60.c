unsigned int __cdecl sub_6F711A60(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@2
  int v11; // ebp@2
  unsigned int v12; // ecx@2
  signed int v13; // ebp@3
  int v14; // ebx@3
  signed int v15; // edi@3
  signed int v16; // esi@3
  int v17; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v17 = (unsigned __int8)(result >> 16);
    result = a7;
    if ( v12 )
    {
      v13 = (v11 * a6 >> 7) - 255;
      v14 = 4 * *a1;
      v15 = dword_6FBBFE50[v14] + (((v10 * a5 >> 7) - 255) & (((v10 * a5 >> 7) - 255) >> 31));
      v16 = dword_6FBBFE50[v14 + 2]
          + ((((v17 * (unsigned __int8)a7 >> 7) - 255) >> 31) & ((v17 * (unsigned __int8)a7 >> 7) - 255));
      result = (v15 & (v15 >> 31)) + 255;
      *a1 = (4
           * (((((v13 >> 31) & v13) + dword_6FBBFE54[v14]) >> 31) & (((v13 >> 31) & v13) + LOWORD(dword_6FBBFE54[v14])))
           + 1020) & 0x3E0 | ((signed int)result >> 3) & 0x1F | ((((unsigned __int16)v16 & (unsigned __int16)(v16 >> 31))
                                                                + 255) << 7) & 0x7C00 | 0x8000;
    }
    else
    {
      *a1 = ((((unsigned __int16)(((v17 * (unsigned __int8)a7 >> 7) - 255) >> 31) & (unsigned __int16)((v17 * (unsigned __int8)a7 >> 7) - 255))
            + 255) << 7) & 0x7C00 | (4 * ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 1020) & 0x3E0 | (((((a5 * v10 >> 7) - 255) & (((a5 * v10 >> 7) - 255) >> 31)) + 255) >> 3) & 0x1F;
    }
  }
  return result;
}
