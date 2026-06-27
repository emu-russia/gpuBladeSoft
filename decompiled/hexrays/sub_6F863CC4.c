char __cdecl sub_6F863CC4(int a1)
{
  int v1; // eax@1
  int v2; // edx@2
  int v4; // eax@7

  v1 = *(_DWORD *)(a1 + 396);
  if ( !v1 )
  {
    if ( !sub_6F863BD4(a1) )
      return 0;
    v1 = *(_DWORD *)(a1 + 396);
  }
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 420) + 16);
  if ( v2 + 208 == v1 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 100;
    *(_DWORD *)(v4 + 24) = v2;
    (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 3);
    *(_DWORD *)(a1 + 396) = 0;
    goto LABEL_4;
  }
  if ( (unsigned __int8)(*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)(a1 + 24) + 20))(
                          a1,
                          *(_DWORD *)(*(_DWORD *)(a1 + 420) + 16)) )
  {
LABEL_4:
    *(_DWORD *)(*(_DWORD *)(a1 + 420) + 16) = ((unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 420) + 16) + 1) & 7;
    return 1;
  }
  return 0;
}
