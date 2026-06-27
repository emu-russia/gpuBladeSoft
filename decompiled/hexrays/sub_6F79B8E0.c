int __cdecl sub_6F79B8E0(int *a1, int *a2)
{
  unsigned int v2; // ecx@1
  unsigned int v3; // edx@1
  unsigned int v4; // ebx@1
  unsigned int v5; // eax@1
  bool v6; // cf@1
  bool v7; // zf@1
  int result; // eax@2

  v2 = *a1;
  v3 = *a2;
  v4 = *a1 & 0x7FFFFFFF;
  v5 = *a2 & 0x7FFFFFFF;
  v6 = v4 < v5;
  v7 = v4 == v5;
  if ( v4 == v5 )
  {
    result = -(v2 < v3);
    if ( v2 > v3 )
      result = 1;
  }
  else
  {
    result = 1;
    if ( v6 || v7 )
      result = -v6;
  }
  return result;
}
