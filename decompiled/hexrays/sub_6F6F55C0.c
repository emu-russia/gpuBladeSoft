int __cdecl sub_6F6F55C0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rdi@1
  int v8; // eax@1
  signed int v9; // edx@1
  signed int v10; // ecx@1
  int result; // eax@1
  int v12; // [sp+20h] [bp-2Ch]@1
  int v13; // [sp+24h] [bp-28h]@1
  int v14; // [sp+28h] [bp-24h]@1

  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v7 = (v12 & ~(v12 >> 31)) - 255;
  v8 = 16 * *a1;
  v9 = *(int *)((char *)dword_6FBBFE50 + v8) - ((HIDWORD(v7) & v7) + 255);
  LODWORD(v7) = *(int *)((char *)dword_6FBBFE54 + v8)
              - ((((signed int)((v13 & ~((unsigned __int64)v13 >> 32)) - 255) >> 31) & ((v13 & ~((unsigned __int64)v13 >> 32))
                                                                                      - 255))
               + 255);
  v10 = *(int *)((char *)&dword_6FBBFE50[2] + v8)
      - (((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255))
       + 255);
  LOWORD(v8) = (((unsigned __int16)v10 & (unsigned __int16)~(v10 >> 31)) << 7) & 0x7C00 | 4
                                                                                        * (v7 & ~((signed int)v7 >> 31)) & 0x3E0 | ((v9 & ~(v9 >> 31)) >> 3) & 0x1F;
  *a1 = v8;
  *a2 = dword_6FCBFE50[(signed __int16)v8];
  result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  *a1 |= result;
  return result;
}
