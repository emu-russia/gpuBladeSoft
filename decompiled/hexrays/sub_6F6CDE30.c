unsigned int __cdecl sub_6F6CDE30(_WORD *a1, unsigned int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ebp@2
  int v12; // ecx@2
  int v13; // eax@2
  int v14; // edi@2
  int v15; // edi@3
  int v16; // edx@3
  int v17; // esi@3
  int v18; // eax@3
  int *v19; // ebp@3
  unsigned int v20; // eax@3
  signed int v21; // esi@3
  int v22; // ebp@5
  int v23; // ecx@5
  signed int v24; // esi@5
  int v25; // eax@5
  __int16 v26; // di@5
  int v27; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v27 = (unsigned __int8)v10;
    v13 = (unsigned __int8)(result >> 16);
    v14 = (((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255);
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v15 = v14 + 255;
      v16 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      v17 = ((((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255)) + 255;
      v18 = 4 * *a1;
      v19 = &dword_6FBBFE50[v18];
      *a1 = 4 * (~(unsigned __int16)((v19[1] - v17) >> 31) & (v19[1] - v17)) & 0x3E0 | (((unsigned __int16)(*((_WORD *)v19 + 4) - v16) & (unsigned __int16)~(unsigned __int16)((v19[2] - v16) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v18] - v15) & ~((dword_6FBBFE50[v18] - v15) >> 31)) >> 3) & 0x1F | 0x8000;
      v20 = *a2;
      v21 = BYTE1(v20) - v17;
      result = (unsigned int)a2;
      *a2 = ~(((unsigned __int8)*a2 - v15) >> 31) & ((unsigned __int8)*a2 - v15) | ((v21 & ~(v21 >> 31)) << 8) | ((~(((unsigned __int8)(*a2 >> 16) - v16) >> 31) & ((unsigned __int8)(*a2 >> 16) - v16)) << 16) | (v27 << 24);
    }
    else
    {
      v22 = v14 + 255;
      v23 = ((((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255)) + 255;
      v24 = v14 + 255;
      v25 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      v26 = v25;
      result = v25 << 16;
      *a1 = (v26 << 7) & 0x7C00 | (v24 >> 3) & 0x1F | 4 * v23 & 0x3E0;
      *a2 = result | (v23 << 8) | v22 | ((unsigned __int8)v10 << 24);
    }
  }
  return result;
}
