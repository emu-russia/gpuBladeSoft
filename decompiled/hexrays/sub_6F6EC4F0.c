int __cdecl sub_6F6EC4F0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int result; // eax@1

  LOWORD(result) = (((unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1) + (unsigned __int16)((signed int)a7 >> 1)) << 7) & 0x7C00 | (((dword_6FBBFE50[4 * *a1] >> 1) + ((signed int)a5 >> 1)) >> 3) & 0x1F | 4 * ((dword_6FBBFE50[4 * *a1 + 1] >> 1) + ((signed int)a6 >> 1)) & 0x3E0;
  *a1 = result;
  result = (signed __int16)result;
  *a2 = dword_6FCBFE50[(signed __int16)result];
  return result;
}
