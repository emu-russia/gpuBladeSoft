int __cdecl sub_6F707EC0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  __int64 v8; // rax@2
  int v9; // edi@2
  signed int v10; // ecx@2
  signed int v11; // esi@2
  int v12; // edi@2
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
    v8 = (v14 & ~(v14 >> 31)) - 255;
    v9 = 4 * *a1;
    v10 = dword_6FBBFE50[v9] + (((v13 & ~(v13 >> 31)) - 255) & (((v13 & ~(v13 >> 31)) - 255) >> 31));
    v11 = dword_6FBBFE50[v9 + 2] + ((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255));
    HIDWORD(v8) = 4
                * (((signed int)(dword_6FBBFE54[v9] + (HIDWORD(v8) & v8)) >> 31) & (dword_6FBBFE54[v9]
                                                                                  + (HIDWORD(v8) & v8)))
                + 1020;
    WORD2(v8) &= 0x3E0u;
    v12 = ((v11 & (v11 >> 31)) + 255) << 7;
    LOWORD(v12) = v12 & 0x7C00;
    LODWORD(v8) = v12 | HIDWORD(v8) | ((((v10 >> 31) & v10) + 255) >> 3) & 0x1F;
    *a1 = v8;
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v8;
    *a1 = result;
  }
  return result;
}
