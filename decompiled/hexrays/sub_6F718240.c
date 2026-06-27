int __cdecl sub_6F718240(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int *v8; // esi@1
  signed int v9; // edi@1
  int v10; // eax@1
  int v11; // eax@1
  int v12; // edi@1
  int result; // eax@1

  v7 = 4 * *a1;
  v8 = &dword_6FBBFE50[v7];
  v9 = (dword_6FBBFE50[v7] >> 1) + ((signed int)a5 >> 1);
  v10 = 4 * ((dword_6FBBFE50[v7 + 1] >> 1) + ((signed int)a6 >> 1));
  LOWORD(v10) = v10 & 0x3E0;
  v11 = (v9 >> 3) & 0x1F | v10;
  v12 = ((v8[2] >> 1) + ((signed int)a7 >> 1)) << 7;
  LOWORD(v12) = v12 & 0x7C00;
  result = v12 | v11;
  *a1 = result;
  return result;
}
