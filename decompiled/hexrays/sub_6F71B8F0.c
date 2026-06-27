__int16 __cdecl sub_6F71B8F0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rdi@1
  int *v8; // eax@1
  signed int v9; // edx@1
  signed int v10; // ecx@1
  __int16 result; // ax@1
  int v12; // [sp+20h] [bp-2Ch]@1
  int v13; // [sp+24h] [bp-28h]@1
  int v14; // [sp+28h] [bp-24h]@1

  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v7 = (v14 & ~(v14 >> 31)) - 255;
  HIDWORD(v7) = (HIDWORD(v7) & v7) + 255;
  v8 = &dword_6FBBFE50[4 * *a1];
  LODWORD(v7) = ((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1) + (*v8 >> 1) - 255;
  v9 = ((signed int)((((signed int)((v13 & ~((unsigned __int64)v13 >> 32)) - 255) >> 31) & ((v13 & ~((unsigned __int64)v13 >> 32))
                                                                                          - 255))
                   + 255) >> 1)
     + (v8[1] >> 1)
     - 255;
  v10 = (SHIDWORD(v7) >> 1) + (v8[2] >> 1) - 255;
  result = (4 * ((v9 >> 31) & v9) + 1020) & 0x3E0;
  *a1 = ((((unsigned __int16)v10 & (unsigned __int16)(v10 >> 31)) + 255) << 7) & 0x7C00 | result | ((signed int)((v7 & ((signed int)v7 >> 31)) + 255) >> 3) & 0x1F;
  return result;
}
