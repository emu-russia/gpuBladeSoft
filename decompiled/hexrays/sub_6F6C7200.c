unsigned int __cdecl sub_6F6C7200(_WORD *a1, unsigned int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ecx@2
  signed int v12; // ebx@2
  int v13; // eax@2
  int v14; // ebx@2
  int v15; // ecx@3
  int v16; // eax@3
  __int16 v17; // di@3
  int v18; // edx@6
  int v19; // ebx@6
  int v20; // edi@6
  int v21; // ecx@6
  unsigned int v22; // eax@6
  signed int v23; // ebp@6
  signed int v24; // edx@6
  int v25; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE40(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = BYTE1(result);
    v12 = (unsigned __int8)result * a5;
    v25 = (unsigned __int8)v10;
    v13 = (unsigned __int8)(result >> 16);
    v14 = (((v12 >> 7) - 255) >> 31) & ((v12 >> 7) - 255);
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v18 = v14 + 255;
      v19 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      v20 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v21 = 4 * *a1;
      *a1 = 4 * (~(unsigned __int16)((dword_6FBBFE50[v21 + 1] - v20) >> 31) & (dword_6FBBFE50[v21 + 1] - v20)) & 0x3E0 | (((unsigned __int16)(dword_6FBBFE50[v21 + 2] - v19) & (unsigned __int16)~(unsigned __int16)((dword_6FBBFE50[v21 + 2] - v19) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v21] - v18) & ~((dword_6FBBFE50[v21] - v18) >> 31)) >> 3) & 0x1F | 0x8000;
      v22 = *a2;
      v23 = (unsigned __int8)*a2 - v18;
      v24 = BYTE1(v22) - v20;
      result = ~(v23 >> 31);
      *a2 = result & v23 | ((~(v24 >> 31) & v24) << 8) | ((((unsigned __int8)(*a2 >> 16) - v19) & ~(((unsigned __int8)(*a2 >> 16) - v19) >> 31)) << 16) | (v25 << 24);
    }
    else
    {
      v15 = ((((a6 * v11 >> 7) - 255) >> 31) & ((a6 * v11 >> 7) - 255)) + 255;
      v16 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      v17 = v16;
      result = (v15 << 8) | (v16 << 16);
      *a1 = (v17 << 7) & 0x7C00 | ((v14 + 255) >> 3) & 0x1F | 4 * v15 & 0x3E0;
      *a2 = result | (v14 + 255) | ((unsigned __int8)v10 << 24);
    }
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
