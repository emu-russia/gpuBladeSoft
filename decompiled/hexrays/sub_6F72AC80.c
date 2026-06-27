int *sub_6F72AC80()
{
  int *result; // eax@1
  int *v1; // ebx@2

  result = (int *)dword_6FBBFDAC;
  if ( (int *)dword_6FBBFDAC != &dword_6FBBFDAC )
  {
    do
    {
      v1 = (int *)*result;
      j_free_1(result);
      result = v1;
    }
    while ( v1 != &dword_6FBBFDAC );
  }
  return result;
}
