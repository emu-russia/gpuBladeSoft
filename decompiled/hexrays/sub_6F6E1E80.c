int __cdecl sub_6F6E1E80(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // eax@2
  signed int v9; // edx@2
  signed int v10; // edi@2
  signed int v11; // ecx@2
  int v12; // eax@2
  int v13; // esi@2
  int v14; // edx@2
  int v15; // [sp+20h] [bp-2Ch]@2
  int v16; // [sp+24h] [bp-28h]@2
  int v17; // [sp+28h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v16 = a6;
    v15 = a5;
    v17 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v15);
    v8 = 4 * *a1;
    v9 = dword_6FBBFE50[v8] - (((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255);
    v10 = dword_6FBBFE54[v8]
        - ((((signed int)((v16 & ~((unsigned __int64)v16 >> 32)) - 255) >> 31) & ((v16 & ~((unsigned __int64)v16 >> 32))
                                                                                - 255))
         + 255);
    v11 = dword_6FBBFE50[v8 + 2] - (((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 255);
    v12 = v9 & ~(v9 >> 31);
    v13 = 4 * (v10 & ~(v10 >> 31));
    LOWORD(v13) = v13 & 0x3E0;
    v14 = (v11 & ~(v11 >> 31)) << 7;
    LOWORD(v14) = v14 & 0x7C00;
    result = v14 | v13 | (v12 >> 3) & 0x1F;
    *a1 = result;
    result = (signed __int16)result;
    *a2 = dword_6FCBFE50[(signed __int16)result];
  }
  return result;
}
