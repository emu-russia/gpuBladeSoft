int __cdecl sub_6F7AAC20(int a1, int a2, unsigned __int16 a3, signed int a4)
{
  int result; // eax@3
  int v5; // ebx@4

  if ( *(_WORD *)(a1 + 298) )
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 16) + 8 * a3) += sub_6F7C9420(a4, *(_WORD *)(a1 + 298), *(_DWORD *)(a1 + 564));
    *(_BYTE *)(*(_DWORD *)(a2 + 24) + a3) |= 8u;
  }
  result = *(_WORD *)(a1 + 300);
  if ( *(_WORD *)(a1 + 300) )
  {
    v5 = a3;
    result = sub_6F7C9420(a4, *(_WORD *)(a1 + 300), *(_DWORD *)(a1 + 564));
    *(_DWORD *)(*(_DWORD *)(a2 + 16) + 8 * v5 + 4) += result;
    *(_BYTE *)(*(_DWORD *)(a2 + 24) + v5) |= 0x10u;
  }
  return result;
}
