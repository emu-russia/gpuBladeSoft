int *__cdecl sub_6F6BABE0(int *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *result; // eax@1
  int v8; // ebp@1
  int v9; // ebp@2
  int v10; // eax@2
  int *v11; // edi@2
  signed int v12; // ebp@2
  int v13; // edx@2
  signed int v14; // ecx@2
  signed int v15; // esi@2

  result = a1;
  v8 = *(_WORD *)a1;
  if ( (signed __int16)v8 >= 0 )
  {
    v9 = 4 * v8;
    v10 = dword_6FBBFE50[v9];
    v11 = &dword_6FBBFE50[v9];
    v12 = dword_6FBBFE50[v9 + 1] - a6;
    *(_WORD *)a1 = (((unsigned __int16)(*((_WORD *)v11 + 4) - a7) & (unsigned __int16)~(unsigned __int16)((v11[2] - a7) >> 31)) << 7) & 0x7C00 | 4 * (v12 & ~(unsigned __int16)(v12 >> 31)) & 0x3E0 | ((signed int)((v10 - a5) & ~((unsigned __int64)(v10 - a5) >> 32)) >> 3) & 0x1F;
    v13 = *a2;
    v14 = (unsigned __int8)((unsigned int)*a2 >> 16) - a7;
    v15 = (unsigned __int8)*a2 - a5;
    result = a2;
    *a2 = ~(v15 >> 31) & v15 | ((v14 & ~(v14 >> 31)) << 16) | (((BYTE1(v13) - a6) & ~((BYTE1(v13) - a6) >> 31)) << 8);
  }
  return result;
}
