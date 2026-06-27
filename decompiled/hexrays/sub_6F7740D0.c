_DWORD *__cdecl sub_6F7740D0(_DWORD *a1, void (__cdecl *a2)(int, _DWORD, int), int a3, int a4)
{
  _DWORD *result; // eax@1
  int v5; // ebp@3
  int v6; // esi@5
  int v7; // ST04_4@5
  int v8; // esi@9

  result = a1;
  if ( a1 && a3 )
  {
    result = a1;
    v5 = *a1;
    if ( *a1 )
    {
      if ( a2 )
      {
        do
        {
          v6 = *(_DWORD *)(v5 + 4);
          a2(a3, *(_DWORD *)(v5 + 8), a4);
          v7 = v5;
          v5 = v6;
          (*(void (__cdecl **)(int, int))(a3 + 8))(a3, v7);
        }
        while ( v6 );
      }
      else
      {
        do
        {
          v8 = *(_DWORD *)(v5 + 4);
          (*(void (__cdecl **)(int, int))(a3 + 8))(a3, v5);
          v5 = v8;
        }
        while ( v8 );
      }
      result = a1;
    }
    *result = 0;
    result[1] = 0;
  }
  return result;
}
