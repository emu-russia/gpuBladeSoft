DWORD sub_6F8B36E0()
{
  DWORD result; // eax@1

  result = TlsAlloc();
  dwTlsIndex = result;
  if ( result == -1 )
    abort();
  return result;
}
