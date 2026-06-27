int sub_6F762B10()
{
  int v0; // esi@1
  int *v1; // ebx@1
  unsigned int v2; // edx@2
  int v3; // ST00_4@4
  _BYTE *v4; // edi@4
  int v5; // ecx@4

  v0 = 0;
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
    v1[8] = 0;
    v1[23] = 0;
    memset(
      (void *)((unsigned int)(v1 + 9) & 0xFFFFFFFC),
      0,
      4 * (((unsigned int)v1 + -((unsigned int)(v1 + 9) & 0xFFFFFFFC) + 96) >> 2));
    v3 = v0++;
    v4 = (_BYTE *)((unsigned int)(v1 + 25) & 0xFFFFFFFC);
    sub_6F762A10(v3);
    v1[48] = 0;
    v5 = (char *)(v1 + 24) - v4;
    v1[24] = 0;
    v1 += 50;
    *(v1 - 3) = 0;
    memset(v4, 0, 4 * ((unsigned int)(v5 + 96) >> 2));
  }
  while ( v0 != 16 );
  return 0;
}
