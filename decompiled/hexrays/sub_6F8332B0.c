int __cdecl sub_6F8332B0(int a1)
{
  int result; // eax@1
  _BYTE *v2; // edx@2

  result = a1;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v2 = *(_BYTE **)(a1 + 8);
    *(_DWORD *)(a1 + 12) = v2;
    *v2 = 0;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  return result;
}
