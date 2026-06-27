int __cdecl sub_6F7A9FB0(int a1, int a2, int a3)
{
  __int64 v3; // rcx@1

  HIDWORD(v3) = (signed int)((unsigned __int64)(a2 * (signed __int64)*(_WORD *)(a1 + 290)
                                              + a3 * (signed __int64)*(_WORD *)(a1 + 292)) >> 32) >> 31;
  LODWORD(v3) = (signed int)((unsigned __int64)(a2 * (signed __int64)*(_WORD *)(a1 + 290)
                                              + a3 * (signed __int64)*(_WORD *)(a1 + 292)) >> 32) >> 31;
  return (unsigned __int64)(v3
                          + 0x2000
                          + a2 * (signed __int64)*(_WORD *)(a1 + 290)
                          + a3 * (signed __int64)*(_WORD *)(a1 + 292)) >> 14;
}
