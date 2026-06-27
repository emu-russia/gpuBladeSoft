signed int __cdecl sub_6F8A37C0(__int16 a1)
{
  UINT v1; // eax@1
  signed int result; // eax@3
  char v3; // [sp+29h] [bp-13h]@1
  __int16 v4; // [sp+2Ah] [bp-12h]@1
  int v5; // [sp+2Ch] [bp-10h]@1

  v5 = 0;
  v4 = a1;
  v1 = sub_6F8B1B80();
  if ( !WideCharToMultiByte(v1, 0, (LPCWSTR)&v4, 1, &v3, 1, 0, &v5) || v5 )
    result = -1;
  else
    result = v3;
  return result;
}
