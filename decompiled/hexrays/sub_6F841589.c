int __cdecl sub_6F841589(int a1, int a2, int a3)
{
  int result; // eax@7

  if ( a1 )
  {
    *(_DWORD *)(a1 + 96) = a2;
    if ( a3 )
      *(_DWORD *)(a1 + 92) = a3;
    else
      *(_DWORD *)(a1 + 92) = sub_6F841537;
    if ( *(_DWORD *)(a1 + 88) )
    {
      *(_DWORD *)(a1 + 88) = 0;
      sub_6F839262(a1, "Can't set both read_data_fn and write_data_fn in the same structure");
    }
    result = a1;
    *(_DWORD *)(a1 + 380) = 0;
  }
  return result;
}
