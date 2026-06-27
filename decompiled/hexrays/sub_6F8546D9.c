int __cdecl sub_6F8546D9(int a1, int a2)
{
  int result; // eax@1

  *(_WORD *)a1 = *(_DWORD *)(a2 + 20) + 1900;
  *(_BYTE *)(a1 + 2) = *(_DWORD *)(a2 + 16) + 1;
  *(_BYTE *)(a1 + 3) = *(_DWORD *)(a2 + 12);
  *(_BYTE *)(a1 + 4) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 5) = *(_DWORD *)(a2 + 4);
  result = a1;
  *(_BYTE *)(a1 + 6) = *(_DWORD *)a2;
  return result;
}
