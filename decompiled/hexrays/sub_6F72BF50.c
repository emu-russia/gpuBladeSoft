int __cdecl sub_6F72BF50(_BYTE *a1, int a2, int a3, void *a4, int a5, int a6, int a7, int a8, void *a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
  int result; // eax@1

  result = dword_6FBBFD7C;
  if ( dword_6FBBFD7C )
  {
    result = glDeleteTextures(1, (int)&dword_6FBBFD78);
    dword_6FBBFD70 = 0;
    dword_6FBBFD74 = 0;
    dword_6FBBFD78 = 0;
    dword_6FBBFD7C = 0;
  }
  dword_6F96D020 = a2;
  if ( *a1 )
  {
    if ( a2 >= 0 )
      result = sub_6F72BD60(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  }
  return result;
}
