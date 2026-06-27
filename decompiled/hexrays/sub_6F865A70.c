int __cdecl sub_6F865A70(int a1)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 432);
  *(_BYTE *)(result + 36) = 0;
  *(_DWORD *)(result + 44) = *(_DWORD *)(a1 + 96);
  return result;
}
