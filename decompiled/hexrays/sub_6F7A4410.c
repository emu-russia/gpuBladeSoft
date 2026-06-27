signed int __cdecl sub_6F7A4410(int a1, int a2)
{
  signed int result; // eax@1

  result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1651008868, a2, 0);
  if ( !result )
    result = sub_6F7728E0(a2, (int)&unk_6FB68B80, a1 + 160);
  return result;
}
