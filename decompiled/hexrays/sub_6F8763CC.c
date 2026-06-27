int __cdecl sub_6F8763CC(void *a1, _DWORD *a2, int a3)
{
  int result; // eax@1

  memset(a1, 0, 0x100u);
  result = (*(_BYTE *)(*a2 + a3) - 128) << 6;
  *(_DWORD *)a1 = result;
  return result;
}
