unsigned int __cdecl sub_6F7109D0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@2
  unsigned int v11; // ebx@2
  unsigned int v12; // ecx@2

  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    HIWORD(v10) = HIWORD(result);
    v11 = result >> 9;
    LOWORD(v10) = ((unsigned __int16)result >> 6) & 0x3E0;
    LOWORD(v11) = (result >> 9) & 0x7C00;
    v12 = result >> 24 << 8;
    LOWORD(v12) = v12 & 0x8000;
    result = v12 | v11 | v10 | ((signed int)result >> 3) & 0x1F;
    *a1 = result;
  }
  return result;
}
