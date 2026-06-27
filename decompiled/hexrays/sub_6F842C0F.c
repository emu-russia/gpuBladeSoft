signed int __cdecl sub_6F842C0F(int a1)
{
  signed int result; // eax@1
  int v2; // eax@2
  int v3; // edx@2

  result = sub_6F84173B(a1, 0);
  if ( result )
  {
    v2 = *(_DWORD *)(a1 + 124);
    BYTE1(v2) |= 0x10u;
    v3 = v2;
    result = a1;
    *(_DWORD *)(a1 + 124) = v3;
  }
  return result;
}
