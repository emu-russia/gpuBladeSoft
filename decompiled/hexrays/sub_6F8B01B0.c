signed int sub_6F8B01B0()
{
  const char *v0; // edx@1
  signed int v1; // eax@1
  int v2; // ecx@2
  void *v3; // edx@3
  signed int v4; // eax@3
  int v5; // ecx@4
  char *v6; // edx@5
  signed int result; // eax@5
  int v8; // ecx@6

  v0 = "123456789";
  v1 = 48;
  do
  {
    v2 = (int)&(v0++)[16 - (_DWORD)"123456789"];
    byte_703735A0[v1] = v2;
    v1 = *(v0 - 1);
  }
  while ( (_BYTE)v1 );
  v3 = &unk_6FBA6CD4;
  v4 = 97;
  do
  {
    v5 = (int)v3 + 26 - (_DWORD)&unk_6FBA6CD4;
    v3 = (char *)v3 + 1;
    byte_703735A0[v4] = v5;
    v4 = *((char *)v3 - 1);
  }
  while ( (_BYTE)v4 );
  v6 = (char *)dbl_6FBA6CD8 + 3;
  result = 65;
  do
  {
    v8 = (int)&(v6++)[26 - ((_DWORD)dbl_6FBA6CD8 + 3)];
    byte_703735A0[result] = v8;
    result = (unsigned __int8)*(v6 - 1);
  }
  while ( (_BYTE)result );
  return result;
}
