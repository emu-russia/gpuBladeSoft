int __cdecl sub_6F85DD94(int a1)
{
  int result; // eax@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 32);
  *(_DWORD *)(a1 + 388) = result;
  *(_DWORD *)result = sub_6F85D6E0;
  *(_DWORD *)(result + 4) = sub_6F85D880;
  *(_DWORD *)(result + 8) = sub_6F85DA40;
  *(_DWORD *)(result + 12) = sub_6F85DD04;
  *(_DWORD *)(result + 16) = sub_6F85DD18;
  *(_DWORD *)(result + 20) = sub_6F85D688;
  *(_DWORD *)(result + 24) = sub_6F85D6CC;
  *(_DWORD *)(result + 28) = 0;
  return result;
}
