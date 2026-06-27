int __cdecl sub_6F707B20(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  __int64 v8; // rax@2
  int v9; // esi@2
  int *v10; // edi@2
  signed int v11; // esi@2
  int v12; // ecx@2
  int v13; // [sp+20h] [bp-1Ch]@2
  int v14; // [sp+24h] [bp-18h]@2
  int v15; // [sp+28h] [bp-14h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v13 = a5;
    v14 = a6;
    v15 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v13);
    v8 = (v13 & ~(v13 >> 31)) - 255;
    v9 = 4 * *a1;
    v10 = &dword_6FBBFE50[v9];
    v11 = dword_6FBBFE50[v9] + ((signed int)((HIDWORD(v8) & v8) + 255) >> 2) - 255;
    HIDWORD(v8) = v10[2] + (((((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31)) + 255) >> 2) - 255;
    v12 = 4
        * (((v10[1] + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 2) - 255) >> 31) & (v10[1] + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 2) - 255))
        + 1020;
    LOWORD(v12) = v12 & 0x3E0;
    HIDWORD(v8) = (((SHIDWORD(v8) >> 31) & HIDWORD(v8)) + 255) << 7;
    WORD2(v8) &= 0x7C00u;
    result = HIDWORD(v8) | v12 | (((v11 & (v11 >> 31)) + 255) >> 3) & 0x1F;
    *a1 = result;
  }
  return result;
}
