int __cdecl sub_6F8A7210(int a1, int a2, int a3)
{
  int result; // eax@1

  result = sub_6F8AD210(0x4000, a1, 0, (_BYTE *)a2, (const char **)a3);
  *(_BYTE *)(a1 + result) = 0;
  return result;
}
