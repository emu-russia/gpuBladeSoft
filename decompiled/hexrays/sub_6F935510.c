int sub_6F935510()
{
  int result; // eax@1

  sub_6F8B4530((int *)&unk_6FB49F58, (void (*)(void))sub_6F935560);
  result = dword_6FB49F48;
  if ( !dword_6FB49F48 )
  {
    result = sub_6F936D10(&unk_6FB48D10, 2);
    dword_6FB49F48 = (int)&unk_6FB48D10;
    dword_6FB49F5C = (int)&unk_6FB48D10;
  }
  return result;
}
