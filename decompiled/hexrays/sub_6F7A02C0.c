int __cdecl sub_6F7A02C0(int a1)
{
  int result; // eax@1

  result = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 28) = 0;
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      result = sub_6F773D90(result, *(_DWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 32) = 0;
    }
  }
  return result;
}
