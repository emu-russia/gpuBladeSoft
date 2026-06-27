int __cdecl sub_6F6F5700(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rdi@1
  int v8; // eax@1
  signed int v9; // edx@1
  signed int v10; // ecx@1
  int v11; // eax@1
  int v12; // edx@1
  int result; // eax@1
  int v14; // [sp+20h] [bp-2Ch]@1
  int v15; // [sp+24h] [bp-28h]@1
  int v16; // [sp+28h] [bp-24h]@1

  v14 = a5;
  v15 = a6;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v7 = (v14 & ~(v14 >> 31)) - 255;
  v8 = 4 * *a1;
  v9 = dword_6FBBFE50[v8] - ((HIDWORD(v7) & v7) + 255);
  LODWORD(v7) = dword_6FBBFE54[v8]
              - ((((signed int)((v15 & ~((unsigned __int64)v15 >> 32)) - 255) >> 31) & ((v15 & ~((unsigned __int64)v15 >> 32))
                                                                                      - 255))
               + 255);
  v10 = dword_6FBBFE50[v8 + 2] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255);
  v11 = v9 & ~(v9 >> 31);
  HIDWORD(v7) = 4 * (v7 & ~((signed int)v7 >> 31));
  WORD2(v7) &= 0x3E0u;
  v12 = (v10 & ~(v10 >> 31)) << 7;
  LOWORD(v12) = v12 & 0x7C00;
  result = v12 | HIDWORD(v7) | (v11 >> 3) & 0x1F;
  *a1 = result;
  result = (signed __int16)result;
  *a2 = dword_6FCBFE50[(signed __int16)result];
  return result;
}
