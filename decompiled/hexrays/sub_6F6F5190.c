unsigned int __cdecl sub_6F6F5190(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // esi@1
  signed int v11; // ebp@2
  __int64 v12; // rax@2
  unsigned int v13; // esi@2
  unsigned int v14; // edi@2
  int v15; // ebx@2
  int v16; // ebx@2
  int v17; // [sp+10h] [bp-2Ch]@2
  int v18; // [sp+14h] [bp-28h]@2
  int v19; // [sp+18h] [bp-24h]@2

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v17 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
    v11 = BYTE1(result) * a6;
    v12 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v18 = ((((v11 >> 7) - 255) >> 31) & ((v11 >> 7) - 255)) + 255;
    v19 = (HIDWORD(v12) & v12) + 255;
    dword_6FCFFE50(a3, a4, &v17);
    result = ((v18 & ~(v18 >> 31)) - 255) >> 31;
    v13 = v10 << 8;
    v14 = 4 * (result & ((v18 & ~(v18 >> 31)) - 255)) + 1020;
    LOWORD(v13) = v13 & 0x8000;
    LOWORD(v14) = v14 & 0x3E0;
    v15 = ((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) << 7;
    LOWORD(v15) = v15 & 0x7C00;
    v16 = v13 | v14 | (((((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F | v15;
    *a1 = v16;
    *a2 = dword_6FCBFE50[(unsigned __int16)v16];
  }
  return result;
}
