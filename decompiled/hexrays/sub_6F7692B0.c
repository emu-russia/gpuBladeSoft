int __cdecl sub_6F7692B0(int a1)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 156);
  if ( result && *(_BYTE *)(result + 4) & 1 )
  {
    sub_6F773D90(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100), *(_DWORD *)(a1 + 88));
    result = *(_DWORD *)(a1 + 156);
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(result + 4) &= 0xFFFFFFFE;
  }
  else
  {
    *(_DWORD *)(a1 + 88) = 0;
  }
  return result;
}
