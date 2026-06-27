unsigned int __cdecl sub_6F6F09C0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // edi@2
  int v11; // esi@2
  int v12; // ecx@3
  int v13; // ebx@3
  int v14; // edx@6
  signed int v15; // edi@6
  signed int v16; // ecx@6
  signed int v17; // edx@6
  int v18; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v18 = (unsigned __int8)(result >> 16);
    v10 = ((unsigned __int8)result * a5 >> 7) - 255;
    v11 = BYTE1(result) * a6 >> 7;
    if ( result >> 31 )
    {
      v14 = 4 * *a1;
      v15 = dword_6FBBFE50[v14] + ((((v10 >> 31) & v10) + 255) >> 2) - 255;
      v16 = dword_6FBBFE50[v14 + 2] + (((((v18 * a7 >> 7) - 255) & (((v18 * a7 >> 7) - 255) >> 31)) + 255) >> 2) - 255;
      v17 = dword_6FBBFE50[v14 + 1] + ((((v11 - 255) & ((v11 - 255) >> 31)) + 255) >> 2) - 255;
      LOWORD(v16) = (4 * ((v17 >> 31) & v17) + 1020) & 0x3E0 | ((((v15 >> 31) & v15) + 255) >> 3) & 0x1F | ((((unsigned __int16)(v16 >> 31) & (unsigned __int16)v16) + 255) << 7) & 0x7C00 | 0x8000;
      result = (unsigned __int16)v16;
      *a1 = v16;
    }
    else
    {
      v12 = 4 * (((v11 - 255) >> 31) & (v11 - 255)) + 1020;
      LOWORD(v12) = v12 & 0x3E0;
      v13 = (((((v18 * a7 >> 7) - 255) >> 31) & ((v18 * a7 >> 7) - 255)) + 255) << 7;
      LOWORD(v13) = v13 & 0x7C00;
      result = v13 | v12 | (((v10 & (v10 >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      result = (signed __int16)result;
    }
    *a2 = dword_6FCBFE50[result];
  }
  return result;
}
