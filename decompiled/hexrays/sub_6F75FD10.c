int sub_6F75FD10()
{
  char *v0; // edx@1
  int result; // eax@1
  char *v2; // edi@2

  v0 = byte_7035CC80;
  result = 0;
  do
  {
    v2 = v0;
    v0 += 136;
    memset(v2, 0, 0x40u);
  }
  while ( (_UNKNOWN *)v0 != &unk_7035D500 );
  return result;
}
