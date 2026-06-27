unsigned int __cdecl sub_6F6F1030(unsigned __int16 *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ebx@2
  int v11; // ebp@3
  int v12; // esi@3
  int v13; // eax@3
  int v14; // ecx@4
  int v15; // ecx@6
  signed int v16; // ebp@6
  signed int v17; // edi@6
  signed int v18; // ecx@6
  unsigned __int16 v19; // bx@6
  int v20; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v20 = (unsigned __int8)(result >> 16);
    v10 = (unsigned __int8)result * a5 >> 7;
    if ( result >> 31 )
    {
      v15 = 4 * *a1;
      v16 = dword_6FBBFE50[v15] + (((v10 - 255) >> 31) & (v10 - 255));
      v17 = dword_6FBBFE54[v15] + ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255));
      v18 = ((((v20 * a7 >> 7) - 255) >> 31) & ((v20 * a7 >> 7) - 255)) + dword_6FBBFE58[v15];
      v19 = (((v16 & (v16 >> 31)) + 255) >> 3) & 0x1F | ((((unsigned __int16)v18 & (unsigned __int16)(v18 >> 31)) + 255) << 7) & 0x7C00 | (4 * ((v17 >> 31) & v17) + 1020) & 0x3E0 | 0x8000;
      v13 = v19;
      *a1 = v19;
    }
    else
    {
      v11 = 4 * ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 1020;
      LOWORD(v11) = v11 & 0x3E0;
      v12 = (((((v20 * a7 >> 7) - 255) >> 31) & ((v20 * a7 >> 7) - 255)) + 255) << 7;
      LOWORD(v12) = v12 & 0x7C00;
      v13 = v12 | v11 | ((((v10 - 255) & ((v10 - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = v13;
      v13 = (signed __int16)v13;
    }
    v14 = dword_6FCBFE50[v13];
    result = (unsigned int)a2;
    *a2 = v14;
  }
  return result;
}
