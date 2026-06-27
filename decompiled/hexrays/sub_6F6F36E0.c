int *__cdecl sub_6F6F36E0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // ebx@1
  int v8; // edx@1
  int v9; // eax@1
  int v10; // esi@1
  int *result; // eax@1
  int v12; // [sp+10h] [bp-1Ch]@1
  int v13; // [sp+14h] [bp-18h]@1
  int v14; // [sp+18h] [bp-14h]@1

  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v7 = 4 * ((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 1020;
  LOWORD(v7) = v7 & 0x3E0;
  v8 = (((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) << 7;
  LOWORD(v8) = v8 & 0x7C00;
  v9 = v8 | v7 | (((((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
  *a1 = v9;
  v10 = dword_6FCBFE50[(signed __int16)v9];
  result = a2;
  *a2 = v10;
  return result;
}
