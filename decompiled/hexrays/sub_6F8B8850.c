int __usercall sub_6F8B8850@<eax>(char a1@<al>)
{
  unsigned __int8 v1; // al@2
  int result; // eax@7

  if ( a1 == -1 )
    return 0;
  v1 = a1 & 0x70;
  if ( v1 == 32 )
  {
    result = sub_6F8A1BF0();
  }
  else
  {
    if ( v1 <= 0x20u )
    {
      if ( v1 && v1 != 16 )
        goto LABEL_15;
      return 0;
    }
    if ( v1 != 64 )
    {
      if ( v1 != 80 )
      {
        if ( v1 == 48 )
          return sub_6F8A1BE0();
LABEL_15:
        abort();
      }
      return 0;
    }
    result = sub_6F8A1BC0();
  }
  return result;
}
