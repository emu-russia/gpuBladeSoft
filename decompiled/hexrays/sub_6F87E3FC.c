int __cdecl sub_6F87E3FC(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ecx@1
  int result; // eax@1

  memset((void *)a1, 0, 0x100u);
  v3 = *(_BYTE *)(*(_DWORD *)a2 + a3);
  v4 = *(_BYTE *)(*(_DWORD *)(a2 + 4) + a3);
  *(_DWORD *)a1 = 32 * (v3 + v4 - 256);
  result = 32 * (v3 - v4);
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
