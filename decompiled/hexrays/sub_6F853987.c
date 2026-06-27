int __cdecl sub_6F853987(int a1, int a2, int a3, int a4)
{
  int result; // eax@8

  if ( a1 )
  {
    *(_DWORD *)(a1 + 96) = a2;
    if ( a3 )
      *(_DWORD *)(a1 + 88) = a3;
    else
      *(_DWORD *)(a1 + 88) = sub_6F8538EB;
    if ( a4 )
      *(_DWORD *)(a1 + 380) = a4;
    else
      *(_DWORD *)(a1 + 380) = sub_6F853963;
    result = *(_DWORD *)(a1 + 92);
    if ( result )
    {
      *(_DWORD *)(a1 + 92) = 0;
      result = sub_6F839262(a1, "Can't set both read_data_fn and write_data_fn in the same structure");
    }
  }
  return result;
}
