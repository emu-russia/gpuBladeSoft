int __cdecl sub_6F78DF40(int a1)
{
  int v1; // ebx@1

  v1 = **(_DWORD **)(a1 + 156);
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  memset((void *)((a1 + 164) & 0xFFFFFFFC), 0, 4 * ((a1 + 160 - ((a1 + 164) & 0xFFFFFFFC) + 36) >> 2));
  *(_DWORD *)(a1 + 188) = v1;
  *(_BYTE *)(a1 + 192) = 0;
  sub_6F7CA220(v1);
  return 0;
}
