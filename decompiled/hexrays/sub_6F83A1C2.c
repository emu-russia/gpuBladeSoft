int __cdecl sub_6F83A1C2(signed int a1)
{
  int result; // eax@3
  int v2; // [sp+1Ch] [bp-Ch]@2

  if ( a1 >= 0 && sub_6F8380D8(&v2, a1, 127, 5000) )
    result = v2;
  else
    result = 0;
  return result;
}
