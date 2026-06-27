signed int __cdecl sub_6F892E60(int a1, signed int a2, _BYTE *a3, int a4)
{
  void *(__cdecl *v4)(int, int, int); // eax@5
  int v5; // edx@6
  int v6; // eax@7
  int v7; // esi@7
  signed int v8; // edi@8
  signed int result; // eax@8
  int v10; // ecx@12

  if ( !a3 || *a3 != 49 || a4 != 56 )
    return -6;
  if ( !a1 )
    return -2;
  v4 = *(void *(__cdecl **)(int, int, int))(a1 + 32);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 36) )
      goto LABEL_7;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 36);
    v5 = 0;
    v4 = sub_6F892B00;
    *(_DWORD *)(a1 + 32) = sub_6F892B00;
    *(_DWORD *)(a1 + 40) = 0;
    if ( v10 )
      goto LABEL_7;
  }
  *(_DWORD *)(a1 + 36) = sub_6F892B20;
LABEL_7:
  v6 = (int)v4(v5, 1, 7116);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(a1 + 28) = v6;
    *(_DWORD *)(v6 + 52) = 0;
    v8 = sub_6F892DD0(a1, a2);
    result = 0;
    if ( v8 )
    {
      (*(void (__cdecl **)(_DWORD, int))(a1 + 36))(*(_DWORD *)(a1 + 40), v7);
      result = v8;
      *(_DWORD *)(a1 + 28) = 0;
    }
  }
  else
  {
    result = -4;
  }
  return result;
}
