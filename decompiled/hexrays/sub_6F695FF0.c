signed int __usercall sub_6F695FF0@<eax>(int a1@<eax>)
{
  signed int result; // eax@3

  if ( byte_7036F3B7 )
  {
    if ( dword_7036F500(a1) )
    {
      result = 0;
    }
    else
    {
      nullsub_10();
      result = -1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
