int __cdecl sub_6F862F64(int a1)
{
  int result; // eax@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 0, 24);
  *(_DWORD *)(a1 + 416) = result;
  *(_DWORD *)result = sub_6F86230C;
  *(_DWORD *)(result + 4) = sub_6F862058;
  *(_DWORD *)(result + 8) = sub_6F8620A0;
  *(_DWORD *)(result + 12) = sub_6F862044;
  *(_BYTE *)(result + 16) = 0;
  *(_BYTE *)(result + 17) = 0;
  *(_DWORD *)(result + 20) = 1;
  return result;
}
