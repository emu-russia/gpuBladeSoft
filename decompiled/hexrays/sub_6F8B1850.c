signed int __cdecl sub_6F8B1850(int a1)
{
  signed int result; // eax@2

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
    result = 0;
  }
  else
  {
    result = -1;
  }
  return result;
}
