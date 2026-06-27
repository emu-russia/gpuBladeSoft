_WORD *__usercall sub_6F6917B0@<eax>(_WORD *result@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *v7; // ST18_4@2
  int *v8; // ST1C_4@2
  int v9; // ecx@2
  int v10; // edx@2
  int v11; // [sp+20h] [bp-2Ch]@2
  int v12; // [sp+24h] [bp-28h]@2
  int v13; // [sp+28h] [bp-24h]@2

  if ( *result >= 0 )
  {
    v7 = result;
    v8 = a2;
    v11 = a5;
    v12 = a6;
    v13 = a7;
    dword_6FCFFE50(a3, a4, &v11);
    v9 = 4 * ((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 1020;
    LOWORD(v9) = v9 & 0x3E0;
    v10 = (((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) << 7;
    LOWORD(v10) = v10 & 0x7C00;
    result = (_WORD *)(v10 | v9 | (((((v11 & ~(v11 >> 31)) - 255) & (((v11 & ~(v11 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F);
    *v7 = (_WORD)result;
    *v8 = (a6 << 8) | a5 | (a7 << 16);
  }
  return result;
}
