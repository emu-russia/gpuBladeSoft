signed int __cdecl sub_6F7A17D0(int a1, int a2, char a3)
{
  signed int result; // eax@2
  int v4; // ebx@2

  if ( a3 )
  {
    result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1986553185, a2, 0);
    v4 = a1 + 296;
    if ( result )
      return result;
  }
  else
  {
    result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1751672161, a2, 0);
    if ( result )
      return result;
    v4 = a1 + 216;
  }
  result = sub_6F7728E0(a2, (int)&unk_6FB68900, v4);
  if ( !result )
  {
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(v4 + 40) = 0;
  }
  return result;
}
