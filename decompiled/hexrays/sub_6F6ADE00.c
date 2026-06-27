unsigned int __cdecl sub_6F6ADE00(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@1
  int v11; // edi@2
  int v12; // eax@5
  int *v13; // ebp@5
  unsigned int v14; // ebx@5
  signed int v15; // ebp@5
  int v16; // [sp+14h] [bp-38h]@2
  int v17; // [sp+18h] [bp-34h]@2

  JUMPOUT(*a1, 0, nullsub_50);
  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v16 = BYTE1(result);
    v17 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v12 = 4 * *a1;
      v13 = &dword_6FBBFE50[v12];
      *a1 = (4 * ((*((_WORD *)v13 + 2) + v16 - 255) & ((v13[1] + v16 - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)(*((_WORD *)v13 + 4) + v17 - 255) & (unsigned __int16)((v13[2] + v17 - 255) >> 31)) + 255) << 7) & 0x7C00 | ((((v11 + dword_6FBBFE50[v12] - 255) & ((v11 + dword_6FBBFE50[v12] - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v14 = *a2;
      v15 = v11 + (unsigned __int8)*a2 - 255;
      result = (v16 + BYTE1(v14) - 255) >> 31;
      *a2 = ((unsigned __int8)v10 << 24) | (((v15 >> 31) & v15) + 255) | ((((v17 + (unsigned __int8)(*a2 >> 16) - 255) & ((v17 + (unsigned __int8)(*a2 >> 16) - 255) >> 31))
                                                                         + 255) << 16) | (((result & (v16 + BYTE1(v14) - 255))
                                                                                         + 255) << 8);
    }
    else
    {
      *a1 = ((unsigned __int8)(result >> 16) << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
  }
  return result;
}
