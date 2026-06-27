int *sub_6F75AA20()
{
  int *result; // eax@1
  int *v1; // ebx@2

  result = (int *)dword_7025A338;
  if ( (int *)dword_7025A338 != &dword_7025A338 )
  {
    do
    {
      v1 = (int *)*result;
      j_free_1(result);
      result = v1;
    }
    while ( v1 != &dword_7025A338 );
  }
  return result;
}
