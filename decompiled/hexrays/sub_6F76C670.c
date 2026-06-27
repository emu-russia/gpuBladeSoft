unsigned int __cdecl sub_6F76C670(int a1, int a2)
{
  int v2; // esi@1
  int v3; // ebx@1
  signed int v4; // edx@1
  int v5; // ecx@1
  bool v6; // zf@1
  int v7; // eax@2
  unsigned int result; // eax@2
  int v9; // eax@3

  v2 = *(_DWORD *)(a1 + 32) + 16 * a2;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = *(_DWORD *)(v2 + 8);
  v5 = *(_DWORD *)(v2 + 12);
  *(_WORD *)(v3 + 12) = (v4 + 32) >> 6;
  v6 = (*(_BYTE *)(a1 + 8) & 1) == 0;
  *(_WORD *)(v3 + 14) = (v5 + 32) >> 6;
  if ( v6 )
  {
    v7 = *(_WORD *)v2;
    *(_DWORD *)(v3 + 16) = 0x10000;
    *(_DWORD *)(v3 + 20) = 0x10000;
    *(_DWORD *)(v3 + 24) = v5;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 36) = v4;
    result = v7 << 6;
    *(_DWORD *)(v3 + 32) = result;
  }
  else
  {
    *(_DWORD *)(v3 + 16) = sub_6F7C9760(v4, *(_WORD *)(a1 + 68));
    v9 = sub_6F7C9760(*(_DWORD *)(v2 + 12), *(_WORD *)(a1 + 68));
    *(_DWORD *)(v3 + 20) = v9;
    *(_DWORD *)(v3 + 24) = (sub_6F7C9730(*(_WORD *)(a1 + 70), v9) + 63) & 0xFFFFFFC0;
    *(_DWORD *)(v3 + 28) = sub_6F7C9730(*(_WORD *)(a1 + 72), *(_DWORD *)(v3 + 20)) & 0xFFFFFFC0;
    *(_DWORD *)(v3 + 32) = (sub_6F7C9730(*(_WORD *)(a1 + 74), *(_DWORD *)(v3 + 20)) + 32) & 0xFFFFFFC0;
    result = (sub_6F7C9730(*(_WORD *)(a1 + 76), *(_DWORD *)(v3 + 16)) + 32) & 0xFFFFFFC0;
    *(_DWORD *)(v3 + 36) = result;
  }
  return result;
}
