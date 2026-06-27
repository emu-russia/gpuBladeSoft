signed int __cdecl sub_6F83D426(signed int a1)
{
  signed int result; // eax@3
  signed int v2; // [sp+1Ch] [bp-Ch]@1

  v2 = *(_DWORD *)(***(_DWORD ***)a1 + 732);
  if ( sub_6F83823E(*(_DWORD *)(***(_DWORD ***)a1 + 732)) )
  {
    if ( sub_6F83CF7D(v2) )
    {
      *(_DWORD *)(a1 + 32) = 3;
      result = sub_6F8381D3(v2);
      *(_DWORD *)(a1 + 36) = result;
    }
    else
    {
      result = a1;
      *(_DWORD *)(a1 + 32) = 1;
    }
  }
  else
  {
    result = a1;
    *(_DWORD *)(a1 + 32) = 4;
  }
  return result;
}
