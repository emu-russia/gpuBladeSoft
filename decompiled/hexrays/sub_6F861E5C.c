void __cdecl sub_6F861E5C(int a1, int a2)
{
  int v2; // ebx@1
  int v3; // esi@1
  int v4; // edx@2
  int v5; // eax@2

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 24);
  if ( a2 > 0 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = v4;
    if ( a2 > v4 )
    {
      do
      {
        v2 -= v5;
        (*(void (__cdecl **)(int))(v3 + 12))(a1);
        v5 = *(_DWORD *)(v3 + 4);
        v4 = v5;
      }
      while ( v5 < v2 );
    }
    *(_DWORD *)v3 += v2;
    *(_DWORD *)(v3 + 4) = v4 - v2;
  }
}
