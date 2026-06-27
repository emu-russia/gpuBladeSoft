unsigned int __usercall sub_6F690990@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned int *v4; // edi@1
  _WORD *v5; // ebx@1
  unsigned int result; // eax@1
  int v7; // ecx@2
  int v8; // eax@6
  int *v9; // ebp@6
  unsigned int v10; // eax@6
  int v11; // [sp+14h] [bp-38h]@2
  int v12; // [sp+18h] [bp-34h]@2
  int v13; // [sp+1Ch] [bp-30h]@2

  v4 = a2;
  v5 = a1;
  result = dword_6FBBFE48(a3, a4);
  if ( BYTE3(result) & 0x40 )
  {
    v7 = BYTE3(result);
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v8 = 4 * *v5;
      v9 = &dword_6FBBFE50[v8];
      *v5 = 4 * ((v9[1] - v12) & ~(unsigned __int16)((v9[1] - v12) >> 31)) & 0x3E0 | (((unsigned __int16)(*((_WORD *)v9 + 4) - v13) & (unsigned __int16)~(unsigned __int16)((v9[2] - v13) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v8] - v11) & ~((dword_6FBBFE50[v8] - v11) >> 31)) >> 3) & 0x1F | 0x8000;
      v10 = *v4;
      result = ~(((unsigned __int8)*v4 - v11) >> 31) & ((unsigned __int8)*v4 - v11) | ((~((BYTE1(v10) - v12) >> 31) & (BYTE1(v10) - v12)) << 8) | ((((unsigned __int8)(*v4 >> 16) - v13) & ~(((unsigned __int8)(*v4 >> 16) - v13) >> 31)) << 16);
      *v4 = result | (v7 << 24);
    }
    else
    {
      *v5 = ((unsigned __int8)(result >> 16) << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *v4 = result;
    }
    *v5 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
