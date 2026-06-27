signed int __cdecl sub_6F767FA0(int a1, int a2)
{
  signed int result; // eax@1
  int *v3; // edi@3

  result = 18;
  if ( *(_DWORD *)(a2 + 72) == 1651078259 )
  {
    v3 = *(int **)a1;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 104);
    if ( *(_BYTE *)(*(_DWORD *)(a2 + 156) + 4) & 1 )
    {
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 76);
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 92);
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 96);
      *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) &= 0xFFFFFFFE;
      result = 0;
    }
    else
    {
      sub_6F7C8020(a1 + 28);
      result = sub_6F7C8060(v3, a2 + 76, a1 + 28);
    }
  }
  return result;
}
