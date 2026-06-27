int __cdecl sub_6F7A6DD0(int a1, int a2, int a3)
{
  int result; // eax@1

  result = a3;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 12) = 0;
  if ( *(_DWORD *)(a2 + 72) == *(_DWORD *)(a1 + 16) )
    result = sub_6F770380(a2 + 108, a3);
  return result;
}
