int *sub_6F75A9E0()
{
  int *result; // eax@1
  int *v1; // ebx@2

  result = (int *)dword_7025A32C;
  if ( (int *)dword_7025A32C != &dword_7025A32C )
  {
    do
    {
      v1 = (int *)*result;
      j_free_1(result);
      result = v1;
    }
    while ( v1 != &dword_7025A32C );
  }
  return result;
}
