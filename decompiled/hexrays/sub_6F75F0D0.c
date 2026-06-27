int sub_6F75F0D0()
{
  int result; // eax@1

  result = dword_7035BA20;
  if ( dword_7035BA20 )
  {
    fflush((FILE *)dword_7035BA20);
    result = fclose((FILE *)dword_7035BA20);
    dword_7035BA20 = 0;
  }
  return result;
}
