unsigned int __cdecl sub_6F6F71E0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@2
  int v11; // eax@2
  int v12; // ebx@3
  int v13; // eax@3
  int v14; // edx@3
  int v15; // ebx@6
  signed int v16; // edi@6
  signed int v17; // ecx@6
  signed int v18; // esi@6
  int v19; // [sp+18h] [bp-24h]@2
  int v20; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v19 = (unsigned __int8)result;
    v20 = BYTE1(result);
    v10 = result >> 31;
    v11 = (unsigned __int8)(result >> 16);
    if ( v10 )
    {
      v15 = 16 * *a1;
      v16 = *(int *)((char *)dword_6FBBFE50 + v15) + ((((v19 * a5 >> 7) - 255) >> 31) & ((v19 * a5 >> 7) - 255));
      v17 = *(int *)((char *)&dword_6FBBFE50[1] + v15) + ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255));
      v18 = ((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + *(int *)((char *)&dword_6FBBFE50[2] + v15);
      LOWORD(v15) = (4 * ((v17 >> 31) & v17) + 1020) & 0x3E0 | ((((unsigned __int16)v18 & (unsigned __int16)(v18 >> 31))
                                                               + 255) << 7) & 0x7C00 | (((v16 & (v16 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v14 = (unsigned __int16)v15;
      *a1 = v15;
    }
    else
    {
      v12 = 4 * ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255)) + 1020;
      v13 = (((((a7 * v11 >> 7) - 255) >> 31) & ((a7 * v11 >> 7) - 255)) + 255) << 7;
      LOWORD(v12) = v12 & 0x3E0;
      LOWORD(v13) = v13 & 0x7C00;
      v14 = v13 | v12 | ((((((a5 * v19 >> 7) - 255) >> 31) & ((a5 * v19 >> 7) - 255)) + 255) >> 3) & 0x1F;
      *a1 = v14;
      v14 = (signed __int16)v14;
    }
    result = (unsigned int)a2;
    *a2 = dword_6FCBFE50[v14];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
