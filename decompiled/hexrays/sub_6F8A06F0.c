int sub_6F8A06F0()
{
  int i; // ebx@2
  int result; // eax@1

  result = dword_703727E0;
  if ( !dword_703727E0 )
  {
    dword_703727E0 = 1;
    for ( i = 0; dword_6F96A940[i + 1]; ++i )
      ;
    for ( ; i; --i )
      ((void (*)(void))dword_6F96A940[i])();
    result = sub_6F6813F0((int)sub_6F8A0660);
  }
  return result;
}
