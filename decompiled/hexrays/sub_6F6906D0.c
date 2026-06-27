unsigned int __usercall sub_6F6906D0@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned int *v4; // edi@1
  _WORD *v5; // ebx@1
  unsigned int result; // eax@1
  int v7; // ecx@2
  int *v8; // ebp@6
  unsigned int v9; // eax@6
  signed int v10; // edx@6
  int v11; // [sp+14h] [bp-38h]@2
  int v12; // [sp+18h] [bp-34h]@2
  int v13; // [sp+1Ch] [bp-30h]@2

  v4 = a2;
  v5 = a1;
  result = dword_6FBBFE48(a3, a4);
  if ( (result >> 24) & 0x40 )
  {
    v7 = BYTE1(result);
    v11 = (unsigned __int8)result;
    v12 = (unsigned __int8)(result >> 16);
    v13 = BYTE3(result);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v8 = &dword_6FBBFE50[4 * *v5];
      *v5 = (4 * ((BYTE1(result) + *((_WORD *)v8 + 2) - 255) & ((BYTE1(result) + v8[1] - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)(*((_WORD *)v8 + 4) + v12 - 255) & (unsigned __int16)((v8[2] + v12 - 255) >> 31)) + 255) << 7) & 0x7C00 | ((((*v8 + (unsigned __int8)result - 255) & ((*v8 + (unsigned __int8)result - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v9 = *v4;
      v10 = v11 + (unsigned __int8)*v4 - 255;
      *v4 = (((v10 >> 31) & v10) + 255) | (((((v7 + BYTE1(v9) - 255) >> 31) & (v7 + BYTE1(v9) - 255)) + 255) << 8) | ((((v12 + (unsigned __int8)(*v4 >> 16) - 255) & ((v12 + (unsigned __int8)(*v4 >> 16) - 255) >> 31)) + 255) << 16) | (v13 << 24);
    }
    else
    {
      *v5 = ((unsigned __int8)(result >> 16) << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *v4 = result;
    }
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *v5 |= result;
  }
  return result;
}
