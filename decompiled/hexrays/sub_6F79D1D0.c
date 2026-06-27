int __cdecl sub_6F79D1D0(int a1, unsigned int a2)
{
  int result; // eax@1

  result = 0;
  if ( a2 <= 0xFF )
    result = *(_BYTE *)(*(_DWORD *)(a1 + 16) + a2 + 6);
  return result;
}
