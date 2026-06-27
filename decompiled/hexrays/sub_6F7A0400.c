int __cdecl sub_6F7A0400(int a1)
{
  int v1; // ebx@1
  int v2; // ebp@1
  int v3; // esi@1
  int v4; // eax@3
  int result; // eax@6

  v1 = *(_DWORD *)(a1 + 356);
  v2 = *(_DWORD *)(a1 + 348);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 96) + 8);
  if ( v1 )
  {
    if ( v2 )
    {
      do
      {
        v4 = *(_DWORD *)(v1 + 16);
        v1 += 20;
        sub_6F773D90(v3, v4);
        *(_DWORD *)(v1 - 4) = 0;
        *(_WORD *)(v1 - 12) = 0;
        --v2;
      }
      while ( v2 );
      v1 = *(_DWORD *)(a1 + 356);
    }
    sub_6F773D90(v3, v1);
    *(_DWORD *)(a1 + 356) = 0;
  }
  result = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  *(_WORD *)(a1 + 344) = 0;
  return result;
}
