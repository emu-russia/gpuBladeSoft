_BYTE *__cdecl sub_6F7A9DC0(int a1, int a2, unsigned __int16 a3, int a4)
{
  _BYTE *result; // eax@1

  *(_DWORD *)(*(_DWORD *)(a2 + 16) + 8 * a3 + 4) += a4;
  result = (_BYTE *)(*(_DWORD *)(a2 + 24) + a3);
  *result |= 0x10u;
  return result;
}
