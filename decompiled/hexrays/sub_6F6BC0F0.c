unsigned int __cdecl sub_6F6BC0F0(_WORD *a1, unsigned int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ebp@2
  int v12; // ecx@2
  int v13; // eax@2
  int v14; // esi@2
  int v15; // edi@3
  int v16; // ebp@3
  int v17; // edx@3
  unsigned int v18; // ebx@3
  signed int v19; // eax@3
  int v20; // ecx@5
  int v21; // eax@5
  __int16 v22; // di@5
  int v23; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v23 = (unsigned __int8)v10;
    v13 = (unsigned __int8)(result >> 16);
    v14 = (((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255);
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v15 = (((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255);
      v16 = 4 * *a1;
      v17 = ((v13 * a7 >> 7) - 255) & (((v13 * a7 >> 7) - 255) >> 31);
      *a1 = (4 * (((v15 + dword_6FBBFE50[v16 + 1]) >> 31) & (v15 + dword_6FBBFE50[v16 + 1])) + 1020) & 0x3E0 | ((((unsigned __int16)(v17 + LOWORD(dword_6FBBFE50[v16 + 2])) & (unsigned __int16)((v17 + dword_6FBBFE50[v16 + 2]) >> 31)) + 255) << 7) & 0x7C00 | ((((v14 + dword_6FBBFE50[v16]) & ((v14 + dword_6FBBFE50[v16]) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v18 = *a2;
      v19 = v17 + (unsigned __int8)(*a2 >> 16);
      result = (((v19 >> 31) & v19) + 255) << 16;
      *a2 = ((((v14 + (unsigned __int8)*a2) >> 31) & (v14 + (unsigned __int8)*a2)) + 255) | result | (((((BYTE1(v18) + v15) >> 31) & (BYTE1(v18) + v15)) + 255) << 8) | (v23 << 24);
    }
    else
    {
      v20 = ((((a6 * v12 >> 7) - 255) >> 31) & ((a6 * v12 >> 7) - 255)) + 255;
      v21 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      v22 = v21;
      result = v21 << 16;
      *a1 = (v22 << 7) & 0x7C00 | ((v14 + 255) >> 3) & 0x1F | 4 * v20 & 0x3E0;
      *a2 = result | (v20 << 8) | (v14 + 255) | ((unsigned __int8)v10 << 24);
    }
  }
  return result;
}
