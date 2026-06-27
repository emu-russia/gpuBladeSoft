int ZN_GPUshutdown()
{
  int result; // eax@3

  if ( dword_6FD412D0 && !dword_6F96D01C )
  {
    sub_6F6970F0();
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
