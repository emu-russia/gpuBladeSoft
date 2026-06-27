_WORD *__usercall sub_6F68DDA0@<eax>(_WORD *result@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *v7; // ebx@2
  _WORD *v8; // ST1C_4@2
  int v9; // edi@2
  signed int v10; // ebp@2
  signed int v11; // eax@2
  int v12; // edi@2
  int v13; // edi@2
  int v14; // ebp@2
  int v15; // [sp+20h] [bp-3Ch]@2
  int v16; // [sp+24h] [bp-38h]@2
  int v17; // [sp+28h] [bp-34h]@2

  if ( *result >= 0 )
  {
    v7 = result;
    v8 = a2;
    v15 = a5;
    v16 = a6;
    v17 = a7;
    dword_6FCFFE50(a3, a4, &v15);
    v9 = 4 * *v7;
    v10 = dword_6FBBFE50[v9] - (((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255);
    v11 = dword_6FBBFE50[v9 + 2] - (((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 255);
    v12 = 4
        * ((dword_6FBBFE54[v9] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255)) & ~((dword_6FBBFE54[v9] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255)) >> 31));
    LOWORD(v12) = v12 & 0x3E0;
    v13 = ((~(v10 >> 31) & v10) >> 3) & 0x1F | v12;
    v14 = v11 & ~(v11 >> 31);
    result = v8;
    LOWORD(v13) = ((_WORD)v14 << 7) & 0x7C00 | v13;
    *v7 = v13;
    *(_DWORD *)v8 = dword_6FCBFE50[(signed __int16)v13];
    *v7 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
