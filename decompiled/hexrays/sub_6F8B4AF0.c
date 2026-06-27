int sub_6F8B4AF0()
{
  char *v0; // eax@1
  bool v1; // zf@1
  int v2; // edx@1
  int result; // eax@1

  v0 = (char *)sub_6F8B3D30();
  v1 = v0 == 0;
  v2 = (int)(v0 + 12);
  result = 0;
  if ( !v1 )
    result = v2;
  return result;
}
