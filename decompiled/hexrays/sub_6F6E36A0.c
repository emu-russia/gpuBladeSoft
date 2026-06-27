int __cdecl sub_6F6E36A0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int result; // eax@1
  int v8; // eax@2

  result = *a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = 4 * result;
    LOWORD(result) = (((unsigned __int16)(LOWORD(dword_6FBBFE50[v8 + 2]) - a7) & (unsigned __int16)~((dword_6FBBFE50[v8 + 2] - a7) >> 31)) << 7) & 0x7C00 | (((dword_6FBBFE50[v8] - a5) & ~((dword_6FBBFE50[v8] - a5) >> 31)) >> 3) & 0x1F | 4 * ((LOWORD(dword_6FBBFE54[v8]) - a6) & ~(unsigned __int16)((unsigned __int64)(dword_6FBBFE54[v8] - a6) >> 32)) & 0x3E0;
    *a1 = result;
    result = (signed __int16)result;
    *a2 = dword_6FCBFE50[(signed __int16)result];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
