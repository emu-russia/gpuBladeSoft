int *sub_6F72AC40()
{
  int *result; // eax@1
  int *v1; // ebx@2

  result = (int *)dword_6FBBFDA0;
  if ( (int *)dword_6FBBFDA0 != &dword_6FBBFDA0 )
  {
    do
    {
      v1 = (int *)*result;
      j_free_1(result);
      result = v1;
    }
    while ( v1 != &dword_6FBBFDA0 );
  }
  return result;
}
