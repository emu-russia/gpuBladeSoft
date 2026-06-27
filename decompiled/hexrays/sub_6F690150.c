unsigned int __usercall sub_6F690150@<eax>(_WORD *a1@<eax>, int *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5, int a6, int a7)
{
  unsigned __int8 v7; // bp@1
  _WORD *v8; // edi@1
  unsigned int result; // eax@1
  unsigned int v10; // ebx@1
  int v11; // ecx@2
  signed int v12; // ebp@2
  int v13; // edx@2
  int v14; // ebx@2
  int v15; // eax@2
  int v16; // esi@2
  int v17; // eax@2
  int v18; // esi@2
  int *v19; // [sp+18h] [bp-24h]@1

  v7 = a3;
  v8 = a1;
  v19 = a2;
  result = dword_6FBBFE48(a6, a7);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)v10;
    v12 = (((((unsigned __int8)result * v7 >> 7) - 255) >> 31) & (((unsigned __int8)result * v7 >> 7) - 255)) + 255;
    v13 = ((((BYTE1(result) * a4 >> 7) - 255) >> 31) & ((BYTE1(result) * a4 >> 7) - 255)) + 255;
    v14 = ((((unsigned __int8)(result >> 16) * a5 >> 7) - 255) >> 31) & (((unsigned __int8)(result >> 16) * a5 >> 7)
                                                                       - 255);
    v15 = 4 * v13;
    v14 += 255;
    LOWORD(v15) = 4 * v13 & 0x3E0;
    v16 = v14 << 7;
    LOWORD(v16) = ((_WORD)v14 << 7) & 0x7C00;
    v17 = v16 | (v12 >> 3) & 0x1F | v15;
    v18 = v11 << 8;
    LOWORD(v18) = ((_WORD)v11 << 8) & 0x8000;
    result = v18 | v17;
    *v8 = result;
    *v19 = (v13 << 8) | (v14 << 16) | v12 | (v11 << 24);
    *v8 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
