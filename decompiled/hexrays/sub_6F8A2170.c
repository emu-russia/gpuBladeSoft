signed int __cdecl sub_6F8A2170(int a1)
{
  signed int result; // eax@1
  UINT v2; // eax@2
  char v3; // [sp+2Dh] [bp-Fh]@2
  unsigned __int16 v4; // [sp+2Eh] [bp-Eh]@2

  result = -1;
  if ( a1 != -1 )
  {
    v3 = a1;
    v4 = -1;
    v2 = sub_6F8B1B80();
    MultiByteToWideChar(v2, 8u, &v3, 1, &v4, 1);
    result = v4;
  }
  return result;
}
