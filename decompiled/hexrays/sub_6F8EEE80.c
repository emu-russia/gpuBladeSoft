int __stdcall sub_6F8EEE80(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // edi@1
  int result; // eax@1

  v5 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a3 + 12) & 0xFFFFBFB5 | 0x208;
  result = sub_6F8EDD10(a1, a2, a3, a4, a5);
  *(_DWORD *)(a3 + 12) = v5;
  return result;
}
