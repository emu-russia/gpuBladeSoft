int __stdcall ZN_GPUshowScreenPic(int a1)
{
  int result; // eax@1

  result = dword_6FBBFD7C;
  if ( dword_6FBBFD7C )
  {
    result = glDeleteTextures(1, (int)&dword_6FBBFD78);
    dword_6FBBFD70 = 0;
    dword_6FBBFD74 = 0;
    dword_6FBBFD78 = 0;
    dword_6FBBFD7C = 0;
  }
  if ( a1 )
  {
    result = sub_6F72EED0(a1);
    if ( result )
      result = sub_6F72F180();
  }
  return result;
}
