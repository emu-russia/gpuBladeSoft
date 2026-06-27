unsigned int __cdecl sub_6F6F4010(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ST18_4@2
  int v12; // ST1C_4@2
  int v13; // eax@2
  signed int v14; // ebx@2
  unsigned int v15; // edi@3
  int v16; // ecx@3
  int v17; // ecx@3
  int v18; // esi@3
  __int64 v19; // rax@6
  int v20; // ecx@6
  signed int v21; // edi@6
  signed int v22; // ecx@6
  int v23; // esi@6
  int v24; // edi@6
  int v25; // [sp+30h] [bp-2Ch]@2
  int v26; // [sp+34h] [bp-28h]@3
  int v27; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = (unsigned __int8)(result >> 16);
    v14 = (v12 * a6 >> 7) - 255;
    v25 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
    if ( v10 >> 7 )
    {
      v26 = ((v14 >> 31) & v14) + 255;
      v27 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v25);
      v19 = (v27 & ~(v27 >> 31)) - 255;
      v20 = 4 * *a1;
      LODWORD(v19) = HIDWORD(v19) & v19;
      HIDWORD(v19) = dword_6FBBFE50[v20 + 2];
      v21 = dword_6FBBFE50[v20] - (((((v25 & ~(v25 >> 31)) - 255) >> 31) & ((v25 & ~(v25 >> 31)) - 255)) + 255);
      v22 = dword_6FBBFE54[v20]
          - ((((signed int)((v26 & ~((unsigned __int64)v26 >> 32)) - 255) >> 31) & ((v26 & ~((unsigned __int64)v26 >> 32))
                                                                                  - 255))
           + 255);
      v23 = v21 & ~(v21 >> 31);
      LODWORD(v19) = ((HIDWORD(v19) - ((_DWORD)v19 + 255)) & ~((HIDWORD(v19) - ((signed int)v19 + 255)) >> 31)) << 7;
      LOWORD(v19) = v19 & 0x7C00;
      v24 = 4 * (v22 & ~(v22 >> 31));
      LOWORD(v24) = v24 & 0x3E0;
      result = v24 | (v23 >> 3) & 0x1F | v19;
      LOWORD(result) = result | 0x8000;
      v18 = (unsigned __int16)result;
      *a1 = result;
    }
    else
    {
      v26 = ((v14 >> 31) & v14) + 255;
      v27 = ((((a7 * v13 >> 7) - 255) >> 31) & ((a7 * v13 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v25);
      result = ((v26 & ~(v26 >> 31)) - 255) >> 31;
      v15 = 4 * (result & ((v26 & ~(v26 >> 31)) - 255)) + 1020;
      LOWORD(v15) = v15 & 0x3E0;
      v16 = ((((v27 & ~(v27 >> 31)) - 255) & (((v27 & ~(v27 >> 31)) - 255) >> 31)) + 255) << 7;
      LOWORD(v16) = v16 & 0x7C00;
      v17 = v15 | (((((v25 & ~(v25 >> 31)) - 255) & (((v25 & ~(v25 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F | v16;
      *a1 = v17;
      v18 = (signed __int16)v17;
    }
    *a2 = dword_6FCBFE50[v18];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
