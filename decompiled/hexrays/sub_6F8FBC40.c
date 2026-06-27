int __stdcall sub_6F8FBC40(int a1, int a2, char a3, int a4, unsigned __int16 a5, int a6)
{
  int result; // eax@2

  if ( a3 )
    result = sub_6F8FC7E0(a1, a2, a4, a5, (int *)a6);
  else
    result = sub_6F8FBF60(a1, a2, a4, a5, (int *)a6);
  return result;
}
