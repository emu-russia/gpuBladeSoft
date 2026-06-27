int __cdecl sub_6F839F3C(int a1, int a2)
{
  int result; // eax@5

  if ( a1 && a2 && *(_DWORD *)(a2 + 8) & 0x80 && *(_BYTE *)(a2 + 200) == 1 )
    result = *(_DWORD *)(a2 + 196);
  else
    result = 0;
  return result;
}
