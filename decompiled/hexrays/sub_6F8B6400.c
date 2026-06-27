signed int __usercall sub_6F8B6400@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  signed __int64 v2; // rdi@1
  int v3; // eax@1
  signed int result; // eax@1

  v2 = __PAIR__(sub_6F8B3270((volatile signed __int32 *)(a1 + 24)), a2);
  result = sub_6F8B3270((volatile signed __int32 *)(v3 + 20));
  if ( !result || !(v2 & 1) )
  {
    if ( v2 )
      result = HIDWORD(v2);
  }
  return result;
}
