int __cdecl sub_6F861B38(int a1)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 24);
  **(_DWORD **)(result + 20) = *(_DWORD *)(result + 32);
  **(_DWORD **)(result + 24) = *(_DWORD *)(result + 36) - *(_DWORD *)(result + 4);
  return result;
}
