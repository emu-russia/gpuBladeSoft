signed int __stdcall sub_6F75F120(int a1, int a2)
{
  signed int result; // eax@4

  if ( dword_7035D4C0 > 15 )
  {
    result = 0;
  }
  else
  {
    if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)dword_7035D4C4 + 12))(
           dword_7035D4C4,
           a1 + 4,
           &dword_7035CCC4[34 * dword_7035D4C0],
           0) >= 0 )
      ++dword_7035D4C0;
    result = 1;
  }
  return result;
}
