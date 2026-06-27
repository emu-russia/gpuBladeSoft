int __cdecl sub_6F769260(int a1, int a2)
{
  int v2; // edi@2
  int result; // eax@2

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 28);
    result = sub_6F771FD0(a1);
    if ( !a2 )
      result = sub_6F773D90(v2, a1);
  }
  return result;
}
