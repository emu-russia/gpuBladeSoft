__int16 __cdecl sub_6F708270(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, __int16 a7)
{
  __int16 result; // ax@1
  int *v8; // eax@2
  signed int v9; // edi@2
  signed int v10; // edx@2
  int v11; // ecx@2
  int v12; // ebp@2
  signed int v13; // edi@2
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
    v8 = &dword_6FBBFE50[4 * *a1];
    v9 = ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 1) + (*v8 >> 1) - 255;
    v10 = ((signed int)((((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                                             - 255))
                      + 255) >> 1)
        + (v8[1] >> 1)
        - 255;
    v11 = ((((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255) >> 1) + (v8[2] >> 1) - 255;
    v12 = v9 & (v9 >> 31);
    v13 = ((((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255) >> 1) + (v8[2] >> 1) - 255;
    result = (4 * ((v10 >> 31) & v10) + 1020) & 0x3E0;
    *a1 = ((((unsigned __int16)v11 & (unsigned __int16)(v13 >> 31)) + 255) << 7) & 0x7C00 | result | ((v12 + 255) >> 3) & 0x1F;
  }
  return result;
}
