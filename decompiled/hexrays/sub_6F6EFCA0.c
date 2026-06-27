unsigned int __cdecl sub_6F6EFCA0(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@2
  unsigned int v11; // ebx@2
  __int16 v12; // cx@2
  int v13; // edx@2
  unsigned __int16 v14; // cx@2

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    HIWORD(v10) = HIWORD(result);
    v11 = result >> 9;
    LOWORD(v11) = (result >> 9) & 0x7C00;
    LOWORD(v10) = ((unsigned __int16)result >> 6) & 0x3E0;
    v12 = (result >> 24 << 8) & 0x8000;
    v13 = ((signed int)result >> 3) & 0x1F | v11 | v10;
    result = (unsigned int)a1;
    v14 = v13 | v12;
    *a1 = v14;
    *a2 = dword_6FCBFE50[v14];
  }
  return result;
}
