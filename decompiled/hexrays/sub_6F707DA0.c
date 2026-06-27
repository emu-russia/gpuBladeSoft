__int16 __cdecl sub_6F707DA0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, __int16 a7)
{
  __int16 result; // ax@1
  int v8; // ebp@2
  int v9; // edi@2
  int v10; // eax@2
  signed int v11; // ecx@2
  int v12; // esi@2
  __int16 v13; // dx@2
  int v14; // [sp+20h] [bp-2Ch]@2
  int v15; // [sp+24h] [bp-28h]@2
  int v16; // [sp+28h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v15 = a6;
    v14 = a5;
    v16 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v14);
    v8 = (((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                              - 255))
       + 255;
    v9 = ((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255;
    v10 = 4 * *a1;
    v11 = dword_6FBBFE50[v10 + 2] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255);
    v12 = (dword_6FBBFE50[v10] - v9) & ~((dword_6FBBFE50[v10] - v9) >> 31);
    v13 = 4 * ((LOWORD(dword_6FBBFE54[v10]) - v8) & ~((dword_6FBBFE54[v10] - v8) >> 31)) & 0x3E0;
    result = (((unsigned __int16)v11 & (unsigned __int16)~(v11 >> 31)) << 7) & 0x7C00;
    *a1 = result | v13 | (v12 >> 3) & 0x1F;
  }
  return result;
}
