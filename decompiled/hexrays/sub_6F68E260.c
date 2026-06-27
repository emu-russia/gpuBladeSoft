unsigned int __usercall sub_6F68E260@<eax>(unsigned int result@<eax>, _DWORD *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5, int a6, int a7)
{
  _WORD *v7; // edi@2
  unsigned __int8 v8; // bp@2
  unsigned int v9; // edx@2
  signed int v10; // esi@3
  int v11; // ebx@3
  unsigned __int16 v12; // cx@3
  _DWORD *v13; // [sp+1Ch] [bp-20h]@2

  if ( *(_WORD *)result >= 0 )
  {
    v13 = a2;
    v7 = (_WORD *)result;
    v8 = a3;
    result = dword_6FBBFE48(a6, a7);
    v9 = result >> 24;
    if ( BYTE3(result) & 0x40 )
    {
      v10 = (BYTE1(result) * a4 >> 7) - 255;
      v11 = (unsigned __int8)(result >> 16) * a5 >> 7;
      v12 = ((_WORD)v9 << 8) & 0x8000 | ((((unsigned __int16)(v11 - 255) & (unsigned __int16)((v11 - 255) >> 31)) + 255) << 7) & 0x7C00 | (4 * ((v10 >> 31) & v10) + 1020) & 0x3E0 | ((((((v8 * (unsigned __int8)result >> 7) - 255) >> 31) & ((v8 * (unsigned __int8)result >> 7) - 255)) + 255) >> 3) & 0x1F;
      *v7 = v12;
      *v13 = dword_6FCBFE50[v12];
      result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
      *v7 |= result;
    }
  }
  return result;
}
