void *sub_6F75E7B0()
{
  char *v0; // ebx@1
  char *v1; // ST00_4@2
  void *result; // eax@2

  v0 = byte_7025A660;
  do
  {
    v1 = v0;
    v0 += 65868;
    result = memset(v1, 0, 0x10000u);
  }
  while ( (_UNKNOWN *)v0 != &unk_7035BB20 );
  return result;
}
