int __cdecl sub_6F769300(int a1, int a2)
{
  int v2; // eax@1
  int result; // eax@3

  v2 = *(_DWORD *)(a1 + 156);
  if ( v2 && *(_BYTE *)(v2 + 4) & 1 )
  {
    sub_6F773D90(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100), *(_DWORD *)(a1 + 88));
    *(_DWORD *)(*(_DWORD *)(a1 + 156) + 4) &= 0xFFFFFFFE;
    result = a2;
    *(_DWORD *)(a1 + 88) = a2;
  }
  else
  {
    result = a2;
    *(_DWORD *)(a1 + 88) = a2;
  }
  return result;
}
