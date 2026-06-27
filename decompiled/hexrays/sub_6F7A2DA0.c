int __cdecl sub_6F7A2DA0(int a1, unsigned int *a2)
{
  int result; // eax@4
  int v3; // ecx@8

  if ( *a2 > 0xFFFE )
  {
    result = 0;
  }
  else if ( *(_BYTE *)(a1 + 20) & 1 )
  {
    result = sub_6F79D5C0(a1, a2, 1u);
  }
  else if ( *a2 == *(_DWORD *)(a1 + 24) )
  {
    sub_6F79D520(a1);
    v3 = *(_DWORD *)(a1 + 28);
    result = 0;
    if ( v3 )
    {
      *a2 = *(_DWORD *)(a1 + 24);
      result = v3;
    }
  }
  else
  {
    result = sub_6F79D7F0(a1, a2, 1);
  }
  return result;
}
