int __cdecl sub_6F83A0CA(int a1, int a2)
{
  int result; // eax@5

  if ( a1 && a2 && *(_DWORD *)(a2 + 8) & 0x100 && *(_BYTE *)(a2 + 188) == 1 )
    result = *(_DWORD *)(a2 + 180);
  else
    result = 0;
  return result;
}
