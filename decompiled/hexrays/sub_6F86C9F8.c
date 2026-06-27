int __cdecl sub_6F86C9F8(int a1)
{
  int result; // eax@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 156);
  *(_DWORD *)(a1 + 400) = result;
  *(_DWORD *)result = sub_6F86C2F4;
  *(_DWORD *)(result + 84) = 0;
  *(_DWORD *)(result + 140) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 144) = 0;
  *(_DWORD *)(result + 92) = 0;
  *(_DWORD *)(result + 148) = 0;
  *(_DWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 152) = 0;
  return result;
}
