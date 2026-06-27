signed int __usercall sub_6F8972F0@<eax>(int a1@<eax>)
{
  char v1; // dl@1
  signed int result; // eax@4

  v1 = *(_BYTE *)a1;
  if ( v1 == 86 || v1 == 114 || v1 == 75 )
  {
    result = 1;
  }
  else if ( v1 == 68 )
  {
    result = (*(_BYTE *)(a1 + 1) & 0xDF) == 79 || (unsigned __int8)(*(_BYTE *)(a1 + 1) - 119) <= 1u;
  }
  else
  {
    result = 0;
  }
  return result;
}
