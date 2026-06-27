void __cdecl sub_6F6DA400(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // edx@2
  int v11; // ST18_4@3
  int v12; // ST1C_4@3
  int v13; // eax@3
  signed int v14; // ebx@3
  __int64 v15; // rax@4
  int v16; // ecx@4
  signed int v17; // edi@4
  signed int v18; // ecx@4
  int v19; // esi@4
  int v20; // edi@7
  int v21; // ecx@7
  int v22; // ecx@7
  int v23; // [sp+30h] [bp-2Ch]@3
  int v24; // [sp+34h] [bp-28h]@4
  int v25; // [sp+38h] [bp-24h]@4

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = (unsigned __int8)v9;
      v12 = BYTE1(v9);
      v13 = (unsigned __int8)(v9 >> 16);
      v14 = (v12 * a6 >> 7) - 255;
      v23 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
      if ( v10 >> 7 )
      {
        v24 = ((v14 >> 31) & v14) + 255;
        v25 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v23);
        v15 = (v25 & ~(v25 >> 31)) - 255;
        v16 = 4 * *a1;
        LODWORD(v15) = HIDWORD(v15) & v15;
        HIDWORD(v15) = dword_6FBBFE50[v16 + 2];
        v17 = dword_6FBBFE50[v16] - (((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 255);
        v18 = dword_6FBBFE54[v16]
            - ((((signed int)((v24 & ~((unsigned __int64)v24 >> 32)) - 255) >> 31) & ((v24 & ~((unsigned __int64)v24 >> 32))
                                                                                    - 255))
             + 255);
        LOWORD(v15) = 4 * (v18 & ~(v18 >> 31)) & 0x3E0 | ((v17 & ~(v17 >> 31)) >> 3) & 0x1F | (((unsigned __int16)(WORD2(v15) - (v15 + 255)) & (unsigned __int16)~((HIDWORD(v15) - ((signed int)v15 + 255)) >> 31)) << 7) & 0x7C00 | 0x8000;
        *a1 = v15;
        v19 = (unsigned __int16)v15;
      }
      else
      {
        v24 = ((v14 >> 31) & v14) + 255;
        v25 = ((((a7 * v13 >> 7) - 255) >> 31) & ((a7 * v13 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v23);
        v20 = 4 * ((((v24 & ~(v24 >> 31)) - 255) >> 31) & ((v24 & ~(v24 >> 31)) - 255)) + 1020;
        LOWORD(v20) = v20 & 0x3E0;
        v21 = ((((v25 & ~(v25 >> 31)) - 255) & (((v25 & ~(v25 >> 31)) - 255) >> 31)) + 255) << 7;
        LOWORD(v21) = v21 & 0x7C00;
        v22 = v20 | (((((v23 & ~(v23 >> 31)) - 255) & (((v23 & ~(v23 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F | v21;
        *a1 = v22;
        v19 = (signed __int16)v22;
      }
      *a2 = dword_6FCBFE50[v19];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
