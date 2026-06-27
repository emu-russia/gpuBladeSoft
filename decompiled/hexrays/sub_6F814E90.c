int __cdecl sub_6F814E90(int a1, int a2)
{
  unsigned int v2; // eax@1
  int result; // eax@1

  v2 = *(_BYTE *)(a2 + 7) + *(_BYTE *)(a2 + 3) + *(_BYTE *)(a2 + 1) + *(_BYTE *)(a2 + 5);
  *(_BYTE *)a1 = (signed int)(*(_BYTE *)(a2 + 2)
                            + *(_BYTE *)a2
                            + *(_BYTE *)(a2 + 4)
                            + *(_BYTE *)(a2 + 6)
                            - ((unsigned int)(*(_BYTE *)(a2 + 2) + *(_BYTE *)a2 + *(_BYTE *)(a2 + 4) + *(_BYTE *)(a2 + 6)) >> 31)
                            + 2) >> 2;
  result = (signed int)(v2 - (v2 >> 31) + 2) >> 2;
  *(_BYTE *)(a1 + 1) = result;
  return result;
}
