unsigned int __cdecl sub_6F7C9730(int a1, int a2)
{
  signed __int64 v2; // rax@1

  v2 = (unsigned int)(((signed int)((unsigned __int64)(a2 * (signed __int64)a1) >> 32) >> 31) + 0x8000)
     + a2 * (signed __int64)a1;
  return (HIDWORD(v2) << 16) + ((unsigned int)v2 >> 16);
}
