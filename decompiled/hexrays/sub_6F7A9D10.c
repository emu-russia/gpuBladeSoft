int __usercall sub_6F7A9D10@<eax>(int a1@<eax>, int a2@<edx>)
{
  signed __int64 v2; // rax@1
  __int64 v3; // rcx@1

  v2 = a2 * (signed __int64)a1;
  HIDWORD(v3) = HIDWORD(v2);
  SHIDWORD(v2) >>= 31;
  LODWORD(v3) = v2;
  LODWORD(v2) = HIDWORD(v2);
  return (unsigned __int64)(v3 + v2 + 0x2000) >> 14;
}
