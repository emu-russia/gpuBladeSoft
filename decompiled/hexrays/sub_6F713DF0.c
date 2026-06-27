int __cdecl sub_6F713DF0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edi@1
  int v8; // esi@1
  int v9; // eax@1
  int result; // eax@1
  int v11; // [sp+10h] [bp-1Ch]@1
  int v12; // [sp+14h] [bp-18h]@1
  int v13; // [sp+18h] [bp-14h]@1

  v11 = a5;
  v12 = a6;
  v13 = a7;
  dword_6FCFFE50(a3, a4, &v11);
  v7 = 4 * ((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 1020;
  LOWORD(v7) = v7 & 0x3E0;
  v8 = ((((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31)) + 255) << 7;
  LOWORD(v8) = v8 & 0x7C00;
  v9 = v8 | v7 | (((((v11 & ~(v11 >> 31)) - 255) & (((v11 & ~(v11 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
  *a1 = v9;
  result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v9;
  *a1 = result;
  return result;
}
