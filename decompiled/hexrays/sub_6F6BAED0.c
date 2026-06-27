int __cdecl sub_6F6BAED0(_WORD *a1, unsigned int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int result; // eax@1
  signed int v8; // ecx@2
  signed int v9; // esi@2
  signed int v10; // ebx@2
  unsigned int v11; // eax@2
  unsigned int v12; // edx@2
  signed int v13; // ebp@2

  result = *a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = (signed int)a5 >> 1;
    v9 = (signed int)a6 >> 1;
    v10 = (signed int)a7 >> 1;
    *a1 = (((_WORD)v10 + (unsigned __int16)(dword_6FBBFE50[4 * result + 2] >> 1)) << 7) & 0x7C00 | ((v8 + (dword_6FBBFE50[4 * result] >> 1)) >> 3) & 0x1F | 4 * (v9 + (dword_6FBBFE54[4 * result] >> 1)) & 0x3E0;
    v11 = *a2;
    v12 = v11;
    v13 = (signed int)BYTE1(v11) >> 1;
    result = ((signed int)*a2 >> 1) & 0x7F;
    *a2 = ((v13 + v9) << 8) | ((((v12 >> 17) & 0x7F) + v10) << 16) | (result + v8);
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
