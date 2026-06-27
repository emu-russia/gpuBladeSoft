signed int __cdecl sub_6F779C70(int a1, unsigned int a2, _DWORD *a3)
{
  int v3; // edx@1
  signed int result; // eax@2

  v3 = *(_DWORD *)(a1 + 656);
  if ( !v3 )
    return 0;
  result = 6;
  if ( *(_DWORD *)(v3 + 1456) != 0xFFFF && *(_DWORD *)(v3 + 12) >= a2 )
  {
    if ( a3 )
    {
      *a3 = *(_WORD *)(*(_DWORD *)(v3 + 1160) + 2 * a2);
      return 0;
    }
    return 0;
  }
  return result;
}
