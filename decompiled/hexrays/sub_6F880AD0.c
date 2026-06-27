int __cdecl sub_6F880AD0(int a1, int a2, _WORD *a3, _DWORD *a4, int a5)
{
  int result; // eax@1

  result = a5;
  *(_BYTE *)(*a4 + a5) = *(_BYTE *)(*(_DWORD *)(a1 + 292)
                                  + (((**(_DWORD **)(a2 + 84) * (signed int)*a3 + 4) >> 3) & 0x3FF)
                                  + 128);
  return result;
}
