unsigned int __cdecl sub_6F6ADDC0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ecx@2
  int v11; // edi@2
  int v12; // eax@5
  int *v13; // ebp@5
  unsigned int v14; // ebx@5
  int v15; // [sp+14h] [bp-38h]@2
  int v16; // [sp+18h] [bp-34h]@2

  JUMPOUT(*a1, 0, nullsub_52);
  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE3(result);
    v11 = (unsigned __int8)result;
    v16 = BYTE1(result);
    v15 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v12 = 4 * *a1;
      v13 = &dword_6FBBFE50[v12];
      *a1 = 4 * ((*((_WORD *)v13 + 2) - v16) & ~(unsigned __int16)((v13[1] - v16) >> 31)) & 0x3E0 | (((unsigned __int16)(*((_WORD *)v13 + 4) - v15) & (unsigned __int16)~(unsigned __int16)((v13[2] - v15) >> 31)) << 7) & 0x7C00 | ((signed int)((dword_6FBBFE50[v12] - v11) & ~((unsigned __int64)(dword_6FBBFE50[v12] - v11) >> 32)) >> 3) & 0x1F | 0x8000;
      v14 = *a2;
      result = ((BYTE1(v14) - v16) & ~((BYTE1(v14) - v16) >> 31)) << 8;
      *a2 = ~(((unsigned __int8)*a2 - v11) >> 31) & ((unsigned __int8)*a2 - v11) | result | ((~(((unsigned __int8)(*a2 >> 16)
                                                                                               - v15) >> 31) & ((unsigned __int8)(*a2 >> 16) - v15)) << 16) | (v10 << 24);
    }
    else
    {
      *a1 = ((_WORD)v15 << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
  }
  return result;
}
