signed int __cdecl sub_6F78E380(int a1, int a2, _DWORD *a3)
{
  signed int result; // eax@1

  result = 6;
  *a3 = 0;
  if ( a2 && a1 && (unsigned int)(a2 - 1) < *(_DWORD *)(a1 + 408) )
  {
    *a3 = *(_DWORD *)(*(_DWORD *)(a1 + 416) + 16 * (a2 - 1) + 4);
    result = 0;
  }
  return result;
}
