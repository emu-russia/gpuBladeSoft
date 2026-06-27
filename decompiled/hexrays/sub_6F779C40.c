int __cdecl sub_6F779C40(int a1, _BYTE *a2)
{
  int v2; // eax@1

  v2 = *(_DWORD *)(a1 + 656);
  *a2 = 0;
  if ( v2 && *(_DWORD *)(v2 + 1456) != 0xFFFF )
    *a2 = 1;
  return 0;
}
