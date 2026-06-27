int __cdecl sub_6F835CE4(int a1, int a2)
{
  int result; // eax@2
  char v3; // [sp+1Ch] [bp-2Ch]@3
  int v4; // [sp+3Ch] [bp-Ch]@1

  v4 = sub_6F835310(a1, a2);
  if ( v4 )
  {
    result = v4;
  }
  else
  {
    v4 = sub_6F8350DD((int)&v3, a1);
    if ( v4 )
      result = v4;
    else
      result = sub_6F835B73(a2, (int)&v3, 5) == 0;
  }
  return result;
}
