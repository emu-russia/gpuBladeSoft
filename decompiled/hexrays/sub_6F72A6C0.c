void **sub_6F72A6C0()
{
  void **result; // eax@1
  void **v1; // ebx@2

  result = (void **)dword_6FBBFBE0;
  if ( dword_6FBBFBE0 != &dword_6FBBFBE0 )
  {
    do
    {
      v1 = (void **)*result;
      j_free_1(result);
      result = v1;
    }
    while ( v1 != &dword_6FBBFBE0 );
  }
  return result;
}
