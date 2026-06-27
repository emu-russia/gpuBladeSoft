int __cdecl sub_6F79C560(int a1, _WORD *a2)
{
  int v2; // edx@1
  int result; // eax@1

  v2 = *(_DWORD *)(a1 + 112);
  *(_WORD *)(a1 + 156) = -*(_WORD *)(a1 + 112);
  result = v2 * -*a2;
  *(_DWORD *)(a1 + 148) = result;
  if ( v2 > 0 )
  {
    result += (*(_DWORD *)(a1 + 104) - 1) * v2;
    *(_DWORD *)(a1 + 148) = result;
  }
  return result;
}
