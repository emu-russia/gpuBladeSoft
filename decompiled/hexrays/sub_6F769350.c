int __cdecl sub_6F769350(int a1, int a2)
{
  int v2; // edx@1
  int v3; // esi@1
  int v4; // eax@1
  int v6; // [sp+1Ch] [bp-10h]@3

  v2 = *(_DWORD *)(a1 + 156);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 100);
  v4 = *(_DWORD *)(v2 + 4);
  if ( v4 & 1 )
  {
    sub_6F773D90(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100), *(_DWORD *)(a1 + 88));
    *(_DWORD *)(a1 + 88) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 4) = v4 | 1;
  }
  *(_DWORD *)(a1 + 88) = sub_6F773A50(v3, a2, &v6);
  return v6;
}
