int __cdecl sub_6F71B7A0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rdi@1
  int *v8; // eax@1
  signed int v9; // edx@1
  signed int v10; // ecx@1
  int v11; // ebp@1
  int result; // eax@1
  int v13; // ebp@1
  int v14; // [sp+20h] [bp-2Ch]@1
  int v15; // [sp+24h] [bp-28h]@1
  int v16; // [sp+28h] [bp-24h]@1

  v14 = a5;
  v15 = a6;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v7 = (v16 & ~(v16 >> 31)) - 255;
  HIDWORD(v7) = (HIDWORD(v7) & v7) + 255;
  v8 = &dword_6FBBFE50[4 * *a1];
  LODWORD(v7) = ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 1) + (*v8 >> 1) - 255;
  v9 = ((signed int)((((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                                          - 255))
                   + 255) >> 1)
     + (v8[1] >> 1)
     - 255;
  v10 = (SHIDWORD(v7) >> 1) + (v8[2] >> 1) - 255;
  v11 = v7 & ((signed int)v7 >> 31);
  result = 4 * ((v9 >> 31) & v9) + 1020;
  LOWORD(result) = result & 0x3E0;
  LODWORD(v7) = ((v10 & (v10 >> 31)) + 255) << 7;
  LOWORD(v7) = v7 & 0x7C00;
  v13 = v7 | result | ((v11 + 255) >> 3) & 0x1F;
  *a1 = v13;
  *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v13;
  return result;
}
