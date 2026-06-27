int GPUshutdown()
{
  int result; // eax@3

  if ( dword_700584C0 && !dword_6FB489C8 )
  {
    sub_6F732400();
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
