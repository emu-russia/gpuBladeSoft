int __cdecl sub_6F814F60(int a1, int a2)
{
  unsigned int v2; // eax@1
  unsigned int v3; // eax@1
  int result; // eax@1

  v2 = *(_BYTE *)(a2 + 1) + *(_BYTE *)(a2 + 3);
  *(_BYTE *)a1 = (signed int)(*(_BYTE *)(a2 + 2)
                            + *(_BYTE *)a2
                            - ((unsigned int)(*(_BYTE *)(a2 + 2) + *(_BYTE *)a2) >> 31)
                            + 1) >> 1;
  *(_BYTE *)(a1 + 1) = (signed int)(v2 - (v2 >> 31) + 1) >> 1;
  v3 = *(_BYTE *)(a2 + 5) + *(_BYTE *)(a2 + 7);
  *(_BYTE *)(a1 + 4) = (signed int)(*(_BYTE *)(a2 + 6)
                                  + *(_BYTE *)(a2 + 4)
                                  - ((unsigned int)(*(_BYTE *)(a2 + 6) + *(_BYTE *)(a2 + 4)) >> 31)
                                  + 1) >> 1;
  result = (signed int)(v3 - (v3 >> 31) + 1) >> 1;
  *(_BYTE *)(a1 + 5) = result;
  return result;
}
