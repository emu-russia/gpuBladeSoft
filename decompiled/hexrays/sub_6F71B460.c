__int16 __cdecl sub_6F71B460(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rdi@1
  int v8; // ebp@1
  int v9; // eax@1
  signed int v10; // ecx@1
  __int16 v11; // dx@1
  __int16 result; // ax@1
  int v13; // [sp+20h] [bp-2Ch]@1
  int v14; // [sp+24h] [bp-28h]@1
  int v15; // [sp+28h] [bp-24h]@1

  v13 = a5;
  v14 = a6;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v7 = (v13 & ~(v13 >> 31)) - 255;
  v8 = (((signed int)((v14 & ~((unsigned __int64)v14 >> 32)) - 255) >> 31) & ((v14 & ~((unsigned __int64)v14 >> 32))
                                                                            - 255))
     + 255;
  v9 = 4 * *a1;
  v10 = dword_6FBBFE50[v9 + 2] - (((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255);
  HIDWORD(v7) = (dword_6FBBFE50[v9] - ((HIDWORD(v7) & v7) + 255)) & ~((signed int)(dword_6FBBFE50[v9]
                                                                                 - ((HIDWORD(v7) & v7)
                                                                                  + 255)) >> 31);
  v11 = 4 * ((LOWORD(dword_6FBBFE54[v9]) - v8) & ~((dword_6FBBFE54[v9] - v8) >> 31)) & 0x3E0;
  result = (((unsigned __int16)v10 & (unsigned __int16)~(v10 >> 31)) << 7) & 0x7C00;
  *a1 = result | v11 | (SHIDWORD(v7) >> 3) & 0x1F;
  return result;
}
