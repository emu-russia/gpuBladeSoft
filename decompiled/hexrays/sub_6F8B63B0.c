signed int __usercall sub_6F8B63B0@<eax>(int a1@<eax>)
{
  volatile signed __int32 *v1; // edi@1
  int v2; // esi@1
  signed int v3; // ebx@1
  signed int result; // eax@2

  v1 = (volatile signed __int32 *)(a1 + 20);
  v2 = a1;
  v3 = sub_6F8B2F50((volatile signed __int32 *)(a1 + 20));
  if ( v3 || (v3 = sub_6F8B2F50((volatile signed __int32 *)(v2 + 24))) == 0 )
  {
    result = v3;
  }
  else
  {
    sub_6F8B3270(v1);
    result = v3;
  }
  return result;
}
