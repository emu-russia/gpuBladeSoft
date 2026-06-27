signed int __cdecl sub_6F88C9B0(int a1)
{
  int v1; // eax@3
  int v2; // eax@4
  int v3; // edx@4
  bool v4; // zf@5
  signed int result; // eax@7

  if ( !a1
    || *(_DWORD *)(a1 + 12) != 7247
    || (v1 = *(_DWORD *)(a1 + 76), v1 != -5) && v1
    || (v2 = lseeki64(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 48) >> 31, 0), (v3 & v2) == -1) )
  {
    result = -1;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 12) == 7247;
    *(_DWORD *)a1 = 0;
    if ( v4 )
    {
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 44) = 0;
    }
    *(_DWORD *)(a1 + 72) = 0;
    sub_6F88C430(a1, 0, 0);
    result = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 88) = 0;
  }
  return result;
}
