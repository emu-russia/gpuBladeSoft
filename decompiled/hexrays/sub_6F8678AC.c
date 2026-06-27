int __usercall sub_6F8678AC@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int result; // eax@1
  int v3; // ecx@1
  int v4; // edx@1
  int v5; // esi@3
  signed int v6; // ecx@3

  v1 = *(_DWORD *)(a1 + 440);
  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 2044);
  *(_DWORD *)(v1 + 40) = result + 1020;
  v3 = 0;
  v4 = 0;
  do
  {
    *(_DWORD *)(result + 4 * v4 + 1020) = v4;
    *(_DWORD *)(result + 4 * v3 + 1020) = v3;
    ++v4;
    --v3;
  }
  while ( v4 != 16 );
  v5 = result;
  v6 = 16;
  do
  {
    *(_DWORD *)(result + 4 * v6 + 1020) = v4;
    *(_DWORD *)(v5 + 956) = -v4;
    v4 += ++v6 & 1 ^ 1;
    v5 -= 4;
  }
  while ( v6 != 48 );
  LOBYTE(v6) = 0;
  do
  {
    *(_DWORD *)(result + v6 + 1212) = v4;
    *(_DWORD *)(result - v6 + 828) = -v4;
    v6 += 4;
  }
  while ( v6 != 832 );
  return result;
}
