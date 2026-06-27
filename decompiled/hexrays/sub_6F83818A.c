int __cdecl sub_6F83818A(int a1, signed int a2, signed int a3, signed int a4)
{
  int result; // eax@2
  int v5; // [sp+1Ch] [bp-Ch]@1

  if ( sub_6F8380D8(&v5, a2, a3, a4) )
  {
    result = v5;
  }
  else
  {
    sub_6F839262(a1, "fixed point overflow ignored");
    result = 0;
  }
  return result;
}
