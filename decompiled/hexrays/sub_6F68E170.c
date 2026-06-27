unsigned int __usercall sub_6F68E170@<eax>(unsigned int result@<eax>, _DWORD *a2@<edx>, unsigned __int8 a3@<cl>, unsigned __int8 a4, unsigned __int8 a5, int a6, int a7)
{
  _WORD *v7; // edi@2
  unsigned __int8 v8; // bp@2
  unsigned int v9; // edx@3
  signed int v10; // ecx@3
  signed int v11; // esi@3
  signed int v12; // ebx@3
  int v13; // esi@3
  int v14; // ebp@3
  int v15; // ecx@3
  _DWORD *v16; // [sp+1Ch] [bp-20h]@2

  if ( *(_WORD *)result >= 0 )
  {
    v16 = a2;
    v7 = (_WORD *)result;
    v8 = a3;
    result = dword_6FBBFE48(a6, a7);
    if ( BYTE3(result) & 0x40 )
    {
      v9 = result >> 24 << 8;
      LOWORD(v9) = v9 & 0x8000;
      v10 = v8 * (unsigned __int8)result;
      v11 = (BYTE1(result) * a4 >> 7) - 255;
      v12 = ((unsigned __int8)(result >> 16) * a5 >> 7) - 255;
      result = v11 >> 31;
      v13 = 4 * ((v11 >> 31) & v11) + 1020;
      LOWORD(v13) = v13 & 0x3E0;
      v14 = ((v12 & (v12 >> 31)) + 255) << 7;
      LOWORD(v14) = v14 & 0x7C00;
      v15 = v9 | v14 | v13 | ((((((v10 >> 7) - 255) >> 31) & ((v10 >> 7) - 255)) + 255) >> 3) & 0x1F;
      *v7 = v15;
      *v16 = dword_6FCBFE50[(unsigned __int16)v15];
    }
  }
  return result;
}
