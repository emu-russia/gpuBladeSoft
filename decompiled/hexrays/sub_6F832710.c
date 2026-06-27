_BYTE *__cdecl sub_6F832710(int a1)
{
  _BYTE *result; // eax@1

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  result = malloc(0x100u);
  *(_DWORD *)(a1 + 16) = 256;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = result;
  *result = 0;
  return result;
}
