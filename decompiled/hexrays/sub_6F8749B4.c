int __cdecl sub_6F8749B4(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  int v5; // edi@2
  unsigned int v6; // ST2C_4@3
  int result; // eax@3

  v4 = *(_DWORD *)(a1 + 404);
  if ( *(_BYTE *)(v4 + 48) )
  {
    v5 = v4 + 8;
  }
  else
  {
    v5 = v4 + 8;
    result = (*(int (__cdecl **)(int, int))(*(_DWORD *)(a1 + 408) + 12))(a1, v4 + 8);
    if ( !result )
      return result;
    *(_BYTE *)(v4 + 48) = 1;
  }
  v6 = *(_DWORD *)(a1 + 284);
  (*(void (__cdecl **)(int, int, int, _DWORD, int, int, int))(*(_DWORD *)(a1 + 412) + 4))(
    a1,
    v5,
    v4 + 52,
    *(_DWORD *)(a1 + 284),
    a2,
    a3,
    a4);
  result = v6;
  if ( v6 <= *(_DWORD *)(v4 + 52) )
  {
    *(_BYTE *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 52) = 0;
  }
  return result;
}
