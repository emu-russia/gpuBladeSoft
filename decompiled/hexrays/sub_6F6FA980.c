int __cdecl sub_6F6FA980(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // esi@2
  int v9; // edx@2
  int v10; // eax@2
  int v11; // [sp+10h] [bp-1Ch]@2
  int v12; // [sp+14h] [bp-18h]@2
  int v13; // [sp+18h] [bp-14h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v11 = a5;
    v12 = a6;
    v13 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v11);
    v8 = 4 * ((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 1020;
    LOWORD(v8) = v8 & 0x3E0;
    v9 = ((((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31)) + 255) << 7;
    LOWORD(v9) = v9 & 0x7C00;
    v10 = v9 | v8 | (((((v11 & ~(v11 >> 31)) - 255) & (((v11 & ~(v11 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    *a1 = v10;
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v10;
    *a1 = result;
  }
  return result;
}
