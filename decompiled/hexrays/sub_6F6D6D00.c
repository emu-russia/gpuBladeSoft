int __cdecl sub_6F6D6D00(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int result; // eax@1
  int v8; // eax@2
  int v9; // esi@2
  int *v10; // edi@2
  int v11; // edx@2
  int v12; // eax@2
  int v13; // ebp@2

  result = *a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = 4 * result;
    v9 = dword_6FBBFE50[v8];
    v10 = &dword_6FBBFE50[v8];
    v11 = (dword_6FBBFE54[v8] - a6) & ~((unsigned __int64)(dword_6FBBFE54[v8] - a6) >> 32);
    v12 = 4 * v11;
    LOWORD(v12) = 4 * v11 & 0x3E0;
    v13 = ((v10[2] - a7) & ~((v10[2] - a7) >> 31)) << 7;
    LOWORD(v13) = v13 & 0x7C00;
    result = v13 | (((v9 - a5) & ~((v9 - a5) >> 31)) >> 3) & 0x1F | v12;
    *a1 = result;
    result = (signed __int16)result;
    *a2 = dword_6FCBFE50[(signed __int16)result];
  }
  return result;
}
