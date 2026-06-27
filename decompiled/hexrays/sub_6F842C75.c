signed int __cdecl sub_6F842C75(int a1)
{
  signed int result; // eax@1

  result = sub_6F84173B(a1, 0);
  if ( result )
  {
    result = a1;
    *(_DWORD *)(a1 + 124) |= 0x2001200u;
  }
  return result;
}
