int __cdecl sub_6F84FA7F(int a1)
{
  int v1; // ST0C_4@1
  int result; // eax@2

  v1 = (*(_BYTE *)(a1 + 346) + 7) >> 3;
  *(_DWORD *)(a1 + 716) = sub_6F84F6B9;
  *(_DWORD *)(a1 + 720) = sub_6F84F71C;
  *(_DWORD *)(a1 + 724) = sub_6F84F76C;
  if ( v1 == 1 )
  {
    result = a1;
    *(_DWORD *)(a1 + 728) = sub_6F84F82C;
  }
  else
  {
    result = a1;
    *(_DWORD *)(a1 + 728) = sub_6F84F932;
  }
  return result;
}
