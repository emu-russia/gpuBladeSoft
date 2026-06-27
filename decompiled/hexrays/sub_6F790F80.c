int __cdecl sub_6F790F80(int a1)
{
  int result; // eax@1
  int v2; // edx@2

  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    v2 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(result + 108) = *(_DWORD *)v2;
    *(_DWORD *)(result + 112) = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(result + 116) = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(result + 120) = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(result + 124) = *(_DWORD *)(v2 + 16);
  }
  return result;
}
