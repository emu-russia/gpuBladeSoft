int GPUclose()
{
  int result; // eax@3

  if ( dword_700584C0 && !dword_6FB489CC )
  {
    sub_6F733F20();
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
