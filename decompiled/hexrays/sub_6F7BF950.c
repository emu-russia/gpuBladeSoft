int __cdecl sub_6F7BF950(int a1)
{
  int v1; // esi@2
  int v2; // edi@2
  int result; // eax@6

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 132);
    v2 = *(_DWORD *)(a1 + 100);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 160) )
        sub_6F772340(*(_DWORD *)(a1 + 104), (_DWORD *)(v1 + 160));
      sub_6F773D90(v2, *(_DWORD *)(v1 + 168));
      *(_DWORD *)(v1 + 168) = 0;
      sub_6F773D90(v2, v1);
      *(_DWORD *)(a1 + 132) = 0;
    }
    result = sub_6F773D90(v2, *(_DWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 28) = 0;
  }
  return result;
}
