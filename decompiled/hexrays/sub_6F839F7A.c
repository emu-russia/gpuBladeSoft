int __cdecl sub_6F839F7A(int a1, int a2)
{
  int result; // eax@6

  if ( a1
    && a2
    && *(_DWORD *)(a2 + 8) & 0x80
    && *(_BYTE *)(a2 + 200) == 1
    && *(_DWORD *)(a2 + 192) == *(_DWORD *)(a2 + 196) )
  {
    result = *(_DWORD *)(a2 + 192);
  }
  else
  {
    result = 0;
  }
  return result;
}
