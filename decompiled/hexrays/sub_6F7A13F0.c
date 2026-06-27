signed int __cdecl sub_6F7A13F0(int a1, int a2)
{
  signed int result; // eax@1

  result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1346587732, a2, 0);
  if ( !result )
    result = sub_6F7728E0(a2, (int)&unk_6FB68B20, a1 + 548);
  return result;
}
