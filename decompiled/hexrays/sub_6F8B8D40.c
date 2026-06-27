int (*(**sub_6F8B8D40())[3])()
{
  int (*(**result)[3])(); // eax@2

  if ( byte_6FB48C30 )
  {
    result = &off_6FB4A50C;
  }
  else if ( sub_6F9624B0((int)&byte_6FB48C30) )
  {
    sub_6F962670((int)&byte_6FB48C30);
    sub_6F6813F0((int)sub_6F9631A0);
    result = &off_6FB4A50C;
  }
  else
  {
    result = &off_6FB4A50C;
  }
  return result;
}
