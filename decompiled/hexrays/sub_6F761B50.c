signed int __stdcall sub_6F761B50(int a1, int a2)
{
  signed int result; // eax@4

  if ( dword_7036F384 > 15 )
  {
    result = 0;
  }
  else
  {
    if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)dword_7036F388 + 12))(
           dword_7036F388,
           a1 + 4,
           &dword_7036E7C4[50 * dword_7036F384],
           0) >= 0 )
      ++dword_7036F384;
    result = 1;
  }
  return result;
}
