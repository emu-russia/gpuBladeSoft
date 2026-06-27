int sub_6F762870()
{
  int *v0; // edx@1
  int result; // eax@1
  int *v2; // edi@2

  v0 = (int *)byte_7036E760;
  result = 0;
  do
  {
    v2 = v0;
    v0 += 50;
    memset(v2, 0, 0x60u);
  }
  while ( v0 != &dword_7036F3E0 );
  return result;
}
