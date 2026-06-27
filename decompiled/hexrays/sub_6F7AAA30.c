signed int __cdecl sub_6F7AAA30(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebx@1
  signed int result; // eax@1

  v4 = *(_DWORD *)(a1 + 24);
  result = sub_6F771FF0(*(_DWORD *)(a1 + 24), a3);
  if ( !result )
  {
    result = sub_6F772380(v4, a4);
    if ( !result )
    {
      *(_DWORD *)(a1 + 200) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(a1 + 204) = *(_DWORD *)(v4 + 36);
    }
  }
  return result;
}
