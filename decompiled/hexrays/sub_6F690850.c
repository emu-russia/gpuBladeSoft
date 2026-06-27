unsigned int __usercall sub_6F690850@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned int *v4; // edi@1
  _WORD *v5; // esi@1
  unsigned int result; // eax@1
  int v7; // ecx@2
  int v8; // eax@3
  int *v9; // edx@3
  unsigned int v10; // eax@3
  int v11; // esi@3
  __int64 v12; // rax@3
  int v13; // [sp+10h] [bp-3Ch]@2
  int v14; // [sp+14h] [bp-38h]@2
  int v15; // [sp+18h] [bp-34h]@2

  v4 = a2;
  v5 = a1;
  result = dword_6FBBFE48(a3, a4);
  if ( BYTE3(result) & 0x40 )
  {
    v7 = BYTE3(result);
    v13 = (unsigned __int8)result;
    v14 = BYTE1(result);
    v15 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v8 = 4 * *v5;
      v9 = &dword_6FBBFE50[v8];
      *v5 = 4 * ((*((_WORD *)v9 + 2) - v14) & ~(unsigned __int16)((v9[1] - v14) >> 31)) & 0x3E0 | (((unsigned __int16)(*((_WORD *)v9 + 4) - v15) & (unsigned __int16)~(unsigned __int16)((v9[2] - v15) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v8] - v13) & ~((dword_6FBBFE50[v8] - v13) >> 31)) >> 3) & 0x1F | 0x8000;
      v10 = *v4;
      v11 = BYTE1(v10);
      v12 = (unsigned __int8)(*v4 >> 16) - v15;
      result = ~(((unsigned __int8)*v4 - v13) >> 31) & ((unsigned __int8)*v4 - v13) | (((v11 - v14) & ~((v11 - v14) >> 31)) << 8) | ((~HIDWORD(v12) & (unsigned int)v12) << 16);
      *v4 = result | (v7 << 24);
    }
    else
    {
      *v5 = ((unsigned __int8)(result >> 16) << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *v4 = result;
    }
  }
  return result;
}
