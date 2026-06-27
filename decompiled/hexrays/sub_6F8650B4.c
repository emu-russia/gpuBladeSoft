int __cdecl sub_6F8650B4(int a1)
{
  int result; // eax@1
  int v2; // edx@1

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 0, 168);
  *(_DWORD *)(a1 + 420) = result;
  *(_DWORD *)result = sub_6F863D58;
  *(_DWORD *)(result + 4) = sub_6F8641DC;
  *(_DWORD *)(result + 8) = sub_6F863CC4;
  *(_DWORD *)(result + 24) = sub_6F863B08;
  *(_DWORD *)(result + 92) = 0;
  v2 = 0;
  do
  {
    *(_DWORD *)(result + 4 * v2 + 28) = sub_6F863B08;
    *(_DWORD *)(result + 4 * v2++ + 96) = 0;
  }
  while ( v2 != 16 );
  *(_DWORD *)(result + 28) = sub_6F8636A4;
  *(_DWORD *)(result + 84) = sub_6F8636A4;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 396) = 0;
  *(_BYTE *)(result + 12) = 0;
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 160) = 0;
  return result;
}
