unsigned int __cdecl sub_6F6A0700(_WORD *a1, unsigned int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@2
  int v11; // ebp@3
  int v12; // ecx@3
  int v13; // eax@3
  int v14; // edi@3
  int v15; // esi@4
  int v16; // ebp@4
  int v17; // edx@4
  unsigned int v18; // ebx@4
  signed int v19; // edx@4
  int v20; // ebp@6
  int v21; // ecx@6
  signed int v22; // esi@6
  int v23; // eax@6
  __int16 v24; // di@6
  int v25; // [sp+1Ch] [bp-20h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( BYTE3(result) & 0x40 )
    {
      v11 = (unsigned __int8)result;
      v12 = BYTE1(result);
      v25 = (unsigned __int8)v10;
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
        result = (unsigned int)a2;
        *a2 = ((((v14 + (unsigned __int8)*a2) >> 31) & (v14 + (unsigned __int8)*a2)) + 255) | (((v19 & (v19 >> 31)) + 255) << 16) | (((((BYTE1(v18) + v15) >> 31) & (BYTE1(v18) + v15)) + 255) << 8) | (v25 << 24);
      }
      else
      {
        v20 = v14 + 255;
        v21 = ((((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255)) + 255;
        v22 = v14 + 255;
        v23 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
        v24 = v23;
        result = v23 << 16;
        *a1 = (v24 << 7) & 0x7C00 | (v22 >> 3) & 0x1F | 4 * v21 & 0x3E0;
        *a2 = result | (v21 << 8) | v20 | ((unsigned __int8)v10 << 24);
      }
    }
  }
  return result;
}
