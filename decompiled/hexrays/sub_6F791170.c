int __cdecl sub_6F791170(int a1, unsigned int a2)
{
  int result; // eax@1
  unsigned int v3; // edx@1

  result = 0;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 <= a2 && a2 < *(_DWORD *)(a1 + 20) + v3 )
    result = *(_WORD *)(*(_DWORD *)(a1 + 24) + 2 * a2);
  return result;
}
