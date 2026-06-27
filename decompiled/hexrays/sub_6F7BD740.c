signed int __cdecl sub_6F7BD740(int a1)
{
  _DWORD *v1; // eax@1
  signed int v2; // edx@1

  v1 = (_DWORD *)sub_6F76F030(*(_DWORD *)(a1 + 4), "truetype");
  v2 = 11;
  if ( v1 )
  {
    v2 = 0;
    *(_DWORD *)(a1 + 28) = *v1;
  }
  return v2;
}
