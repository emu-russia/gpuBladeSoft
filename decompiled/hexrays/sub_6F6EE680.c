unsigned int __cdecl sub_6F6EE680(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebx@2
  int v11; // edi@3
  int v12; // ebp@3
  int *v13; // edx@6
  signed int v14; // eax@6
  signed int v15; // ecx@6
  signed int v16; // ebx@6
  unsigned __int16 v17; // di@6
  int v18; // [sp+1Ch] [bp-40h]@2
  int v19; // [sp+30h] [bp-2Ch]@2
  int v20; // [sp+34h] [bp-28h]@3
  int v21; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v18 = (unsigned __int8)(result >> 16);
    v10 = ((unsigned __int8)result * a5 >> 7) - 255;
    v19 = ((v10 >> 31) & v10) + 255;
    if ( result >> 31 )
    {
      v20 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v21 = ((((a7 * v18 >> 7) - 255) >> 31) & ((a7 * v18 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v19);
      v13 = &dword_6FBBFE50[4 * *a1];
      v14 = *v13 - (((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255)) + 255);
      v15 = v13[1]
          - ((((signed int)((v20 & ~((unsigned __int64)v20 >> 32)) - 255) >> 31) & ((v20 & ~((unsigned __int64)v20 >> 32))
                                                                                  - 255))
           + 255);
      v16 = v13[2] - (((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255);
      v17 = 4 * (v15 & ~(v15 >> 31)) & 0x3E0 | ((v14 & ~(v14 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v16 & (unsigned __int16)~(v16 >> 31)) << 7) & 0x7C00 | 0x8000;
      result = v17;
      *a1 = v17;
    }
    else
    {
      v20 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v21 = (((unsigned __int64)((a7 * v18 >> 7) - 255) >> 32) & ((a7 * v18 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v19);
      v11 = 4 * ((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 1020;
      LOWORD(v11) = v11 & 0x3E0;
      v12 = (((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255) << 7;
      LOWORD(v12) = v12 & 0x7C00;
      result = v12 | v11 | (((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      result = (signed __int16)result;
    }
    *a2 = dword_6FCBFE50[result];
  }
  return result;
}
