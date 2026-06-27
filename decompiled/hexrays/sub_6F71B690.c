__int16 __cdecl sub_6F71B690(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rax@1
  int v8; // edi@1
  signed int v9; // ecx@1
  signed int v10; // edi@1
  __int16 result; // ax@1
  int v12; // [sp+20h] [bp-1Ch]@1
  int v13; // [sp+24h] [bp-18h]@1
  int v14; // [sp+28h] [bp-14h]@1

  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v7 = (v13 & ~(v13 >> 31)) - 255;
  LODWORD(v7) = HIDWORD(v7) & v7;
  v8 = 4 * *a1;
  v9 = dword_6FBBFE50[v8] + (((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31));
  HIDWORD(v7) = dword_6FBBFE50[v8 + 2] + ((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255));
  v10 = dword_6FBBFE54[v8] + v7;
  result = (((WORD2(v7) & (unsigned __int16)(SHIDWORD(v7) >> 31)) + 255) << 7) & 0x7C00;
  *a1 = result | (4 * ((v10 >> 31) & v10) + 1020) & 0x3E0 | ((((v9 >> 31) & v9) + 255) >> 3) & 0x1F;
  return result;
}
