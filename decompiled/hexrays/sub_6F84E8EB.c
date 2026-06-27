int __cdecl sub_6F84E8EB(int a1, unsigned int a2)
{
  int result; // eax@2
  signed int i; // [sp+1Ch] [bp-Ch]@1

  for ( i = 1; i <= 4; ++i )
  {
    result = (unsigned __int8)a2;
    if ( (signed int)(unsigned __int8)a2 <= 64
      || (signed int)(unsigned __int8)a2 > 122
      || (signed int)(unsigned __int8)a2 > 90 && (signed int)(unsigned __int8)a2 <= 96 )
    {
      sub_6F83979A(a1, (int)"invalid chunk type");
    }
    a2 >>= 8;
  }
  return result;
}
