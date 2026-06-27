int __cdecl sub_6F7AABA0(int a1, int a2, unsigned __int16 a3, int a4)
{
  int result; // eax@3

  if ( *(_WORD *)(a1 + 298) )
    *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8 * a3) += sub_6F7C9420(a4, *(_WORD *)(a1 + 298), *(_DWORD *)(a1 + 564));
  result = *(_WORD *)(a1 + 300);
  if ( *(_WORD *)(a1 + 300) )
  {
    result = sub_6F7C9420(a4, *(_WORD *)(a1 + 300), *(_DWORD *)(a1 + 564));
    *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8 * a3 + 4) += result;
  }
  return result;
}
