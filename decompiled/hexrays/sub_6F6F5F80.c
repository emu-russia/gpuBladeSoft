int *__cdecl sub_6F6F5F80(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int16 v7; // ax@1
  int v8; // ecx@1
  int *result; // eax@1
  int v10; // [sp+10h] [bp-1Ch]@1
  int v11; // [sp+14h] [bp-18h]@1
  int v12; // [sp+18h] [bp-14h]@1

  v10 = a5;
  v11 = a6;
  v12 = a7;
  dword_6FCFFE50(a3, a4, &v10);
  v7 = ((((unsigned __int16)((v12 & ~(v12 >> 31)) - 255) & (unsigned __int16)(((v12 & ~(v12 >> 31)) - 255) >> 31)) + 255) << 7) & 0x7C00 | (4 * ((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v10 & ~(v10 >> 31)) - 255) & (((v10 & ~(v10 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
  *a1 = v7;
  v8 = dword_6FCBFE50[v7];
  result = a2;
  *a2 = v8;
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
