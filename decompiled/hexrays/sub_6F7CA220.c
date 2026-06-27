int __cdecl sub_6F7CA220(int a1)
{
  int result; // eax@1
  int v2; // edx@1

  result = a1;
  *(_WORD *)(a1 + 22) = 0;
  *(_WORD *)(a1 + 20) = 0;
  v2 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 56) = v2;
  *(_DWORD *)(result + 60) = *(_DWORD *)(result + 24);
  *(_DWORD *)(result + 64) = *(_DWORD *)(result + 28);
  *(_DWORD *)(result + 68) = *(_DWORD *)(result + 32);
  *(_DWORD *)(result + 72) = *(_DWORD *)(result + 36);
  *(_DWORD *)(result + 76) = *(_DWORD *)(result + 40);
  *(_DWORD *)(result + 80) = *(_DWORD *)(result + 44);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 52);
  return result;
}
