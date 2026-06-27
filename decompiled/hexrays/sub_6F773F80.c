int __cdecl sub_6F773F80(int a1, int a2)
{
  int result; // eax@1
  int v3; // ecx@3

  result = a2;
  if ( a1 && a2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = v3;
    if ( v3 )
      *(_DWORD *)(v3 + 4) = a2;
    else
      *(_DWORD *)a1 = a2;
    *(_DWORD *)(a1 + 4) = a2;
  }
  return result;
}
