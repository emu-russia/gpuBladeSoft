signed int __cdecl sub_6F7A1620(int a1, int a2)
{
  signed int result; // eax@1

  result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1886352244, a2, 0);
  if ( !result )
    result = sub_6F7728E0(a2, (int)&unk_6FB68AC0, a1 + 468);
  return result;
}
