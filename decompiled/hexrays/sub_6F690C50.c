unsigned int __usercall sub_6F690C50@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4)
{
  _WORD *v4; // ebx@1
  unsigned int result; // eax@1
  int v6; // ecx@2
  signed int v7; // ebp@2
  signed int v8; // esi@2
  signed int v9; // edx@2
  signed int v10; // edi@6
  signed int v11; // ST14_4@6
  int v12; // eax@6
  signed int v13; // ST18_4@6
  int v14; // edx@6
  int *v15; // ebp@6
  unsigned int v16; // eax@6
  signed int v17; // edx@6
  unsigned int *v18; // [sp+10h] [bp-2Ch]@1

  v4 = a1;
  v18 = a2;
  result = dword_6FBBFE48(a3, a4);
  if ( BYTE3(result) & 0x40 )
  {
    v6 = BYTE3(result);
    v7 = (unsigned __int8)result;
    v8 = BYTE1(result);
    v9 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v10 = v9 >> 2;
      v11 = (signed int)(unsigned __int8)result >> 2;
      v12 = 4 * *v4;
      v13 = v8 >> 2;
      v14 = dword_6FBBFE50[v12] + (v7 >> 2);
      v15 = &dword_6FBBFE50[v12];
      *v4 = (4 * (((v13 + v15[1] - 255) >> 31) & (v13 + v15[1] - 255)) + 1020) & 0x3E0 | ((((unsigned __int16)(v10 + *((_WORD *)v15 + 4) - 255) & (unsigned __int16)((v10 + v15[2] - 255) >> 31))
                                                                                         + 255) << 7) & 0x7C00 | ((((v14 - 255) & ((v14 - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v16 = *v18;
      v17 = v11 + (unsigned __int8)*v18 - 255;
      result = (((v17 >> 31) & v17) + 255) | (((((v13 + BYTE1(v16) - 255) >> 31) & (v13 + BYTE1(v16) - 255)) + 255) << 8) | ((((v10 + (unsigned __int8)(*v18 >> 16) - 255) & ((v10 + (unsigned __int8)(*v18 >> 16) - 255) >> 31)) + 255) << 16);
      *v18 = result | (v6 << 24);
    }
    else
    {
      *v4 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v9 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *v18 = result;
    }
    *v4 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
