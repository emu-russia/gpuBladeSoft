int __fastcall sub_6F967590(int a1)
{
  int result; // eax@1

  result = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  memset((void *)((a1 + 8) & 0xFFFFFFFC), 0, 4 * ((a1 + 4 - ((a1 + 8) & 0xFFFFFFFC) + 56) >> 2));
  *(float *)a1 = 1.0;
  *(float *)(a1 + 20) = 1.0;
  *(float *)(a1 + 40) = 1.0;
  *(float *)(a1 + 60) = 1.0;
  return result;
}
