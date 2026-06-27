int __usercall sub_6F71F0C0@<eax>(signed int a1@<eax>)
{
  signed int v1; // edx@1
  int result; // eax@2

  v1 = a1;
  if ( dword_6FBB5304 )
  {
    result = 1;
  }
  else
  {
    result = 1;
    if ( (*(_DWORD *)&word_6FBB979C & 0x80400) == 0x80000 )
      result = (((unsigned __int8)byte_6FBB979F >> 7) ^ (unsigned __int8)(v1 / dword_6FBB52F8)) & 1;
  }
  return result;
}
