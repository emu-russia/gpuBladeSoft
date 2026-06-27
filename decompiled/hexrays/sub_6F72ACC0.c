int *sub_6F72ACC0()
{
  int *result; // eax@1
  int *v1; // ebx@2

  result = (int *)dword_6FBBFDB8;
  if ( (int *)dword_6FBBFDB8 != &dword_6FBBFDB8 )
  {
    do
    {
      v1 = (int *)*result;
      j_free_1(result);
      result = v1;
    }
    while ( v1 != &dword_6FBBFDB8 );
  }
  return result;
}
