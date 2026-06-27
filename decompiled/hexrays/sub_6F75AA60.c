void **sub_6F75AA60()
{
  void **result; // eax@1
  void **v1; // ebx@2

  result = (void **)dword_7025A344;
  if ( dword_7025A344 != &dword_7025A344 )
  {
    do
    {
      v1 = (void **)*result;
      j_free_1(result);
      result = v1;
    }
    while ( v1 != &dword_7025A344 );
  }
  return result;
}
