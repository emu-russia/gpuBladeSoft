int __cdecl sub_6F87C450(int a1, _DWORD *a2, int a3)
{
  int v3; // edx@1
  int v4; // eax@1
  int v5; // ecx@1
  int result; // eax@1

  memset((void *)a1, 0, 0x100u);
  v3 = *a2 + a3;
  v4 = *(_BYTE *)v3;
  v5 = *(_BYTE *)(v3 + 1);
  *(_DWORD *)a1 = 32 * (v4 + v5 - 256);
  result = 32 * (v4 - v5);
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
