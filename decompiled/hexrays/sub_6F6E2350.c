int __cdecl sub_6F6E2350(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // ebp@2
  signed int v9; // edi@2
  signed int v10; // ecx@2
  int v11; // eax@2
  int v12; // ebp@2
  int v13; // edi@2
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
    v8 = 4 * *a1;
    v9 = ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 1)
       + (dword_6FBBFE50[v8] >> 1)
       - 255;
    v10 = ((((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255) >> 1)
        + (dword_6FBBFE50[v8 + 2] >> 1)
        - 255;
    v11 = v9 & (v9 >> 31);
    v12 = 4
        * (((((signed int)((((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                                                - 255))
                         + 255) >> 1)
           + (dword_6FBBFE50[v8 + 1] >> 1)
           - 255) >> 31) & (((signed int)((((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32)) - 255))
                                        + 255) >> 1)
                          + (dword_6FBBFE50[v8 + 1] >> 1)
                          - 255))
        + 1020;
    LOWORD(v12) = v12 & 0x3E0;
    v13 = ((v10 & (v10 >> 31)) + 255) << 7;
    LOWORD(v13) = v13 & 0x7C00;
    result = v13 | v12 | ((v11 + 255) >> 3) & 0x1F;
    *a1 = result;
    result = (signed __int16)result;
    *a2 = dword_6FCBFE50[(signed __int16)result];
  }
  return result;
}
