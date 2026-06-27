int __cdecl sub_6F77B610(int a1, int a2)
{
  int v2; // ebx@1
  int result; // eax@2
  _DWORD *v4; // edx@3
  int v5; // eax@6
  signed int v6; // ebp@6
  signed int v7; // esi@6
  int v8; // edx@8
  int v9; // ecx@8
  _BYTE *v10; // edx@8

  v2 = *(_DWORD *)(a1 + 28);
  if ( !*(_BYTE *)(v2 + 64) && (result = sub_6F77B3D0(*(_DWORD *)(a1 + 28), *(_DWORD *)a2, *(_DWORD *)(a2 + 4))) != 0
    || (v5 = *(_DWORD *)(v2 + 12),
        v6 = *(_DWORD *)(a2 + 12),
        v7 = *(_DWORD *)(a2 + 8),
        (unsigned int)(*(_WORD *)(v5 + 22) + *(_WORD *)(v5 + 58) + 1) > *(_DWORD *)(v5 + 4))
    && (result = sub_6F7CA4F0(v5, 1, 0)) != 0 )
  {
    v4 = *(_DWORD **)(a1 + 24);
    if ( !*v4 )
      *v4 = result;
  }
  else
  {
    result = *(_DWORD *)(v2 + 20);
    if ( *(_BYTE *)(v2 + 65) )
    {
      v8 = *(_WORD *)(result + 2);
      v9 = *(_DWORD *)(result + 4) + 8 * v8;
      v10 = (_BYTE *)(*(_DWORD *)(result + 8) + v8);
      *(_DWORD *)v9 = v7 >> 10;
      *(_DWORD *)(v9 + 4) = v6 >> 10;
      *v10 = 1;
    }
    ++*(_WORD *)(result + 2);
  }
  return result;
}
