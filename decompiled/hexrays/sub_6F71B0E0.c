int __cdecl sub_6F71B0E0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rax@1
  int v8; // esi@1
  int *v9; // edi@1
  signed int v10; // esi@1
  int v11; // ecx@1
  int result; // eax@1
  int v13; // [sp+20h] [bp-1Ch]@1
  int v14; // [sp+24h] [bp-18h]@1
  int v15; // [sp+28h] [bp-14h]@1

  v13 = a5;
  v14 = a6;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v7 = (v13 & ~(v13 >> 31)) - 255;
  v8 = 4 * *a1;
  v9 = &dword_6FBBFE50[v8];
  v10 = dword_6FBBFE50[v8] + ((signed int)((HIDWORD(v7) & v7) + 255) >> 2) - 255;
  HIDWORD(v7) = v9[2] + (((((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31)) + 255) >> 2) - 255;
  v11 = 4
      * (((v9[1] + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 2) - 255) >> 31) & (v9[1] + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 2) - 255))
      + 1020;
  LOWORD(v11) = v11 & 0x3E0;
  HIDWORD(v7) = (((SHIDWORD(v7) >> 31) & HIDWORD(v7)) + 255) << 7;
  WORD2(v7) &= 0x7C00u;
  LODWORD(v7) = HIDWORD(v7) | v11 | (((v10 & (v10 >> 31)) + 255) >> 3) & 0x1F;
  *a1 = v7;
  result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v7;
  *a1 = result;
  return result;
}
