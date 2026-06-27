int __cdecl sub_6F6F9CC0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // ebx@1
  int v8; // ebx@2
  signed int v9; // esi@2
  int v10; // ebp@2
  signed int v11; // ebx@2
  int v12; // ebx@2
  int v13; // ebp@2
  int result; // eax@2

  v7 = *a1;
  if ( (signed __int16)v7 >= 0 )
  {
    v8 = 4 * v7;
    v9 = dword_6FBBFE50[v8] + ((signed int)a5 >> 2) - 255;
    v10 = dword_6FBBFE50[v8 + 2] + ((signed int)a7 >> 2);
    v11 = dword_6FBBFE50[v8 + 1] + ((signed int)a6 >> 2) - 255;
    v12 = 4 * ((v11 >> 31) & v11) + 1020;
    v13 = ((((v10 - 255) >> 31) & (v10 - 255)) + 255) << 7;
    LOWORD(v12) = v12 & 0x3E0;
    LOWORD(v13) = v13 & 0x7C00;
    result = v13 | v12 | ((((v9 >> 31) & v9) + 255) >> 3) & 0x1F;
    *a1 = result;
  }
  return result;
}
