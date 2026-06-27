__int16 __cdecl sub_6F71B330(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rdi@1
  int v8; // ebp@1
  int v9; // eax@1
  signed int v10; // ecx@1
  int v11; // edx@1
  int v12; // eax@1
  int v14; // [sp+20h] [bp-2Ch]@1
  int v15; // [sp+24h] [bp-28h]@1
  int v16; // [sp+28h] [bp-24h]@1

  v14 = a5;
  v15 = a6;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v7 = (v14 & ~(v14 >> 31)) - 255;
  v8 = (((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                            - 255))
     + 255;
  v9 = 4 * *a1;
  v10 = dword_6FBBFE50[v9 + 2] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255);
  HIDWORD(v7) = (dword_6FBBFE50[v9] - ((HIDWORD(v7) & v7) + 255)) & ~((signed int)(dword_6FBBFE50[v9]
                                                                                 - ((HIDWORD(v7) & v7)
                                                                                  + 255)) >> 31);
  v11 = 4 * ((dword_6FBBFE54[v9] - v8) & ~((dword_6FBBFE54[v9] - v8) >> 31));
  LOWORD(v11) = v11 & 0x3E0;
  v12 = (v10 & ~(v10 >> 31)) << 7;
  LOWORD(v12) = v12 & 0x7C00;
  HIDWORD(v7) = v12 | v11 | (SHIDWORD(v7) >> 3) & 0x1F;
  *a1 = WORD2(v7);
  *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | WORD2(v7);
  return v12;
}
