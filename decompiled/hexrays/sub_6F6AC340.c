unsigned int __cdecl sub_6F6AC340(_WORD *a1, unsigned int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@2
  int v11; // ebp@3
  int v12; // ecx@3
  int v13; // eax@3
  int v14; // edi@3
  int v15; // edi@4
  int v16; // edx@4
  int v17; // esi@4
  int v18; // eax@4
  int *v19; // ebp@4
  unsigned int v20; // eax@4
  int v21; // ebp@6
  int v22; // ecx@6
  signed int v23; // esi@6
  int v24; // eax@6
  __int16 v25; // di@6
  int v26; // [sp+1Ch] [bp-20h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( BYTE3(result) & 0x40 )
    {
      v11 = (unsigned __int8)result;
      v12 = BYTE1(result);
      v26 = (unsigned __int8)v10;
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
        result = ~(((unsigned __int8)*a2 - v15) >> 31) & ((unsigned __int8)*a2 - v15) | ((((unsigned __int8)(*a2 >> 16)
                                                                                         - v16) & ~(((unsigned __int8)(*a2 >> 16) - v16) >> 31)) << 16) | (((BYTE1(v20) - v17) & ~((BYTE1(v20) - v17) >> 31)) << 8);
        *a2 = result | (v26 << 24);
      }
      else
      {
        v21 = v14 + 255;
        v22 = ((((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255)) + 255;
        v23 = v14 + 255;
        v24 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
        v25 = v24;
        result = v24 << 16;
        *a1 = (v25 << 7) & 0x7C00 | (v23 >> 3) & 0x1F | 4 * v22 & 0x3E0;
        *a2 = result | (v22 << 8) | v21 | ((unsigned __int8)v10 << 24);
      }
    }
  }
  return result;
}
