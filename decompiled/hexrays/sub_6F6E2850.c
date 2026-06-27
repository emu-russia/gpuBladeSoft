int *__cdecl sub_6F6E2850(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int *a7)
{
  int *result; // eax@1
  __int16 v8; // ax@2
  int v9; // ecx@2
  int v10; // [sp+10h] [bp-1Ch]@2
  int v11; // [sp+14h] [bp-18h]@2
  int v12; // [sp+18h] [bp-14h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v10 = a5;
    v11 = a6;
    v12 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v10);
    v8 = ((((unsigned __int16)((v12 & ~(v12 >> 31)) - 255) & (unsigned __int16)(((v12 & ~(v12 >> 31)) - 255) >> 31))
         + 255) << 7) & 0x7C00 | (4 * ((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v10 & ~(v10 >> 31)) - 255) & (((v10 & ~(v10 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    *a1 = v8;
    v9 = dword_6FCBFE50[v8];
    result = a2;
    *a2 = v9;
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
