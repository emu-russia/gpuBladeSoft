int __cdecl sub_6F863D58(int a1)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 420);
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 396) = 0;
  *(_BYTE *)(result + 12) = 0;
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 160) = 0;
  return result;
}
