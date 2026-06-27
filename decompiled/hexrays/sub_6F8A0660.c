void (*sub_6F8A0660())(void)
{
  void (*result)(void); // eax@1

  result = (void (*)(void))*off_6FB48A34;
  if ( *off_6FB48A34 )
  {
    do
    {
      result();
      result = (void (*)(void))off_6FB48A34[1];
      ++off_6FB48A34;
    }
    while ( result );
  }
  return result;
}
