int __cdecl sub_6F81FE10(int a1)
{
  int result; // eax@1

  result = a1;
  *(_DWORD *)(a1 + 4) = &unk_6FB8EBE0;
  *(_DWORD *)(a1 + 8) = &unk_6FB8EBE8;
  *(_DWORD *)(a1 + 12) = &unk_6FB8EBF0;
  *(_DWORD *)(a1 + 16) = &unk_6FB8EBF8;
  *(_DWORD *)a1 = a1 + 32;
  *(_DWORD *)(a1 + 20) = &unk_6FB8EC00;
  *(_DWORD *)(a1 + 24) = &unk_6FB8EC08;
  *(_DWORD *)(a1 + 28) = &unk_6FB8EC10;
  return result;
}
