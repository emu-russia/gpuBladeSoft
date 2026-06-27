__int16 __cdecl sub_6F707FF0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, __int16 a7)
{
  __int16 result; // ax@1
  __int64 v8; // rax@2
  int v9; // edi@2
  signed int v10; // ecx@2
  signed int v11; // edi@2
  int v12; // [sp+20h] [bp-1Ch]@2
  int v13; // [sp+24h] [bp-18h]@2
  int v14; // [sp+28h] [bp-14h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v12 = a5;
    v13 = a6;
    v14 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v12);
    v8 = (v13 & ~(v13 >> 31)) - 255;
    LODWORD(v8) = HIDWORD(v8) & v8;
    v9 = 4 * *a1;
    v10 = dword_6FBBFE50[v9] + (((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31));
    HIDWORD(v8) = dword_6FBBFE50[v9 + 2] + ((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255));
    v11 = dword_6FBBFE54[v9] + v8;
    result = (((WORD2(v8) & (unsigned __int16)(SHIDWORD(v8) >> 31)) + 255) << 7) & 0x7C00;
    *a1 = result | (4 * ((v11 >> 31) & v11) + 1020) & 0x3E0 | ((((v10 >> 31) & v10) + 255) >> 3) & 0x1F;
  }
  return result;
}
