unsigned int __cdecl sub_6F6E8960(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edi@3
  int v11; // edx@3
  __int64 v12; // rax@6
  signed int v13; // ebp@6
  unsigned __int16 v14; // cx@6
  int v15; // [sp+1Ch] [bp-40h]@2
  int v16; // [sp+30h] [bp-2Ch]@3
  int v17; // [sp+34h] [bp-28h]@3
  int v18; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE48(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v15 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v16 = (((((unsigned __int8)result * a5 >> 7) - 255) >> 31) & (((unsigned __int8)result * a5 >> 7) - 255)) + 255;
      v17 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v18 = (((unsigned __int64)((a7 * v15 >> 7) - 255) >> 32) & ((a7 * v15 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v16);
      v12 = (signed int)((v16 & ~((unsigned __int64)v16 >> 32)) - 255);
      HIDWORD(v12) &= v12;
      LODWORD(v12) = 16 * *a1;
      v13 = *(int *)((char *)&dword_6FBBFE50[2] + v12)
          + ((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255));
      v14 = ((((*(int *)((char *)dword_6FBBFE50 + v12) + HIDWORD(v12)) & ((*(int *)((char *)dword_6FBBFE50 + v12)
                                                                         + HIDWORD(v12)) >> 31))
            + 255) >> 3) & 0x1F | ((((unsigned __int16)v13 & (unsigned __int16)(v13 >> 31)) + 255) << 7) & 0x7C00 | (4 * (((*(int *)((char *)&dword_6FBBFE50[1] + v12) + ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255))) >> 31) & (*(_WORD *)((char *)&dword_6FBBFE50[1] + v12) + ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)))) + 1020) & 0x3E0 | 0x8000;
      result = v14;
      *a1 = v14;
    }
    else
    {
      v16 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
      v17 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v18 = (((unsigned __int64)((a7 * v15 >> 7) - 255) >> 32) & ((a7 * v15 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v16);
      v10 = 4 * ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 1020;
      LOWORD(v10) = v10 & 0x3E0;
      v11 = (((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255)) + 255) << 7;
      LOWORD(v11) = v11 & 0x7C00;
      result = v11 | v10 | (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      result = (signed __int16)result;
    }
    *a2 = dword_6FCBFE50[result];
  }
  return result;
}
