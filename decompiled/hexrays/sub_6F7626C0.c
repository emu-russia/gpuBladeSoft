int sub_6F7626C0()
{
  int result; // eax@1
  int *v1; // ebx@1
  unsigned int v2; // edx@2
  int v3; // edi@4
  int v4; // ecx@4

  result = 0;
  v1 = dword_7036E700;
  do
  {
    v2 = 0;
    do
    {
      v1[v2] = 0;
      ++v2;
    }
    while ( v2 < 8 );
    v3 = (int)(v1 + 9);
    v4 = (int)(v1 + 8);
    v1[8] = 0;
    v1 += 50;
    *(v1 - 27) = 0;
    memset((void *)(v3 & 0xFFFFFFFC), 0, 4 * ((v4 - (v3 & 0xFFFFFFFC) + 64) >> 2));
  }
  while ( v1 != &dword_7036F380 );
  return result;
}
