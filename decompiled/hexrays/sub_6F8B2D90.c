unsigned __int64 __usercall sub_6F8B2D90@<edx:eax>(int a1@<edi>)
{
  __int64 v1; // rax@1
  unsigned int v3; // [sp+18h] [bp-14h]@1
  unsigned int v4; // [sp+1Ch] [bp-10h]@1

  GetSystemTimeAsFileTime((LPFILETIME)&v3);
  LODWORD(v1) = 0;
  return __PAIR__(v4, sub_6F8A1530(a1, v3 - 116444736000000000i64 + v1, 0x2710u, 0));
}
