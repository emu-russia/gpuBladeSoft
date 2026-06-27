unsigned int __cdecl sub_6F71EA70(char a1, char a2, int a3)
{
  int v3; // eax@1
  unsigned int v4; // ecx@1
  unsigned int result; // eax@1

  v3 = dword_6FB4EC00[(a1 & 3) + 4 * (a2 & 3)];
  *(_DWORD *)a3 = (v3 + *(_DWORD *)a3) & 0xFFFFFFF8;
  v4 = (v3 + *(_DWORD *)(a3 + 4)) & 0xFFFFFFF8;
  result = (*(_DWORD *)(a3 + 8) + v3) & 0xFFFFFFF8;
  *(_DWORD *)(a3 + 4) = v4;
  *(_DWORD *)(a3 + 8) = result;
  return result;
}
