int __cdecl sub_6F839EFE(int a1, int a2)
{
  int result; // eax@5

  if ( a1 && a2 && *(_DWORD *)(a2 + 8) & 0x80 && *(_BYTE *)(a2 + 200) == 1 )
    result = *(_DWORD *)(a2 + 192);
  else
    result = 0;
  return result;
}
