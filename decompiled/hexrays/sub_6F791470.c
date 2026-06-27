int __cdecl sub_6F791470(int a1)
{
  int v1; // esi@2
  int v2; // eax@2
  int v3; // eax@2
  int result; // eax@2

  if ( *(_DWORD *)(a1 + 12) == -559038737 )
  {
    v1 = *(_DWORD *)(a1 + 32);
    sub_6F773D90(*(_DWORD *)(a1 + 32), *(_DWORD *)a1);
    v2 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)a1 = 0;
    sub_6F773D90(v1, v2);
    v3 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    result = sub_6F773D90(v1, v3);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  return result;
}
