int __cdecl sub_6F798930(int a1, int a2)
{
  int result; // eax@1
  int v3; // eax@2
  int v4; // esi@2
  int v5; // eax@5

  result = *(_DWORD *)(a1 + 4);
  if ( !result )
  {
    v3 = *(_DWORD *)(a1 + 28);
    v4 = *(_DWORD *)a1;
    if ( v3 )
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 16 * (v3 + 0xFFFFFFF) + 12) = a2;
    result = sub_6F7985C0((int *)(a1 + 40), v4);
    if ( !result )
    {
      v5 = *(_DWORD *)(a1 + 64);
      if ( v5 )
        *(_DWORD *)(*(_DWORD *)(a1 + 72) + 16 * (v5 + 0xFFFFFFF) + 12) = a2;
      result = sub_6F7985C0((int *)(a1 + 76), v4);
    }
  }
  return result;
}
