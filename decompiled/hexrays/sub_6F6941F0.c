unsigned int __usercall sub_6F6941F0@<eax>(unsigned int result@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5, int a6, int a7)
{
  _WORD *v7; // edi@2
  unsigned __int8 v8; // bp@2
  unsigned int v9; // ecx@2
  signed int v10; // ebp@3
  signed int v11; // ebx@3
  signed int v12; // ebp@3
  int v13; // ebx@3
  int v14; // edx@3
  int v15; // eax@3
  int v16; // esi@3
  int v17; // eax@3
  int v18; // esi@3
  int *v19; // [sp+18h] [bp-24h]@2

  if ( *(_WORD *)result >= 0 )
  {
    v19 = a2;
    v7 = (_WORD *)result;
    v8 = a3;
    result = dword_6FBBFE40(a6, a7);
    v9 = result >> 24;
    if ( BYTE3(result) & 0x40 )
    {
      v10 = ((unsigned __int8)result * v8 >> 7) - 255;
      v11 = ((unsigned __int8)(result >> 16) * a5 >> 7) - 255;
      v12 = ((v10 >> 31) & v10) + 255;
      v13 = ((v11 >> 31) & v11) + 255;
      v14 = ((((BYTE1(result) * a4 >> 7) - 255) >> 31) & ((BYTE1(result) * a4 >> 7) - 255)) + 255;
      v15 = 4 * v14;
      v16 = v13 << 7;
      LOWORD(v15) = 4 * v14 & 0x3E0;
      LOWORD(v16) = ((_WORD)v13 << 7) & 0x7C00;
      v17 = v16 | (v12 >> 3) & 0x1F | v15;
      v18 = (unsigned __int8)v9 << 8;
      LOWORD(v18) = ((unsigned __int8)v9 << 8) & 0x8000;
      result = v18 | v17;
      *v7 = result;
      *v19 = (v14 << 8) | (v13 << 16) | v12 | ((unsigned __int8)v9 << 24);
      *v7 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
  return result;
}
