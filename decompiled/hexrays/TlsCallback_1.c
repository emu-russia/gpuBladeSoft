signed int __stdcall TlsCallback_1(int a1, int a2, int a3)
{
  signed int result; // eax@3

  if ( a2 != 3 && a2 )
  {
    result = 1;
  }
  else
  {
    sub_6F8A0F00(a1, a2);
    result = 1;
  }
  return result;
}
